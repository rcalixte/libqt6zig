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
#include <qscilexeridl.h>
#include "libqscilexeridl.h"
#include "libqscilexeridl.hxx"

QsciLexerIDL* QsciLexerIDL_new() {
    return new VirtualQsciLexerIDL();
}

QsciLexerIDL* QsciLexerIDL_new2(QObject* parent) {
    return new VirtualQsciLexerIDL(parent);
}

QMetaObject* QsciLexerIDL_MetaObject(const QsciLexerIDL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerIDL_Metacast(QsciLexerIDL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerIDL_Metacall(QsciLexerIDL* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerIDL_Tr(const char* s) {
    auto _ret = QsciLexerIDL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerIDL_Language(const QsciLexerIDL* self) {
    return (const char*)self->language();
}

QColor* QsciLexerIDL_DefaultColor(const QsciLexerIDL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

const char* QsciLexerIDL_Keywords(const QsciLexerIDL* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerIDL_Description(const QsciLexerIDL* self, int style) {
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

libqt_string QsciLexerIDL_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerIDL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerIDL_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerIDL::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerIDL_SuperMetaObject(const QsciLexerIDL* self) {
    return (QMetaObject*)self->QsciLexerIDL::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnMetaObject(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_metaobject_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerIDL_SuperMetacast(QsciLexerIDL* self, const char* param1) {
    return self->QsciLexerIDL::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnMetacast(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_metacast_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerIDL_SuperMetacall(QsciLexerIDL* self, int param1, int param2, void** param3) {
    return self->QsciLexerIDL::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnMetacall(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_metacall_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetFoldAtElse(QsciLexerIDL* self, bool fold) {
    self->setFoldAtElse(fold);
}

// Base class handler implementation
void QsciLexerIDL_SuperSetFoldAtElse(QsciLexerIDL* self, bool fold) {
    self->QsciLexerIDL::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFoldAtElse(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFoldAtElse_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetFoldComments(QsciLexerIDL* self, bool fold) {
    self->setFoldComments(fold);
}

// Base class handler implementation
void QsciLexerIDL_SuperSetFoldComments(QsciLexerIDL* self, bool fold) {
    self->QsciLexerIDL::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFoldComments(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFoldComments_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetFoldCompact(QsciLexerIDL* self, bool fold) {
    self->setFoldCompact(fold);
}

// Base class handler implementation
void QsciLexerIDL_SuperSetFoldCompact(QsciLexerIDL* self, bool fold) {
    self->QsciLexerIDL::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFoldCompact(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetFoldPreprocessor(QsciLexerIDL* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

// Base class handler implementation
void QsciLexerIDL_SuperSetFoldPreprocessor(QsciLexerIDL* self, bool fold) {
    self->QsciLexerIDL::setFoldPreprocessor(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFoldPreprocessor(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setfoldpreprocessor_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFoldPreprocessor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetStylePreprocessor(QsciLexerIDL* self, bool style) {
    self->setStylePreprocessor(style);
}

// Base class handler implementation
void QsciLexerIDL_SuperSetStylePreprocessor(QsciLexerIDL* self, bool style) {
    self->QsciLexerIDL::setStylePreprocessor(style);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetStylePreprocessor(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setstylepreprocessor_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetStylePreprocessor_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIDL_Lexer(const QsciLexerIDL* self) {
    return (const char*)self->lexer();
}

// Base class handler implementation
const char* QsciLexerIDL_SuperLexer(const QsciLexerIDL* self) {
    return (const char*)self->QsciLexerIDL::lexer();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnLexer(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_lexer_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Lexer_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIDL_LexerId(const QsciLexerIDL* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerIDL_SuperLexerId(const QsciLexerIDL* self) {
    return self->QsciLexerIDL::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnLexerId(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_lexerid_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIDL_AutoCompletionFillups(const QsciLexerIDL* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerIDL_SuperAutoCompletionFillups(const QsciLexerIDL* self) {
    return (const char*)self->QsciLexerIDL::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnAutoCompletionFillups(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerIDL_AutoCompletionWordSeparators(const QsciLexerIDL* self) {
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
libqt_list /* of libqt_string */ QsciLexerIDL_SuperAutoCompletionWordSeparators(const QsciLexerIDL* self) {
    QList<QString> _ret = self->QsciLexerIDL::autoCompletionWordSeparators();
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
void QsciLexerIDL_OnAutoCompletionWordSeparators(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIDL_BlockEnd(const QsciLexerIDL* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerIDL_SuperBlockEnd(const QsciLexerIDL* self, int* style) {
    return (const char*)self->QsciLexerIDL::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBlockEnd(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_blockend_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIDL_BlockLookback(const QsciLexerIDL* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerIDL_SuperBlockLookback(const QsciLexerIDL* self) {
    return self->QsciLexerIDL::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBlockLookback(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_blocklookback_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIDL_BlockStart(const QsciLexerIDL* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerIDL_SuperBlockStart(const QsciLexerIDL* self, int* style) {
    return (const char*)self->QsciLexerIDL::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBlockStart(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_blockstart_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIDL_BlockStartKeyword(const QsciLexerIDL* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerIDL_SuperBlockStartKeyword(const QsciLexerIDL* self, int* style) {
    return (const char*)self->QsciLexerIDL::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBlockStartKeyword(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIDL_BraceStyle(const QsciLexerIDL* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerIDL_SuperBraceStyle(const QsciLexerIDL* self) {
    return self->QsciLexerIDL::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBraceStyle(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_bracestyle_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIDL_CaseSensitive(const QsciLexerIDL* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerIDL_SuperCaseSensitive(const QsciLexerIDL* self) {
    return self->QsciLexerIDL::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnCaseSensitive(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_casesensitive_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerIDL_Color(const QsciLexerIDL* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerIDL_SuperColor(const QsciLexerIDL* self, int style) {
    return new QColor(self->QsciLexerIDL::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnColor(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_color_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIDL_EolFill(const QsciLexerIDL* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerIDL_SuperEolFill(const QsciLexerIDL* self, int style) {
    return self->QsciLexerIDL::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnEolFill(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_eolfill_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerIDL_Font(const QsciLexerIDL* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerIDL_SuperFont(const QsciLexerIDL* self, int style) {
    return new QFont(self->QsciLexerIDL::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnFont(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_font_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIDL_IndentationGuideView(const QsciLexerIDL* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerIDL_SuperIndentationGuideView(const QsciLexerIDL* self) {
    return self->QsciLexerIDL::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnIndentationGuideView(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIDL_DefaultStyle(const QsciLexerIDL* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerIDL_SuperDefaultStyle(const QsciLexerIDL* self) {
    return self->QsciLexerIDL::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultStyle(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerIDL_Paper(const QsciLexerIDL* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerIDL_SuperPaper(const QsciLexerIDL* self, int style) {
    return new QColor(self->QsciLexerIDL::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnPaper(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_paper_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerIDL_DefaultColor2(const QsciLexerIDL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerIDL_SuperDefaultColor2(const QsciLexerIDL* self, int style) {
    return new QColor(self->QsciLexerIDL::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultColor2(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIDL_DefaultEolFill(const QsciLexerIDL* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerIDL_SuperDefaultEolFill(const QsciLexerIDL* self, int style) {
    return self->QsciLexerIDL::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultEolFill(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerIDL_DefaultFont2(const QsciLexerIDL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerIDL_SuperDefaultFont2(const QsciLexerIDL* self, int style) {
    return new QFont(self->QsciLexerIDL::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultFont2(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerIDL_DefaultPaper2(const QsciLexerIDL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerIDL_SuperDefaultPaper2(const QsciLexerIDL* self, int style) {
    return new QColor(self->QsciLexerIDL::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultPaper2(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetEditor(QsciLexerIDL* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerIDL_SuperSetEditor(QsciLexerIDL* self, QsciScintilla* editor) {
    self->QsciLexerIDL::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetEditor(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_seteditor_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_RefreshProperties(QsciLexerIDL* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerIDL_SuperRefreshProperties(QsciLexerIDL* self) {
    self->QsciLexerIDL::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnRefreshProperties(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIDL_StyleBitsNeeded(const QsciLexerIDL* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerIDL_SuperStyleBitsNeeded(const QsciLexerIDL* self) {
    return self->QsciLexerIDL::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnStyleBitsNeeded(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIDL_WordCharacters(const QsciLexerIDL* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerIDL_SuperWordCharacters(const QsciLexerIDL* self) {
    return (const char*)self->QsciLexerIDL::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnWordCharacters(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetAutoIndentStyle(QsciLexerIDL* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerIDL_SuperSetAutoIndentStyle(QsciLexerIDL* self, int autoindentstyle) {
    self->QsciLexerIDL::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetAutoIndentStyle(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetColor(QsciLexerIDL* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerIDL_SuperSetColor(QsciLexerIDL* self, const QColor* c, int style) {
    self->QsciLexerIDL::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetColor(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setcolor_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetEolFill(QsciLexerIDL* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerIDL_SuperSetEolFill(QsciLexerIDL* self, bool eoffill, int style) {
    self->QsciLexerIDL::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetEolFill(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_seteolfill_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetFont(QsciLexerIDL* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerIDL_SuperSetFont(QsciLexerIDL* self, const QFont* f, int style) {
    self->QsciLexerIDL::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFont(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setfont_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_SetPaper(QsciLexerIDL* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerIDL_SuperSetPaper(QsciLexerIDL* self, const QColor* c, int style) {
    self->QsciLexerIDL::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetPaper(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_setpaper_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIDL_ReadProperties(QsciLexerIDL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl) {
        return vqscilexeridl->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIDL::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerIDL_SuperReadProperties(QsciLexerIDL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self)) {
        return vqscilexeridl->QsciLexerIDL::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerIDL::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnReadProperties(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_readproperties_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIDL_WriteProperties(const QsciLexerIDL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl) {
        return vqscilexeridl->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIDL::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerIDL_SuperWriteProperties(const QsciLexerIDL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self))) {
        return vqscilexeridl->QsciLexerIDL::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerIDL::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnWriteProperties(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self)))
        vqscilexeridl->qscilexeridl_writeproperties_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIDL_Event(QsciLexerIDL* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerIDL_SuperEvent(QsciLexerIDL* self, QEvent* event) {
    return self->QsciLexerIDL::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnEvent(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_event_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIDL_EventFilter(QsciLexerIDL* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerIDL_SuperEventFilter(QsciLexerIDL* self, QObject* watched, QEvent* event) {
    return self->QsciLexerIDL::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnEventFilter(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_eventfilter_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_TimerEvent(QsciLexerIDL* self, QTimerEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl) {
        vqscilexeridl->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIDL::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIDL_SuperTimerEvent(QsciLexerIDL* self, QTimerEvent* event) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self)) {
        vqscilexeridl->QsciLexerIDL::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerIDL::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnTimerEvent(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_timerevent_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_ChildEvent(QsciLexerIDL* self, QChildEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl) {
        vqscilexeridl->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIDL::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIDL_SuperChildEvent(QsciLexerIDL* self, QChildEvent* event) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self)) {
        vqscilexeridl->QsciLexerIDL::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerIDL::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnChildEvent(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_childevent_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_CustomEvent(QsciLexerIDL* self, QEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl) {
        vqscilexeridl->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIDL::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIDL_SuperCustomEvent(QsciLexerIDL* self, QEvent* event) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self)) {
        vqscilexeridl->QsciLexerIDL::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerIDL::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnCustomEvent(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_customevent_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_ConnectNotify(QsciLexerIDL* self, const QMetaMethod* signal) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl) {
        vqscilexeridl->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIDL::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIDL_SuperConnectNotify(QsciLexerIDL* self, const QMetaMethod* signal) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self)) {
        vqscilexeridl->QsciLexerIDL::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerIDL::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnConnectNotify(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_connectnotify_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIDL_DisconnectNotify(QsciLexerIDL* self, const QMetaMethod* signal) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl) {
        vqscilexeridl->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIDL::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIDL_SuperDisconnectNotify(QsciLexerIDL* self, const QMetaMethod* signal) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self)) {
        vqscilexeridl->QsciLexerIDL::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerIDL::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDisconnectNotify(QsciLexerIDL* self, intptr_t slot) {
    if (auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self))
        vqscilexeridl->qscilexeridl_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerIDL_TextAsBytes(const QsciLexerIDL* self, const libqt_string text) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexeridl->VirtualQsciLexerIDL::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerIDL::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerIDL_BytesAsText(const QsciLexerIDL* self, const char* bytes, int size) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self))) {
        auto _ret = vqscilexeridl->VirtualQsciLexerIDL::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerIDL::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerIDL_Sender(const QsciLexerIDL* self) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self))) {
        return vqscilexeridl->VirtualQsciLexerIDL::sender();
    } else
        qFatal("Error: Protected method QsciLexerIDL::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerIDL_SenderSignalIndex(const QsciLexerIDL* self) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self))) {
        return vqscilexeridl->VirtualQsciLexerIDL::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerIDL::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerIDL_Receivers(const QsciLexerIDL* self, const char* signal) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self))) {
        return vqscilexeridl->VirtualQsciLexerIDL::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerIDL::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerIDL_IsSignalConnected(const QsciLexerIDL* self, const QMetaMethod* signal) {
    if (auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self))) {
        return vqscilexeridl->VirtualQsciLexerIDL::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerIDL::isSignalConnected called without a directly constructed type");
}

void QsciLexerIDL_Delete(QsciLexerIDL* self) {
    delete self;
}
