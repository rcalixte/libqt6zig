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
#include <qscilexerpov.h>
#include "libqscilexerpov.h"
#include "libqscilexerpov.hxx"

QsciLexerPOV* QsciLexerPOV_new() {
    return new VirtualQsciLexerPOV();
}

QsciLexerPOV* QsciLexerPOV_new2(QObject* parent) {
    return new VirtualQsciLexerPOV(parent);
}

QMetaObject* QsciLexerPOV_MetaObject(const QsciLexerPOV* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPOV_Metacast(QsciLexerPOV* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPOV_Metacall(QsciLexerPOV* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerPOV_Tr(const char* s) {
    auto _ret = QsciLexerPOV::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPOV_Language(const QsciLexerPOV* self) {
    return (const char*)self->language();
}

const char* QsciLexerPOV_Lexer(const QsciLexerPOV* self) {
    return (const char*)self->lexer();
}

int QsciLexerPOV_BraceStyle(const QsciLexerPOV* self) {
    return self->braceStyle();
}

const char* QsciLexerPOV_WordCharacters(const QsciLexerPOV* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerPOV_DefaultColor(const QsciLexerPOV* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPOV_DefaultEolFill(const QsciLexerPOV* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPOV_DefaultFont(const QsciLexerPOV* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPOV_DefaultPaper(const QsciLexerPOV* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPOV_Keywords(const QsciLexerPOV* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerPOV_Description(const QsciLexerPOV* self, int style) {
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

void QsciLexerPOV_RefreshProperties(QsciLexerPOV* self) {
    self->refreshProperties();
}

bool QsciLexerPOV_FoldComments(const QsciLexerPOV* self) {
    return self->foldComments();
}

bool QsciLexerPOV_FoldCompact(const QsciLexerPOV* self) {
    return self->foldCompact();
}

bool QsciLexerPOV_FoldDirectives(const QsciLexerPOV* self) {
    return self->foldDirectives();
}

void QsciLexerPOV_SetFoldComments(QsciLexerPOV* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerPOV_SetFoldCompact(QsciLexerPOV* self, bool fold) {
    self->setFoldCompact(fold);
}

void QsciLexerPOV_SetFoldDirectives(QsciLexerPOV* self, bool fold) {
    self->setFoldDirectives(fold);
}

libqt_string QsciLexerPOV_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerPOV::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPOV_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerPOV::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerPOV_SuperMetaObject(const QsciLexerPOV* self) {
    return (QMetaObject*)self->QsciLexerPOV::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnMetaObject(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_metaobject_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerPOV_SuperMetacast(QsciLexerPOV* self, const char* param1) {
    return self->QsciLexerPOV::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnMetacast(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_metacast_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerPOV_SuperMetacall(QsciLexerPOV* self, int param1, int param2, void** param3) {
    return self->QsciLexerPOV::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnMetacall(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_metacall_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPOV_SuperSetFoldComments(QsciLexerPOV* self, bool fold) {
    self->QsciLexerPOV::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetFoldComments(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPOV_SuperSetFoldCompact(QsciLexerPOV* self, bool fold) {
    self->QsciLexerPOV::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetFoldCompact(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetFoldCompact_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPOV_SuperSetFoldDirectives(QsciLexerPOV* self, bool fold) {
    self->QsciLexerPOV::setFoldDirectives(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetFoldDirectives(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_setfolddirectives_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetFoldDirectives_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPOV_LexerId(const QsciLexerPOV* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerPOV_SuperLexerId(const QsciLexerPOV* self) {
    return self->QsciLexerPOV::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnLexerId(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_lexerid_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPOV_AutoCompletionFillups(const QsciLexerPOV* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerPOV_SuperAutoCompletionFillups(const QsciLexerPOV* self) {
    return (const char*)self->QsciLexerPOV::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnAutoCompletionFillups(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPOV_AutoCompletionWordSeparators(const QsciLexerPOV* self) {
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
libqt_list /* of libqt_string */ QsciLexerPOV_SuperAutoCompletionWordSeparators(const QsciLexerPOV* self) {
    QList<QString> _ret = self->QsciLexerPOV::autoCompletionWordSeparators();
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
void QsciLexerPOV_OnAutoCompletionWordSeparators(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPOV_BlockEnd(const QsciLexerPOV* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPOV_SuperBlockEnd(const QsciLexerPOV* self, int* style) {
    return (const char*)self->QsciLexerPOV::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBlockEnd(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_blockend_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPOV_BlockLookback(const QsciLexerPOV* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerPOV_SuperBlockLookback(const QsciLexerPOV* self) {
    return self->QsciLexerPOV::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBlockLookback(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_blocklookback_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPOV_BlockStart(const QsciLexerPOV* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPOV_SuperBlockStart(const QsciLexerPOV* self, int* style) {
    return (const char*)self->QsciLexerPOV::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBlockStart(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_blockstart_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPOV_BlockStartKeyword(const QsciLexerPOV* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPOV_SuperBlockStartKeyword(const QsciLexerPOV* self, int* style) {
    return (const char*)self->QsciLexerPOV::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBlockStartKeyword(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPOV_CaseSensitive(const QsciLexerPOV* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerPOV_SuperCaseSensitive(const QsciLexerPOV* self) {
    return self->QsciLexerPOV::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnCaseSensitive(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_casesensitive_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPOV_Color(const QsciLexerPOV* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPOV_SuperColor(const QsciLexerPOV* self, int style) {
    return new QColor(self->QsciLexerPOV::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnColor(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_color_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPOV_EolFill(const QsciLexerPOV* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerPOV_SuperEolFill(const QsciLexerPOV* self, int style) {
    return self->QsciLexerPOV::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnEolFill(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_eolfill_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPOV_Font(const QsciLexerPOV* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPOV_SuperFont(const QsciLexerPOV* self, int style) {
    return new QFont(self->QsciLexerPOV::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnFont(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_font_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPOV_IndentationGuideView(const QsciLexerPOV* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerPOV_SuperIndentationGuideView(const QsciLexerPOV* self) {
    return self->QsciLexerPOV::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnIndentationGuideView(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPOV_DefaultStyle(const QsciLexerPOV* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerPOV_SuperDefaultStyle(const QsciLexerPOV* self) {
    return self->QsciLexerPOV::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultStyle(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPOV_Paper(const QsciLexerPOV* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPOV_SuperPaper(const QsciLexerPOV* self, int style) {
    return new QColor(self->QsciLexerPOV::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnPaper(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_paper_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPOV_DefaultColor2(const QsciLexerPOV* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPOV_SuperDefaultColor2(const QsciLexerPOV* self, int style) {
    return new QColor(self->QsciLexerPOV::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultColor2(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPOV_DefaultFont2(const QsciLexerPOV* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPOV_SuperDefaultFont2(const QsciLexerPOV* self, int style) {
    return new QFont(self->QsciLexerPOV::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultFont2(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPOV_DefaultPaper2(const QsciLexerPOV* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPOV_SuperDefaultPaper2(const QsciLexerPOV* self, int style) {
    return new QColor(self->QsciLexerPOV::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultPaper2(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_SetEditor(QsciLexerPOV* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerPOV_SuperSetEditor(QsciLexerPOV* self, QsciScintilla* editor) {
    self->QsciLexerPOV::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetEditor(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_seteditor_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPOV_StyleBitsNeeded(const QsciLexerPOV* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerPOV_SuperStyleBitsNeeded(const QsciLexerPOV* self) {
    return self->QsciLexerPOV::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnStyleBitsNeeded(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_SetAutoIndentStyle(QsciLexerPOV* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerPOV_SuperSetAutoIndentStyle(QsciLexerPOV* self, int autoindentstyle) {
    self->QsciLexerPOV::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetAutoIndentStyle(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_SetColor(QsciLexerPOV* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPOV_SuperSetColor(QsciLexerPOV* self, const QColor* c, int style) {
    self->QsciLexerPOV::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetColor(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_setcolor_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_SetEolFill(QsciLexerPOV* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPOV_SuperSetEolFill(QsciLexerPOV* self, bool eoffill, int style) {
    self->QsciLexerPOV::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetEolFill(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_seteolfill_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_SetFont(QsciLexerPOV* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPOV_SuperSetFont(QsciLexerPOV* self, const QFont* f, int style) {
    self->QsciLexerPOV::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetFont(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_setfont_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_SetPaper(QsciLexerPOV* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPOV_SuperSetPaper(QsciLexerPOV* self, const QColor* c, int style) {
    self->QsciLexerPOV::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetPaper(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_setpaper_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPOV_ReadProperties(QsciLexerPOV* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self);
    if (vqscilexerpov) {
        return vqscilexerpov->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPOV::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPOV_SuperReadProperties(QsciLexerPOV* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        return vqscilexerpov->QsciLexerPOV::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPOV::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnReadProperties(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_readproperties_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPOV_WriteProperties(const QsciLexerPOV* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self));
    if (vqscilexerpov) {
        return vqscilexerpov->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPOV::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPOV_SuperWriteProperties(const QsciLexerPOV* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->QsciLexerPOV::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPOV::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnWriteProperties(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self)))
        vqscilexerpov->qscilexerpov_writeproperties_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPOV_Event(QsciLexerPOV* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerPOV_SuperEvent(QsciLexerPOV* self, QEvent* event) {
    return self->QsciLexerPOV::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnEvent(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_event_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPOV_EventFilter(QsciLexerPOV* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerPOV_SuperEventFilter(QsciLexerPOV* self, QObject* watched, QEvent* event) {
    return self->QsciLexerPOV::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnEventFilter(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_eventfilter_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_TimerEvent(QsciLexerPOV* self, QTimerEvent* event) {
    auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self);
    if (vqscilexerpov) {
        vqscilexerpov->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPOV::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPOV_SuperTimerEvent(QsciLexerPOV* self, QTimerEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->QsciLexerPOV::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPOV::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnTimerEvent(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_timerevent_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_ChildEvent(QsciLexerPOV* self, QChildEvent* event) {
    auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self);
    if (vqscilexerpov) {
        vqscilexerpov->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPOV::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPOV_SuperChildEvent(QsciLexerPOV* self, QChildEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->QsciLexerPOV::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPOV::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnChildEvent(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_childevent_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_CustomEvent(QsciLexerPOV* self, QEvent* event) {
    auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self);
    if (vqscilexerpov) {
        vqscilexerpov->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPOV::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPOV_SuperCustomEvent(QsciLexerPOV* self, QEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->QsciLexerPOV::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPOV::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnCustomEvent(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_customevent_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_ConnectNotify(QsciLexerPOV* self, const QMetaMethod* signal) {
    auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self);
    if (vqscilexerpov) {
        vqscilexerpov->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPOV::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPOV_SuperConnectNotify(QsciLexerPOV* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->QsciLexerPOV::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPOV::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnConnectNotify(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_connectnotify_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPOV_DisconnectNotify(QsciLexerPOV* self, const QMetaMethod* signal) {
    auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self);
    if (vqscilexerpov) {
        vqscilexerpov->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPOV::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPOV_SuperDisconnectNotify(QsciLexerPOV* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->QsciLexerPOV::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPOV::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDisconnectNotify(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self))
        vqscilexerpov->qscilexerpov_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerPOV_TextAsBytes(const QsciLexerPOV* self, const libqt_string text) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerpov->VirtualQsciLexerPOV::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPOV::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerPOV_BytesAsText(const QsciLexerPOV* self, const char* bytes, int size) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        auto _ret = vqscilexerpov->VirtualQsciLexerPOV::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPOV::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerPOV_Sender(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->VirtualQsciLexerPOV::sender();
    } else
        qFatal("Error: Protected method QsciLexerPOV::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPOV_SenderSignalIndex(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->VirtualQsciLexerPOV::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerPOV::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPOV_Receivers(const QsciLexerPOV* self, const char* signal) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->VirtualQsciLexerPOV::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerPOV::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerPOV_IsSignalConnected(const QsciLexerPOV* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->VirtualQsciLexerPOV::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerPOV::isSignalConnected called without a directly constructed type");
}

void QsciLexerPOV_Delete(QsciLexerPOV* self) {
    delete self;
}
