#include <QByteArray>
#include <QChar>
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
#include <qscilexermasm.h>
#include "libqscilexermasm.h"
#include "libqscilexermasm.hxx"

QsciLexerMASM* QsciLexerMASM_new() {
    return new VirtualQsciLexerMASM();
}

QsciLexerMASM* QsciLexerMASM_new2(QObject* parent) {
    return new VirtualQsciLexerMASM(parent);
}

QMetaObject* QsciLexerMASM_MetaObject(const QsciLexerMASM* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMASM_Metacast(QsciLexerMASM* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMASM_Metacall(QsciLexerMASM* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerMASM_Tr(const char* s) {
    auto _ret = QsciLexerMASM::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerMASM_Language(const QsciLexerMASM* self) {
    return (const char*)self->language();
}

const char* QsciLexerMASM_Lexer(const QsciLexerMASM* self) {
    return (const char*)self->lexer();
}

libqt_string QsciLexerMASM_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerMASM::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMASM_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerMASM::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerMASM_SuperMetaObject(const QsciLexerMASM* self) {
    return (QMetaObject*)self->QsciLexerMASM::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnMetaObject(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_metaobject_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerMASM_SuperMetacast(QsciLexerMASM* self, const char* param1) {
    return self->QsciLexerMASM::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnMetacast(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_metacast_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerMASM_SuperMetacall(QsciLexerMASM* self, int param1, int param2, void** param3) {
    return self->QsciLexerMASM::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnMetacall(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_metacall_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetFoldComments(QsciLexerMASM* self, bool fold) {
    self->setFoldComments(fold);
}

// Base class handler implementation
void QsciLexerMASM_SuperSetFoldComments(QsciLexerMASM* self, bool fold) {
    self->QsciLexerMASM::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetFoldComments(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetFoldComments_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetFoldCompact(QsciLexerMASM* self, bool fold) {
    self->setFoldCompact(fold);
}

// Base class handler implementation
void QsciLexerMASM_SuperSetFoldCompact(QsciLexerMASM* self, bool fold) {
    self->QsciLexerMASM::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetFoldCompact(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetCommentDelimiter(QsciLexerMASM* self, QChar* delimeter) {
    self->setCommentDelimiter(*delimeter);
}

// Base class handler implementation
void QsciLexerMASM_SuperSetCommentDelimiter(QsciLexerMASM* self, QChar* delimeter) {
    self->QsciLexerMASM::setCommentDelimiter(*delimeter);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetCommentDelimiter(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_setcommentdelimiter_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetCommentDelimiter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetFoldSyntaxBased(QsciLexerMASM* self, bool syntax_based) {
    self->setFoldSyntaxBased(syntax_based);
}

// Base class handler implementation
void QsciLexerMASM_SuperSetFoldSyntaxBased(QsciLexerMASM* self, bool syntax_based) {
    self->QsciLexerMASM::setFoldSyntaxBased(syntax_based);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetFoldSyntaxBased(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_setfoldsyntaxbased_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetFoldSyntaxBased_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMASM_LexerId(const QsciLexerMASM* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerMASM_SuperLexerId(const QsciLexerMASM* self) {
    return self->QsciLexerMASM::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnLexerId(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_lexerid_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMASM_AutoCompletionFillups(const QsciLexerMASM* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerMASM_SuperAutoCompletionFillups(const QsciLexerMASM* self) {
    return (const char*)self->QsciLexerMASM::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnAutoCompletionFillups(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMASM_AutoCompletionWordSeparators(const QsciLexerMASM* self) {
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
libqt_list /* of libqt_string */ QsciLexerMASM_SuperAutoCompletionWordSeparators(const QsciLexerMASM* self) {
    QList<QString> _ret = self->QsciLexerMASM::autoCompletionWordSeparators();
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
void QsciLexerMASM_OnAutoCompletionWordSeparators(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMASM_BlockEnd(const QsciLexerMASM* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMASM_SuperBlockEnd(const QsciLexerMASM* self, int* style) {
    return (const char*)self->QsciLexerMASM::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBlockEnd(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_blockend_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMASM_BlockLookback(const QsciLexerMASM* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerMASM_SuperBlockLookback(const QsciLexerMASM* self) {
    return self->QsciLexerMASM::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBlockLookback(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_blocklookback_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMASM_BlockStart(const QsciLexerMASM* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMASM_SuperBlockStart(const QsciLexerMASM* self, int* style) {
    return (const char*)self->QsciLexerMASM::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBlockStart(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_blockstart_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMASM_BlockStartKeyword(const QsciLexerMASM* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMASM_SuperBlockStartKeyword(const QsciLexerMASM* self, int* style) {
    return (const char*)self->QsciLexerMASM::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBlockStartKeyword(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMASM_BraceStyle(const QsciLexerMASM* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerMASM_SuperBraceStyle(const QsciLexerMASM* self) {
    return self->QsciLexerMASM::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBraceStyle(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_bracestyle_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMASM_CaseSensitive(const QsciLexerMASM* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerMASM_SuperCaseSensitive(const QsciLexerMASM* self) {
    return self->QsciLexerMASM::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnCaseSensitive(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_casesensitive_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMASM_Color(const QsciLexerMASM* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMASM_SuperColor(const QsciLexerMASM* self, int style) {
    return new QColor(self->QsciLexerMASM::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnColor(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_color_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMASM_EolFill(const QsciLexerMASM* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerMASM_SuperEolFill(const QsciLexerMASM* self, int style) {
    return self->QsciLexerMASM::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnEolFill(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_eolfill_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerMASM_Font(const QsciLexerMASM* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerMASM_SuperFont(const QsciLexerMASM* self, int style) {
    return new QFont(self->QsciLexerMASM::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnFont(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_font_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMASM_IndentationGuideView(const QsciLexerMASM* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerMASM_SuperIndentationGuideView(const QsciLexerMASM* self) {
    return self->QsciLexerMASM::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnIndentationGuideView(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMASM_Keywords(const QsciLexerMASM* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerMASM_SuperKeywords(const QsciLexerMASM* self, int set) {
    return (const char*)self->QsciLexerMASM::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnKeywords(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_keywords_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMASM_DefaultStyle(const QsciLexerMASM* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerMASM_SuperDefaultStyle(const QsciLexerMASM* self) {
    return self->QsciLexerMASM::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultStyle(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
libqt_string QsciLexerMASM_Description(const QsciLexerMASM* self, int style) {
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
void QsciLexerMASM_OnDescription(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_description_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Description_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMASM_Paper(const QsciLexerMASM* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMASM_SuperPaper(const QsciLexerMASM* self, int style) {
    return new QColor(self->QsciLexerMASM::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnPaper(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_paper_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMASM_DefaultColor2(const QsciLexerMASM* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMASM_SuperDefaultColor2(const QsciLexerMASM* self, int style) {
    return new QColor(self->QsciLexerMASM::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultColor2(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMASM_DefaultEolFill(const QsciLexerMASM* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerMASM_SuperDefaultEolFill(const QsciLexerMASM* self, int style) {
    return self->QsciLexerMASM::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultEolFill(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerMASM_DefaultFont2(const QsciLexerMASM* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerMASM_SuperDefaultFont2(const QsciLexerMASM* self, int style) {
    return new QFont(self->QsciLexerMASM::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultFont2(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMASM_DefaultPaper2(const QsciLexerMASM* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMASM_SuperDefaultPaper2(const QsciLexerMASM* self, int style) {
    return new QColor(self->QsciLexerMASM::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultPaper2(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetEditor(QsciLexerMASM* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerMASM_SuperSetEditor(QsciLexerMASM* self, QsciScintilla* editor) {
    self->QsciLexerMASM::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetEditor(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_seteditor_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_RefreshProperties(QsciLexerMASM* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerMASM_SuperRefreshProperties(QsciLexerMASM* self) {
    self->QsciLexerMASM::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnRefreshProperties(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMASM_StyleBitsNeeded(const QsciLexerMASM* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerMASM_SuperStyleBitsNeeded(const QsciLexerMASM* self) {
    return self->QsciLexerMASM::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnStyleBitsNeeded(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMASM_WordCharacters(const QsciLexerMASM* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerMASM_SuperWordCharacters(const QsciLexerMASM* self) {
    return (const char*)self->QsciLexerMASM::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnWordCharacters(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetAutoIndentStyle(QsciLexerMASM* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerMASM_SuperSetAutoIndentStyle(QsciLexerMASM* self, int autoindentstyle) {
    self->QsciLexerMASM::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetAutoIndentStyle(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetColor(QsciLexerMASM* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMASM_SuperSetColor(QsciLexerMASM* self, const QColor* c, int style) {
    self->QsciLexerMASM::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetColor(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_setcolor_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetEolFill(QsciLexerMASM* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMASM_SuperSetEolFill(QsciLexerMASM* self, bool eoffill, int style) {
    self->QsciLexerMASM::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetEolFill(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_seteolfill_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetFont(QsciLexerMASM* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMASM_SuperSetFont(QsciLexerMASM* self, const QFont* f, int style) {
    self->QsciLexerMASM::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetFont(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_setfont_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_SetPaper(QsciLexerMASM* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMASM_SuperSetPaper(QsciLexerMASM* self, const QColor* c, int style) {
    self->QsciLexerMASM::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetPaper(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_setpaper_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMASM_ReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm) {
        return vqscilexermasm->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMASM::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerMASM_SuperReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self)) {
        return vqscilexermasm->QsciLexerMASM::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerMASM::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnReadProperties(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_readproperties_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMASM_WriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm) {
        return vqscilexermasm->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMASM::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerMASM_SuperWriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self))) {
        return vqscilexermasm->QsciLexerMASM::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerMASM::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnWriteProperties(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self)))
        vqscilexermasm->qscilexermasm_writeproperties_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMASM_Event(QsciLexerMASM* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerMASM_SuperEvent(QsciLexerMASM* self, QEvent* event) {
    return self->QsciLexerMASM::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnEvent(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_event_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMASM_EventFilter(QsciLexerMASM* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerMASM_SuperEventFilter(QsciLexerMASM* self, QObject* watched, QEvent* event) {
    return self->QsciLexerMASM::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnEventFilter(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_eventfilter_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_TimerEvent(QsciLexerMASM* self, QTimerEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm) {
        vqscilexermasm->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMASM::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMASM_SuperTimerEvent(QsciLexerMASM* self, QTimerEvent* event) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self)) {
        vqscilexermasm->QsciLexerMASM::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMASM::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnTimerEvent(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_timerevent_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_ChildEvent(QsciLexerMASM* self, QChildEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm) {
        vqscilexermasm->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMASM::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMASM_SuperChildEvent(QsciLexerMASM* self, QChildEvent* event) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self)) {
        vqscilexermasm->QsciLexerMASM::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMASM::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnChildEvent(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_childevent_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_CustomEvent(QsciLexerMASM* self, QEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm) {
        vqscilexermasm->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMASM::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMASM_SuperCustomEvent(QsciLexerMASM* self, QEvent* event) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self)) {
        vqscilexermasm->QsciLexerMASM::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMASM::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnCustomEvent(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_customevent_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_ConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm) {
        vqscilexermasm->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMASM::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMASM_SuperConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self)) {
        vqscilexermasm->QsciLexerMASM::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerMASM::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnConnectNotify(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_connectnotify_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMASM_DisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm) {
        vqscilexermasm->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMASM::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMASM_SuperDisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self)) {
        vqscilexermasm->QsciLexerMASM::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerMASM::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDisconnectNotify(QsciLexerMASM* self, intptr_t slot) {
    if (auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self))
        vqscilexermasm->qscilexermasm_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerMASM_TextAsBytes(const QsciLexerMASM* self, const libqt_string text) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexermasm->VirtualQsciLexerMASM::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerMASM::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerMASM_BytesAsText(const QsciLexerMASM* self, const char* bytes, int size) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self))) {
        auto _ret = vqscilexermasm->VirtualQsciLexerMASM::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerMASM::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerMASM_Sender(const QsciLexerMASM* self) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self))) {
        return vqscilexermasm->VirtualQsciLexerMASM::sender();
    } else
        qFatal("Error: Protected method QsciLexerMASM::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerMASM_SenderSignalIndex(const QsciLexerMASM* self) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self))) {
        return vqscilexermasm->VirtualQsciLexerMASM::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerMASM::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerMASM_Receivers(const QsciLexerMASM* self, const char* signal) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self))) {
        return vqscilexermasm->VirtualQsciLexerMASM::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerMASM::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerMASM_IsSignalConnected(const QsciLexerMASM* self, const QMetaMethod* signal) {
    if (auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self))) {
        return vqscilexermasm->VirtualQsciLexerMASM::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerMASM::isSignalConnected called without a directly constructed type");
}

void QsciLexerMASM_Delete(QsciLexerMASM* self) {
    delete self;
}
