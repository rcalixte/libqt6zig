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
#include <qscilexerpo.h>
#include "libqscilexerpo.h"
#include "libqscilexerpo.hxx"

QsciLexerPO* QsciLexerPO_new() {
    return new VirtualQsciLexerPO();
}

QsciLexerPO* QsciLexerPO_new2(QObject* parent) {
    return new VirtualQsciLexerPO(parent);
}

QMetaObject* QsciLexerPO_MetaObject(const QsciLexerPO* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPO_Metacast(QsciLexerPO* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPO_Metacall(QsciLexerPO* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerPO_Tr(const char* s) {
    auto _ret = QsciLexerPO::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPO_Language(const QsciLexerPO* self) {
    return (const char*)self->language();
}

const char* QsciLexerPO_Lexer(const QsciLexerPO* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerPO_DefaultColor(const QsciLexerPO* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPO_DefaultFont(const QsciLexerPO* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

libqt_string QsciLexerPO_Description(const QsciLexerPO* self, int style) {
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

void QsciLexerPO_RefreshProperties(QsciLexerPO* self) {
    self->refreshProperties();
}

bool QsciLexerPO_FoldComments(const QsciLexerPO* self) {
    return self->foldComments();
}

bool QsciLexerPO_FoldCompact(const QsciLexerPO* self) {
    return self->foldCompact();
}

void QsciLexerPO_SetFoldComments(QsciLexerPO* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerPO_SetFoldCompact(QsciLexerPO* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerPO_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerPO::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPO_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerPO::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerPO_SuperMetaObject(const QsciLexerPO* self) {
    return (QMetaObject*)self->QsciLexerPO::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnMetaObject(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_metaobject_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerPO_SuperMetacast(QsciLexerPO* self, const char* param1) {
    return self->QsciLexerPO::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnMetacast(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_metacast_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerPO_SuperMetacall(QsciLexerPO* self, int param1, int param2, void** param3) {
    return self->QsciLexerPO::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnMetacall(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_metacall_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPO_SuperSetFoldComments(QsciLexerPO* self, bool fold) {
    self->QsciLexerPO::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetFoldComments(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPO_SuperSetFoldCompact(QsciLexerPO* self, bool fold) {
    self->QsciLexerPO::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetFoldCompact(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPO_LexerId(const QsciLexerPO* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerPO_SuperLexerId(const QsciLexerPO* self) {
    return self->QsciLexerPO::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnLexerId(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_lexerid_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPO_AutoCompletionFillups(const QsciLexerPO* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerPO_SuperAutoCompletionFillups(const QsciLexerPO* self) {
    return (const char*)self->QsciLexerPO::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnAutoCompletionFillups(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPO_AutoCompletionWordSeparators(const QsciLexerPO* self) {
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
libqt_list /* of libqt_string */ QsciLexerPO_SuperAutoCompletionWordSeparators(const QsciLexerPO* self) {
    QList<QString> _ret = self->QsciLexerPO::autoCompletionWordSeparators();
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
void QsciLexerPO_OnAutoCompletionWordSeparators(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPO_BlockEnd(const QsciLexerPO* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPO_SuperBlockEnd(const QsciLexerPO* self, int* style) {
    return (const char*)self->QsciLexerPO::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBlockEnd(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_blockend_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPO_BlockLookback(const QsciLexerPO* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerPO_SuperBlockLookback(const QsciLexerPO* self) {
    return self->QsciLexerPO::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBlockLookback(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_blocklookback_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPO_BlockStart(const QsciLexerPO* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPO_SuperBlockStart(const QsciLexerPO* self, int* style) {
    return (const char*)self->QsciLexerPO::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBlockStart(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_blockstart_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPO_BlockStartKeyword(const QsciLexerPO* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPO_SuperBlockStartKeyword(const QsciLexerPO* self, int* style) {
    return (const char*)self->QsciLexerPO::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBlockStartKeyword(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPO_BraceStyle(const QsciLexerPO* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerPO_SuperBraceStyle(const QsciLexerPO* self) {
    return self->QsciLexerPO::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBraceStyle(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_bracestyle_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPO_CaseSensitive(const QsciLexerPO* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerPO_SuperCaseSensitive(const QsciLexerPO* self) {
    return self->QsciLexerPO::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnCaseSensitive(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_casesensitive_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPO_Color(const QsciLexerPO* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPO_SuperColor(const QsciLexerPO* self, int style) {
    return new QColor(self->QsciLexerPO::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnColor(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_color_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPO_EolFill(const QsciLexerPO* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerPO_SuperEolFill(const QsciLexerPO* self, int style) {
    return self->QsciLexerPO::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnEolFill(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_eolfill_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPO_Font(const QsciLexerPO* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPO_SuperFont(const QsciLexerPO* self, int style) {
    return new QFont(self->QsciLexerPO::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnFont(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_font_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPO_IndentationGuideView(const QsciLexerPO* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerPO_SuperIndentationGuideView(const QsciLexerPO* self) {
    return self->QsciLexerPO::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnIndentationGuideView(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPO_Keywords(const QsciLexerPO* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerPO_SuperKeywords(const QsciLexerPO* self, int set) {
    return (const char*)self->QsciLexerPO::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnKeywords(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_keywords_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPO_DefaultStyle(const QsciLexerPO* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerPO_SuperDefaultStyle(const QsciLexerPO* self) {
    return self->QsciLexerPO::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultStyle(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPO_Paper(const QsciLexerPO* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPO_SuperPaper(const QsciLexerPO* self, int style) {
    return new QColor(self->QsciLexerPO::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnPaper(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_paper_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPO_DefaultColor2(const QsciLexerPO* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPO_SuperDefaultColor2(const QsciLexerPO* self, int style) {
    return new QColor(self->QsciLexerPO::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultColor2(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPO_DefaultEolFill(const QsciLexerPO* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerPO_SuperDefaultEolFill(const QsciLexerPO* self, int style) {
    return self->QsciLexerPO::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultEolFill(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPO_DefaultFont2(const QsciLexerPO* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPO_SuperDefaultFont2(const QsciLexerPO* self, int style) {
    return new QFont(self->QsciLexerPO::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultFont2(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPO_DefaultPaper2(const QsciLexerPO* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPO_SuperDefaultPaper2(const QsciLexerPO* self, int style) {
    return new QColor(self->QsciLexerPO::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultPaper2(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_SetEditor(QsciLexerPO* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerPO_SuperSetEditor(QsciLexerPO* self, QsciScintilla* editor) {
    self->QsciLexerPO::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetEditor(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_seteditor_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPO_StyleBitsNeeded(const QsciLexerPO* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerPO_SuperStyleBitsNeeded(const QsciLexerPO* self) {
    return self->QsciLexerPO::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnStyleBitsNeeded(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPO_WordCharacters(const QsciLexerPO* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerPO_SuperWordCharacters(const QsciLexerPO* self) {
    return (const char*)self->QsciLexerPO::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnWordCharacters(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_SetAutoIndentStyle(QsciLexerPO* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerPO_SuperSetAutoIndentStyle(QsciLexerPO* self, int autoindentstyle) {
    self->QsciLexerPO::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetAutoIndentStyle(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_SetColor(QsciLexerPO* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPO_SuperSetColor(QsciLexerPO* self, const QColor* c, int style) {
    self->QsciLexerPO::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetColor(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_setcolor_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_SetEolFill(QsciLexerPO* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPO_SuperSetEolFill(QsciLexerPO* self, bool eoffill, int style) {
    self->QsciLexerPO::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetEolFill(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_seteolfill_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_SetFont(QsciLexerPO* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPO_SuperSetFont(QsciLexerPO* self, const QFont* f, int style) {
    self->QsciLexerPO::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetFont(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_setfont_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_SetPaper(QsciLexerPO* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPO_SuperSetPaper(QsciLexerPO* self, const QColor* c, int style) {
    self->QsciLexerPO::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetPaper(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_setpaper_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPO_ReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo) {
        return vqscilexerpo->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPO::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPO_SuperReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self)) {
        return vqscilexerpo->QsciLexerPO::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPO::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnReadProperties(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_readproperties_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPO_WriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo) {
        return vqscilexerpo->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPO::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPO_SuperWriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self))) {
        return vqscilexerpo->QsciLexerPO::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPO::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnWriteProperties(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self)))
        vqscilexerpo->qscilexerpo_writeproperties_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPO_Event(QsciLexerPO* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerPO_SuperEvent(QsciLexerPO* self, QEvent* event) {
    return self->QsciLexerPO::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnEvent(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_event_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPO_EventFilter(QsciLexerPO* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerPO_SuperEventFilter(QsciLexerPO* self, QObject* watched, QEvent* event) {
    return self->QsciLexerPO::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnEventFilter(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_eventfilter_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_TimerEvent(QsciLexerPO* self, QTimerEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo) {
        vqscilexerpo->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPO::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPO_SuperTimerEvent(QsciLexerPO* self, QTimerEvent* event) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self)) {
        vqscilexerpo->QsciLexerPO::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPO::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnTimerEvent(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_timerevent_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_ChildEvent(QsciLexerPO* self, QChildEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo) {
        vqscilexerpo->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPO::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPO_SuperChildEvent(QsciLexerPO* self, QChildEvent* event) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self)) {
        vqscilexerpo->QsciLexerPO::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPO::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnChildEvent(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_childevent_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_CustomEvent(QsciLexerPO* self, QEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo) {
        vqscilexerpo->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPO::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPO_SuperCustomEvent(QsciLexerPO* self, QEvent* event) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self)) {
        vqscilexerpo->QsciLexerPO::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPO::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnCustomEvent(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_customevent_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_ConnectNotify(QsciLexerPO* self, const QMetaMethod* signal) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo) {
        vqscilexerpo->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPO::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPO_SuperConnectNotify(QsciLexerPO* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self)) {
        vqscilexerpo->QsciLexerPO::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPO::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnConnectNotify(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_connectnotify_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPO_DisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo) {
        vqscilexerpo->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPO::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPO_SuperDisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self)) {
        vqscilexerpo->QsciLexerPO::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPO::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDisconnectNotify(QsciLexerPO* self, intptr_t slot) {
    if (auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self))
        vqscilexerpo->qscilexerpo_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerPO_TextAsBytes(const QsciLexerPO* self, const libqt_string text) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerpo->VirtualQsciLexerPO::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPO::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerPO_BytesAsText(const QsciLexerPO* self, const char* bytes, int size) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self))) {
        auto _ret = vqscilexerpo->VirtualQsciLexerPO::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPO::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerPO_Sender(const QsciLexerPO* self) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self))) {
        return vqscilexerpo->VirtualQsciLexerPO::sender();
    } else
        qFatal("Error: Protected method QsciLexerPO::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPO_SenderSignalIndex(const QsciLexerPO* self) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self))) {
        return vqscilexerpo->VirtualQsciLexerPO::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerPO::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPO_Receivers(const QsciLexerPO* self, const char* signal) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self))) {
        return vqscilexerpo->VirtualQsciLexerPO::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerPO::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerPO_IsSignalConnected(const QsciLexerPO* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self))) {
        return vqscilexerpo->VirtualQsciLexerPO::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerPO::isSignalConnected called without a directly constructed type");
}

void QsciLexerPO_Delete(QsciLexerPO* self) {
    delete self;
}
