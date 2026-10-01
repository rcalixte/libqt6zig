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
#include <qscilexerd.h>
#include "libqscilexerd.h"
#include "libqscilexerd.hxx"

QsciLexerD* QsciLexerD_new() {
    return new VirtualQsciLexerD();
}

QsciLexerD* QsciLexerD_new2(QObject* parent) {
    return new VirtualQsciLexerD(parent);
}

QMetaObject* QsciLexerD_MetaObject(const QsciLexerD* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerD_Metacast(QsciLexerD* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerD_Metacall(QsciLexerD* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerD_Tr(const char* s) {
    auto _ret = QsciLexerD::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerD_Language(const QsciLexerD* self) {
    return (const char*)self->language();
}

const char* QsciLexerD_Lexer(const QsciLexerD* self) {
    return (const char*)self->lexer();
}

libqt_list /* of libqt_string */ QsciLexerD_AutoCompletionWordSeparators(const QsciLexerD* self) {
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

const char* QsciLexerD_BlockEnd(const QsciLexerD* self) {
    return (const char*)self->blockEnd();
}

const char* QsciLexerD_BlockStart(const QsciLexerD* self) {
    return (const char*)self->blockStart();
}

const char* QsciLexerD_BlockStartKeyword(const QsciLexerD* self) {
    return (const char*)self->blockStartKeyword();
}

int QsciLexerD_BraceStyle(const QsciLexerD* self) {
    return self->braceStyle();
}

const char* QsciLexerD_WordCharacters(const QsciLexerD* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerD_DefaultColor(const QsciLexerD* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerD_DefaultEolFill(const QsciLexerD* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerD_DefaultFont(const QsciLexerD* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerD_DefaultPaper(const QsciLexerD* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerD_Keywords(const QsciLexerD* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerD_Description(const QsciLexerD* self, int style) {
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

void QsciLexerD_RefreshProperties(QsciLexerD* self) {
    self->refreshProperties();
}

bool QsciLexerD_FoldAtElse(const QsciLexerD* self) {
    return self->foldAtElse();
}

bool QsciLexerD_FoldComments(const QsciLexerD* self) {
    return self->foldComments();
}

bool QsciLexerD_FoldCompact(const QsciLexerD* self) {
    return self->foldCompact();
}

void QsciLexerD_SetFoldAtElse(QsciLexerD* self, bool fold) {
    self->setFoldAtElse(fold);
}

void QsciLexerD_SetFoldComments(QsciLexerD* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerD_SetFoldCompact(QsciLexerD* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerD_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerD::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerD_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerD::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerD_BlockEnd1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStart1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStartKeyword1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerD_SuperMetaObject(const QsciLexerD* self) {
    return (QMetaObject*)self->QsciLexerD::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnMetaObject(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_metaobject_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerD_SuperMetacast(QsciLexerD* self, const char* param1) {
    return self->QsciLexerD::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnMetacast(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_metacast_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerD_SuperMetacall(QsciLexerD* self, int param1, int param2, void** param3) {
    return self->QsciLexerD::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnMetacall(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_metacall_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerD_SuperSetFoldAtElse(QsciLexerD* self, bool fold) {
    self->QsciLexerD::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldAtElse(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldAtElse_Callback>(slot);
}

// Base class handler implementation
void QsciLexerD_SuperSetFoldComments(QsciLexerD* self, bool fold) {
    self->QsciLexerD::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldComments(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerD_SuperSetFoldCompact(QsciLexerD* self, bool fold) {
    self->QsciLexerD::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldCompact(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerD_LexerId(const QsciLexerD* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerD_SuperLexerId(const QsciLexerD* self) {
    return self->QsciLexerD::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnLexerId(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_lexerid_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerD_AutoCompletionFillups(const QsciLexerD* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerD_SuperAutoCompletionFillups(const QsciLexerD* self) {
    return (const char*)self->QsciLexerD::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnAutoCompletionFillups(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerD_BlockLookback(const QsciLexerD* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerD_SuperBlockLookback(const QsciLexerD* self) {
    return self->QsciLexerD::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockLookback(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_blocklookback_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerD_CaseSensitive(const QsciLexerD* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerD_SuperCaseSensitive(const QsciLexerD* self) {
    return self->QsciLexerD::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnCaseSensitive(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_casesensitive_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerD_Color(const QsciLexerD* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerD_SuperColor(const QsciLexerD* self, int style) {
    return new QColor(self->QsciLexerD::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnColor(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_color_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerD_EolFill(const QsciLexerD* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerD_SuperEolFill(const QsciLexerD* self, int style) {
    return self->QsciLexerD::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEolFill(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_eolfill_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerD_Font(const QsciLexerD* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerD_SuperFont(const QsciLexerD* self, int style) {
    return new QFont(self->QsciLexerD::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnFont(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_font_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerD_IndentationGuideView(const QsciLexerD* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerD_SuperIndentationGuideView(const QsciLexerD* self) {
    return self->QsciLexerD::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnIndentationGuideView(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerD_DefaultStyle(const QsciLexerD* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerD_SuperDefaultStyle(const QsciLexerD* self) {
    return self->QsciLexerD::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultStyle(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerD_Paper(const QsciLexerD* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerD_SuperPaper(const QsciLexerD* self, int style) {
    return new QColor(self->QsciLexerD::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnPaper(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_paper_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerD_DefaultColor2(const QsciLexerD* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerD_SuperDefaultColor2(const QsciLexerD* self, int style) {
    return new QColor(self->QsciLexerD::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultColor2(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerD_DefaultFont2(const QsciLexerD* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerD_SuperDefaultFont2(const QsciLexerD* self, int style) {
    return new QFont(self->QsciLexerD::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultFont2(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerD_DefaultPaper2(const QsciLexerD* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerD_SuperDefaultPaper2(const QsciLexerD* self, int style) {
    return new QColor(self->QsciLexerD::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultPaper2(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_SetEditor(QsciLexerD* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerD_SuperSetEditor(QsciLexerD* self, QsciScintilla* editor) {
    self->QsciLexerD::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetEditor(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_seteditor_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerD_StyleBitsNeeded(const QsciLexerD* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerD_SuperStyleBitsNeeded(const QsciLexerD* self) {
    return self->QsciLexerD::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnStyleBitsNeeded(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_SetAutoIndentStyle(QsciLexerD* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerD_SuperSetAutoIndentStyle(QsciLexerD* self, int autoindentstyle) {
    self->QsciLexerD::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetAutoIndentStyle(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_SetColor(QsciLexerD* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerD_SuperSetColor(QsciLexerD* self, const QColor* c, int style) {
    self->QsciLexerD::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetColor(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_setcolor_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_SetEolFill(QsciLexerD* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerD_SuperSetEolFill(QsciLexerD* self, bool eoffill, int style) {
    self->QsciLexerD::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetEolFill(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_seteolfill_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_SetFont(QsciLexerD* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerD_SuperSetFont(QsciLexerD* self, const QFont* f, int style) {
    self->QsciLexerD::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFont(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_setfont_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_SetPaper(QsciLexerD* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerD_SuperSetPaper(QsciLexerD* self, const QColor* c, int style) {
    self->QsciLexerD::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetPaper(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_setpaper_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerD_ReadProperties(QsciLexerD* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd) {
        return vqscilexerd->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerD::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerD_SuperReadProperties(QsciLexerD* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        return vqscilexerd->QsciLexerD::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerD::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnReadProperties(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_readproperties_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerD_WriteProperties(const QsciLexerD* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd) {
        return vqscilexerd->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerD::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerD_SuperWriteProperties(const QsciLexerD* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->QsciLexerD::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerD::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnWriteProperties(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self)))
        vqscilexerd->qscilexerd_writeproperties_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerD_Event(QsciLexerD* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerD_SuperEvent(QsciLexerD* self, QEvent* event) {
    return self->QsciLexerD::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEvent(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_event_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerD_EventFilter(QsciLexerD* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerD_SuperEventFilter(QsciLexerD* self, QObject* watched, QEvent* event) {
    return self->QsciLexerD::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEventFilter(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_eventfilter_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_TimerEvent(QsciLexerD* self, QTimerEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd) {
        vqscilexerd->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerD::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerD_SuperTimerEvent(QsciLexerD* self, QTimerEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->QsciLexerD::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerD::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnTimerEvent(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_timerevent_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_ChildEvent(QsciLexerD* self, QChildEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd) {
        vqscilexerd->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerD::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerD_SuperChildEvent(QsciLexerD* self, QChildEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->QsciLexerD::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerD::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnChildEvent(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_childevent_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_CustomEvent(QsciLexerD* self, QEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd) {
        vqscilexerd->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerD::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerD_SuperCustomEvent(QsciLexerD* self, QEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->QsciLexerD::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerD::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnCustomEvent(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_customevent_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_ConnectNotify(QsciLexerD* self, const QMetaMethod* signal) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd) {
        vqscilexerd->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerD::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerD_SuperConnectNotify(QsciLexerD* self, const QMetaMethod* signal) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->QsciLexerD::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerD::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnConnectNotify(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_connectnotify_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerD_DisconnectNotify(QsciLexerD* self, const QMetaMethod* signal) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd) {
        vqscilexerd->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerD::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerD_SuperDisconnectNotify(QsciLexerD* self, const QMetaMethod* signal) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->QsciLexerD::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerD::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDisconnectNotify(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self))
        vqscilexerd->qscilexerd_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerD_TextAsBytes(const QsciLexerD* self, const libqt_string text) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerd->VirtualQsciLexerD::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerD::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerD_BytesAsText(const QsciLexerD* self, const char* bytes, int size) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        auto _ret = vqscilexerd->VirtualQsciLexerD::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerD::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerD_Sender(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->VirtualQsciLexerD::sender();
    } else
        qFatal("Error: Protected method QsciLexerD::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerD_SenderSignalIndex(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->VirtualQsciLexerD::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerD::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerD_Receivers(const QsciLexerD* self, const char* signal) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->VirtualQsciLexerD::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerD::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerD_IsSignalConnected(const QsciLexerD* self, const QMetaMethod* signal) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->VirtualQsciLexerD::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerD::isSignalConnected called without a directly constructed type");
}

void QsciLexerD_Delete(QsciLexerD* self) {
    delete self;
}
