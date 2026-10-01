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
#include <qscilexerperl.h>
#include "libqscilexerperl.h"
#include "libqscilexerperl.hxx"

QsciLexerPerl* QsciLexerPerl_new() {
    return new VirtualQsciLexerPerl();
}

QsciLexerPerl* QsciLexerPerl_new2(QObject* parent) {
    return new VirtualQsciLexerPerl(parent);
}

QMetaObject* QsciLexerPerl_MetaObject(const QsciLexerPerl* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPerl_Metacast(QsciLexerPerl* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPerl_Metacall(QsciLexerPerl* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerPerl_Tr(const char* s) {
    auto _ret = QsciLexerPerl::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPerl_Language(const QsciLexerPerl* self) {
    return (const char*)self->language();
}

const char* QsciLexerPerl_Lexer(const QsciLexerPerl* self) {
    return (const char*)self->lexer();
}

libqt_list /* of libqt_string */ QsciLexerPerl_AutoCompletionWordSeparators(const QsciLexerPerl* self) {
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

const char* QsciLexerPerl_BlockEnd(const QsciLexerPerl* self) {
    return (const char*)self->blockEnd();
}

const char* QsciLexerPerl_BlockStart(const QsciLexerPerl* self) {
    return (const char*)self->blockStart();
}

int QsciLexerPerl_BraceStyle(const QsciLexerPerl* self) {
    return self->braceStyle();
}

const char* QsciLexerPerl_WordCharacters(const QsciLexerPerl* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerPerl_DefaultColor(const QsciLexerPerl* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPerl_DefaultEolFill(const QsciLexerPerl* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPerl_DefaultFont(const QsciLexerPerl* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPerl_DefaultPaper(const QsciLexerPerl* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPerl_Keywords(const QsciLexerPerl* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerPerl_Description(const QsciLexerPerl* self, int style) {
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

void QsciLexerPerl_RefreshProperties(QsciLexerPerl* self) {
    self->refreshProperties();
}

void QsciLexerPerl_SetFoldAtElse(QsciLexerPerl* self, bool fold) {
    self->setFoldAtElse(fold);
}

bool QsciLexerPerl_FoldAtElse(const QsciLexerPerl* self) {
    return self->foldAtElse();
}

bool QsciLexerPerl_FoldComments(const QsciLexerPerl* self) {
    return self->foldComments();
}

bool QsciLexerPerl_FoldCompact(const QsciLexerPerl* self) {
    return self->foldCompact();
}

void QsciLexerPerl_SetFoldPackages(QsciLexerPerl* self, bool fold) {
    self->setFoldPackages(fold);
}

bool QsciLexerPerl_FoldPackages(const QsciLexerPerl* self) {
    return self->foldPackages();
}

void QsciLexerPerl_SetFoldPODBlocks(QsciLexerPerl* self, bool fold) {
    self->setFoldPODBlocks(fold);
}

bool QsciLexerPerl_FoldPODBlocks(const QsciLexerPerl* self) {
    return self->foldPODBlocks();
}

void QsciLexerPerl_SetFoldComments(QsciLexerPerl* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerPerl_SetFoldCompact(QsciLexerPerl* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerPerl_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerPerl::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPerl_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerPerl::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPerl_BlockEnd1(const QsciLexerPerl* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerPerl_BlockStart1(const QsciLexerPerl* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerPerl_SuperMetaObject(const QsciLexerPerl* self) {
    return (QMetaObject*)self->QsciLexerPerl::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnMetaObject(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_metaobject_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerPerl_SuperMetacast(QsciLexerPerl* self, const char* param1) {
    return self->QsciLexerPerl::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnMetacast(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_metacast_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerPerl_SuperMetacall(QsciLexerPerl* self, int param1, int param2, void** param3) {
    return self->QsciLexerPerl::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnMetacall(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_metacall_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPerl_SuperSetFoldComments(QsciLexerPerl* self, bool fold) {
    self->QsciLexerPerl::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFoldComments(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPerl_SuperSetFoldCompact(QsciLexerPerl* self, bool fold) {
    self->QsciLexerPerl::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFoldCompact(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPerl_LexerId(const QsciLexerPerl* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerPerl_SuperLexerId(const QsciLexerPerl* self) {
    return self->QsciLexerPerl::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnLexerId(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_lexerid_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPerl_AutoCompletionFillups(const QsciLexerPerl* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerPerl_SuperAutoCompletionFillups(const QsciLexerPerl* self) {
    return (const char*)self->QsciLexerPerl::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnAutoCompletionFillups(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPerl_BlockLookback(const QsciLexerPerl* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerPerl_SuperBlockLookback(const QsciLexerPerl* self) {
    return self->QsciLexerPerl::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockLookback(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_blocklookback_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPerl_BlockStartKeyword(const QsciLexerPerl* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPerl_SuperBlockStartKeyword(const QsciLexerPerl* self, int* style) {
    return (const char*)self->QsciLexerPerl::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockStartKeyword(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPerl_CaseSensitive(const QsciLexerPerl* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerPerl_SuperCaseSensitive(const QsciLexerPerl* self) {
    return self->QsciLexerPerl::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnCaseSensitive(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_casesensitive_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPerl_Color(const QsciLexerPerl* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPerl_SuperColor(const QsciLexerPerl* self, int style) {
    return new QColor(self->QsciLexerPerl::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnColor(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_color_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPerl_EolFill(const QsciLexerPerl* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerPerl_SuperEolFill(const QsciLexerPerl* self, int style) {
    return self->QsciLexerPerl::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEolFill(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_eolfill_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPerl_Font(const QsciLexerPerl* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPerl_SuperFont(const QsciLexerPerl* self, int style) {
    return new QFont(self->QsciLexerPerl::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnFont(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_font_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPerl_IndentationGuideView(const QsciLexerPerl* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerPerl_SuperIndentationGuideView(const QsciLexerPerl* self) {
    return self->QsciLexerPerl::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnIndentationGuideView(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPerl_DefaultStyle(const QsciLexerPerl* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerPerl_SuperDefaultStyle(const QsciLexerPerl* self) {
    return self->QsciLexerPerl::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultStyle(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPerl_Paper(const QsciLexerPerl* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPerl_SuperPaper(const QsciLexerPerl* self, int style) {
    return new QColor(self->QsciLexerPerl::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnPaper(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_paper_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPerl_DefaultColor2(const QsciLexerPerl* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPerl_SuperDefaultColor2(const QsciLexerPerl* self, int style) {
    return new QColor(self->QsciLexerPerl::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultColor2(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPerl_DefaultFont2(const QsciLexerPerl* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPerl_SuperDefaultFont2(const QsciLexerPerl* self, int style) {
    return new QFont(self->QsciLexerPerl::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultFont2(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPerl_DefaultPaper2(const QsciLexerPerl* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPerl_SuperDefaultPaper2(const QsciLexerPerl* self, int style) {
    return new QColor(self->QsciLexerPerl::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultPaper2(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_SetEditor(QsciLexerPerl* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerPerl_SuperSetEditor(QsciLexerPerl* self, QsciScintilla* editor) {
    self->QsciLexerPerl::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetEditor(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_seteditor_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPerl_StyleBitsNeeded(const QsciLexerPerl* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerPerl_SuperStyleBitsNeeded(const QsciLexerPerl* self) {
    return self->QsciLexerPerl::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnStyleBitsNeeded(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_SetAutoIndentStyle(QsciLexerPerl* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerPerl_SuperSetAutoIndentStyle(QsciLexerPerl* self, int autoindentstyle) {
    self->QsciLexerPerl::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetAutoIndentStyle(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_SetColor(QsciLexerPerl* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPerl_SuperSetColor(QsciLexerPerl* self, const QColor* c, int style) {
    self->QsciLexerPerl::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetColor(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_setcolor_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_SetEolFill(QsciLexerPerl* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPerl_SuperSetEolFill(QsciLexerPerl* self, bool eoffill, int style) {
    self->QsciLexerPerl::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetEolFill(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_seteolfill_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_SetFont(QsciLexerPerl* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPerl_SuperSetFont(QsciLexerPerl* self, const QFont* f, int style) {
    self->QsciLexerPerl::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFont(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_setfont_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_SetPaper(QsciLexerPerl* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPerl_SuperSetPaper(QsciLexerPerl* self, const QColor* c, int style) {
    self->QsciLexerPerl::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetPaper(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_setpaper_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPerl_ReadProperties(QsciLexerPerl* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl) {
        return vqscilexerperl->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPerl::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPerl_SuperReadProperties(QsciLexerPerl* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        return vqscilexerperl->QsciLexerPerl::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPerl::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnReadProperties(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_readproperties_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPerl_WriteProperties(const QsciLexerPerl* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl) {
        return vqscilexerperl->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPerl::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPerl_SuperWriteProperties(const QsciLexerPerl* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->QsciLexerPerl::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPerl::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnWriteProperties(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self)))
        vqscilexerperl->qscilexerperl_writeproperties_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPerl_Event(QsciLexerPerl* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerPerl_SuperEvent(QsciLexerPerl* self, QEvent* event) {
    return self->QsciLexerPerl::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEvent(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_event_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPerl_EventFilter(QsciLexerPerl* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerPerl_SuperEventFilter(QsciLexerPerl* self, QObject* watched, QEvent* event) {
    return self->QsciLexerPerl::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEventFilter(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_eventfilter_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_TimerEvent(QsciLexerPerl* self, QTimerEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl) {
        vqscilexerperl->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPerl::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPerl_SuperTimerEvent(QsciLexerPerl* self, QTimerEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->QsciLexerPerl::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPerl::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnTimerEvent(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_timerevent_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_ChildEvent(QsciLexerPerl* self, QChildEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl) {
        vqscilexerperl->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPerl::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPerl_SuperChildEvent(QsciLexerPerl* self, QChildEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->QsciLexerPerl::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPerl::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnChildEvent(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_childevent_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_CustomEvent(QsciLexerPerl* self, QEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl) {
        vqscilexerperl->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPerl::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPerl_SuperCustomEvent(QsciLexerPerl* self, QEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->QsciLexerPerl::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPerl::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnCustomEvent(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_customevent_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_ConnectNotify(QsciLexerPerl* self, const QMetaMethod* signal) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl) {
        vqscilexerperl->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPerl::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPerl_SuperConnectNotify(QsciLexerPerl* self, const QMetaMethod* signal) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->QsciLexerPerl::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPerl::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnConnectNotify(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_connectnotify_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPerl_DisconnectNotify(QsciLexerPerl* self, const QMetaMethod* signal) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl) {
        vqscilexerperl->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPerl::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPerl_SuperDisconnectNotify(QsciLexerPerl* self, const QMetaMethod* signal) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->QsciLexerPerl::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPerl::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDisconnectNotify(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self))
        vqscilexerperl->qscilexerperl_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerPerl_TextAsBytes(const QsciLexerPerl* self, const libqt_string text) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerperl->VirtualQsciLexerPerl::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPerl::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerPerl_BytesAsText(const QsciLexerPerl* self, const char* bytes, int size) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        auto _ret = vqscilexerperl->VirtualQsciLexerPerl::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPerl::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerPerl_Sender(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->VirtualQsciLexerPerl::sender();
    } else
        qFatal("Error: Protected method QsciLexerPerl::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPerl_SenderSignalIndex(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->VirtualQsciLexerPerl::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerPerl::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPerl_Receivers(const QsciLexerPerl* self, const char* signal) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->VirtualQsciLexerPerl::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerPerl::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerPerl_IsSignalConnected(const QsciLexerPerl* self, const QMetaMethod* signal) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->VirtualQsciLexerPerl::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerPerl::isSignalConnected called without a directly constructed type");
}

void QsciLexerPerl_Delete(QsciLexerPerl* self) {
    delete self;
}
