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
#include <qscilexeryaml.h>
#include "libqscilexeryaml.h"
#include "libqscilexeryaml.hxx"

QsciLexerYAML* QsciLexerYAML_new() {
    return new VirtualQsciLexerYAML();
}

QsciLexerYAML* QsciLexerYAML_new2(QObject* parent) {
    return new VirtualQsciLexerYAML(parent);
}

QMetaObject* QsciLexerYAML_MetaObject(const QsciLexerYAML* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerYAML_Metacast(QsciLexerYAML* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerYAML_Metacall(QsciLexerYAML* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerYAML_Tr(const char* s) {
    auto _ret = QsciLexerYAML::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerYAML_Language(const QsciLexerYAML* self) {
    return (const char*)self->language();
}

const char* QsciLexerYAML_Lexer(const QsciLexerYAML* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerYAML_DefaultColor(const QsciLexerYAML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerYAML_DefaultEolFill(const QsciLexerYAML* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerYAML_DefaultFont(const QsciLexerYAML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerYAML_DefaultPaper(const QsciLexerYAML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerYAML_Keywords(const QsciLexerYAML* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerYAML_Description(const QsciLexerYAML* self, int style) {
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

void QsciLexerYAML_RefreshProperties(QsciLexerYAML* self) {
    self->refreshProperties();
}

bool QsciLexerYAML_FoldComments(const QsciLexerYAML* self) {
    return self->foldComments();
}

void QsciLexerYAML_SetFoldComments(QsciLexerYAML* self, bool fold) {
    self->setFoldComments(fold);
}

libqt_string QsciLexerYAML_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerYAML::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerYAML_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerYAML::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerYAML_SuperMetaObject(const QsciLexerYAML* self) {
    return (QMetaObject*)self->QsciLexerYAML::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnMetaObject(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_metaobject_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerYAML_SuperMetacast(QsciLexerYAML* self, const char* param1) {
    return self->QsciLexerYAML::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnMetacast(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_metacast_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerYAML_SuperMetacall(QsciLexerYAML* self, int param1, int param2, void** param3) {
    return self->QsciLexerYAML::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnMetacall(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_metacall_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerYAML_SuperSetFoldComments(QsciLexerYAML* self, bool fold) {
    self->QsciLexerYAML::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetFoldComments(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetFoldComments_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerYAML_LexerId(const QsciLexerYAML* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerYAML_SuperLexerId(const QsciLexerYAML* self) {
    return self->QsciLexerYAML::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnLexerId(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_lexerid_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerYAML_AutoCompletionFillups(const QsciLexerYAML* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerYAML_SuperAutoCompletionFillups(const QsciLexerYAML* self) {
    return (const char*)self->QsciLexerYAML::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnAutoCompletionFillups(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerYAML_AutoCompletionWordSeparators(const QsciLexerYAML* self) {
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
libqt_list /* of libqt_string */ QsciLexerYAML_SuperAutoCompletionWordSeparators(const QsciLexerYAML* self) {
    QList<QString> _ret = self->QsciLexerYAML::autoCompletionWordSeparators();
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
void QsciLexerYAML_OnAutoCompletionWordSeparators(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerYAML_BlockEnd(const QsciLexerYAML* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerYAML_SuperBlockEnd(const QsciLexerYAML* self, int* style) {
    return (const char*)self->QsciLexerYAML::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBlockEnd(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_blockend_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerYAML_BlockLookback(const QsciLexerYAML* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerYAML_SuperBlockLookback(const QsciLexerYAML* self) {
    return self->QsciLexerYAML::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBlockLookback(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_blocklookback_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerYAML_BlockStart(const QsciLexerYAML* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerYAML_SuperBlockStart(const QsciLexerYAML* self, int* style) {
    return (const char*)self->QsciLexerYAML::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBlockStart(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_blockstart_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerYAML_BlockStartKeyword(const QsciLexerYAML* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerYAML_SuperBlockStartKeyword(const QsciLexerYAML* self, int* style) {
    return (const char*)self->QsciLexerYAML::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBlockStartKeyword(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerYAML_BraceStyle(const QsciLexerYAML* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerYAML_SuperBraceStyle(const QsciLexerYAML* self) {
    return self->QsciLexerYAML::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBraceStyle(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_bracestyle_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerYAML_CaseSensitive(const QsciLexerYAML* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerYAML_SuperCaseSensitive(const QsciLexerYAML* self) {
    return self->QsciLexerYAML::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnCaseSensitive(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_casesensitive_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerYAML_Color(const QsciLexerYAML* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerYAML_SuperColor(const QsciLexerYAML* self, int style) {
    return new QColor(self->QsciLexerYAML::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnColor(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_color_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerYAML_EolFill(const QsciLexerYAML* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerYAML_SuperEolFill(const QsciLexerYAML* self, int style) {
    return self->QsciLexerYAML::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnEolFill(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_eolfill_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerYAML_Font(const QsciLexerYAML* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerYAML_SuperFont(const QsciLexerYAML* self, int style) {
    return new QFont(self->QsciLexerYAML::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnFont(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_font_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerYAML_IndentationGuideView(const QsciLexerYAML* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerYAML_SuperIndentationGuideView(const QsciLexerYAML* self) {
    return self->QsciLexerYAML::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnIndentationGuideView(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerYAML_DefaultStyle(const QsciLexerYAML* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerYAML_SuperDefaultStyle(const QsciLexerYAML* self) {
    return self->QsciLexerYAML::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultStyle(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerYAML_Paper(const QsciLexerYAML* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerYAML_SuperPaper(const QsciLexerYAML* self, int style) {
    return new QColor(self->QsciLexerYAML::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnPaper(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_paper_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerYAML_DefaultColor2(const QsciLexerYAML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerYAML_SuperDefaultColor2(const QsciLexerYAML* self, int style) {
    return new QColor(self->QsciLexerYAML::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultColor2(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerYAML_DefaultFont2(const QsciLexerYAML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerYAML_SuperDefaultFont2(const QsciLexerYAML* self, int style) {
    return new QFont(self->QsciLexerYAML::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultFont2(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerYAML_DefaultPaper2(const QsciLexerYAML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerYAML_SuperDefaultPaper2(const QsciLexerYAML* self, int style) {
    return new QColor(self->QsciLexerYAML::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultPaper2(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_SetEditor(QsciLexerYAML* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerYAML_SuperSetEditor(QsciLexerYAML* self, QsciScintilla* editor) {
    self->QsciLexerYAML::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetEditor(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_seteditor_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerYAML_StyleBitsNeeded(const QsciLexerYAML* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerYAML_SuperStyleBitsNeeded(const QsciLexerYAML* self) {
    return self->QsciLexerYAML::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnStyleBitsNeeded(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerYAML_WordCharacters(const QsciLexerYAML* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerYAML_SuperWordCharacters(const QsciLexerYAML* self) {
    return (const char*)self->QsciLexerYAML::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnWordCharacters(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_SetAutoIndentStyle(QsciLexerYAML* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerYAML_SuperSetAutoIndentStyle(QsciLexerYAML* self, int autoindentstyle) {
    self->QsciLexerYAML::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetAutoIndentStyle(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_SetColor(QsciLexerYAML* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerYAML_SuperSetColor(QsciLexerYAML* self, const QColor* c, int style) {
    self->QsciLexerYAML::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetColor(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_setcolor_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_SetEolFill(QsciLexerYAML* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerYAML_SuperSetEolFill(QsciLexerYAML* self, bool eoffill, int style) {
    self->QsciLexerYAML::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetEolFill(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_seteolfill_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_SetFont(QsciLexerYAML* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerYAML_SuperSetFont(QsciLexerYAML* self, const QFont* f, int style) {
    self->QsciLexerYAML::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetFont(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_setfont_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_SetPaper(QsciLexerYAML* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerYAML_SuperSetPaper(QsciLexerYAML* self, const QColor* c, int style) {
    self->QsciLexerYAML::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetPaper(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_setpaper_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerYAML_ReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml) {
        return vqscilexeryaml->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerYAML::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerYAML_SuperReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self)) {
        return vqscilexeryaml->QsciLexerYAML::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerYAML::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnReadProperties(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_readproperties_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerYAML_WriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml) {
        return vqscilexeryaml->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerYAML::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerYAML_SuperWriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self))) {
        return vqscilexeryaml->QsciLexerYAML::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerYAML::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnWriteProperties(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self)))
        vqscilexeryaml->qscilexeryaml_writeproperties_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerYAML_Event(QsciLexerYAML* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerYAML_SuperEvent(QsciLexerYAML* self, QEvent* event) {
    return self->QsciLexerYAML::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnEvent(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_event_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerYAML_EventFilter(QsciLexerYAML* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerYAML_SuperEventFilter(QsciLexerYAML* self, QObject* watched, QEvent* event) {
    return self->QsciLexerYAML::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnEventFilter(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_eventfilter_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_TimerEvent(QsciLexerYAML* self, QTimerEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml) {
        vqscilexeryaml->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerYAML::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerYAML_SuperTimerEvent(QsciLexerYAML* self, QTimerEvent* event) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self)) {
        vqscilexeryaml->QsciLexerYAML::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerYAML::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnTimerEvent(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_timerevent_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_ChildEvent(QsciLexerYAML* self, QChildEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml) {
        vqscilexeryaml->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerYAML::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerYAML_SuperChildEvent(QsciLexerYAML* self, QChildEvent* event) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self)) {
        vqscilexeryaml->QsciLexerYAML::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerYAML::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnChildEvent(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_childevent_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_CustomEvent(QsciLexerYAML* self, QEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml) {
        vqscilexeryaml->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerYAML::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerYAML_SuperCustomEvent(QsciLexerYAML* self, QEvent* event) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self)) {
        vqscilexeryaml->QsciLexerYAML::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerYAML::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnCustomEvent(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_customevent_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_ConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml) {
        vqscilexeryaml->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerYAML::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerYAML_SuperConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self)) {
        vqscilexeryaml->QsciLexerYAML::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerYAML::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnConnectNotify(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_connectnotify_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerYAML_DisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml) {
        vqscilexeryaml->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerYAML::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerYAML_SuperDisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self)) {
        vqscilexeryaml->QsciLexerYAML::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerYAML::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDisconnectNotify(QsciLexerYAML* self, intptr_t slot) {
    if (auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self))
        vqscilexeryaml->qscilexeryaml_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerYAML_TextAsBytes(const QsciLexerYAML* self, const libqt_string text) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexeryaml->VirtualQsciLexerYAML::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerYAML::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerYAML_BytesAsText(const QsciLexerYAML* self, const char* bytes, int size) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self))) {
        auto _ret = vqscilexeryaml->VirtualQsciLexerYAML::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerYAML::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerYAML_Sender(const QsciLexerYAML* self) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self))) {
        return vqscilexeryaml->VirtualQsciLexerYAML::sender();
    } else
        qFatal("Error: Protected method QsciLexerYAML::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerYAML_SenderSignalIndex(const QsciLexerYAML* self) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self))) {
        return vqscilexeryaml->VirtualQsciLexerYAML::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerYAML::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerYAML_Receivers(const QsciLexerYAML* self, const char* signal) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self))) {
        return vqscilexeryaml->VirtualQsciLexerYAML::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerYAML::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerYAML_IsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal) {
    if (auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self))) {
        return vqscilexeryaml->VirtualQsciLexerYAML::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerYAML::isSignalConnected called without a directly constructed type");
}

void QsciLexerYAML_Delete(QsciLexerYAML* self) {
    delete self;
}
