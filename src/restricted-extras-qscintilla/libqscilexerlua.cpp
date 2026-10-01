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
#include <qscilexerlua.h>
#include "libqscilexerlua.h"
#include "libqscilexerlua.hxx"

QsciLexerLua* QsciLexerLua_new() {
    return new VirtualQsciLexerLua();
}

QsciLexerLua* QsciLexerLua_new2(QObject* parent) {
    return new VirtualQsciLexerLua(parent);
}

QMetaObject* QsciLexerLua_MetaObject(const QsciLexerLua* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerLua_Metacast(QsciLexerLua* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerLua_Metacall(QsciLexerLua* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerLua_Tr(const char* s) {
    auto _ret = QsciLexerLua::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerLua_Language(const QsciLexerLua* self) {
    return (const char*)self->language();
}

const char* QsciLexerLua_Lexer(const QsciLexerLua* self) {
    return (const char*)self->lexer();
}

libqt_list /* of libqt_string */ QsciLexerLua_AutoCompletionWordSeparators(const QsciLexerLua* self) {
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

const char* QsciLexerLua_BlockStart(const QsciLexerLua* self) {
    return (const char*)self->blockStart();
}

int QsciLexerLua_BraceStyle(const QsciLexerLua* self) {
    return self->braceStyle();
}

QColor* QsciLexerLua_DefaultColor(const QsciLexerLua* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerLua_DefaultEolFill(const QsciLexerLua* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerLua_DefaultFont(const QsciLexerLua* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerLua_DefaultPaper(const QsciLexerLua* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerLua_Keywords(const QsciLexerLua* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerLua_Description(const QsciLexerLua* self, int style) {
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

void QsciLexerLua_RefreshProperties(QsciLexerLua* self) {
    self->refreshProperties();
}

bool QsciLexerLua_FoldCompact(const QsciLexerLua* self) {
    return self->foldCompact();
}

void QsciLexerLua_SetFoldCompact(QsciLexerLua* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerLua_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerLua::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerLua_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerLua::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerLua_BlockStart1(const QsciLexerLua* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerLua_SuperMetaObject(const QsciLexerLua* self) {
    return (QMetaObject*)self->QsciLexerLua::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnMetaObject(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_metaobject_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerLua_SuperMetacast(QsciLexerLua* self, const char* param1) {
    return self->QsciLexerLua::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnMetacast(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_metacast_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerLua_SuperMetacall(QsciLexerLua* self, int param1, int param2, void** param3) {
    return self->QsciLexerLua::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnMetacall(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_metacall_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerLua_SuperSetFoldCompact(QsciLexerLua* self, bool fold) {
    self->QsciLexerLua::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetFoldCompact(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerLua_LexerId(const QsciLexerLua* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerLua_SuperLexerId(const QsciLexerLua* self) {
    return self->QsciLexerLua::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnLexerId(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_lexerid_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerLua_AutoCompletionFillups(const QsciLexerLua* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerLua_SuperAutoCompletionFillups(const QsciLexerLua* self) {
    return (const char*)self->QsciLexerLua::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnAutoCompletionFillups(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerLua_BlockEnd(const QsciLexerLua* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerLua_SuperBlockEnd(const QsciLexerLua* self, int* style) {
    return (const char*)self->QsciLexerLua::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnBlockEnd(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_blockend_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerLua_BlockLookback(const QsciLexerLua* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerLua_SuperBlockLookback(const QsciLexerLua* self) {
    return self->QsciLexerLua::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnBlockLookback(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_blocklookback_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerLua_BlockStartKeyword(const QsciLexerLua* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerLua_SuperBlockStartKeyword(const QsciLexerLua* self, int* style) {
    return (const char*)self->QsciLexerLua::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnBlockStartKeyword(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerLua_CaseSensitive(const QsciLexerLua* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerLua_SuperCaseSensitive(const QsciLexerLua* self) {
    return self->QsciLexerLua::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnCaseSensitive(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_casesensitive_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerLua_Color(const QsciLexerLua* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerLua_SuperColor(const QsciLexerLua* self, int style) {
    return new QColor(self->QsciLexerLua::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnColor(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_color_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerLua_EolFill(const QsciLexerLua* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerLua_SuperEolFill(const QsciLexerLua* self, int style) {
    return self->QsciLexerLua::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnEolFill(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_eolfill_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerLua_Font(const QsciLexerLua* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerLua_SuperFont(const QsciLexerLua* self, int style) {
    return new QFont(self->QsciLexerLua::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnFont(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_font_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerLua_IndentationGuideView(const QsciLexerLua* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerLua_SuperIndentationGuideView(const QsciLexerLua* self) {
    return self->QsciLexerLua::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnIndentationGuideView(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerLua_DefaultStyle(const QsciLexerLua* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerLua_SuperDefaultStyle(const QsciLexerLua* self) {
    return self->QsciLexerLua::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultStyle(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerLua_Paper(const QsciLexerLua* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerLua_SuperPaper(const QsciLexerLua* self, int style) {
    return new QColor(self->QsciLexerLua::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnPaper(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_paper_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerLua_DefaultColor2(const QsciLexerLua* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerLua_SuperDefaultColor2(const QsciLexerLua* self, int style) {
    return new QColor(self->QsciLexerLua::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultColor2(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerLua_DefaultFont2(const QsciLexerLua* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerLua_SuperDefaultFont2(const QsciLexerLua* self, int style) {
    return new QFont(self->QsciLexerLua::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultFont2(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerLua_DefaultPaper2(const QsciLexerLua* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerLua_SuperDefaultPaper2(const QsciLexerLua* self, int style) {
    return new QColor(self->QsciLexerLua::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultPaper2(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_SetEditor(QsciLexerLua* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerLua_SuperSetEditor(QsciLexerLua* self, QsciScintilla* editor) {
    self->QsciLexerLua::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetEditor(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_seteditor_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerLua_StyleBitsNeeded(const QsciLexerLua* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerLua_SuperStyleBitsNeeded(const QsciLexerLua* self) {
    return self->QsciLexerLua::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnStyleBitsNeeded(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerLua_WordCharacters(const QsciLexerLua* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerLua_SuperWordCharacters(const QsciLexerLua* self) {
    return (const char*)self->QsciLexerLua::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnWordCharacters(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_SetAutoIndentStyle(QsciLexerLua* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerLua_SuperSetAutoIndentStyle(QsciLexerLua* self, int autoindentstyle) {
    self->QsciLexerLua::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetAutoIndentStyle(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_SetColor(QsciLexerLua* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerLua_SuperSetColor(QsciLexerLua* self, const QColor* c, int style) {
    self->QsciLexerLua::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetColor(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_setcolor_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_SetEolFill(QsciLexerLua* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerLua_SuperSetEolFill(QsciLexerLua* self, bool eoffill, int style) {
    self->QsciLexerLua::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetEolFill(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_seteolfill_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_SetFont(QsciLexerLua* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerLua_SuperSetFont(QsciLexerLua* self, const QFont* f, int style) {
    self->QsciLexerLua::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetFont(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_setfont_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_SetPaper(QsciLexerLua* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerLua_SuperSetPaper(QsciLexerLua* self, const QColor* c, int style) {
    self->QsciLexerLua::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetPaper(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_setpaper_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerLua_ReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self);
    if (vqscilexerlua) {
        return vqscilexerlua->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerLua::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerLua_SuperReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        return vqscilexerlua->QsciLexerLua::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerLua::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnReadProperties(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_readproperties_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerLua_WriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self));
    if (vqscilexerlua) {
        return vqscilexerlua->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerLua::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerLua_SuperWriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->QsciLexerLua::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerLua::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnWriteProperties(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self)))
        vqscilexerlua->qscilexerlua_writeproperties_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerLua_Event(QsciLexerLua* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerLua_SuperEvent(QsciLexerLua* self, QEvent* event) {
    return self->QsciLexerLua::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnEvent(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_event_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerLua_EventFilter(QsciLexerLua* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerLua_SuperEventFilter(QsciLexerLua* self, QObject* watched, QEvent* event) {
    return self->QsciLexerLua::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnEventFilter(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_eventfilter_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_TimerEvent(QsciLexerLua* self, QTimerEvent* event) {
    auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self);
    if (vqscilexerlua) {
        vqscilexerlua->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerLua::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerLua_SuperTimerEvent(QsciLexerLua* self, QTimerEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->QsciLexerLua::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerLua::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnTimerEvent(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_timerevent_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_ChildEvent(QsciLexerLua* self, QChildEvent* event) {
    auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self);
    if (vqscilexerlua) {
        vqscilexerlua->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerLua::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerLua_SuperChildEvent(QsciLexerLua* self, QChildEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->QsciLexerLua::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerLua::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnChildEvent(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_childevent_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_CustomEvent(QsciLexerLua* self, QEvent* event) {
    auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self);
    if (vqscilexerlua) {
        vqscilexerlua->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerLua::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerLua_SuperCustomEvent(QsciLexerLua* self, QEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->QsciLexerLua::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerLua::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnCustomEvent(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_customevent_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_ConnectNotify(QsciLexerLua* self, const QMetaMethod* signal) {
    auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self);
    if (vqscilexerlua) {
        vqscilexerlua->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerLua::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerLua_SuperConnectNotify(QsciLexerLua* self, const QMetaMethod* signal) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->QsciLexerLua::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerLua::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnConnectNotify(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_connectnotify_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerLua_DisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal) {
    auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self);
    if (vqscilexerlua) {
        vqscilexerlua->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerLua::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerLua_SuperDisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->QsciLexerLua::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerLua::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDisconnectNotify(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self))
        vqscilexerlua->qscilexerlua_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerLua_TextAsBytes(const QsciLexerLua* self, const libqt_string text) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerlua->VirtualQsciLexerLua::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerLua::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerLua_BytesAsText(const QsciLexerLua* self, const char* bytes, int size) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        auto _ret = vqscilexerlua->VirtualQsciLexerLua::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerLua::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerLua_Sender(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->VirtualQsciLexerLua::sender();
    } else
        qFatal("Error: Protected method QsciLexerLua::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerLua_SenderSignalIndex(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->VirtualQsciLexerLua::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerLua::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerLua_Receivers(const QsciLexerLua* self, const char* signal) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->VirtualQsciLexerLua::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerLua::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerLua_IsSignalConnected(const QsciLexerLua* self, const QMetaMethod* signal) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->VirtualQsciLexerLua::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerLua::isSignalConnected called without a directly constructed type");
}

void QsciLexerLua_Delete(QsciLexerLua* self) {
    delete self;
}
