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
#include <qscilexerjava.h>
#include "libqscilexerjava.h"
#include "libqscilexerjava.hxx"

QsciLexerJava* QsciLexerJava_new() {
    return new VirtualQsciLexerJava();
}

QsciLexerJava* QsciLexerJava_new2(QObject* parent) {
    return new VirtualQsciLexerJava(parent);
}

QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerJava_Metacall(QsciLexerJava* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerJava_Tr(const char* s) {
    auto _ret = QsciLexerJava::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerJava_Language(const QsciLexerJava* self) {
    return (const char*)self->language();
}

const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerJava_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerJava::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJava_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerJava::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerJava_SuperMetaObject(const QsciLexerJava* self) {
    return (QMetaObject*)self->QsciLexerJava::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnMetaObject(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_metaobject_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerJava_SuperMetacast(QsciLexerJava* self, const char* param1) {
    return self->QsciLexerJava::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnMetacast(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_metacast_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerJava_SuperMetacall(QsciLexerJava* self, int param1, int param2, void** param3) {
    return self->QsciLexerJava::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnMetacall(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_metacall_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetFoldAtElse(QsciLexerJava* self, bool fold) {
    self->setFoldAtElse(fold);
}

// Base class handler implementation
void QsciLexerJava_SuperSetFoldAtElse(QsciLexerJava* self, bool fold) {
    self->QsciLexerJava::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldAtElse(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldAtElse_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetFoldComments(QsciLexerJava* self, bool fold) {
    self->setFoldComments(fold);
}

// Base class handler implementation
void QsciLexerJava_SuperSetFoldComments(QsciLexerJava* self, bool fold) {
    self->QsciLexerJava::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldComments(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldComments_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetFoldCompact(QsciLexerJava* self, bool fold) {
    self->setFoldCompact(fold);
}

// Base class handler implementation
void QsciLexerJava_SuperSetFoldCompact(QsciLexerJava* self, bool fold) {
    self->QsciLexerJava::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldCompact(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetFoldPreprocessor(QsciLexerJava* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

// Base class handler implementation
void QsciLexerJava_SuperSetFoldPreprocessor(QsciLexerJava* self, bool fold) {
    self->QsciLexerJava::setFoldPreprocessor(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldPreprocessor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setfoldpreprocessor_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldPreprocessor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetStylePreprocessor(QsciLexerJava* self, bool style) {
    self->setStylePreprocessor(style);
}

// Base class handler implementation
void QsciLexerJava_SuperSetStylePreprocessor(QsciLexerJava* self, bool style) {
    self->QsciLexerJava::setStylePreprocessor(style);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetStylePreprocessor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setstylepreprocessor_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetStylePreprocessor_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJava_Lexer(const QsciLexerJava* self) {
    return (const char*)self->lexer();
}

// Base class handler implementation
const char* QsciLexerJava_SuperLexer(const QsciLexerJava* self) {
    return (const char*)self->QsciLexerJava::lexer();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnLexer(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_lexer_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Lexer_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJava_LexerId(const QsciLexerJava* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerJava_SuperLexerId(const QsciLexerJava* self) {
    return self->QsciLexerJava::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnLexerId(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_lexerid_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJava_AutoCompletionFillups(const QsciLexerJava* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerJava_SuperAutoCompletionFillups(const QsciLexerJava* self) {
    return (const char*)self->QsciLexerJava::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnAutoCompletionFillups(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerJava_AutoCompletionWordSeparators(const QsciLexerJava* self) {
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
libqt_list /* of libqt_string */ QsciLexerJava_SuperAutoCompletionWordSeparators(const QsciLexerJava* self) {
    QList<QString> _ret = self->QsciLexerJava::autoCompletionWordSeparators();
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
void QsciLexerJava_OnAutoCompletionWordSeparators(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJava_BlockEnd(const QsciLexerJava* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJava_SuperBlockEnd(const QsciLexerJava* self, int* style) {
    return (const char*)self->QsciLexerJava::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockEnd(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_blockend_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJava_BlockLookback(const QsciLexerJava* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerJava_SuperBlockLookback(const QsciLexerJava* self) {
    return self->QsciLexerJava::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockLookback(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_blocklookback_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJava_BlockStart(const QsciLexerJava* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJava_SuperBlockStart(const QsciLexerJava* self, int* style) {
    return (const char*)self->QsciLexerJava::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockStart(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_blockstart_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJava_BlockStartKeyword(const QsciLexerJava* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJava_SuperBlockStartKeyword(const QsciLexerJava* self, int* style) {
    return (const char*)self->QsciLexerJava::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockStartKeyword(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJava_BraceStyle(const QsciLexerJava* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerJava_SuperBraceStyle(const QsciLexerJava* self) {
    return self->QsciLexerJava::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBraceStyle(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_bracestyle_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJava_CaseSensitive(const QsciLexerJava* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerJava_SuperCaseSensitive(const QsciLexerJava* self) {
    return self->QsciLexerJava::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnCaseSensitive(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_casesensitive_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJava_Color(const QsciLexerJava* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJava_SuperColor(const QsciLexerJava* self, int style) {
    return new QColor(self->QsciLexerJava::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnColor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_color_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJava_EolFill(const QsciLexerJava* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerJava_SuperEolFill(const QsciLexerJava* self, int style) {
    return self->QsciLexerJava::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEolFill(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_eolfill_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerJava_Font(const QsciLexerJava* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerJava_SuperFont(const QsciLexerJava* self, int style) {
    return new QFont(self->QsciLexerJava::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnFont(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_font_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJava_IndentationGuideView(const QsciLexerJava* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerJava_SuperIndentationGuideView(const QsciLexerJava* self) {
    return self->QsciLexerJava::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnIndentationGuideView(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJava_DefaultStyle(const QsciLexerJava* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerJava_SuperDefaultStyle(const QsciLexerJava* self) {
    return self->QsciLexerJava::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultStyle(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
libqt_string QsciLexerJava_Description(const QsciLexerJava* self, int style) {
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
void QsciLexerJava_OnDescription(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_description_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Description_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJava_Paper(const QsciLexerJava* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJava_SuperPaper(const QsciLexerJava* self, int style) {
    return new QColor(self->QsciLexerJava::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnPaper(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_paper_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJava_DefaultColor2(const QsciLexerJava* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJava_SuperDefaultColor2(const QsciLexerJava* self, int style) {
    return new QColor(self->QsciLexerJava::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultColor2(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJava_DefaultEolFill(const QsciLexerJava* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerJava_SuperDefaultEolFill(const QsciLexerJava* self, int style) {
    return self->QsciLexerJava::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultEolFill(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerJava_DefaultFont2(const QsciLexerJava* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerJava_SuperDefaultFont2(const QsciLexerJava* self, int style) {
    return new QFont(self->QsciLexerJava::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultFont2(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJava_DefaultPaper2(const QsciLexerJava* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJava_SuperDefaultPaper2(const QsciLexerJava* self, int style) {
    return new QColor(self->QsciLexerJava::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultPaper2(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetEditor(QsciLexerJava* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerJava_SuperSetEditor(QsciLexerJava* self, QsciScintilla* editor) {
    self->QsciLexerJava::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetEditor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_seteditor_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_RefreshProperties(QsciLexerJava* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerJava_SuperRefreshProperties(QsciLexerJava* self) {
    self->QsciLexerJava::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnRefreshProperties(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJava_StyleBitsNeeded(const QsciLexerJava* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerJava_SuperStyleBitsNeeded(const QsciLexerJava* self) {
    return self->QsciLexerJava::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnStyleBitsNeeded(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJava_WordCharacters(const QsciLexerJava* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerJava_SuperWordCharacters(const QsciLexerJava* self) {
    return (const char*)self->QsciLexerJava::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnWordCharacters(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetAutoIndentStyle(QsciLexerJava* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerJava_SuperSetAutoIndentStyle(QsciLexerJava* self, int autoindentstyle) {
    self->QsciLexerJava::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetAutoIndentStyle(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetColor(QsciLexerJava* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJava_SuperSetColor(QsciLexerJava* self, const QColor* c, int style) {
    self->QsciLexerJava::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetColor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setcolor_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetEolFill(QsciLexerJava* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJava_SuperSetEolFill(QsciLexerJava* self, bool eoffill, int style) {
    self->QsciLexerJava::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetEolFill(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_seteolfill_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetFont(QsciLexerJava* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJava_SuperSetFont(QsciLexerJava* self, const QFont* f, int style) {
    self->QsciLexerJava::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFont(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setfont_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_SetPaper(QsciLexerJava* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJava_SuperSetPaper(QsciLexerJava* self, const QColor* c, int style) {
    self->QsciLexerJava::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetPaper(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_setpaper_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJava_ReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava) {
        return vqscilexerjava->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJava::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerJava_SuperReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        return vqscilexerjava->QsciLexerJava::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerJava::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnReadProperties(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_readproperties_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJava_WriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava) {
        return vqscilexerjava->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJava::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerJava_SuperWriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->QsciLexerJava::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerJava::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnWriteProperties(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self)))
        vqscilexerjava->qscilexerjava_writeproperties_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJava_Event(QsciLexerJava* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerJava_SuperEvent(QsciLexerJava* self, QEvent* event) {
    return self->QsciLexerJava::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEvent(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_event_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJava_EventFilter(QsciLexerJava* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerJava_SuperEventFilter(QsciLexerJava* self, QObject* watched, QEvent* event) {
    return self->QsciLexerJava::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEventFilter(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_eventfilter_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_TimerEvent(QsciLexerJava* self, QTimerEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava) {
        vqscilexerjava->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJava::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJava_SuperTimerEvent(QsciLexerJava* self, QTimerEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->QsciLexerJava::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJava::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnTimerEvent(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_timerevent_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_ChildEvent(QsciLexerJava* self, QChildEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava) {
        vqscilexerjava->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJava::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJava_SuperChildEvent(QsciLexerJava* self, QChildEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->QsciLexerJava::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJava::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnChildEvent(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_childevent_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_CustomEvent(QsciLexerJava* self, QEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava) {
        vqscilexerjava->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJava::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJava_SuperCustomEvent(QsciLexerJava* self, QEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->QsciLexerJava::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJava::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnCustomEvent(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_customevent_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_ConnectNotify(QsciLexerJava* self, const QMetaMethod* signal) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava) {
        vqscilexerjava->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJava::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJava_SuperConnectNotify(QsciLexerJava* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->QsciLexerJava::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerJava::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnConnectNotify(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_connectnotify_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJava_DisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava) {
        vqscilexerjava->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJava::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJava_SuperDisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->QsciLexerJava::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerJava::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDisconnectNotify(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self))
        vqscilexerjava->qscilexerjava_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerJava_TextAsBytes(const QsciLexerJava* self, const libqt_string text) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerjava->VirtualQsciLexerJava::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerJava::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerJava_BytesAsText(const QsciLexerJava* self, const char* bytes, int size) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        auto _ret = vqscilexerjava->VirtualQsciLexerJava::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerJava::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerJava_Sender(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->VirtualQsciLexerJava::sender();
    } else
        qFatal("Error: Protected method QsciLexerJava::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerJava_SenderSignalIndex(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->VirtualQsciLexerJava::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerJava::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerJava_Receivers(const QsciLexerJava* self, const char* signal) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->VirtualQsciLexerJava::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerJava::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerJava_IsSignalConnected(const QsciLexerJava* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->VirtualQsciLexerJava::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerJava::isSignalConnected called without a directly constructed type");
}

void QsciLexerJava_Delete(QsciLexerJava* self) {
    delete self;
}
