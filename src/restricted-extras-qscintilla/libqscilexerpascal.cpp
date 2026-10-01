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
#include <qscilexerpascal.h>
#include "libqscilexerpascal.h"
#include "libqscilexerpascal.hxx"

QsciLexerPascal* QsciLexerPascal_new() {
    return new VirtualQsciLexerPascal();
}

QsciLexerPascal* QsciLexerPascal_new2(QObject* parent) {
    return new VirtualQsciLexerPascal(parent);
}

QMetaObject* QsciLexerPascal_MetaObject(const QsciLexerPascal* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPascal_Metacast(QsciLexerPascal* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPascal_Metacall(QsciLexerPascal* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerPascal_Tr(const char* s) {
    auto _ret = QsciLexerPascal::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPascal_Language(const QsciLexerPascal* self) {
    return (const char*)self->language();
}

const char* QsciLexerPascal_Lexer(const QsciLexerPascal* self) {
    return (const char*)self->lexer();
}

libqt_list /* of libqt_string */ QsciLexerPascal_AutoCompletionWordSeparators(const QsciLexerPascal* self) {
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

const char* QsciLexerPascal_BlockEnd(const QsciLexerPascal* self) {
    return (const char*)self->blockEnd();
}

const char* QsciLexerPascal_BlockStart(const QsciLexerPascal* self) {
    return (const char*)self->blockStart();
}

const char* QsciLexerPascal_BlockStartKeyword(const QsciLexerPascal* self) {
    return (const char*)self->blockStartKeyword();
}

int QsciLexerPascal_BraceStyle(const QsciLexerPascal* self) {
    return self->braceStyle();
}

QColor* QsciLexerPascal_DefaultColor(const QsciLexerPascal* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPascal_DefaultEolFill(const QsciLexerPascal* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPascal_DefaultFont(const QsciLexerPascal* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPascal_DefaultPaper(const QsciLexerPascal* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPascal_Keywords(const QsciLexerPascal* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerPascal_Description(const QsciLexerPascal* self, int style) {
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

void QsciLexerPascal_RefreshProperties(QsciLexerPascal* self) {
    self->refreshProperties();
}

bool QsciLexerPascal_FoldComments(const QsciLexerPascal* self) {
    return self->foldComments();
}

bool QsciLexerPascal_FoldCompact(const QsciLexerPascal* self) {
    return self->foldCompact();
}

bool QsciLexerPascal_FoldPreprocessor(const QsciLexerPascal* self) {
    return self->foldPreprocessor();
}

void QsciLexerPascal_SetSmartHighlighting(QsciLexerPascal* self, bool enabled) {
    self->setSmartHighlighting(enabled);
}

bool QsciLexerPascal_SmartHighlighting(const QsciLexerPascal* self) {
    return self->smartHighlighting();
}

void QsciLexerPascal_SetFoldComments(QsciLexerPascal* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerPascal_SetFoldCompact(QsciLexerPascal* self, bool fold) {
    self->setFoldCompact(fold);
}

void QsciLexerPascal_SetFoldPreprocessor(QsciLexerPascal* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

libqt_string QsciLexerPascal_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerPascal::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPascal_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerPascal::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPascal_BlockEnd1(const QsciLexerPascal* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerPascal_BlockStart1(const QsciLexerPascal* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerPascal_BlockStartKeyword1(const QsciLexerPascal* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerPascal_SuperMetaObject(const QsciLexerPascal* self) {
    return (QMetaObject*)self->QsciLexerPascal::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnMetaObject(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_metaobject_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerPascal_SuperMetacast(QsciLexerPascal* self, const char* param1) {
    return self->QsciLexerPascal::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnMetacast(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_metacast_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerPascal_SuperMetacall(QsciLexerPascal* self, int param1, int param2, void** param3) {
    return self->QsciLexerPascal::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnMetacall(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_metacall_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPascal_SuperSetFoldComments(QsciLexerPascal* self, bool fold) {
    self->QsciLexerPascal::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetFoldComments(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPascal_SuperSetFoldCompact(QsciLexerPascal* self, bool fold) {
    self->QsciLexerPascal::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetFoldCompact(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetFoldCompact_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPascal_SuperSetFoldPreprocessor(QsciLexerPascal* self, bool fold) {
    self->QsciLexerPascal::setFoldPreprocessor(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetFoldPreprocessor(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_setfoldpreprocessor_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetFoldPreprocessor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPascal_LexerId(const QsciLexerPascal* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerPascal_SuperLexerId(const QsciLexerPascal* self) {
    return self->QsciLexerPascal::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnLexerId(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_lexerid_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPascal_AutoCompletionFillups(const QsciLexerPascal* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerPascal_SuperAutoCompletionFillups(const QsciLexerPascal* self) {
    return (const char*)self->QsciLexerPascal::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnAutoCompletionFillups(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPascal_BlockLookback(const QsciLexerPascal* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerPascal_SuperBlockLookback(const QsciLexerPascal* self) {
    return self->QsciLexerPascal::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnBlockLookback(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_blocklookback_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPascal_CaseSensitive(const QsciLexerPascal* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerPascal_SuperCaseSensitive(const QsciLexerPascal* self) {
    return self->QsciLexerPascal::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnCaseSensitive(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_casesensitive_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPascal_Color(const QsciLexerPascal* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPascal_SuperColor(const QsciLexerPascal* self, int style) {
    return new QColor(self->QsciLexerPascal::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnColor(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_color_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPascal_EolFill(const QsciLexerPascal* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerPascal_SuperEolFill(const QsciLexerPascal* self, int style) {
    return self->QsciLexerPascal::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnEolFill(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_eolfill_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPascal_Font(const QsciLexerPascal* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPascal_SuperFont(const QsciLexerPascal* self, int style) {
    return new QFont(self->QsciLexerPascal::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnFont(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_font_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPascal_IndentationGuideView(const QsciLexerPascal* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerPascal_SuperIndentationGuideView(const QsciLexerPascal* self) {
    return self->QsciLexerPascal::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnIndentationGuideView(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPascal_DefaultStyle(const QsciLexerPascal* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerPascal_SuperDefaultStyle(const QsciLexerPascal* self) {
    return self->QsciLexerPascal::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDefaultStyle(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPascal_Paper(const QsciLexerPascal* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPascal_SuperPaper(const QsciLexerPascal* self, int style) {
    return new QColor(self->QsciLexerPascal::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnPaper(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_paper_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPascal_DefaultColor2(const QsciLexerPascal* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPascal_SuperDefaultColor2(const QsciLexerPascal* self, int style) {
    return new QColor(self->QsciLexerPascal::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDefaultColor2(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPascal_DefaultFont2(const QsciLexerPascal* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPascal_SuperDefaultFont2(const QsciLexerPascal* self, int style) {
    return new QFont(self->QsciLexerPascal::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDefaultFont2(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPascal_DefaultPaper2(const QsciLexerPascal* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPascal_SuperDefaultPaper2(const QsciLexerPascal* self, int style) {
    return new QColor(self->QsciLexerPascal::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDefaultPaper2(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_SetEditor(QsciLexerPascal* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerPascal_SuperSetEditor(QsciLexerPascal* self, QsciScintilla* editor) {
    self->QsciLexerPascal::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetEditor(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_seteditor_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPascal_StyleBitsNeeded(const QsciLexerPascal* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerPascal_SuperStyleBitsNeeded(const QsciLexerPascal* self) {
    return self->QsciLexerPascal::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnStyleBitsNeeded(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPascal_WordCharacters(const QsciLexerPascal* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerPascal_SuperWordCharacters(const QsciLexerPascal* self) {
    return (const char*)self->QsciLexerPascal::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnWordCharacters(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_SetAutoIndentStyle(QsciLexerPascal* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerPascal_SuperSetAutoIndentStyle(QsciLexerPascal* self, int autoindentstyle) {
    self->QsciLexerPascal::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetAutoIndentStyle(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_SetColor(QsciLexerPascal* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPascal_SuperSetColor(QsciLexerPascal* self, const QColor* c, int style) {
    self->QsciLexerPascal::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetColor(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_setcolor_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_SetEolFill(QsciLexerPascal* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPascal_SuperSetEolFill(QsciLexerPascal* self, bool eoffill, int style) {
    self->QsciLexerPascal::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetEolFill(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_seteolfill_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_SetFont(QsciLexerPascal* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPascal_SuperSetFont(QsciLexerPascal* self, const QFont* f, int style) {
    self->QsciLexerPascal::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetFont(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_setfont_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_SetPaper(QsciLexerPascal* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPascal_SuperSetPaper(QsciLexerPascal* self, const QColor* c, int style) {
    self->QsciLexerPascal::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetPaper(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_setpaper_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPascal_ReadProperties(QsciLexerPascal* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal) {
        return vqscilexerpascal->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPascal::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPascal_SuperReadProperties(QsciLexerPascal* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self)) {
        return vqscilexerpascal->QsciLexerPascal::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPascal::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnReadProperties(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_readproperties_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPascal_WriteProperties(const QsciLexerPascal* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal) {
        return vqscilexerpascal->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPascal::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPascal_SuperWriteProperties(const QsciLexerPascal* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self))) {
        return vqscilexerpascal->QsciLexerPascal::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPascal::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnWriteProperties(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self)))
        vqscilexerpascal->qscilexerpascal_writeproperties_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPascal_Event(QsciLexerPascal* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerPascal_SuperEvent(QsciLexerPascal* self, QEvent* event) {
    return self->QsciLexerPascal::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnEvent(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_event_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPascal_EventFilter(QsciLexerPascal* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerPascal_SuperEventFilter(QsciLexerPascal* self, QObject* watched, QEvent* event) {
    return self->QsciLexerPascal::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnEventFilter(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_eventfilter_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_TimerEvent(QsciLexerPascal* self, QTimerEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal) {
        vqscilexerpascal->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPascal::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPascal_SuperTimerEvent(QsciLexerPascal* self, QTimerEvent* event) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self)) {
        vqscilexerpascal->QsciLexerPascal::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPascal::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnTimerEvent(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_timerevent_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_ChildEvent(QsciLexerPascal* self, QChildEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal) {
        vqscilexerpascal->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPascal::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPascal_SuperChildEvent(QsciLexerPascal* self, QChildEvent* event) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self)) {
        vqscilexerpascal->QsciLexerPascal::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPascal::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnChildEvent(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_childevent_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_CustomEvent(QsciLexerPascal* self, QEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal) {
        vqscilexerpascal->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPascal::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPascal_SuperCustomEvent(QsciLexerPascal* self, QEvent* event) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self)) {
        vqscilexerpascal->QsciLexerPascal::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPascal::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnCustomEvent(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_customevent_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_ConnectNotify(QsciLexerPascal* self, const QMetaMethod* signal) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal) {
        vqscilexerpascal->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPascal::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPascal_SuperConnectNotify(QsciLexerPascal* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self)) {
        vqscilexerpascal->QsciLexerPascal::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPascal::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnConnectNotify(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_connectnotify_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPascal_DisconnectNotify(QsciLexerPascal* self, const QMetaMethod* signal) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal) {
        vqscilexerpascal->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPascal::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPascal_SuperDisconnectNotify(QsciLexerPascal* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self)) {
        vqscilexerpascal->QsciLexerPascal::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPascal::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDisconnectNotify(QsciLexerPascal* self, intptr_t slot) {
    if (auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self))
        vqscilexerpascal->qscilexerpascal_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerPascal_TextAsBytes(const QsciLexerPascal* self, const libqt_string text) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerpascal->VirtualQsciLexerPascal::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPascal::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerPascal_BytesAsText(const QsciLexerPascal* self, const char* bytes, int size) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self))) {
        auto _ret = vqscilexerpascal->VirtualQsciLexerPascal::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPascal::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerPascal_Sender(const QsciLexerPascal* self) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self))) {
        return vqscilexerpascal->VirtualQsciLexerPascal::sender();
    } else
        qFatal("Error: Protected method QsciLexerPascal::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPascal_SenderSignalIndex(const QsciLexerPascal* self) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self))) {
        return vqscilexerpascal->VirtualQsciLexerPascal::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerPascal::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPascal_Receivers(const QsciLexerPascal* self, const char* signal) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self))) {
        return vqscilexerpascal->VirtualQsciLexerPascal::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerPascal::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerPascal_IsSignalConnected(const QsciLexerPascal* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self))) {
        return vqscilexerpascal->VirtualQsciLexerPascal::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerPascal::isSignalConnected called without a directly constructed type");
}

void QsciLexerPascal_Delete(QsciLexerPascal* self) {
    delete self;
}
