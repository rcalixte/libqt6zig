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
#include <qscilexerpython.h>
#include "libqscilexerpython.h"
#include "libqscilexerpython.hxx"

QsciLexerPython* QsciLexerPython_new() {
    return new VirtualQsciLexerPython();
}

QsciLexerPython* QsciLexerPython_new2(QObject* parent) {
    return new VirtualQsciLexerPython(parent);
}

QMetaObject* QsciLexerPython_MetaObject(const QsciLexerPython* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPython_Metacast(QsciLexerPython* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPython_Metacall(QsciLexerPython* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerPython_Tr(const char* s) {
    auto _ret = QsciLexerPython::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPython_Language(const QsciLexerPython* self) {
    return (const char*)self->language();
}

const char* QsciLexerPython_Lexer(const QsciLexerPython* self) {
    return (const char*)self->lexer();
}

libqt_list /* of libqt_string */ QsciLexerPython_AutoCompletionWordSeparators(const QsciLexerPython* self) {
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

int QsciLexerPython_BlockLookback(const QsciLexerPython* self) {
    return self->blockLookback();
}

const char* QsciLexerPython_BlockStart(const QsciLexerPython* self) {
    return (const char*)self->blockStart();
}

int QsciLexerPython_BraceStyle(const QsciLexerPython* self) {
    return self->braceStyle();
}

QColor* QsciLexerPython_DefaultColor(const QsciLexerPython* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPython_DefaultEolFill(const QsciLexerPython* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPython_DefaultFont(const QsciLexerPython* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPython_DefaultPaper(const QsciLexerPython* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

int QsciLexerPython_IndentationGuideView(const QsciLexerPython* self) {
    return self->indentationGuideView();
}

const char* QsciLexerPython_Keywords(const QsciLexerPython* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerPython_Description(const QsciLexerPython* self, int style) {
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

void QsciLexerPython_RefreshProperties(QsciLexerPython* self) {
    self->refreshProperties();
}

bool QsciLexerPython_FoldComments(const QsciLexerPython* self) {
    return self->foldComments();
}

void QsciLexerPython_SetFoldCompact(QsciLexerPython* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerPython_FoldCompact(const QsciLexerPython* self) {
    return self->foldCompact();
}

bool QsciLexerPython_FoldQuotes(const QsciLexerPython* self) {
    return self->foldQuotes();
}

int QsciLexerPython_IndentationWarning(const QsciLexerPython* self) {
    return static_cast<int>(self->indentationWarning());
}

void QsciLexerPython_SetHighlightSubidentifiers(QsciLexerPython* self, bool enabled) {
    self->setHighlightSubidentifiers(enabled);
}

bool QsciLexerPython_HighlightSubidentifiers(const QsciLexerPython* self) {
    return self->highlightSubidentifiers();
}

void QsciLexerPython_SetStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed) {
    self->setStringsOverNewlineAllowed(allowed);
}

bool QsciLexerPython_StringsOverNewlineAllowed(const QsciLexerPython* self) {
    return self->stringsOverNewlineAllowed();
}

void QsciLexerPython_SetV2UnicodeAllowed(QsciLexerPython* self, bool allowed) {
    self->setV2UnicodeAllowed(allowed);
}

bool QsciLexerPython_V2UnicodeAllowed(const QsciLexerPython* self) {
    return self->v2UnicodeAllowed();
}

void QsciLexerPython_SetV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed) {
    self->setV3BinaryOctalAllowed(allowed);
}

bool QsciLexerPython_V3BinaryOctalAllowed(const QsciLexerPython* self) {
    return self->v3BinaryOctalAllowed();
}

void QsciLexerPython_SetV3BytesAllowed(QsciLexerPython* self, bool allowed) {
    self->setV3BytesAllowed(allowed);
}

bool QsciLexerPython_V3BytesAllowed(const QsciLexerPython* self) {
    return self->v3BytesAllowed();
}

void QsciLexerPython_SetFoldComments(QsciLexerPython* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerPython_SetFoldQuotes(QsciLexerPython* self, bool fold) {
    self->setFoldQuotes(fold);
}

void QsciLexerPython_SetIndentationWarning(QsciLexerPython* self, int warn) {
    self->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
}

libqt_string QsciLexerPython_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerPython::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPython_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerPython::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPython_BlockStart1(const QsciLexerPython* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerPython_SuperMetaObject(const QsciLexerPython* self) {
    return (QMetaObject*)self->QsciLexerPython::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnMetaObject(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_metaobject_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerPython_SuperMetacast(QsciLexerPython* self, const char* param1) {
    return self->QsciLexerPython::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnMetacast(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_metacast_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerPython_SuperMetacall(QsciLexerPython* self, int param1, int param2, void** param3) {
    return self->QsciLexerPython::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnMetacall(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_metacall_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Metacall_Callback>(slot);
}

// Base class handler implementation
int QsciLexerPython_SuperIndentationGuideView(const QsciLexerPython* self) {
    return self->QsciLexerPython::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnIndentationGuideView(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_IndentationGuideView_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPython_SuperSetFoldComments(QsciLexerPython* self, bool fold) {
    self->QsciLexerPython::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetFoldComments(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPython_SuperSetFoldQuotes(QsciLexerPython* self, bool fold) {
    self->QsciLexerPython::setFoldQuotes(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetFoldQuotes(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_setfoldquotes_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFoldQuotes_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPython_SuperSetIndentationWarning(QsciLexerPython* self, int warn) {
    self->QsciLexerPython::setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetIndentationWarning(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_setindentationwarning_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetIndentationWarning_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPython_LexerId(const QsciLexerPython* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerPython_SuperLexerId(const QsciLexerPython* self) {
    return self->QsciLexerPython::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnLexerId(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_lexerid_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPython_AutoCompletionFillups(const QsciLexerPython* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerPython_SuperAutoCompletionFillups(const QsciLexerPython* self) {
    return (const char*)self->QsciLexerPython::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnAutoCompletionFillups(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPython_BlockEnd(const QsciLexerPython* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPython_SuperBlockEnd(const QsciLexerPython* self, int* style) {
    return (const char*)self->QsciLexerPython::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBlockEnd(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_blockend_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPython_BlockStartKeyword(const QsciLexerPython* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPython_SuperBlockStartKeyword(const QsciLexerPython* self, int* style) {
    return (const char*)self->QsciLexerPython::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBlockStartKeyword(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPython_CaseSensitive(const QsciLexerPython* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerPython_SuperCaseSensitive(const QsciLexerPython* self) {
    return self->QsciLexerPython::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnCaseSensitive(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_casesensitive_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPython_Color(const QsciLexerPython* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPython_SuperColor(const QsciLexerPython* self, int style) {
    return new QColor(self->QsciLexerPython::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnColor(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_color_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPython_EolFill(const QsciLexerPython* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerPython_SuperEolFill(const QsciLexerPython* self, int style) {
    return self->QsciLexerPython::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEolFill(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_eolfill_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPython_Font(const QsciLexerPython* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPython_SuperFont(const QsciLexerPython* self, int style) {
    return new QFont(self->QsciLexerPython::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnFont(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_font_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPython_DefaultStyle(const QsciLexerPython* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerPython_SuperDefaultStyle(const QsciLexerPython* self) {
    return self->QsciLexerPython::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultStyle(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPython_Paper(const QsciLexerPython* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPython_SuperPaper(const QsciLexerPython* self, int style) {
    return new QColor(self->QsciLexerPython::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnPaper(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_paper_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPython_DefaultColor2(const QsciLexerPython* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPython_SuperDefaultColor2(const QsciLexerPython* self, int style) {
    return new QColor(self->QsciLexerPython::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultColor2(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPython_DefaultFont2(const QsciLexerPython* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPython_SuperDefaultFont2(const QsciLexerPython* self, int style) {
    return new QFont(self->QsciLexerPython::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultFont2(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPython_DefaultPaper2(const QsciLexerPython* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPython_SuperDefaultPaper2(const QsciLexerPython* self, int style) {
    return new QColor(self->QsciLexerPython::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultPaper2(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_SetEditor(QsciLexerPython* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerPython_SuperSetEditor(QsciLexerPython* self, QsciScintilla* editor) {
    self->QsciLexerPython::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetEditor(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_seteditor_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPython_StyleBitsNeeded(const QsciLexerPython* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerPython_SuperStyleBitsNeeded(const QsciLexerPython* self) {
    return self->QsciLexerPython::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnStyleBitsNeeded(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPython_WordCharacters(const QsciLexerPython* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerPython_SuperWordCharacters(const QsciLexerPython* self) {
    return (const char*)self->QsciLexerPython::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnWordCharacters(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_SetAutoIndentStyle(QsciLexerPython* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerPython_SuperSetAutoIndentStyle(QsciLexerPython* self, int autoindentstyle) {
    self->QsciLexerPython::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetAutoIndentStyle(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_SetColor(QsciLexerPython* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPython_SuperSetColor(QsciLexerPython* self, const QColor* c, int style) {
    self->QsciLexerPython::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetColor(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_setcolor_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_SetEolFill(QsciLexerPython* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPython_SuperSetEolFill(QsciLexerPython* self, bool eoffill, int style) {
    self->QsciLexerPython::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetEolFill(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_seteolfill_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_SetFont(QsciLexerPython* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPython_SuperSetFont(QsciLexerPython* self, const QFont* f, int style) {
    self->QsciLexerPython::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetFont(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_setfont_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_SetPaper(QsciLexerPython* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPython_SuperSetPaper(QsciLexerPython* self, const QColor* c, int style) {
    self->QsciLexerPython::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetPaper(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_setpaper_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPython_ReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython) {
        return vqscilexerpython->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPython::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPython_SuperReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        return vqscilexerpython->QsciLexerPython::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPython::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnReadProperties(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_readproperties_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPython_WriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython) {
        return vqscilexerpython->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPython::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPython_SuperWriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->QsciLexerPython::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPython::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnWriteProperties(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self)))
        vqscilexerpython->qscilexerpython_writeproperties_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPython_Event(QsciLexerPython* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerPython_SuperEvent(QsciLexerPython* self, QEvent* event) {
    return self->QsciLexerPython::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEvent(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_event_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPython_EventFilter(QsciLexerPython* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerPython_SuperEventFilter(QsciLexerPython* self, QObject* watched, QEvent* event) {
    return self->QsciLexerPython::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEventFilter(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_eventfilter_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_TimerEvent(QsciLexerPython* self, QTimerEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython) {
        vqscilexerpython->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPython::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPython_SuperTimerEvent(QsciLexerPython* self, QTimerEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->QsciLexerPython::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPython::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnTimerEvent(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_timerevent_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_ChildEvent(QsciLexerPython* self, QChildEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython) {
        vqscilexerpython->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPython::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPython_SuperChildEvent(QsciLexerPython* self, QChildEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->QsciLexerPython::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPython::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnChildEvent(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_childevent_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_CustomEvent(QsciLexerPython* self, QEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython) {
        vqscilexerpython->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPython::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPython_SuperCustomEvent(QsciLexerPython* self, QEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->QsciLexerPython::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPython::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnCustomEvent(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_customevent_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_ConnectNotify(QsciLexerPython* self, const QMetaMethod* signal) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython) {
        vqscilexerpython->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPython::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPython_SuperConnectNotify(QsciLexerPython* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->QsciLexerPython::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPython::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnConnectNotify(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_connectnotify_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPython_DisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython) {
        vqscilexerpython->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPython::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPython_SuperDisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->QsciLexerPython::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPython::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDisconnectNotify(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self))
        vqscilexerpython->qscilexerpython_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerPython_TextAsBytes(const QsciLexerPython* self, const libqt_string text) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerpython->VirtualQsciLexerPython::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPython::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerPython_BytesAsText(const QsciLexerPython* self, const char* bytes, int size) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        auto _ret = vqscilexerpython->VirtualQsciLexerPython::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPython::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerPython_Sender(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->VirtualQsciLexerPython::sender();
    } else
        qFatal("Error: Protected method QsciLexerPython::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPython_SenderSignalIndex(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->VirtualQsciLexerPython::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerPython::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPython_Receivers(const QsciLexerPython* self, const char* signal) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->VirtualQsciLexerPython::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerPython::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerPython_IsSignalConnected(const QsciLexerPython* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->VirtualQsciLexerPython::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerPython::isSignalConnected called without a directly constructed type");
}

void QsciLexerPython_Delete(QsciLexerPython* self) {
    delete self;
}
