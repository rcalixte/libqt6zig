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
#include <qscilexertcl.h>
#include "libqscilexertcl.h"
#include "libqscilexertcl.hxx"

QsciLexerTCL* QsciLexerTCL_new() {
    return new VirtualQsciLexerTCL();
}

QsciLexerTCL* QsciLexerTCL_new2(QObject* parent) {
    return new VirtualQsciLexerTCL(parent);
}

QMetaObject* QsciLexerTCL_MetaObject(const QsciLexerTCL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerTCL_Metacast(QsciLexerTCL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerTCL_Metacall(QsciLexerTCL* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerTCL_Tr(const char* s) {
    auto _ret = QsciLexerTCL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerTCL_Language(const QsciLexerTCL* self) {
    return (const char*)self->language();
}

const char* QsciLexerTCL_Lexer(const QsciLexerTCL* self) {
    return (const char*)self->lexer();
}

int QsciLexerTCL_BraceStyle(const QsciLexerTCL* self) {
    return self->braceStyle();
}

QColor* QsciLexerTCL_DefaultColor(const QsciLexerTCL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerTCL_DefaultEolFill(const QsciLexerTCL* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerTCL_DefaultFont(const QsciLexerTCL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerTCL_DefaultPaper(const QsciLexerTCL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerTCL_Keywords(const QsciLexerTCL* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerTCL_Description(const QsciLexerTCL* self, int style) {
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

void QsciLexerTCL_RefreshProperties(QsciLexerTCL* self) {
    self->refreshProperties();
}

void QsciLexerTCL_SetFoldComments(QsciLexerTCL* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerTCL_FoldComments(const QsciLexerTCL* self) {
    return self->foldComments();
}

libqt_string QsciLexerTCL_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerTCL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerTCL_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerTCL::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerTCL_SuperMetaObject(const QsciLexerTCL* self) {
    return (QMetaObject*)self->QsciLexerTCL::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnMetaObject(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_metaobject_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerTCL_SuperMetacast(QsciLexerTCL* self, const char* param1) {
    return self->QsciLexerTCL::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnMetacast(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_metacast_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerTCL_SuperMetacall(QsciLexerTCL* self, int param1, int param2, void** param3) {
    return self->QsciLexerTCL::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnMetacall(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_metacall_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTCL_LexerId(const QsciLexerTCL* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerTCL_SuperLexerId(const QsciLexerTCL* self) {
    return self->QsciLexerTCL::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnLexerId(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_lexerid_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTCL_AutoCompletionFillups(const QsciLexerTCL* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerTCL_SuperAutoCompletionFillups(const QsciLexerTCL* self) {
    return (const char*)self->QsciLexerTCL::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnAutoCompletionFillups(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerTCL_AutoCompletionWordSeparators(const QsciLexerTCL* self) {
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
libqt_list /* of libqt_string */ QsciLexerTCL_SuperAutoCompletionWordSeparators(const QsciLexerTCL* self) {
    QList<QString> _ret = self->QsciLexerTCL::autoCompletionWordSeparators();
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
void QsciLexerTCL_OnAutoCompletionWordSeparators(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockEnd(const QsciLexerTCL* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTCL_SuperBlockEnd(const QsciLexerTCL* self, int* style) {
    return (const char*)self->QsciLexerTCL::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockEnd(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_blockend_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTCL_BlockLookback(const QsciLexerTCL* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerTCL_SuperBlockLookback(const QsciLexerTCL* self) {
    return self->QsciLexerTCL::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockLookback(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_blocklookback_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockStart(const QsciLexerTCL* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTCL_SuperBlockStart(const QsciLexerTCL* self, int* style) {
    return (const char*)self->QsciLexerTCL::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockStart(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_blockstart_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockStartKeyword(const QsciLexerTCL* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTCL_SuperBlockStartKeyword(const QsciLexerTCL* self, int* style) {
    return (const char*)self->QsciLexerTCL::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockStartKeyword(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTCL_CaseSensitive(const QsciLexerTCL* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerTCL_SuperCaseSensitive(const QsciLexerTCL* self) {
    return self->QsciLexerTCL::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnCaseSensitive(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_casesensitive_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTCL_Color(const QsciLexerTCL* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTCL_SuperColor(const QsciLexerTCL* self, int style) {
    return new QColor(self->QsciLexerTCL::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnColor(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_color_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTCL_EolFill(const QsciLexerTCL* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerTCL_SuperEolFill(const QsciLexerTCL* self, int style) {
    return self->QsciLexerTCL::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEolFill(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_eolfill_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerTCL_Font(const QsciLexerTCL* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerTCL_SuperFont(const QsciLexerTCL* self, int style) {
    return new QFont(self->QsciLexerTCL::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnFont(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_font_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTCL_IndentationGuideView(const QsciLexerTCL* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerTCL_SuperIndentationGuideView(const QsciLexerTCL* self) {
    return self->QsciLexerTCL::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnIndentationGuideView(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTCL_DefaultStyle(const QsciLexerTCL* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerTCL_SuperDefaultStyle(const QsciLexerTCL* self) {
    return self->QsciLexerTCL::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultStyle(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTCL_Paper(const QsciLexerTCL* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTCL_SuperPaper(const QsciLexerTCL* self, int style) {
    return new QColor(self->QsciLexerTCL::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnPaper(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_paper_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTCL_DefaultColor2(const QsciLexerTCL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTCL_SuperDefaultColor2(const QsciLexerTCL* self, int style) {
    return new QColor(self->QsciLexerTCL::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultColor2(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerTCL_DefaultFont2(const QsciLexerTCL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerTCL_SuperDefaultFont2(const QsciLexerTCL* self, int style) {
    return new QFont(self->QsciLexerTCL::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultFont2(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTCL_DefaultPaper2(const QsciLexerTCL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTCL_SuperDefaultPaper2(const QsciLexerTCL* self, int style) {
    return new QColor(self->QsciLexerTCL::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultPaper2(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_SetEditor(QsciLexerTCL* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerTCL_SuperSetEditor(QsciLexerTCL* self, QsciScintilla* editor) {
    self->QsciLexerTCL::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetEditor(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_seteditor_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTCL_StyleBitsNeeded(const QsciLexerTCL* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerTCL_SuperStyleBitsNeeded(const QsciLexerTCL* self) {
    return self->QsciLexerTCL::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnStyleBitsNeeded(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTCL_WordCharacters(const QsciLexerTCL* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerTCL_SuperWordCharacters(const QsciLexerTCL* self) {
    return (const char*)self->QsciLexerTCL::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnWordCharacters(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_SetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerTCL_SuperSetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle) {
    self->QsciLexerTCL::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetAutoIndentStyle(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_SetColor(QsciLexerTCL* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTCL_SuperSetColor(QsciLexerTCL* self, const QColor* c, int style) {
    self->QsciLexerTCL::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetColor(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_setcolor_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_SetEolFill(QsciLexerTCL* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTCL_SuperSetEolFill(QsciLexerTCL* self, bool eoffill, int style) {
    self->QsciLexerTCL::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetEolFill(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_seteolfill_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_SetFont(QsciLexerTCL* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTCL_SuperSetFont(QsciLexerTCL* self, const QFont* f, int style) {
    self->QsciLexerTCL::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetFont(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_setfont_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_SetPaper(QsciLexerTCL* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTCL_SuperSetPaper(QsciLexerTCL* self, const QColor* c, int style) {
    self->QsciLexerTCL::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetPaper(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_setpaper_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTCL_ReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl) {
        return vqscilexertcl->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTCL::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerTCL_SuperReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        return vqscilexertcl->QsciLexerTCL::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerTCL::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnReadProperties(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_readproperties_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTCL_WriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl) {
        return vqscilexertcl->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTCL::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerTCL_SuperWriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->QsciLexerTCL::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerTCL::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnWriteProperties(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self)))
        vqscilexertcl->qscilexertcl_writeproperties_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTCL_Event(QsciLexerTCL* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerTCL_SuperEvent(QsciLexerTCL* self, QEvent* event) {
    return self->QsciLexerTCL::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEvent(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_event_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTCL_EventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerTCL_SuperEventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event) {
    return self->QsciLexerTCL::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEventFilter(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_eventfilter_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_TimerEvent(QsciLexerTCL* self, QTimerEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl) {
        vqscilexertcl->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTCL::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTCL_SuperTimerEvent(QsciLexerTCL* self, QTimerEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->QsciLexerTCL::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTCL::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnTimerEvent(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_timerevent_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_ChildEvent(QsciLexerTCL* self, QChildEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl) {
        vqscilexertcl->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTCL::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTCL_SuperChildEvent(QsciLexerTCL* self, QChildEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->QsciLexerTCL::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTCL::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnChildEvent(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_childevent_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_CustomEvent(QsciLexerTCL* self, QEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl) {
        vqscilexertcl->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTCL::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTCL_SuperCustomEvent(QsciLexerTCL* self, QEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->QsciLexerTCL::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTCL::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnCustomEvent(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_customevent_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_ConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl) {
        vqscilexertcl->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTCL::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTCL_SuperConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->QsciLexerTCL::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerTCL::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnConnectNotify(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_connectnotify_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTCL_DisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl) {
        vqscilexertcl->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTCL::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTCL_SuperDisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->QsciLexerTCL::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerTCL::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDisconnectNotify(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self))
        vqscilexertcl->qscilexertcl_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerTCL_TextAsBytes(const QsciLexerTCL* self, const libqt_string text) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexertcl->VirtualQsciLexerTCL::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerTCL::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerTCL_BytesAsText(const QsciLexerTCL* self, const char* bytes, int size) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        auto _ret = vqscilexertcl->VirtualQsciLexerTCL::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerTCL::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerTCL_Sender(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->VirtualQsciLexerTCL::sender();
    } else
        qFatal("Error: Protected method QsciLexerTCL::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerTCL_SenderSignalIndex(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->VirtualQsciLexerTCL::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerTCL::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerTCL_Receivers(const QsciLexerTCL* self, const char* signal) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->VirtualQsciLexerTCL::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerTCL::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerTCL_IsSignalConnected(const QsciLexerTCL* self, const QMetaMethod* signal) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->VirtualQsciLexerTCL::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerTCL::isSignalConnected called without a directly constructed type");
}

void QsciLexerTCL_Delete(QsciLexerTCL* self) {
    delete self;
}
