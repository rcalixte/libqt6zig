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
#include <qscilexer.h>
#include "libqscilexer.h"
#include "libqscilexer.hxx"

QsciLexer* QsciLexer_new() {
    return new VirtualQsciLexer();
}

QsciLexer* QsciLexer_new2(QObject* parent) {
    return new VirtualQsciLexer(parent);
}

QMetaObject* QsciLexer_MetaObject(const QsciLexer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexer_Metacast(QsciLexer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexer_Metacall(QsciLexer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexer_Tr(const char* s) {
    auto _ret = QsciLexer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexer_Language(const QsciLexer* self) {
    return (const char*)self->language();
}

const char* QsciLexer_Lexer(const QsciLexer* self) {
    return (const char*)self->lexer();
}

int QsciLexer_LexerId(const QsciLexer* self) {
    return self->lexerId();
}

QsciAbstractAPIs* QsciLexer_Apis(const QsciLexer* self) {
    return self->apis();
}

const char* QsciLexer_AutoCompletionFillups(const QsciLexer* self) {
    return (const char*)self->autoCompletionFillups();
}

libqt_list /* of libqt_string */ QsciLexer_AutoCompletionWordSeparators(const QsciLexer* self) {
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

int QsciLexer_AutoIndentStyle(QsciLexer* self) {
    return self->autoIndentStyle();
}

const char* QsciLexer_BlockEnd(const QsciLexer* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

int QsciLexer_BlockLookback(const QsciLexer* self) {
    return self->blockLookback();
}

const char* QsciLexer_BlockStart(const QsciLexer* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexer_BlockStartKeyword(const QsciLexer* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

int QsciLexer_BraceStyle(const QsciLexer* self) {
    return self->braceStyle();
}

bool QsciLexer_CaseSensitive(const QsciLexer* self) {
    return self->caseSensitive();
}

QColor* QsciLexer_Color(const QsciLexer* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

bool QsciLexer_EolFill(const QsciLexer* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

QFont* QsciLexer_Font(const QsciLexer* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

int QsciLexer_IndentationGuideView(const QsciLexer* self) {
    return self->indentationGuideView();
}

const char* QsciLexer_Keywords(const QsciLexer* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

int QsciLexer_DefaultStyle(const QsciLexer* self) {
    return self->defaultStyle();
}

libqt_string QsciLexer_Description(const QsciLexer* self, int style) {
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

QColor* QsciLexer_Paper(const QsciLexer* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

QColor* QsciLexer_DefaultColor(const QsciLexer* self) {
    return new QColor(self->defaultColor());
}

QColor* QsciLexer_DefaultColor2(const QsciLexer* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexer_DefaultEolFill(const QsciLexer* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexer_DefaultFont(const QsciLexer* self) {
    return new QFont(self->defaultFont());
}

QFont* QsciLexer_DefaultFont2(const QsciLexer* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexer_DefaultPaper(const QsciLexer* self) {
    return new QColor(self->defaultPaper());
}

QColor* QsciLexer_DefaultPaper2(const QsciLexer* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

QsciScintilla* QsciLexer_Editor(const QsciLexer* self) {
    return self->editor();
}

void QsciLexer_SetAPIs(QsciLexer* self, QsciAbstractAPIs* apis) {
    self->setAPIs(apis);
}

void QsciLexer_SetDefaultColor(QsciLexer* self, const QColor* c) {
    self->setDefaultColor(*c);
}

void QsciLexer_SetDefaultFont(QsciLexer* self, const QFont* f) {
    self->setDefaultFont(*f);
}

void QsciLexer_SetDefaultPaper(QsciLexer* self, const QColor* c) {
    self->setDefaultPaper(*c);
}

void QsciLexer_SetEditor(QsciLexer* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

bool QsciLexer_ReadSettings(QsciLexer* self, QSettings* qs) {
    return self->readSettings(*qs);
}

void QsciLexer_RefreshProperties(QsciLexer* self) {
    self->refreshProperties();
}

int QsciLexer_StyleBitsNeeded(const QsciLexer* self) {
    return self->styleBitsNeeded();
}

const char* QsciLexer_WordCharacters(const QsciLexer* self) {
    return (const char*)self->wordCharacters();
}

bool QsciLexer_WriteSettings(const QsciLexer* self, QSettings* qs) {
    return self->writeSettings(*qs);
}

void QsciLexer_SetAutoIndentStyle(QsciLexer* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

void QsciLexer_SetColor(QsciLexer* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

void QsciLexer_SetEolFill(QsciLexer* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

void QsciLexer_SetFont(QsciLexer* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

void QsciLexer_SetPaper(QsciLexer* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

void QsciLexer_ColorChanged(QsciLexer* self, const QColor* c, int style) {
    self->colorChanged(*c, static_cast<int>(style));
}

void QsciLexer_Connect_ColorChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, QColor*, int) = reinterpret_cast<void (*)(QsciLexer*, QColor*, int)>(slot);
    QsciLexer::connect(self,
                       static_cast<void (QsciLexer::*)(const QColor&, int)>(&QsciLexer::colorChanged),
                       [self, slotFunc](const QColor& c, int style) {
                           const QColor& c_ret = c;
                           // Cast returned reference into pointer
                           QColor* sigval1 = const_cast<QColor*>(&c_ret);
                           int sigval2 = style;
                           slotFunc(self, sigval1, sigval2);
                       });
}

void QsciLexer_EolFillChanged(QsciLexer* self, bool eolfilled, int style) {
    self->eolFillChanged(eolfilled, static_cast<int>(style));
}

void QsciLexer_Connect_EolFillChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, bool, int) = reinterpret_cast<void (*)(QsciLexer*, bool, int)>(slot);
    QsciLexer::connect(self,
                       static_cast<void (QsciLexer::*)(bool, int)>(&QsciLexer::eolFillChanged),
                       [self, slotFunc](bool eolfilled, int style) {
                           bool sigval1 = eolfilled;
                           int sigval2 = style;
                           slotFunc(self, sigval1, sigval2);
                       });
}

void QsciLexer_FontChanged(QsciLexer* self, const QFont* f, int style) {
    self->fontChanged(*f, static_cast<int>(style));
}

void QsciLexer_Connect_FontChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, QFont*, int) = reinterpret_cast<void (*)(QsciLexer*, QFont*, int)>(slot);
    QsciLexer::connect(self,
                       static_cast<void (QsciLexer::*)(const QFont&, int)>(&QsciLexer::fontChanged),
                       [self, slotFunc](const QFont& f, int style) {
                           const QFont& f_ret = f;
                           // Cast returned reference into pointer
                           QFont* sigval1 = const_cast<QFont*>(&f_ret);
                           int sigval2 = style;
                           slotFunc(self, sigval1, sigval2);
                       });
}

void QsciLexer_PaperChanged(QsciLexer* self, const QColor* c, int style) {
    self->paperChanged(*c, static_cast<int>(style));
}

void QsciLexer_Connect_PaperChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, QColor*, int) = reinterpret_cast<void (*)(QsciLexer*, QColor*, int)>(slot);
    QsciLexer::connect(self,
                       static_cast<void (QsciLexer::*)(const QColor&, int)>(&QsciLexer::paperChanged),
                       [self, slotFunc](const QColor& c, int style) {
                           const QColor& c_ret = c;
                           // Cast returned reference into pointer
                           QColor* sigval1 = const_cast<QColor*>(&c_ret);
                           int sigval2 = style;
                           slotFunc(self, sigval1, sigval2);
                       });
}

void QsciLexer_PropertyChanged(QsciLexer* self, const char* prop, const char* val) {
    self->propertyChanged(prop, val);
}

void QsciLexer_Connect_PropertyChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, const char*, const char*) = reinterpret_cast<void (*)(QsciLexer*, const char*, const char*)>(slot);
    QsciLexer::connect(self,
                       static_cast<void (QsciLexer::*)(const char*, const char*)>(&QsciLexer::propertyChanged),
                       [self, slotFunc](const char* prop, const char* val) {
                           const char* sigval1 = (const char*)prop;
                           const char* sigval2 = (const char*)val;
                           slotFunc(self, sigval1, sigval2);
                       });
}

bool QsciLexer_ReadProperties(QsciLexer* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer) {
        return vqscilexer->readProperties(*qs, prefix_QString);
    }
    qFatal("Error: Protected method QsciLexer::readProperties called without a directly constructed type");
}

bool QsciLexer_WriteProperties(const QsciLexer* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexer = dynamic_cast<const VirtualQsciLexer*>(self);
    if (vqscilexer) {
        return vqscilexer->writeProperties(*qs, prefix_QString);
    }
    qFatal("Error: Protected method QsciLexer::writeProperties called without a directly constructed type");
}

libqt_string QsciLexer_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexer_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QsciLexer_ReadSettings2(QsciLexer* self, QSettings* qs, const char* prefix) {
    return self->readSettings(*qs, prefix);
}

bool QsciLexer_WriteSettings2(const QsciLexer* self, QSettings* qs, const char* prefix) {
    return self->writeSettings(*qs, prefix);
}

// Base class handler implementation
QMetaObject* QsciLexer_SuperMetaObject(const QsciLexer* self) {
    return (QMetaObject*)self->QsciLexer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnMetaObject(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_metaobject_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexer_SuperMetacast(QsciLexer* self, const char* param1) {
    return self->QsciLexer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnMetacast(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_metacast_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexer_SuperMetacall(QsciLexer* self, int param1, int param2, void** param3) {
    return self->QsciLexer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnMetacall(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_metacall_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnLanguage(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_language_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Language_Callback>(slot);
}

// Base class handler implementation
const char* QsciLexer_SuperLexer(const QsciLexer* self) {
    return (const char*)self->QsciLexer::lexer();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnLexer(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_lexer_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Lexer_Callback>(slot);
}

// Base class handler implementation
int QsciLexer_SuperLexerId(const QsciLexer* self) {
    return self->QsciLexer::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnLexerId(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_lexerid_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_LexerId_Callback>(slot);
}

// Base class handler implementation
const char* QsciLexer_SuperAutoCompletionFillups(const QsciLexer* self) {
    return (const char*)self->QsciLexer::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnAutoCompletionFillups(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_AutoCompletionFillups_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciLexer_SuperAutoCompletionWordSeparators(const QsciLexer* self) {
    QList<QString> _ret = self->QsciLexer::autoCompletionWordSeparators();
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
void QsciLexer_OnAutoCompletionWordSeparators(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_AutoCompletionWordSeparators_Callback>(slot);
}

// Base class handler implementation
const char* QsciLexer_SuperBlockEnd(const QsciLexer* self, int* style) {
    return (const char*)self->QsciLexer::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBlockEnd(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_blockend_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_BlockEnd_Callback>(slot);
}

// Base class handler implementation
int QsciLexer_SuperBlockLookback(const QsciLexer* self) {
    return self->QsciLexer::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBlockLookback(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_blocklookback_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_BlockLookback_Callback>(slot);
}

// Base class handler implementation
const char* QsciLexer_SuperBlockStart(const QsciLexer* self, int* style) {
    return (const char*)self->QsciLexer::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBlockStart(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_blockstart_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_BlockStart_Callback>(slot);
}

// Base class handler implementation
const char* QsciLexer_SuperBlockStartKeyword(const QsciLexer* self, int* style) {
    return (const char*)self->QsciLexer::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBlockStartKeyword(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_BlockStartKeyword_Callback>(slot);
}

// Base class handler implementation
int QsciLexer_SuperBraceStyle(const QsciLexer* self) {
    return self->QsciLexer::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBraceStyle(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_bracestyle_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_BraceStyle_Callback>(slot);
}

// Base class handler implementation
bool QsciLexer_SuperCaseSensitive(const QsciLexer* self) {
    return self->QsciLexer::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnCaseSensitive(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_casesensitive_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_CaseSensitive_Callback>(slot);
}

// Base class handler implementation
QColor* QsciLexer_SuperColor(const QsciLexer* self, int style) {
    return new QColor(self->QsciLexer::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnColor(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_color_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Color_Callback>(slot);
}

// Base class handler implementation
bool QsciLexer_SuperEolFill(const QsciLexer* self, int style) {
    return self->QsciLexer::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnEolFill(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_eolfill_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_EolFill_Callback>(slot);
}

// Base class handler implementation
QFont* QsciLexer_SuperFont(const QsciLexer* self, int style) {
    return new QFont(self->QsciLexer::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnFont(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_font_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Font_Callback>(slot);
}

// Base class handler implementation
int QsciLexer_SuperIndentationGuideView(const QsciLexer* self) {
    return self->QsciLexer::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnIndentationGuideView(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_indentationguideview_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_IndentationGuideView_Callback>(slot);
}

// Base class handler implementation
const char* QsciLexer_SuperKeywords(const QsciLexer* self, int set) {
    return (const char*)self->QsciLexer::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnKeywords(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_keywords_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Keywords_Callback>(slot);
}

// Base class handler implementation
int QsciLexer_SuperDefaultStyle(const QsciLexer* self) {
    return self->QsciLexer::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultStyle(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_defaultstyle_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultStyle_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDescription(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_description_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Description_Callback>(slot);
}

// Base class handler implementation
QColor* QsciLexer_SuperPaper(const QsciLexer* self, int style) {
    return new QColor(self->QsciLexer::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnPaper(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_paper_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Paper_Callback>(slot);
}

// Base class handler implementation
QColor* QsciLexer_SuperDefaultColor2(const QsciLexer* self, int style) {
    return new QColor(self->QsciLexer::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultColor2(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultColor2_Callback>(slot);
}

// Base class handler implementation
bool QsciLexer_SuperDefaultEolFill(const QsciLexer* self, int style) {
    return self->QsciLexer::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultEolFill(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultEolFill_Callback>(slot);
}

// Base class handler implementation
QFont* QsciLexer_SuperDefaultFont2(const QsciLexer* self, int style) {
    return new QFont(self->QsciLexer::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultFont2(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_defaultfont2_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultFont2_Callback>(slot);
}

// Base class handler implementation
QColor* QsciLexer_SuperDefaultPaper2(const QsciLexer* self, int style) {
    return new QColor(self->QsciLexer::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultPaper2(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultPaper2_Callback>(slot);
}

// Base class handler implementation
void QsciLexer_SuperSetEditor(QsciLexer* self, QsciScintilla* editor) {
    self->QsciLexer::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetEditor(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_seteditor_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_SetEditor_Callback>(slot);
}

// Base class handler implementation
void QsciLexer_SuperRefreshProperties(QsciLexer* self) {
    self->QsciLexer::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnRefreshProperties(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_refreshproperties_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_RefreshProperties_Callback>(slot);
}

// Base class handler implementation
int QsciLexer_SuperStyleBitsNeeded(const QsciLexer* self) {
    return self->QsciLexer::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnStyleBitsNeeded(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_StyleBitsNeeded_Callback>(slot);
}

// Base class handler implementation
const char* QsciLexer_SuperWordCharacters(const QsciLexer* self) {
    return (const char*)self->QsciLexer::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnWordCharacters(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_wordcharacters_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_WordCharacters_Callback>(slot);
}

// Base class handler implementation
void QsciLexer_SuperSetAutoIndentStyle(QsciLexer* self, int autoindentstyle) {
    self->QsciLexer::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetAutoIndentStyle(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_SetAutoIndentStyle_Callback>(slot);
}

// Base class handler implementation
void QsciLexer_SuperSetColor(QsciLexer* self, const QColor* c, int style) {
    self->QsciLexer::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetColor(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_setcolor_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_SetColor_Callback>(slot);
}

// Base class handler implementation
void QsciLexer_SuperSetEolFill(QsciLexer* self, bool eoffill, int style) {
    self->QsciLexer::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetEolFill(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_seteolfill_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_SetEolFill_Callback>(slot);
}

// Base class handler implementation
void QsciLexer_SuperSetFont(QsciLexer* self, const QFont* f, int style) {
    self->QsciLexer::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetFont(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_setfont_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_SetFont_Callback>(slot);
}

// Base class handler implementation
void QsciLexer_SuperSetPaper(QsciLexer* self, const QColor* c, int style) {
    self->QsciLexer::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetPaper(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_setpaper_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_SetPaper_Callback>(slot);
}

// Base class handler implementation
bool QsciLexer_SuperReadProperties(QsciLexer* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self)) {
        return vqscilexer->QsciLexer::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexer::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnReadProperties(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_readproperties_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_ReadProperties_Callback>(slot);
}

// Base class handler implementation
bool QsciLexer_SuperWriteProperties(const QsciLexer* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self))) {
        return vqscilexer->QsciLexer::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexer::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnWriteProperties(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self)))
        vqscilexer->qscilexer_writeproperties_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexer_Event(QsciLexer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexer_SuperEvent(QsciLexer* self, QEvent* event) {
    return self->QsciLexer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnEvent(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_event_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexer_EventFilter(QsciLexer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexer_SuperEventFilter(QsciLexer* self, QObject* watched, QEvent* event) {
    return self->QsciLexer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnEventFilter(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_eventfilter_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexer_TimerEvent(QsciLexer* self, QTimerEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer) {
        vqscilexer->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexer_SuperTimerEvent(QsciLexer* self, QTimerEvent* event) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self)) {
        vqscilexer->QsciLexer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnTimerEvent(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_timerevent_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexer_ChildEvent(QsciLexer* self, QChildEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer) {
        vqscilexer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexer_SuperChildEvent(QsciLexer* self, QChildEvent* event) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self)) {
        vqscilexer->QsciLexer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnChildEvent(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_childevent_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexer_CustomEvent(QsciLexer* self, QEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer) {
        vqscilexer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexer_SuperCustomEvent(QsciLexer* self, QEvent* event) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self)) {
        vqscilexer->QsciLexer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnCustomEvent(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_customevent_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexer_ConnectNotify(QsciLexer* self, const QMetaMethod* signal) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer) {
        vqscilexer->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexer_SuperConnectNotify(QsciLexer* self, const QMetaMethod* signal) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self)) {
        vqscilexer->QsciLexer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnConnectNotify(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_connectnotify_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexer_DisconnectNotify(QsciLexer* self, const QMetaMethod* signal) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer) {
        vqscilexer->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexer_SuperDisconnectNotify(QsciLexer* self, const QMetaMethod* signal) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self)) {
        vqscilexer->QsciLexer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDisconnectNotify(QsciLexer* self, intptr_t slot) {
    if (auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self))
        vqscilexer->qscilexer_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexer::QsciLexer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexer_TextAsBytes(const QsciLexer* self, const libqt_string text) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexer->VirtualQsciLexer::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexer::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexer_BytesAsText(const QsciLexer* self, const char* bytes, int size) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self))) {
        auto _ret = vqscilexer->VirtualQsciLexer::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexer::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexer_Sender(const QsciLexer* self) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self))) {
        return vqscilexer->VirtualQsciLexer::sender();
    } else
        qFatal("Error: Protected method QsciLexer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexer_SenderSignalIndex(const QsciLexer* self) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self))) {
        return vqscilexer->VirtualQsciLexer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexer_Receivers(const QsciLexer* self, const char* signal) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self))) {
        return vqscilexer->VirtualQsciLexer::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexer_IsSignalConnected(const QsciLexer* self, const QMetaMethod* signal) {
    if (auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self))) {
        return vqscilexer->VirtualQsciLexer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexer::isSignalConnected called without a directly constructed type");
}

void QsciLexer_Delete(QsciLexer* self) {
    delete self;
}
