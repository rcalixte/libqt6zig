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
#include <qscilexervhdl.h>
#include "libqscilexervhdl.h"
#include "libqscilexervhdl.hxx"

QsciLexerVHDL* QsciLexerVHDL_new() {
    return new VirtualQsciLexerVHDL();
}

QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent) {
    return new VirtualQsciLexerVHDL(parent);
}

QMetaObject* QsciLexerVHDL_MetaObject(const QsciLexerVHDL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerVHDL_Metacast(QsciLexerVHDL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerVHDL_Metacall(QsciLexerVHDL* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerVHDL_Tr(const char* s) {
    auto _ret = QsciLexerVHDL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerVHDL_Language(const QsciLexerVHDL* self) {
    return (const char*)self->language();
}

const char* QsciLexerVHDL_Lexer(const QsciLexerVHDL* self) {
    return (const char*)self->lexer();
}

int QsciLexerVHDL_BraceStyle(const QsciLexerVHDL* self) {
    return self->braceStyle();
}

QColor* QsciLexerVHDL_DefaultColor(const QsciLexerVHDL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerVHDL_DefaultEolFill(const QsciLexerVHDL* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerVHDL_DefaultFont(const QsciLexerVHDL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVHDL_DefaultPaper(const QsciLexerVHDL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerVHDL_Keywords(const QsciLexerVHDL* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerVHDL_Description(const QsciLexerVHDL* self, int style) {
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

void QsciLexerVHDL_RefreshProperties(QsciLexerVHDL* self) {
    self->refreshProperties();
}

bool QsciLexerVHDL_FoldComments(const QsciLexerVHDL* self) {
    return self->foldComments();
}

bool QsciLexerVHDL_FoldCompact(const QsciLexerVHDL* self) {
    return self->foldCompact();
}

bool QsciLexerVHDL_FoldAtElse(const QsciLexerVHDL* self) {
    return self->foldAtElse();
}

bool QsciLexerVHDL_FoldAtBegin(const QsciLexerVHDL* self) {
    return self->foldAtBegin();
}

bool QsciLexerVHDL_FoldAtParenthesis(const QsciLexerVHDL* self) {
    return self->foldAtParenthesis();
}

void QsciLexerVHDL_SetFoldComments(QsciLexerVHDL* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerVHDL_SetFoldCompact(QsciLexerVHDL* self, bool fold) {
    self->setFoldCompact(fold);
}

void QsciLexerVHDL_SetFoldAtElse(QsciLexerVHDL* self, bool fold) {
    self->setFoldAtElse(fold);
}

void QsciLexerVHDL_SetFoldAtBegin(QsciLexerVHDL* self, bool fold) {
    self->setFoldAtBegin(fold);
}

void QsciLexerVHDL_SetFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
    self->setFoldAtParenthesis(fold);
}

libqt_string QsciLexerVHDL_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerVHDL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerVHDL_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerVHDL::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerVHDL_SuperMetaObject(const QsciLexerVHDL* self) {
    return (QMetaObject*)self->QsciLexerVHDL::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnMetaObject(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_metaobject_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerVHDL_SuperMetacast(QsciLexerVHDL* self, const char* param1) {
    return self->QsciLexerVHDL::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnMetacast(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_metacast_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerVHDL_SuperMetacall(QsciLexerVHDL* self, int param1, int param2, void** param3) {
    return self->QsciLexerVHDL::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnMetacall(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_metacall_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetFoldComments(QsciLexerVHDL* self, bool fold) {
    self->QsciLexerVHDL::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldComments(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetFoldCompact(QsciLexerVHDL* self, bool fold) {
    self->QsciLexerVHDL::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldCompact(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldCompact_Callback>(slot);
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetFoldAtElse(QsciLexerVHDL* self, bool fold) {
    self->QsciLexerVHDL::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtElse(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtElse_Callback>(slot);
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetFoldAtBegin(QsciLexerVHDL* self, bool fold) {
    self->QsciLexerVHDL::setFoldAtBegin(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtBegin(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setfoldatbegin_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtBegin_Callback>(slot);
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
    self->QsciLexerVHDL::setFoldAtParenthesis(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtParenthesis(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setfoldatparenthesis_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtParenthesis_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVHDL_LexerId(const QsciLexerVHDL* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerVHDL_SuperLexerId(const QsciLexerVHDL* self) {
    return self->QsciLexerVHDL::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnLexerId(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_lexerid_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVHDL_AutoCompletionFillups(const QsciLexerVHDL* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerVHDL_SuperAutoCompletionFillups(const QsciLexerVHDL* self) {
    return (const char*)self->QsciLexerVHDL::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnAutoCompletionFillups(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerVHDL_AutoCompletionWordSeparators(const QsciLexerVHDL* self) {
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
libqt_list /* of libqt_string */ QsciLexerVHDL_SuperAutoCompletionWordSeparators(const QsciLexerVHDL* self) {
    QList<QString> _ret = self->QsciLexerVHDL::autoCompletionWordSeparators();
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
void QsciLexerVHDL_OnAutoCompletionWordSeparators(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockEnd(const QsciLexerVHDL* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerVHDL_SuperBlockEnd(const QsciLexerVHDL* self, int* style) {
    return (const char*)self->QsciLexerVHDL::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockEnd(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_blockend_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVHDL_BlockLookback(const QsciLexerVHDL* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerVHDL_SuperBlockLookback(const QsciLexerVHDL* self) {
    return self->QsciLexerVHDL::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockLookback(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_blocklookback_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockStart(const QsciLexerVHDL* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerVHDL_SuperBlockStart(const QsciLexerVHDL* self, int* style) {
    return (const char*)self->QsciLexerVHDL::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockStart(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_blockstart_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockStartKeyword(const QsciLexerVHDL* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerVHDL_SuperBlockStartKeyword(const QsciLexerVHDL* self, int* style) {
    return (const char*)self->QsciLexerVHDL::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockStartKeyword(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVHDL_CaseSensitive(const QsciLexerVHDL* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerVHDL_SuperCaseSensitive(const QsciLexerVHDL* self) {
    return self->QsciLexerVHDL::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnCaseSensitive(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_casesensitive_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerVHDL_Color(const QsciLexerVHDL* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerVHDL_SuperColor(const QsciLexerVHDL* self, int style) {
    return new QColor(self->QsciLexerVHDL::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnColor(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_color_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVHDL_EolFill(const QsciLexerVHDL* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerVHDL_SuperEolFill(const QsciLexerVHDL* self, int style) {
    return self->QsciLexerVHDL::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEolFill(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_eolfill_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerVHDL_Font(const QsciLexerVHDL* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerVHDL_SuperFont(const QsciLexerVHDL* self, int style) {
    return new QFont(self->QsciLexerVHDL::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnFont(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_font_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVHDL_IndentationGuideView(const QsciLexerVHDL* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerVHDL_SuperIndentationGuideView(const QsciLexerVHDL* self) {
    return self->QsciLexerVHDL::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnIndentationGuideView(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVHDL_DefaultStyle(const QsciLexerVHDL* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerVHDL_SuperDefaultStyle(const QsciLexerVHDL* self) {
    return self->QsciLexerVHDL::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultStyle(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerVHDL_Paper(const QsciLexerVHDL* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerVHDL_SuperPaper(const QsciLexerVHDL* self, int style) {
    return new QColor(self->QsciLexerVHDL::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnPaper(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_paper_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerVHDL_DefaultColor2(const QsciLexerVHDL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerVHDL_SuperDefaultColor2(const QsciLexerVHDL* self, int style) {
    return new QColor(self->QsciLexerVHDL::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultColor2(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerVHDL_DefaultFont2(const QsciLexerVHDL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerVHDL_SuperDefaultFont2(const QsciLexerVHDL* self, int style) {
    return new QFont(self->QsciLexerVHDL::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultFont2(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerVHDL_DefaultPaper2(const QsciLexerVHDL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerVHDL_SuperDefaultPaper2(const QsciLexerVHDL* self, int style) {
    return new QColor(self->QsciLexerVHDL::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultPaper2(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_SetEditor(QsciLexerVHDL* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetEditor(QsciLexerVHDL* self, QsciScintilla* editor) {
    self->QsciLexerVHDL::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetEditor(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_seteditor_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVHDL_StyleBitsNeeded(const QsciLexerVHDL* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerVHDL_SuperStyleBitsNeeded(const QsciLexerVHDL* self) {
    return self->QsciLexerVHDL::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnStyleBitsNeeded(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVHDL_WordCharacters(const QsciLexerVHDL* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerVHDL_SuperWordCharacters(const QsciLexerVHDL* self) {
    return (const char*)self->QsciLexerVHDL::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnWordCharacters(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_SetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle) {
    self->QsciLexerVHDL::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetAutoIndentStyle(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_SetColor(QsciLexerVHDL* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetColor(QsciLexerVHDL* self, const QColor* c, int style) {
    self->QsciLexerVHDL::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetColor(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setcolor_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_SetEolFill(QsciLexerVHDL* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetEolFill(QsciLexerVHDL* self, bool eoffill, int style) {
    self->QsciLexerVHDL::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetEolFill(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_seteolfill_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_SetFont(QsciLexerVHDL* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetFont(QsciLexerVHDL* self, const QFont* f, int style) {
    self->QsciLexerVHDL::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFont(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setfont_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_SetPaper(QsciLexerVHDL* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerVHDL_SuperSetPaper(QsciLexerVHDL* self, const QColor* c, int style) {
    self->QsciLexerVHDL::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetPaper(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_setpaper_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVHDL_ReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl) {
        return vqscilexervhdl->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVHDL::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerVHDL_SuperReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        return vqscilexervhdl->QsciLexerVHDL::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerVHDL::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnReadProperties(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_readproperties_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVHDL_WriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl) {
        return vqscilexervhdl->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVHDL::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerVHDL_SuperWriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->QsciLexerVHDL::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerVHDL::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnWriteProperties(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self)))
        vqscilexervhdl->qscilexervhdl_writeproperties_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVHDL_Event(QsciLexerVHDL* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerVHDL_SuperEvent(QsciLexerVHDL* self, QEvent* event) {
    return self->QsciLexerVHDL::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEvent(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_event_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVHDL_EventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerVHDL_SuperEventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event) {
    return self->QsciLexerVHDL::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEventFilter(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_eventfilter_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_TimerEvent(QsciLexerVHDL* self, QTimerEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl) {
        vqscilexervhdl->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVHDL::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVHDL_SuperTimerEvent(QsciLexerVHDL* self, QTimerEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->QsciLexerVHDL::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerVHDL::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnTimerEvent(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_timerevent_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_ChildEvent(QsciLexerVHDL* self, QChildEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl) {
        vqscilexervhdl->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVHDL::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVHDL_SuperChildEvent(QsciLexerVHDL* self, QChildEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->QsciLexerVHDL::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerVHDL::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnChildEvent(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_childevent_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_CustomEvent(QsciLexerVHDL* self, QEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl) {
        vqscilexervhdl->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVHDL::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVHDL_SuperCustomEvent(QsciLexerVHDL* self, QEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->QsciLexerVHDL::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerVHDL::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnCustomEvent(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_customevent_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_ConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl) {
        vqscilexervhdl->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVHDL::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVHDL_SuperConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->QsciLexerVHDL::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerVHDL::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnConnectNotify(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_connectnotify_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVHDL_DisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl) {
        vqscilexervhdl->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVHDL::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVHDL_SuperDisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->QsciLexerVHDL::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerVHDL::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDisconnectNotify(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self))
        vqscilexervhdl->qscilexervhdl_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerVHDL_TextAsBytes(const QsciLexerVHDL* self, const libqt_string text) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexervhdl->VirtualQsciLexerVHDL::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerVHDL::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerVHDL_BytesAsText(const QsciLexerVHDL* self, const char* bytes, int size) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        auto _ret = vqscilexervhdl->VirtualQsciLexerVHDL::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerVHDL::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerVHDL_Sender(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->VirtualQsciLexerVHDL::sender();
    } else
        qFatal("Error: Protected method QsciLexerVHDL::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerVHDL_SenderSignalIndex(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->VirtualQsciLexerVHDL::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerVHDL::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerVHDL_Receivers(const QsciLexerVHDL* self, const char* signal) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->VirtualQsciLexerVHDL::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerVHDL::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerVHDL_IsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->VirtualQsciLexerVHDL::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerVHDL::isSignalConnected called without a directly constructed type");
}

void QsciLexerVHDL_Delete(QsciLexerVHDL* self) {
    delete self;
}
