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
#include <qscilexernasm.h>
#include "libqscilexernasm.h"
#include "libqscilexernasm.hxx"

QsciLexerNASM* QsciLexerNASM_new() {
    return new VirtualQsciLexerNASM();
}

QsciLexerNASM* QsciLexerNASM_new2(QObject* parent) {
    return new VirtualQsciLexerNASM(parent);
}

QMetaObject* QsciLexerNASM_MetaObject(const QsciLexerNASM* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerNASM_Metacast(QsciLexerNASM* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerNASM_Metacall(QsciLexerNASM* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerNASM_Tr(const char* s) {
    auto _ret = QsciLexerNASM::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerNASM_Language(const QsciLexerNASM* self) {
    return (const char*)self->language();
}

const char* QsciLexerNASM_Lexer(const QsciLexerNASM* self) {
    return (const char*)self->lexer();
}

libqt_string QsciLexerNASM_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerNASM::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerNASM_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerNASM::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerNASM_SuperMetaObject(const QsciLexerNASM* self) {
    return (QMetaObject*)self->QsciLexerNASM::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnMetaObject(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_metaobject_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerNASM_SuperMetacast(QsciLexerNASM* self, const char* param1) {
    return self->QsciLexerNASM::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnMetacast(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_metacast_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerNASM_SuperMetacall(QsciLexerNASM* self, int param1, int param2, void** param3) {
    return self->QsciLexerNASM::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnMetacall(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_metacall_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetFoldComments(QsciLexerNASM* self, bool fold) {
    self->setFoldComments(fold);
}

// Base class handler implementation
void QsciLexerNASM_SuperSetFoldComments(QsciLexerNASM* self, bool fold) {
    self->QsciLexerNASM::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetFoldComments(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetFoldComments_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetFoldCompact(QsciLexerNASM* self, bool fold) {
    self->setFoldCompact(fold);
}

// Base class handler implementation
void QsciLexerNASM_SuperSetFoldCompact(QsciLexerNASM* self, bool fold) {
    self->QsciLexerNASM::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetFoldCompact(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetCommentDelimiter(QsciLexerNASM* self, QChar* delimeter) {
    self->setCommentDelimiter(*delimeter);
}

// Base class handler implementation
void QsciLexerNASM_SuperSetCommentDelimiter(QsciLexerNASM* self, QChar* delimeter) {
    self->QsciLexerNASM::setCommentDelimiter(*delimeter);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetCommentDelimiter(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_setcommentdelimiter_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetCommentDelimiter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetFoldSyntaxBased(QsciLexerNASM* self, bool syntax_based) {
    self->setFoldSyntaxBased(syntax_based);
}

// Base class handler implementation
void QsciLexerNASM_SuperSetFoldSyntaxBased(QsciLexerNASM* self, bool syntax_based) {
    self->QsciLexerNASM::setFoldSyntaxBased(syntax_based);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetFoldSyntaxBased(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_setfoldsyntaxbased_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetFoldSyntaxBased_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerNASM_LexerId(const QsciLexerNASM* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerNASM_SuperLexerId(const QsciLexerNASM* self) {
    return self->QsciLexerNASM::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnLexerId(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_lexerid_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerNASM_AutoCompletionFillups(const QsciLexerNASM* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerNASM_SuperAutoCompletionFillups(const QsciLexerNASM* self) {
    return (const char*)self->QsciLexerNASM::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnAutoCompletionFillups(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerNASM_AutoCompletionWordSeparators(const QsciLexerNASM* self) {
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
libqt_list /* of libqt_string */ QsciLexerNASM_SuperAutoCompletionWordSeparators(const QsciLexerNASM* self) {
    QList<QString> _ret = self->QsciLexerNASM::autoCompletionWordSeparators();
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
void QsciLexerNASM_OnAutoCompletionWordSeparators(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerNASM_BlockEnd(const QsciLexerNASM* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerNASM_SuperBlockEnd(const QsciLexerNASM* self, int* style) {
    return (const char*)self->QsciLexerNASM::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBlockEnd(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_blockend_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerNASM_BlockLookback(const QsciLexerNASM* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerNASM_SuperBlockLookback(const QsciLexerNASM* self) {
    return self->QsciLexerNASM::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBlockLookback(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_blocklookback_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerNASM_BlockStart(const QsciLexerNASM* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerNASM_SuperBlockStart(const QsciLexerNASM* self, int* style) {
    return (const char*)self->QsciLexerNASM::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBlockStart(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_blockstart_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerNASM_BlockStartKeyword(const QsciLexerNASM* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerNASM_SuperBlockStartKeyword(const QsciLexerNASM* self, int* style) {
    return (const char*)self->QsciLexerNASM::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBlockStartKeyword(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerNASM_BraceStyle(const QsciLexerNASM* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerNASM_SuperBraceStyle(const QsciLexerNASM* self) {
    return self->QsciLexerNASM::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBraceStyle(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_bracestyle_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerNASM_CaseSensitive(const QsciLexerNASM* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerNASM_SuperCaseSensitive(const QsciLexerNASM* self) {
    return self->QsciLexerNASM::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnCaseSensitive(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_casesensitive_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerNASM_Color(const QsciLexerNASM* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerNASM_SuperColor(const QsciLexerNASM* self, int style) {
    return new QColor(self->QsciLexerNASM::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnColor(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_color_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerNASM_EolFill(const QsciLexerNASM* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerNASM_SuperEolFill(const QsciLexerNASM* self, int style) {
    return self->QsciLexerNASM::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnEolFill(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_eolfill_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerNASM_Font(const QsciLexerNASM* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerNASM_SuperFont(const QsciLexerNASM* self, int style) {
    return new QFont(self->QsciLexerNASM::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnFont(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_font_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerNASM_IndentationGuideView(const QsciLexerNASM* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerNASM_SuperIndentationGuideView(const QsciLexerNASM* self) {
    return self->QsciLexerNASM::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnIndentationGuideView(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerNASM_Keywords(const QsciLexerNASM* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerNASM_SuperKeywords(const QsciLexerNASM* self, int set) {
    return (const char*)self->QsciLexerNASM::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnKeywords(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_keywords_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerNASM_DefaultStyle(const QsciLexerNASM* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerNASM_SuperDefaultStyle(const QsciLexerNASM* self) {
    return self->QsciLexerNASM::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultStyle(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
libqt_string QsciLexerNASM_Description(const QsciLexerNASM* self, int style) {
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
void QsciLexerNASM_OnDescription(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_description_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Description_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerNASM_Paper(const QsciLexerNASM* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerNASM_SuperPaper(const QsciLexerNASM* self, int style) {
    return new QColor(self->QsciLexerNASM::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnPaper(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_paper_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerNASM_DefaultColor2(const QsciLexerNASM* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerNASM_SuperDefaultColor2(const QsciLexerNASM* self, int style) {
    return new QColor(self->QsciLexerNASM::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultColor2(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerNASM_DefaultEolFill(const QsciLexerNASM* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerNASM_SuperDefaultEolFill(const QsciLexerNASM* self, int style) {
    return self->QsciLexerNASM::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultEolFill(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerNASM_DefaultFont2(const QsciLexerNASM* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerNASM_SuperDefaultFont2(const QsciLexerNASM* self, int style) {
    return new QFont(self->QsciLexerNASM::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultFont2(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerNASM_DefaultPaper2(const QsciLexerNASM* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerNASM_SuperDefaultPaper2(const QsciLexerNASM* self, int style) {
    return new QColor(self->QsciLexerNASM::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultPaper2(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetEditor(QsciLexerNASM* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerNASM_SuperSetEditor(QsciLexerNASM* self, QsciScintilla* editor) {
    self->QsciLexerNASM::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetEditor(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_seteditor_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_RefreshProperties(QsciLexerNASM* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerNASM_SuperRefreshProperties(QsciLexerNASM* self) {
    self->QsciLexerNASM::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnRefreshProperties(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerNASM_StyleBitsNeeded(const QsciLexerNASM* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerNASM_SuperStyleBitsNeeded(const QsciLexerNASM* self) {
    return self->QsciLexerNASM::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnStyleBitsNeeded(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerNASM_WordCharacters(const QsciLexerNASM* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerNASM_SuperWordCharacters(const QsciLexerNASM* self) {
    return (const char*)self->QsciLexerNASM::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnWordCharacters(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetAutoIndentStyle(QsciLexerNASM* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerNASM_SuperSetAutoIndentStyle(QsciLexerNASM* self, int autoindentstyle) {
    self->QsciLexerNASM::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetAutoIndentStyle(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetColor(QsciLexerNASM* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerNASM_SuperSetColor(QsciLexerNASM* self, const QColor* c, int style) {
    self->QsciLexerNASM::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetColor(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_setcolor_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetEolFill(QsciLexerNASM* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerNASM_SuperSetEolFill(QsciLexerNASM* self, bool eoffill, int style) {
    self->QsciLexerNASM::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetEolFill(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_seteolfill_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetFont(QsciLexerNASM* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerNASM_SuperSetFont(QsciLexerNASM* self, const QFont* f, int style) {
    self->QsciLexerNASM::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetFont(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_setfont_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_SetPaper(QsciLexerNASM* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerNASM_SuperSetPaper(QsciLexerNASM* self, const QColor* c, int style) {
    self->QsciLexerNASM::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetPaper(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_setpaper_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerNASM_ReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm) {
        return vqscilexernasm->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerNASM::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerNASM_SuperReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self)) {
        return vqscilexernasm->QsciLexerNASM::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerNASM::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnReadProperties(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_readproperties_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerNASM_WriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm) {
        return vqscilexernasm->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerNASM::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerNASM_SuperWriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self))) {
        return vqscilexernasm->QsciLexerNASM::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerNASM::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnWriteProperties(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self)))
        vqscilexernasm->qscilexernasm_writeproperties_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerNASM_Event(QsciLexerNASM* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerNASM_SuperEvent(QsciLexerNASM* self, QEvent* event) {
    return self->QsciLexerNASM::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnEvent(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_event_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerNASM_EventFilter(QsciLexerNASM* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerNASM_SuperEventFilter(QsciLexerNASM* self, QObject* watched, QEvent* event) {
    return self->QsciLexerNASM::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnEventFilter(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_eventfilter_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_TimerEvent(QsciLexerNASM* self, QTimerEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm) {
        vqscilexernasm->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerNASM::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerNASM_SuperTimerEvent(QsciLexerNASM* self, QTimerEvent* event) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self)) {
        vqscilexernasm->QsciLexerNASM::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerNASM::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnTimerEvent(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_timerevent_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_ChildEvent(QsciLexerNASM* self, QChildEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm) {
        vqscilexernasm->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerNASM::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerNASM_SuperChildEvent(QsciLexerNASM* self, QChildEvent* event) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self)) {
        vqscilexernasm->QsciLexerNASM::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerNASM::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnChildEvent(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_childevent_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_CustomEvent(QsciLexerNASM* self, QEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm) {
        vqscilexernasm->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerNASM::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerNASM_SuperCustomEvent(QsciLexerNASM* self, QEvent* event) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self)) {
        vqscilexernasm->QsciLexerNASM::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerNASM::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnCustomEvent(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_customevent_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_ConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm) {
        vqscilexernasm->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerNASM::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerNASM_SuperConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self)) {
        vqscilexernasm->QsciLexerNASM::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerNASM::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnConnectNotify(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_connectnotify_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerNASM_DisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm) {
        vqscilexernasm->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerNASM::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerNASM_SuperDisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self)) {
        vqscilexernasm->QsciLexerNASM::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerNASM::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDisconnectNotify(QsciLexerNASM* self, intptr_t slot) {
    if (auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self))
        vqscilexernasm->qscilexernasm_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerNASM_TextAsBytes(const QsciLexerNASM* self, const libqt_string text) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexernasm->VirtualQsciLexerNASM::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerNASM::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerNASM_BytesAsText(const QsciLexerNASM* self, const char* bytes, int size) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self))) {
        auto _ret = vqscilexernasm->VirtualQsciLexerNASM::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerNASM::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerNASM_Sender(const QsciLexerNASM* self) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self))) {
        return vqscilexernasm->VirtualQsciLexerNASM::sender();
    } else
        qFatal("Error: Protected method QsciLexerNASM::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerNASM_SenderSignalIndex(const QsciLexerNASM* self) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self))) {
        return vqscilexernasm->VirtualQsciLexerNASM::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerNASM::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerNASM_Receivers(const QsciLexerNASM* self, const char* signal) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self))) {
        return vqscilexernasm->VirtualQsciLexerNASM::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerNASM::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerNASM_IsSignalConnected(const QsciLexerNASM* self, const QMetaMethod* signal) {
    if (auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self))) {
        return vqscilexernasm->VirtualQsciLexerNASM::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerNASM::isSignalConnected called without a directly constructed type");
}

void QsciLexerNASM_Delete(QsciLexerNASM* self) {
    delete self;
}
