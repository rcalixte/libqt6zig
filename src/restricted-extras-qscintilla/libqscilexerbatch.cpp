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
#include <qscilexerbatch.h>
#include "libqscilexerbatch.h"
#include "libqscilexerbatch.hxx"

QsciLexerBatch* QsciLexerBatch_new() {
    return new VirtualQsciLexerBatch();
}

QsciLexerBatch* QsciLexerBatch_new2(QObject* parent) {
    return new VirtualQsciLexerBatch(parent);
}

QMetaObject* QsciLexerBatch_MetaObject(const QsciLexerBatch* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerBatch_Metacast(QsciLexerBatch* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerBatch_Metacall(QsciLexerBatch* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerBatch_Tr(const char* s) {
    auto _ret = QsciLexerBatch::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerBatch_Language(const QsciLexerBatch* self) {
    return (const char*)self->language();
}

const char* QsciLexerBatch_Lexer(const QsciLexerBatch* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerBatch_WordCharacters(const QsciLexerBatch* self) {
    return (const char*)self->wordCharacters();
}

bool QsciLexerBatch_CaseSensitive(const QsciLexerBatch* self) {
    return self->caseSensitive();
}

QColor* QsciLexerBatch_DefaultColor(const QsciLexerBatch* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerBatch_DefaultEolFill(const QsciLexerBatch* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerBatch_DefaultFont(const QsciLexerBatch* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerBatch_DefaultPaper(const QsciLexerBatch* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerBatch_Keywords(const QsciLexerBatch* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerBatch_Description(const QsciLexerBatch* self, int style) {
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

libqt_string QsciLexerBatch_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerBatch::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerBatch_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerBatch::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerBatch_SuperMetaObject(const QsciLexerBatch* self) {
    return (QMetaObject*)self->QsciLexerBatch::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnMetaObject(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_metaobject_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerBatch_SuperMetacast(QsciLexerBatch* self, const char* param1) {
    return self->QsciLexerBatch::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnMetacast(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_metacast_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerBatch_SuperMetacall(QsciLexerBatch* self, int param1, int param2, void** param3) {
    return self->QsciLexerBatch::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnMetacall(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_metacall_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBatch_LexerId(const QsciLexerBatch* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerBatch_SuperLexerId(const QsciLexerBatch* self) {
    return self->QsciLexerBatch::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnLexerId(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_lexerid_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerBatch_AutoCompletionFillups(const QsciLexerBatch* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerBatch_SuperAutoCompletionFillups(const QsciLexerBatch* self) {
    return (const char*)self->QsciLexerBatch::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnAutoCompletionFillups(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerBatch_AutoCompletionWordSeparators(const QsciLexerBatch* self) {
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
libqt_list /* of libqt_string */ QsciLexerBatch_SuperAutoCompletionWordSeparators(const QsciLexerBatch* self) {
    QList<QString> _ret = self->QsciLexerBatch::autoCompletionWordSeparators();
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
void QsciLexerBatch_OnAutoCompletionWordSeparators(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerBatch_BlockEnd(const QsciLexerBatch* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerBatch_SuperBlockEnd(const QsciLexerBatch* self, int* style) {
    return (const char*)self->QsciLexerBatch::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBlockEnd(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_blockend_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBatch_BlockLookback(const QsciLexerBatch* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerBatch_SuperBlockLookback(const QsciLexerBatch* self) {
    return self->QsciLexerBatch::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBlockLookback(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_blocklookback_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerBatch_BlockStart(const QsciLexerBatch* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerBatch_SuperBlockStart(const QsciLexerBatch* self, int* style) {
    return (const char*)self->QsciLexerBatch::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBlockStart(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_blockstart_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerBatch_BlockStartKeyword(const QsciLexerBatch* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerBatch_SuperBlockStartKeyword(const QsciLexerBatch* self, int* style) {
    return (const char*)self->QsciLexerBatch::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBlockStartKeyword(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBatch_BraceStyle(const QsciLexerBatch* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerBatch_SuperBraceStyle(const QsciLexerBatch* self) {
    return self->QsciLexerBatch::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBraceStyle(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_bracestyle_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerBatch_Color(const QsciLexerBatch* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerBatch_SuperColor(const QsciLexerBatch* self, int style) {
    return new QColor(self->QsciLexerBatch::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnColor(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_color_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBatch_EolFill(const QsciLexerBatch* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerBatch_SuperEolFill(const QsciLexerBatch* self, int style) {
    return self->QsciLexerBatch::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnEolFill(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_eolfill_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerBatch_Font(const QsciLexerBatch* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerBatch_SuperFont(const QsciLexerBatch* self, int style) {
    return new QFont(self->QsciLexerBatch::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnFont(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_font_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBatch_IndentationGuideView(const QsciLexerBatch* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerBatch_SuperIndentationGuideView(const QsciLexerBatch* self) {
    return self->QsciLexerBatch::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnIndentationGuideView(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBatch_DefaultStyle(const QsciLexerBatch* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerBatch_SuperDefaultStyle(const QsciLexerBatch* self) {
    return self->QsciLexerBatch::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultStyle(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerBatch_Paper(const QsciLexerBatch* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerBatch_SuperPaper(const QsciLexerBatch* self, int style) {
    return new QColor(self->QsciLexerBatch::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnPaper(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_paper_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerBatch_DefaultColor2(const QsciLexerBatch* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerBatch_SuperDefaultColor2(const QsciLexerBatch* self, int style) {
    return new QColor(self->QsciLexerBatch::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultColor2(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerBatch_DefaultFont2(const QsciLexerBatch* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerBatch_SuperDefaultFont2(const QsciLexerBatch* self, int style) {
    return new QFont(self->QsciLexerBatch::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultFont2(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerBatch_DefaultPaper2(const QsciLexerBatch* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerBatch_SuperDefaultPaper2(const QsciLexerBatch* self, int style) {
    return new QColor(self->QsciLexerBatch::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultPaper2(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_SetEditor(QsciLexerBatch* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerBatch_SuperSetEditor(QsciLexerBatch* self, QsciScintilla* editor) {
    self->QsciLexerBatch::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetEditor(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_seteditor_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_RefreshProperties(QsciLexerBatch* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerBatch_SuperRefreshProperties(QsciLexerBatch* self) {
    self->QsciLexerBatch::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnRefreshProperties(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBatch_StyleBitsNeeded(const QsciLexerBatch* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerBatch_SuperStyleBitsNeeded(const QsciLexerBatch* self) {
    return self->QsciLexerBatch::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnStyleBitsNeeded(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_SetAutoIndentStyle(QsciLexerBatch* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerBatch_SuperSetAutoIndentStyle(QsciLexerBatch* self, int autoindentstyle) {
    self->QsciLexerBatch::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetAutoIndentStyle(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_SetColor(QsciLexerBatch* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerBatch_SuperSetColor(QsciLexerBatch* self, const QColor* c, int style) {
    self->QsciLexerBatch::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetColor(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_setcolor_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_SetEolFill(QsciLexerBatch* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerBatch_SuperSetEolFill(QsciLexerBatch* self, bool eoffill, int style) {
    self->QsciLexerBatch::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetEolFill(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_seteolfill_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_SetFont(QsciLexerBatch* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerBatch_SuperSetFont(QsciLexerBatch* self, const QFont* f, int style) {
    self->QsciLexerBatch::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetFont(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_setfont_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_SetPaper(QsciLexerBatch* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerBatch_SuperSetPaper(QsciLexerBatch* self, const QColor* c, int style) {
    self->QsciLexerBatch::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetPaper(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_setpaper_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBatch_ReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch) {
        return vqscilexerbatch->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBatch::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerBatch_SuperReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self)) {
        return vqscilexerbatch->QsciLexerBatch::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerBatch::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnReadProperties(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_readproperties_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBatch_WriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch) {
        return vqscilexerbatch->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBatch::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerBatch_SuperWriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self))) {
        return vqscilexerbatch->QsciLexerBatch::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerBatch::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnWriteProperties(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self)))
        vqscilexerbatch->qscilexerbatch_writeproperties_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBatch_Event(QsciLexerBatch* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerBatch_SuperEvent(QsciLexerBatch* self, QEvent* event) {
    return self->QsciLexerBatch::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnEvent(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_event_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBatch_EventFilter(QsciLexerBatch* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerBatch_SuperEventFilter(QsciLexerBatch* self, QObject* watched, QEvent* event) {
    return self->QsciLexerBatch::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnEventFilter(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_eventfilter_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_TimerEvent(QsciLexerBatch* self, QTimerEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch) {
        vqscilexerbatch->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBatch::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBatch_SuperTimerEvent(QsciLexerBatch* self, QTimerEvent* event) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self)) {
        vqscilexerbatch->QsciLexerBatch::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerBatch::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnTimerEvent(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_timerevent_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_ChildEvent(QsciLexerBatch* self, QChildEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch) {
        vqscilexerbatch->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBatch::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBatch_SuperChildEvent(QsciLexerBatch* self, QChildEvent* event) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self)) {
        vqscilexerbatch->QsciLexerBatch::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerBatch::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnChildEvent(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_childevent_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_CustomEvent(QsciLexerBatch* self, QEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch) {
        vqscilexerbatch->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBatch::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBatch_SuperCustomEvent(QsciLexerBatch* self, QEvent* event) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self)) {
        vqscilexerbatch->QsciLexerBatch::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerBatch::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnCustomEvent(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_customevent_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_ConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch) {
        vqscilexerbatch->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBatch::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBatch_SuperConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self)) {
        vqscilexerbatch->QsciLexerBatch::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerBatch::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnConnectNotify(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_connectnotify_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBatch_DisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch) {
        vqscilexerbatch->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBatch::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBatch_SuperDisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self)) {
        vqscilexerbatch->QsciLexerBatch::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerBatch::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDisconnectNotify(QsciLexerBatch* self, intptr_t slot) {
    if (auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self))
        vqscilexerbatch->qscilexerbatch_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerBatch_TextAsBytes(const QsciLexerBatch* self, const libqt_string text) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerbatch->VirtualQsciLexerBatch::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerBatch::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerBatch_BytesAsText(const QsciLexerBatch* self, const char* bytes, int size) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self))) {
        auto _ret = vqscilexerbatch->VirtualQsciLexerBatch::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerBatch::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerBatch_Sender(const QsciLexerBatch* self) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self))) {
        return vqscilexerbatch->VirtualQsciLexerBatch::sender();
    } else
        qFatal("Error: Protected method QsciLexerBatch::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerBatch_SenderSignalIndex(const QsciLexerBatch* self) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self))) {
        return vqscilexerbatch->VirtualQsciLexerBatch::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerBatch::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerBatch_Receivers(const QsciLexerBatch* self, const char* signal) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self))) {
        return vqscilexerbatch->VirtualQsciLexerBatch::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerBatch::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerBatch_IsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal) {
    if (auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self))) {
        return vqscilexerbatch->VirtualQsciLexerBatch::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerBatch::isSignalConnected called without a directly constructed type");
}

void QsciLexerBatch_Delete(QsciLexerBatch* self) {
    delete self;
}
