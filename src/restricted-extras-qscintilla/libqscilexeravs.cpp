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
#include <qscilexeravs.h>
#include "libqscilexeravs.h"
#include "libqscilexeravs.hxx"

QsciLexerAVS* QsciLexerAVS_new() {
    return new VirtualQsciLexerAVS();
}

QsciLexerAVS* QsciLexerAVS_new2(QObject* parent) {
    return new VirtualQsciLexerAVS(parent);
}

QMetaObject* QsciLexerAVS_MetaObject(const QsciLexerAVS* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerAVS_Metacast(QsciLexerAVS* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerAVS_Metacall(QsciLexerAVS* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerAVS_Tr(const char* s) {
    auto _ret = QsciLexerAVS::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerAVS_Language(const QsciLexerAVS* self) {
    return (const char*)self->language();
}

const char* QsciLexerAVS_Lexer(const QsciLexerAVS* self) {
    return (const char*)self->lexer();
}

int QsciLexerAVS_BraceStyle(const QsciLexerAVS* self) {
    return self->braceStyle();
}

const char* QsciLexerAVS_WordCharacters(const QsciLexerAVS* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerAVS_DefaultColor(const QsciLexerAVS* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerAVS_DefaultFont(const QsciLexerAVS* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerAVS_Keywords(const QsciLexerAVS* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerAVS_Description(const QsciLexerAVS* self, int style) {
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

void QsciLexerAVS_RefreshProperties(QsciLexerAVS* self) {
    self->refreshProperties();
}

bool QsciLexerAVS_FoldComments(const QsciLexerAVS* self) {
    return self->foldComments();
}

bool QsciLexerAVS_FoldCompact(const QsciLexerAVS* self) {
    return self->foldCompact();
}

void QsciLexerAVS_SetFoldComments(QsciLexerAVS* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerAVS_SetFoldCompact(QsciLexerAVS* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerAVS_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerAVS::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerAVS_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerAVS::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerAVS_SuperMetaObject(const QsciLexerAVS* self) {
    return (QMetaObject*)self->QsciLexerAVS::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnMetaObject(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_metaobject_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerAVS_SuperMetacast(QsciLexerAVS* self, const char* param1) {
    return self->QsciLexerAVS::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnMetacast(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_metacast_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerAVS_SuperMetacall(QsciLexerAVS* self, int param1, int param2, void** param3) {
    return self->QsciLexerAVS::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnMetacall(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_metacall_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerAVS_SuperSetFoldComments(QsciLexerAVS* self, bool fold) {
    self->QsciLexerAVS::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetFoldComments(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerAVS_SuperSetFoldCompact(QsciLexerAVS* self, bool fold) {
    self->QsciLexerAVS::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetFoldCompact(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAVS_LexerId(const QsciLexerAVS* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerAVS_SuperLexerId(const QsciLexerAVS* self) {
    return self->QsciLexerAVS::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnLexerId(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_lexerid_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAVS_AutoCompletionFillups(const QsciLexerAVS* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerAVS_SuperAutoCompletionFillups(const QsciLexerAVS* self) {
    return (const char*)self->QsciLexerAVS::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnAutoCompletionFillups(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerAVS_AutoCompletionWordSeparators(const QsciLexerAVS* self) {
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
libqt_list /* of libqt_string */ QsciLexerAVS_SuperAutoCompletionWordSeparators(const QsciLexerAVS* self) {
    QList<QString> _ret = self->QsciLexerAVS::autoCompletionWordSeparators();
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
void QsciLexerAVS_OnAutoCompletionWordSeparators(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAVS_BlockEnd(const QsciLexerAVS* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerAVS_SuperBlockEnd(const QsciLexerAVS* self, int* style) {
    return (const char*)self->QsciLexerAVS::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBlockEnd(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_blockend_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAVS_BlockLookback(const QsciLexerAVS* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerAVS_SuperBlockLookback(const QsciLexerAVS* self) {
    return self->QsciLexerAVS::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBlockLookback(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_blocklookback_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAVS_BlockStart(const QsciLexerAVS* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerAVS_SuperBlockStart(const QsciLexerAVS* self, int* style) {
    return (const char*)self->QsciLexerAVS::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBlockStart(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_blockstart_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerAVS_BlockStartKeyword(const QsciLexerAVS* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerAVS_SuperBlockStartKeyword(const QsciLexerAVS* self, int* style) {
    return (const char*)self->QsciLexerAVS::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBlockStartKeyword(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAVS_CaseSensitive(const QsciLexerAVS* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerAVS_SuperCaseSensitive(const QsciLexerAVS* self) {
    return self->QsciLexerAVS::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnCaseSensitive(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_casesensitive_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerAVS_Color(const QsciLexerAVS* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerAVS_SuperColor(const QsciLexerAVS* self, int style) {
    return new QColor(self->QsciLexerAVS::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnColor(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_color_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAVS_EolFill(const QsciLexerAVS* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerAVS_SuperEolFill(const QsciLexerAVS* self, int style) {
    return self->QsciLexerAVS::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnEolFill(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_eolfill_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerAVS_Font(const QsciLexerAVS* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerAVS_SuperFont(const QsciLexerAVS* self, int style) {
    return new QFont(self->QsciLexerAVS::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnFont(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_font_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAVS_IndentationGuideView(const QsciLexerAVS* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerAVS_SuperIndentationGuideView(const QsciLexerAVS* self) {
    return self->QsciLexerAVS::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnIndentationGuideView(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAVS_DefaultStyle(const QsciLexerAVS* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerAVS_SuperDefaultStyle(const QsciLexerAVS* self) {
    return self->QsciLexerAVS::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultStyle(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerAVS_Paper(const QsciLexerAVS* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerAVS_SuperPaper(const QsciLexerAVS* self, int style) {
    return new QColor(self->QsciLexerAVS::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnPaper(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_paper_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerAVS_DefaultColor2(const QsciLexerAVS* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerAVS_SuperDefaultColor2(const QsciLexerAVS* self, int style) {
    return new QColor(self->QsciLexerAVS::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultColor2(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAVS_DefaultEolFill(const QsciLexerAVS* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerAVS_SuperDefaultEolFill(const QsciLexerAVS* self, int style) {
    return self->QsciLexerAVS::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultEolFill(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerAVS_DefaultFont2(const QsciLexerAVS* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerAVS_SuperDefaultFont2(const QsciLexerAVS* self, int style) {
    return new QFont(self->QsciLexerAVS::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultFont2(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerAVS_DefaultPaper2(const QsciLexerAVS* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerAVS_SuperDefaultPaper2(const QsciLexerAVS* self, int style) {
    return new QColor(self->QsciLexerAVS::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultPaper2(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_SetEditor(QsciLexerAVS* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerAVS_SuperSetEditor(QsciLexerAVS* self, QsciScintilla* editor) {
    self->QsciLexerAVS::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetEditor(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_seteditor_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerAVS_StyleBitsNeeded(const QsciLexerAVS* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerAVS_SuperStyleBitsNeeded(const QsciLexerAVS* self) {
    return self->QsciLexerAVS::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnStyleBitsNeeded(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_SetAutoIndentStyle(QsciLexerAVS* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerAVS_SuperSetAutoIndentStyle(QsciLexerAVS* self, int autoindentstyle) {
    self->QsciLexerAVS::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetAutoIndentStyle(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_SetColor(QsciLexerAVS* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerAVS_SuperSetColor(QsciLexerAVS* self, const QColor* c, int style) {
    self->QsciLexerAVS::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetColor(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_setcolor_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_SetEolFill(QsciLexerAVS* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerAVS_SuperSetEolFill(QsciLexerAVS* self, bool eoffill, int style) {
    self->QsciLexerAVS::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetEolFill(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_seteolfill_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_SetFont(QsciLexerAVS* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerAVS_SuperSetFont(QsciLexerAVS* self, const QFont* f, int style) {
    self->QsciLexerAVS::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetFont(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_setfont_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_SetPaper(QsciLexerAVS* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerAVS_SuperSetPaper(QsciLexerAVS* self, const QColor* c, int style) {
    self->QsciLexerAVS::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetPaper(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_setpaper_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAVS_ReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs) {
        return vqscilexeravs->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAVS::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerAVS_SuperReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self)) {
        return vqscilexeravs->QsciLexerAVS::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerAVS::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnReadProperties(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_readproperties_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAVS_WriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs) {
        return vqscilexeravs->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAVS::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerAVS_SuperWriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self))) {
        return vqscilexeravs->QsciLexerAVS::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerAVS::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnWriteProperties(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self)))
        vqscilexeravs->qscilexeravs_writeproperties_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAVS_Event(QsciLexerAVS* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerAVS_SuperEvent(QsciLexerAVS* self, QEvent* event) {
    return self->QsciLexerAVS::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnEvent(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_event_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerAVS_EventFilter(QsciLexerAVS* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerAVS_SuperEventFilter(QsciLexerAVS* self, QObject* watched, QEvent* event) {
    return self->QsciLexerAVS::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnEventFilter(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_eventfilter_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_TimerEvent(QsciLexerAVS* self, QTimerEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs) {
        vqscilexeravs->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAVS::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAVS_SuperTimerEvent(QsciLexerAVS* self, QTimerEvent* event) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self)) {
        vqscilexeravs->QsciLexerAVS::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerAVS::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnTimerEvent(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_timerevent_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_ChildEvent(QsciLexerAVS* self, QChildEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs) {
        vqscilexeravs->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAVS::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAVS_SuperChildEvent(QsciLexerAVS* self, QChildEvent* event) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self)) {
        vqscilexeravs->QsciLexerAVS::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerAVS::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnChildEvent(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_childevent_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_CustomEvent(QsciLexerAVS* self, QEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs) {
        vqscilexeravs->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAVS::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAVS_SuperCustomEvent(QsciLexerAVS* self, QEvent* event) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self)) {
        vqscilexeravs->QsciLexerAVS::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerAVS::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnCustomEvent(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_customevent_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_ConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs) {
        vqscilexeravs->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAVS::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAVS_SuperConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self)) {
        vqscilexeravs->QsciLexerAVS::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerAVS::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnConnectNotify(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_connectnotify_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerAVS_DisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs) {
        vqscilexeravs->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerAVS::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerAVS_SuperDisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self)) {
        vqscilexeravs->QsciLexerAVS::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerAVS::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDisconnectNotify(QsciLexerAVS* self, intptr_t slot) {
    if (auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self))
        vqscilexeravs->qscilexeravs_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerAVS_TextAsBytes(const QsciLexerAVS* self, const libqt_string text) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexeravs->VirtualQsciLexerAVS::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerAVS::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerAVS_BytesAsText(const QsciLexerAVS* self, const char* bytes, int size) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self))) {
        auto _ret = vqscilexeravs->VirtualQsciLexerAVS::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerAVS::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerAVS_Sender(const QsciLexerAVS* self) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self))) {
        return vqscilexeravs->VirtualQsciLexerAVS::sender();
    } else
        qFatal("Error: Protected method QsciLexerAVS::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerAVS_SenderSignalIndex(const QsciLexerAVS* self) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self))) {
        return vqscilexeravs->VirtualQsciLexerAVS::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerAVS::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerAVS_Receivers(const QsciLexerAVS* self, const char* signal) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self))) {
        return vqscilexeravs->VirtualQsciLexerAVS::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerAVS::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerAVS_IsSignalConnected(const QsciLexerAVS* self, const QMetaMethod* signal) {
    if (auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self))) {
        return vqscilexeravs->VirtualQsciLexerAVS::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerAVS::isSignalConnected called without a directly constructed type");
}

void QsciLexerAVS_Delete(QsciLexerAVS* self) {
    delete self;
}
