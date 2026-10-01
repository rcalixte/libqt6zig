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
#include <qscilexerasm.h>
#include "libqscilexerasm.h"
#include "libqscilexerasm.hxx"

QsciLexerAsm* QsciLexerAsm_new() {
    return new VirtualQsciLexerAsm();
}

QsciLexerAsm* QsciLexerAsm_new2(QObject* parent) {
    return new VirtualQsciLexerAsm(parent);
}

QMetaObject* QsciLexerAsm_MetaObject(const QsciLexerAsm* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerAsm_Metacast(QsciLexerAsm* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerAsm_Metacall(QsciLexerAsm* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerAsm_Tr(const char* s) {
    auto _ret = QsciLexerAsm::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerAsm_DefaultColor(const QsciLexerAsm* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerAsm_DefaultEolFill(const QsciLexerAsm* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerAsm_DefaultFont(const QsciLexerAsm* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerAsm_DefaultPaper(const QsciLexerAsm* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerAsm_Keywords(const QsciLexerAsm* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerAsm_Description(const QsciLexerAsm* self, int style) {
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

void QsciLexerAsm_RefreshProperties(QsciLexerAsm* self) {
    self->refreshProperties();
}

bool QsciLexerAsm_FoldComments(const QsciLexerAsm* self) {
    return self->foldComments();
}

bool QsciLexerAsm_FoldCompact(const QsciLexerAsm* self) {
    return self->foldCompact();
}

QChar* QsciLexerAsm_CommentDelimiter(const QsciLexerAsm* self) {
    return new QChar(self->commentDelimiter());
}

bool QsciLexerAsm_FoldSyntaxBased(const QsciLexerAsm* self) {
    return self->foldSyntaxBased();
}

void QsciLexerAsm_SetFoldComments(QsciLexerAsm* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerAsm_SetFoldCompact(QsciLexerAsm* self, bool fold) {
    self->setFoldCompact(fold);
}

void QsciLexerAsm_SetCommentDelimiter(QsciLexerAsm* self, QChar* delimeter) {
    self->setCommentDelimiter(*delimeter);
}

void QsciLexerAsm_SetFoldSyntaxBased(QsciLexerAsm* self, bool syntax_based) {
    self->setFoldSyntaxBased(syntax_based);
}

libqt_string QsciLexerAsm_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerAsm::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerAsm_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerAsm::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerAsm_SuperMetaObject(const QsciLexerAsm* self) {
    return (QMetaObject*)self->QsciLexerAsm::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnMetaObject(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_metaobject_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerAsm_SuperMetacast(QsciLexerAsm* self, const char* param1) {
    return self->QsciLexerAsm::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnMetacast(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_metacast_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerAsm_SuperMetacall(QsciLexerAsm* self, int param1, int param2, void** param3) {
    return self->QsciLexerAsm::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnMetacall(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_metacall_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerAsm_SuperSetFoldComments(QsciLexerAsm* self, bool fold) {
    self->QsciLexerAsm::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetFoldComments(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerAsm_SuperSetFoldCompact(QsciLexerAsm* self, bool fold) {
    self->QsciLexerAsm::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetFoldCompact(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetFoldCompact_Callback>(slot);
}

// Base class handler implementation
void QsciLexerAsm_SuperSetCommentDelimiter(QsciLexerAsm* self, QChar* delimeter) {
    self->QsciLexerAsm::setCommentDelimiter(*delimeter);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetCommentDelimiter(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_setcommentdelimiter_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetCommentDelimiter_Callback>(slot);
}

// Base class handler implementation
void QsciLexerAsm_SuperSetFoldSyntaxBased(QsciLexerAsm* self, bool syntax_based) {
    self->QsciLexerAsm::setFoldSyntaxBased(syntax_based);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetFoldSyntaxBased(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_setfoldsyntaxbased_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetFoldSyntaxBased_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAsm_Language(const QsciLexerAsm* self) {
    return (const char*)self->language();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnLanguage(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_language_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Language_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAsm_Lexer(const QsciLexerAsm* self) {
    return (const char*)self->lexer();
}

// Base class handler implementation
const char* QsciLexerAsm_SuperLexer(const QsciLexerAsm* self) {
    return (const char*)self->QsciLexerAsm::lexer();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnLexer(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_lexer_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Lexer_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAsm_LexerId(const QsciLexerAsm* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerAsm_SuperLexerId(const QsciLexerAsm* self) {
    return self->QsciLexerAsm::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnLexerId(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_lexerid_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAsm_AutoCompletionFillups(const QsciLexerAsm* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerAsm_SuperAutoCompletionFillups(const QsciLexerAsm* self) {
    return (const char*)self->QsciLexerAsm::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnAutoCompletionFillups(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerAsm_AutoCompletionWordSeparators(const QsciLexerAsm* self) {
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
libqt_list /* of libqt_string */ QsciLexerAsm_SuperAutoCompletionWordSeparators(const QsciLexerAsm* self) {
    QList<QString> _ret = self->QsciLexerAsm::autoCompletionWordSeparators();
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
void QsciLexerAsm_OnAutoCompletionWordSeparators(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAsm_BlockEnd(const QsciLexerAsm* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerAsm_SuperBlockEnd(const QsciLexerAsm* self, int* style) {
    return (const char*)self->QsciLexerAsm::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBlockEnd(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_blockend_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAsm_BlockLookback(const QsciLexerAsm* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerAsm_SuperBlockLookback(const QsciLexerAsm* self) {
    return self->QsciLexerAsm::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBlockLookback(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_blocklookback_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAsm_BlockStart(const QsciLexerAsm* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerAsm_SuperBlockStart(const QsciLexerAsm* self, int* style) {
    return (const char*)self->QsciLexerAsm::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBlockStart(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_blockstart_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAsm_BlockStartKeyword(const QsciLexerAsm* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerAsm_SuperBlockStartKeyword(const QsciLexerAsm* self, int* style) {
    return (const char*)self->QsciLexerAsm::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBlockStartKeyword(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAsm_BraceStyle(const QsciLexerAsm* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerAsm_SuperBraceStyle(const QsciLexerAsm* self) {
    return self->QsciLexerAsm::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBraceStyle(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_bracestyle_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAsm_CaseSensitive(const QsciLexerAsm* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerAsm_SuperCaseSensitive(const QsciLexerAsm* self) {
    return self->QsciLexerAsm::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnCaseSensitive(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_casesensitive_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerAsm_Color(const QsciLexerAsm* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerAsm_SuperColor(const QsciLexerAsm* self, int style) {
    return new QColor(self->QsciLexerAsm::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnColor(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_color_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAsm_EolFill(const QsciLexerAsm* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerAsm_SuperEolFill(const QsciLexerAsm* self, int style) {
    return self->QsciLexerAsm::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnEolFill(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_eolfill_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerAsm_Font(const QsciLexerAsm* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerAsm_SuperFont(const QsciLexerAsm* self, int style) {
    return new QFont(self->QsciLexerAsm::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnFont(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_font_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAsm_IndentationGuideView(const QsciLexerAsm* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerAsm_SuperIndentationGuideView(const QsciLexerAsm* self) {
    return self->QsciLexerAsm::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnIndentationGuideView(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAsm_DefaultStyle(const QsciLexerAsm* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerAsm_SuperDefaultStyle(const QsciLexerAsm* self) {
    return self->QsciLexerAsm::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDefaultStyle(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerAsm_Paper(const QsciLexerAsm* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerAsm_SuperPaper(const QsciLexerAsm* self, int style) {
    return new QColor(self->QsciLexerAsm::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnPaper(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_paper_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerAsm_DefaultColor2(const QsciLexerAsm* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerAsm_SuperDefaultColor2(const QsciLexerAsm* self, int style) {
    return new QColor(self->QsciLexerAsm::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDefaultColor2(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerAsm_DefaultFont2(const QsciLexerAsm* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerAsm_SuperDefaultFont2(const QsciLexerAsm* self, int style) {
    return new QFont(self->QsciLexerAsm::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDefaultFont2(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerAsm_DefaultPaper2(const QsciLexerAsm* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerAsm_SuperDefaultPaper2(const QsciLexerAsm* self, int style) {
    return new QColor(self->QsciLexerAsm::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDefaultPaper2(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_SetEditor(QsciLexerAsm* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerAsm_SuperSetEditor(QsciLexerAsm* self, QsciScintilla* editor) {
    self->QsciLexerAsm::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetEditor(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_seteditor_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAsm_StyleBitsNeeded(const QsciLexerAsm* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerAsm_SuperStyleBitsNeeded(const QsciLexerAsm* self) {
    return self->QsciLexerAsm::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnStyleBitsNeeded(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAsm_WordCharacters(const QsciLexerAsm* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerAsm_SuperWordCharacters(const QsciLexerAsm* self) {
    return (const char*)self->QsciLexerAsm::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnWordCharacters(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_SetAutoIndentStyle(QsciLexerAsm* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerAsm_SuperSetAutoIndentStyle(QsciLexerAsm* self, int autoindentstyle) {
    self->QsciLexerAsm::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetAutoIndentStyle(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_SetColor(QsciLexerAsm* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerAsm_SuperSetColor(QsciLexerAsm* self, const QColor* c, int style) {
    self->QsciLexerAsm::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetColor(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_setcolor_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_SetEolFill(QsciLexerAsm* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerAsm_SuperSetEolFill(QsciLexerAsm* self, bool eoffill, int style) {
    self->QsciLexerAsm::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetEolFill(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_seteolfill_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_SetFont(QsciLexerAsm* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerAsm_SuperSetFont(QsciLexerAsm* self, const QFont* f, int style) {
    self->QsciLexerAsm::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetFont(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_setfont_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_SetPaper(QsciLexerAsm* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerAsm_SuperSetPaper(QsciLexerAsm* self, const QColor* c, int style) {
    self->QsciLexerAsm::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetPaper(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_setpaper_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAsm_ReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm) {
        return vqscilexerasm->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAsm::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerAsm_SuperReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self)) {
        return vqscilexerasm->QsciLexerAsm::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerAsm::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnReadProperties(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_readproperties_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAsm_WriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm) {
        return vqscilexerasm->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAsm::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerAsm_SuperWriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self))) {
        return vqscilexerasm->QsciLexerAsm::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerAsm::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnWriteProperties(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self)))
        vqscilexerasm->qscilexerasm_writeproperties_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAsm_Event(QsciLexerAsm* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerAsm_SuperEvent(QsciLexerAsm* self, QEvent* event) {
    return self->QsciLexerAsm::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnEvent(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_event_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAsm_EventFilter(QsciLexerAsm* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerAsm_SuperEventFilter(QsciLexerAsm* self, QObject* watched, QEvent* event) {
    return self->QsciLexerAsm::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnEventFilter(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_eventfilter_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_TimerEvent(QsciLexerAsm* self, QTimerEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm) {
        vqscilexerasm->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAsm::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAsm_SuperTimerEvent(QsciLexerAsm* self, QTimerEvent* event) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self)) {
        vqscilexerasm->QsciLexerAsm::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerAsm::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnTimerEvent(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_timerevent_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_ChildEvent(QsciLexerAsm* self, QChildEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm) {
        vqscilexerasm->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAsm::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAsm_SuperChildEvent(QsciLexerAsm* self, QChildEvent* event) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self)) {
        vqscilexerasm->QsciLexerAsm::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerAsm::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnChildEvent(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_childevent_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_CustomEvent(QsciLexerAsm* self, QEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm) {
        vqscilexerasm->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAsm::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAsm_SuperCustomEvent(QsciLexerAsm* self, QEvent* event) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self)) {
        vqscilexerasm->QsciLexerAsm::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerAsm::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnCustomEvent(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_customevent_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_ConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm) {
        vqscilexerasm->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAsm::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAsm_SuperConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self)) {
        vqscilexerasm->QsciLexerAsm::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerAsm::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnConnectNotify(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_connectnotify_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAsm_DisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm) {
        vqscilexerasm->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAsm::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAsm_SuperDisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self)) {
        vqscilexerasm->QsciLexerAsm::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerAsm::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDisconnectNotify(QsciLexerAsm* self, intptr_t slot) {
    if (auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self))
        vqscilexerasm->qscilexerasm_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerAsm_TextAsBytes(const QsciLexerAsm* self, const libqt_string text) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerasm->VirtualQsciLexerAsm::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerAsm::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerAsm_BytesAsText(const QsciLexerAsm* self, const char* bytes, int size) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self))) {
        auto _ret = vqscilexerasm->VirtualQsciLexerAsm::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerAsm::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerAsm_Sender(const QsciLexerAsm* self) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self))) {
        return vqscilexerasm->VirtualQsciLexerAsm::sender();
    } else
        qFatal("Error: Protected method QsciLexerAsm::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerAsm_SenderSignalIndex(const QsciLexerAsm* self) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self))) {
        return vqscilexerasm->VirtualQsciLexerAsm::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerAsm::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerAsm_Receivers(const QsciLexerAsm* self, const char* signal) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self))) {
        return vqscilexerasm->VirtualQsciLexerAsm::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerAsm::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerAsm_IsSignalConnected(const QsciLexerAsm* self, const QMetaMethod* signal) {
    if (auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self))) {
        return vqscilexerasm->VirtualQsciLexerAsm::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerAsm::isSignalConnected called without a directly constructed type");
}

void QsciLexerAsm_Delete(QsciLexerAsm* self) {
    delete self;
}
