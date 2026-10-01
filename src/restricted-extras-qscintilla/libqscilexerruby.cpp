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
#include <qscilexerruby.h>
#include "libqscilexerruby.h"
#include "libqscilexerruby.hxx"

QsciLexerRuby* QsciLexerRuby_new() {
    return new VirtualQsciLexerRuby();
}

QsciLexerRuby* QsciLexerRuby_new2(QObject* parent) {
    return new VirtualQsciLexerRuby(parent);
}

QMetaObject* QsciLexerRuby_MetaObject(const QsciLexerRuby* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerRuby_Metacast(QsciLexerRuby* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerRuby_Metacall(QsciLexerRuby* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerRuby_Tr(const char* s) {
    auto _ret = QsciLexerRuby::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerRuby_Language(const QsciLexerRuby* self) {
    return (const char*)self->language();
}

const char* QsciLexerRuby_Lexer(const QsciLexerRuby* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerRuby_BlockEnd(const QsciLexerRuby* self) {
    return (const char*)self->blockEnd();
}

const char* QsciLexerRuby_BlockStart(const QsciLexerRuby* self) {
    return (const char*)self->blockStart();
}

const char* QsciLexerRuby_BlockStartKeyword(const QsciLexerRuby* self) {
    return (const char*)self->blockStartKeyword();
}

int QsciLexerRuby_BraceStyle(const QsciLexerRuby* self) {
    return self->braceStyle();
}

QColor* QsciLexerRuby_DefaultColor(const QsciLexerRuby* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerRuby_DefaultEolFill(const QsciLexerRuby* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerRuby_DefaultFont(const QsciLexerRuby* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerRuby_DefaultPaper(const QsciLexerRuby* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerRuby_Keywords(const QsciLexerRuby* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerRuby_Description(const QsciLexerRuby* self, int style) {
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

void QsciLexerRuby_RefreshProperties(QsciLexerRuby* self) {
    self->refreshProperties();
}

void QsciLexerRuby_SetFoldComments(QsciLexerRuby* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerRuby_FoldComments(const QsciLexerRuby* self) {
    return self->foldComments();
}

void QsciLexerRuby_SetFoldCompact(QsciLexerRuby* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerRuby_FoldCompact(const QsciLexerRuby* self) {
    return self->foldCompact();
}

libqt_string QsciLexerRuby_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerRuby::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerRuby_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerRuby::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerRuby_BlockEnd1(const QsciLexerRuby* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerRuby_BlockStart1(const QsciLexerRuby* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerRuby_BlockStartKeyword1(const QsciLexerRuby* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerRuby_SuperMetaObject(const QsciLexerRuby* self) {
    return (QMetaObject*)self->QsciLexerRuby::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnMetaObject(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_metaobject_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerRuby_SuperMetacast(QsciLexerRuby* self, const char* param1) {
    return self->QsciLexerRuby::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnMetacast(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_metacast_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerRuby_SuperMetacall(QsciLexerRuby* self, int param1, int param2, void** param3) {
    return self->QsciLexerRuby::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnMetacall(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_metacall_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerRuby_LexerId(const QsciLexerRuby* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerRuby_SuperLexerId(const QsciLexerRuby* self) {
    return self->QsciLexerRuby::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnLexerId(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_lexerid_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerRuby_AutoCompletionFillups(const QsciLexerRuby* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerRuby_SuperAutoCompletionFillups(const QsciLexerRuby* self) {
    return (const char*)self->QsciLexerRuby::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnAutoCompletionFillups(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerRuby_AutoCompletionWordSeparators(const QsciLexerRuby* self) {
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
libqt_list /* of libqt_string */ QsciLexerRuby_SuperAutoCompletionWordSeparators(const QsciLexerRuby* self) {
    QList<QString> _ret = self->QsciLexerRuby::autoCompletionWordSeparators();
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
void QsciLexerRuby_OnAutoCompletionWordSeparators(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerRuby_BlockLookback(const QsciLexerRuby* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerRuby_SuperBlockLookback(const QsciLexerRuby* self) {
    return self->QsciLexerRuby::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnBlockLookback(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_blocklookback_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerRuby_CaseSensitive(const QsciLexerRuby* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerRuby_SuperCaseSensitive(const QsciLexerRuby* self) {
    return self->QsciLexerRuby::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnCaseSensitive(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_casesensitive_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerRuby_Color(const QsciLexerRuby* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerRuby_SuperColor(const QsciLexerRuby* self, int style) {
    return new QColor(self->QsciLexerRuby::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnColor(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_color_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerRuby_EolFill(const QsciLexerRuby* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerRuby_SuperEolFill(const QsciLexerRuby* self, int style) {
    return self->QsciLexerRuby::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnEolFill(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_eolfill_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerRuby_Font(const QsciLexerRuby* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerRuby_SuperFont(const QsciLexerRuby* self, int style) {
    return new QFont(self->QsciLexerRuby::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnFont(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_font_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerRuby_IndentationGuideView(const QsciLexerRuby* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerRuby_SuperIndentationGuideView(const QsciLexerRuby* self) {
    return self->QsciLexerRuby::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnIndentationGuideView(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerRuby_DefaultStyle(const QsciLexerRuby* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerRuby_SuperDefaultStyle(const QsciLexerRuby* self) {
    return self->QsciLexerRuby::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultStyle(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerRuby_Paper(const QsciLexerRuby* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerRuby_SuperPaper(const QsciLexerRuby* self, int style) {
    return new QColor(self->QsciLexerRuby::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnPaper(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_paper_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerRuby_DefaultColor2(const QsciLexerRuby* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerRuby_SuperDefaultColor2(const QsciLexerRuby* self, int style) {
    return new QColor(self->QsciLexerRuby::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultColor2(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerRuby_DefaultFont2(const QsciLexerRuby* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerRuby_SuperDefaultFont2(const QsciLexerRuby* self, int style) {
    return new QFont(self->QsciLexerRuby::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultFont2(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerRuby_DefaultPaper2(const QsciLexerRuby* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerRuby_SuperDefaultPaper2(const QsciLexerRuby* self, int style) {
    return new QColor(self->QsciLexerRuby::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultPaper2(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_SetEditor(QsciLexerRuby* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerRuby_SuperSetEditor(QsciLexerRuby* self, QsciScintilla* editor) {
    self->QsciLexerRuby::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetEditor(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_seteditor_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerRuby_StyleBitsNeeded(const QsciLexerRuby* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerRuby_SuperStyleBitsNeeded(const QsciLexerRuby* self) {
    return self->QsciLexerRuby::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnStyleBitsNeeded(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerRuby_WordCharacters(const QsciLexerRuby* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerRuby_SuperWordCharacters(const QsciLexerRuby* self) {
    return (const char*)self->QsciLexerRuby::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnWordCharacters(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_SetAutoIndentStyle(QsciLexerRuby* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerRuby_SuperSetAutoIndentStyle(QsciLexerRuby* self, int autoindentstyle) {
    self->QsciLexerRuby::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetAutoIndentStyle(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_SetColor(QsciLexerRuby* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerRuby_SuperSetColor(QsciLexerRuby* self, const QColor* c, int style) {
    self->QsciLexerRuby::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetColor(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_setcolor_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_SetEolFill(QsciLexerRuby* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerRuby_SuperSetEolFill(QsciLexerRuby* self, bool eoffill, int style) {
    self->QsciLexerRuby::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetEolFill(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_seteolfill_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_SetFont(QsciLexerRuby* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerRuby_SuperSetFont(QsciLexerRuby* self, const QFont* f, int style) {
    self->QsciLexerRuby::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetFont(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_setfont_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_SetPaper(QsciLexerRuby* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerRuby_SuperSetPaper(QsciLexerRuby* self, const QColor* c, int style) {
    self->QsciLexerRuby::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetPaper(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_setpaper_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerRuby_ReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby) {
        return vqscilexerruby->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerRuby::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerRuby_SuperReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self)) {
        return vqscilexerruby->QsciLexerRuby::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerRuby::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnReadProperties(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_readproperties_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerRuby_WriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby) {
        return vqscilexerruby->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerRuby::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerRuby_SuperWriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self))) {
        return vqscilexerruby->QsciLexerRuby::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerRuby::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnWriteProperties(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self)))
        vqscilexerruby->qscilexerruby_writeproperties_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerRuby_Event(QsciLexerRuby* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerRuby_SuperEvent(QsciLexerRuby* self, QEvent* event) {
    return self->QsciLexerRuby::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnEvent(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_event_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerRuby_EventFilter(QsciLexerRuby* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerRuby_SuperEventFilter(QsciLexerRuby* self, QObject* watched, QEvent* event) {
    return self->QsciLexerRuby::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnEventFilter(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_eventfilter_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_TimerEvent(QsciLexerRuby* self, QTimerEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby) {
        vqscilexerruby->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerRuby::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerRuby_SuperTimerEvent(QsciLexerRuby* self, QTimerEvent* event) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self)) {
        vqscilexerruby->QsciLexerRuby::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerRuby::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnTimerEvent(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_timerevent_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_ChildEvent(QsciLexerRuby* self, QChildEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby) {
        vqscilexerruby->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerRuby::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerRuby_SuperChildEvent(QsciLexerRuby* self, QChildEvent* event) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self)) {
        vqscilexerruby->QsciLexerRuby::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerRuby::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnChildEvent(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_childevent_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_CustomEvent(QsciLexerRuby* self, QEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby) {
        vqscilexerruby->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerRuby::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerRuby_SuperCustomEvent(QsciLexerRuby* self, QEvent* event) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self)) {
        vqscilexerruby->QsciLexerRuby::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerRuby::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnCustomEvent(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_customevent_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_ConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby) {
        vqscilexerruby->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerRuby::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerRuby_SuperConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self)) {
        vqscilexerruby->QsciLexerRuby::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerRuby::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnConnectNotify(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_connectnotify_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerRuby_DisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby) {
        vqscilexerruby->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerRuby::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerRuby_SuperDisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self)) {
        vqscilexerruby->QsciLexerRuby::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerRuby::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDisconnectNotify(QsciLexerRuby* self, intptr_t slot) {
    if (auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self))
        vqscilexerruby->qscilexerruby_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerRuby_TextAsBytes(const QsciLexerRuby* self, const libqt_string text) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerruby->VirtualQsciLexerRuby::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerRuby::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerRuby_BytesAsText(const QsciLexerRuby* self, const char* bytes, int size) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self))) {
        auto _ret = vqscilexerruby->VirtualQsciLexerRuby::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerRuby::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerRuby_Sender(const QsciLexerRuby* self) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self))) {
        return vqscilexerruby->VirtualQsciLexerRuby::sender();
    } else
        qFatal("Error: Protected method QsciLexerRuby::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerRuby_SenderSignalIndex(const QsciLexerRuby* self) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self))) {
        return vqscilexerruby->VirtualQsciLexerRuby::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerRuby::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerRuby_Receivers(const QsciLexerRuby* self, const char* signal) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self))) {
        return vqscilexerruby->VirtualQsciLexerRuby::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerRuby::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerRuby_IsSignalConnected(const QsciLexerRuby* self, const QMetaMethod* signal) {
    if (auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self))) {
        return vqscilexerruby->VirtualQsciLexerRuby::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerRuby::isSignalConnected called without a directly constructed type");
}

void QsciLexerRuby_Delete(QsciLexerRuby* self) {
    delete self;
}
