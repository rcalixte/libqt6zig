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
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscilexerpython.h>
#include "libqscilexerpython.h"
#include "libqscilexerpython.hxx"

QsciLexerPython* QsciLexerPython_new() {
    return new VirtualQsciLexerPython();
}

QsciLexerPython* QsciLexerPython_new2(QObject* parent) {
    return new VirtualQsciLexerPython(parent);
}

QMetaObject* QsciLexerPython_MetaObject(const QsciLexerPython* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPython_Metacast(QsciLexerPython* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPython_Metacall(QsciLexerPython* self, int param1, int param2, void** param3) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPython*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPython_OnMetacall(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPython_QBaseMetacall(QsciLexerPython* self, int param1, int param2, void** param3) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Metacall_IsBase(true);
        return vqscilexerpython->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPython*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPython_Tr(const char* s) {
    QString _ret = QsciLexerPython::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPython_Language(const QsciLexerPython* self) {
    return (const char*)self->language();
}

const char* QsciLexerPython_Lexer(const QsciLexerPython* self) {
    return (const char*)self->lexer();
}

libqt_list /* of libqt_string */ QsciLexerPython_AutoCompletionWordSeparators(const QsciLexerPython* self) {
    QList<QString> _ret = self->autoCompletionWordSeparators();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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

int QsciLexerPython_BlockLookback(const QsciLexerPython* self) {
    return self->blockLookback();
}

const char* QsciLexerPython_BlockStart(const QsciLexerPython* self) {
    return (const char*)self->blockStart();
}

int QsciLexerPython_BraceStyle(const QsciLexerPython* self) {
    return self->braceStyle();
}

QColor* QsciLexerPython_DefaultColor(const QsciLexerPython* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPython_DefaultEolFill(const QsciLexerPython* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPython_DefaultFont(const QsciLexerPython* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPython_DefaultPaper(const QsciLexerPython* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

int QsciLexerPython_IndentationGuideView(const QsciLexerPython* self) {
    auto* vqscilexerpython = dynamic_cast<const VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return self->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPython*)self)->indentationGuideView();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPython_OnIndentationGuideView(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_IndentationGuideView_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPython_QBaseIndentationGuideView(const QsciLexerPython* self) {
    auto* vqscilexerpython = dynamic_cast<const VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_IndentationGuideView_IsBase(true);
        return vqscilexerpython->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPython*)self)->indentationGuideView();
    }
}

const char* QsciLexerPython_Keywords(const QsciLexerPython* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerPython_Description(const QsciLexerPython* self, int style) {
    QString _ret = self->description(static_cast<int>(style));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciLexerPython_RefreshProperties(QsciLexerPython* self) {
    self->refreshProperties();
}

bool QsciLexerPython_FoldComments(const QsciLexerPython* self) {
    return self->foldComments();
}

void QsciLexerPython_SetFoldCompact(QsciLexerPython* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerPython_FoldCompact(const QsciLexerPython* self) {
    return self->foldCompact();
}

bool QsciLexerPython_FoldQuotes(const QsciLexerPython* self) {
    return self->foldQuotes();
}

int QsciLexerPython_IndentationWarning(const QsciLexerPython* self) {
    return static_cast<int>(self->indentationWarning());
}

void QsciLexerPython_SetHighlightSubidentifiers(QsciLexerPython* self, bool enabled) {
    self->setHighlightSubidentifiers(enabled);
}

bool QsciLexerPython_HighlightSubidentifiers(const QsciLexerPython* self) {
    return self->highlightSubidentifiers();
}

void QsciLexerPython_SetStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed) {
    self->setStringsOverNewlineAllowed(allowed);
}

bool QsciLexerPython_StringsOverNewlineAllowed(const QsciLexerPython* self) {
    return self->stringsOverNewlineAllowed();
}

void QsciLexerPython_SetV2UnicodeAllowed(QsciLexerPython* self, bool allowed) {
    self->setV2UnicodeAllowed(allowed);
}

bool QsciLexerPython_V2UnicodeAllowed(const QsciLexerPython* self) {
    return self->v2UnicodeAllowed();
}

void QsciLexerPython_SetV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed) {
    self->setV3BinaryOctalAllowed(allowed);
}

bool QsciLexerPython_V3BinaryOctalAllowed(const QsciLexerPython* self) {
    return self->v3BinaryOctalAllowed();
}

void QsciLexerPython_SetV3BytesAllowed(QsciLexerPython* self, bool allowed) {
    self->setV3BytesAllowed(allowed);
}

bool QsciLexerPython_V3BytesAllowed(const QsciLexerPython* self) {
    return self->v3BytesAllowed();
}

void QsciLexerPython_SetFoldComments(QsciLexerPython* self, bool fold) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        self->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerPython*)self)->setFoldComments(fold);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPython_OnSetFoldComments(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFoldComments_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QsciLexerPython_QBaseSetFoldComments(QsciLexerPython* self, bool fold) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetFoldComments_IsBase(true);
        vqscilexerpython->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerPython*)self)->setFoldComments(fold);
    }
}

void QsciLexerPython_SetFoldQuotes(QsciLexerPython* self, bool fold) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        self->setFoldQuotes(fold);
    } else {
        ((VirtualQsciLexerPython*)self)->setFoldQuotes(fold);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPython_OnSetFoldQuotes(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetFoldQuotes_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFoldQuotes_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QsciLexerPython_QBaseSetFoldQuotes(QsciLexerPython* self, bool fold) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetFoldQuotes_IsBase(true);
        vqscilexerpython->setFoldQuotes(fold);
    } else {
        ((VirtualQsciLexerPython*)self)->setFoldQuotes(fold);
    }
}

void QsciLexerPython_SetIndentationWarning(QsciLexerPython* self, int warn) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        self->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
    } else {
        ((VirtualQsciLexerPython*)self)->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPython_OnSetIndentationWarning(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetIndentationWarning_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetIndentationWarning_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QsciLexerPython_QBaseSetIndentationWarning(QsciLexerPython* self, int warn) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetIndentationWarning_IsBase(true);
        vqscilexerpython->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
    } else {
        ((VirtualQsciLexerPython*)self)->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
    }
}

libqt_string QsciLexerPython_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPython::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPython_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerPython::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPython_BlockStart1(const QsciLexerPython* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Derived class handler implementation
int QsciLexerPython_LexerId(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->lexerId();
    } else {
        return ((VirtualQsciLexerPython*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseLexerId(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_LexerId_IsBase(true);
        return vqscilexerpython->lexerId();
    } else {
        return ((VirtualQsciLexerPython*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnLexerId(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_AutoCompletionFillups(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return (const char*)vqscilexerpython->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPython*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseAutoCompletionFillups(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerpython->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPython*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnAutoCompletionFillups(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_BlockEnd(const QsciLexerPython* self, int* style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return (const char*)vqscilexerpython->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPython*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseBlockEnd(const QsciLexerPython* self, int* style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_BlockEnd_IsBase(true);
        return (const char*)vqscilexerpython->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPython*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBlockEnd(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_BlockStartKeyword(const QsciLexerPython* self, int* style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return (const char*)vqscilexerpython->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPython*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseBlockStartKeyword(const QsciLexerPython* self, int* style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerpython->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPython*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBlockStartKeyword(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_CaseSensitive(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->caseSensitive();
    } else {
        return ((VirtualQsciLexerPython*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseCaseSensitive(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_CaseSensitive_IsBase(true);
        return vqscilexerpython->caseSensitive();
    } else {
        return ((VirtualQsciLexerPython*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnCaseSensitive(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPython_Color(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return new QColor(vqscilexerpython->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPython*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPython_QBaseColor(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Color_IsBase(true);
        return new QColor(vqscilexerpython->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPython*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnColor(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Color_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_EolFill(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPython*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseEolFill(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_EolFill_IsBase(true);
        return vqscilexerpython->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPython*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEolFill(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPython_Font(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return new QFont(vqscilexerpython->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPython*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPython_QBaseFont(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Font_IsBase(true);
        return new QFont(vqscilexerpython->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPython*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnFont(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Font_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_DefaultStyle(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->defaultStyle();
    } else {
        return ((VirtualQsciLexerPython*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseDefaultStyle(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DefaultStyle_IsBase(true);
        return vqscilexerpython->defaultStyle();
    } else {
        return ((VirtualQsciLexerPython*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultStyle(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPython_Paper(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return new QColor(vqscilexerpython->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPython*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPython_QBasePaper(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Paper_IsBase(true);
        return new QColor(vqscilexerpython->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPython*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnPaper(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Paper_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPython_DefaultColor2(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return new QColor(vqscilexerpython->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPython*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPython_QBaseDefaultColor2(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerpython->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPython*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultColor2(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPython_DefaultFont2(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return new QFont(vqscilexerpython->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPython*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPython_QBaseDefaultFont2(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerpython->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPython*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultFont2(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPython_DefaultPaper2(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return new QColor(vqscilexerpython->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPython*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPython_QBaseDefaultPaper2(const QsciLexerPython* self, int style) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerpython->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPython*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultPaper2(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetEditor(QsciLexerPython* self, QsciScintilla* editor) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setEditor(editor);
    } else {
        ((VirtualQsciLexerPython*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetEditor(QsciLexerPython* self, QsciScintilla* editor) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetEditor_IsBase(true);
        vqscilexerpython->setEditor(editor);
    } else {
        ((VirtualQsciLexerPython*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetEditor(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_StyleBitsNeeded(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPython*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseStyleBitsNeeded(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_StyleBitsNeeded_IsBase(true);
        return vqscilexerpython->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPython*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnStyleBitsNeeded(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_WordCharacters(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return (const char*)vqscilexerpython->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPython*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseWordCharacters(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_WordCharacters_IsBase(true);
        return (const char*)vqscilexerpython->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPython*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnWordCharacters(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetAutoIndentStyle(QsciLexerPython* self, int autoindentstyle) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPython*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetAutoIndentStyle(QsciLexerPython* self, int autoindentstyle) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetAutoIndentStyle_IsBase(true);
        vqscilexerpython->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPython*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetAutoIndentStyle(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetColor(QsciLexerPython* self, const QColor* c, int style) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPython*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetColor(QsciLexerPython* self, const QColor* c, int style) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetColor_IsBase(true);
        vqscilexerpython->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPython*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetColor(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetEolFill(QsciLexerPython* self, bool eoffill, int style) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPython*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetEolFill(QsciLexerPython* self, bool eoffill, int style) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetEolFill_IsBase(true);
        vqscilexerpython->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPython*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetEolFill(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetFont(QsciLexerPython* self, const QFont* f, int style) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPython*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetFont(QsciLexerPython* self, const QFont* f, int style) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetFont_IsBase(true);
        vqscilexerpython->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPython*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetFont(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetPaper(QsciLexerPython* self, const QColor* c, int style) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPython*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetPaper(QsciLexerPython* self, const QColor* c, int style) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetPaper_IsBase(true);
        vqscilexerpython->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPython*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetPaper(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_ReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPython*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_ReadProperties_IsBase(true);
        return vqscilexerpython->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPython*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnReadProperties(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_WriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPython*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseWriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_WriteProperties_IsBase(true);
        return vqscilexerpython->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPython*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnWriteProperties(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_Event(QsciLexerPython* self, QEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->event(event);
    } else {
        return ((VirtualQsciLexerPython*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseEvent(QsciLexerPython* self, QEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Event_IsBase(true);
        return vqscilexerpython->event(event);
    } else {
        return ((VirtualQsciLexerPython*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEvent(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Event_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_EventFilter(QsciLexerPython* self, QObject* watched, QEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPython*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseEventFilter(QsciLexerPython* self, QObject* watched, QEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_EventFilter_IsBase(true);
        return vqscilexerpython->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPython*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEventFilter(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_TimerEvent(QsciLexerPython* self, QTimerEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->timerEvent(event);
    } else {
        ((VirtualQsciLexerPython*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseTimerEvent(QsciLexerPython* self, QTimerEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_TimerEvent_IsBase(true);
        vqscilexerpython->timerEvent(event);
    } else {
        ((VirtualQsciLexerPython*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnTimerEvent(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_ChildEvent(QsciLexerPython* self, QChildEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->childEvent(event);
    } else {
        ((VirtualQsciLexerPython*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseChildEvent(QsciLexerPython* self, QChildEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_ChildEvent_IsBase(true);
        vqscilexerpython->childEvent(event);
    } else {
        ((VirtualQsciLexerPython*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnChildEvent(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_CustomEvent(QsciLexerPython* self, QEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->customEvent(event);
    } else {
        ((VirtualQsciLexerPython*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseCustomEvent(QsciLexerPython* self, QEvent* event) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_CustomEvent_IsBase(true);
        vqscilexerpython->customEvent(event);
    } else {
        ((VirtualQsciLexerPython*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnCustomEvent(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_ConnectNotify(QsciLexerPython* self, const QMetaMethod* signal) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPython*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseConnectNotify(QsciLexerPython* self, const QMetaMethod* signal) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_ConnectNotify_IsBase(true);
        vqscilexerpython->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPython*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnConnectNotify(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_DisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPython*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseDisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DisconnectNotify_IsBase(true);
        vqscilexerpython->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPython*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDisconnectNotify(QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPython_TextAsBytes(const QsciLexerPython* self, const libqt_string text) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        QByteArray _qb = vqscilexerpython->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerPython*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerPython_QBaseTextAsBytes(const QsciLexerPython* self, const libqt_string text) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerpython->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerPython*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnTextAsBytes(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPython_BytesAsText(const QsciLexerPython* self, const char* bytes, int size) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        QString _ret = vqscilexerpython->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPython*)self)->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerPython_QBaseBytesAsText(const QsciLexerPython* self, const char* bytes, int size) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_BytesAsText_IsBase(true);
        QString _ret = vqscilexerpython->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPython*)self)->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBytesAsText(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPython_Sender(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->sender();
    } else {
        return ((VirtualQsciLexerPython*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPython_QBaseSender(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Sender_IsBase(true);
        return vqscilexerpython->sender();
    } else {
        return ((VirtualQsciLexerPython*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSender(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Sender_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_SenderSignalIndex(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPython*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseSenderSignalIndex(const QsciLexerPython* self) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SenderSignalIndex_IsBase(true);
        return vqscilexerpython->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPython*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSenderSignalIndex(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_Receivers(const QsciLexerPython* self, const char* signal) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->receivers(signal);
    } else {
        return ((VirtualQsciLexerPython*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseReceivers(const QsciLexerPython* self, const char* signal) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Receivers_IsBase(true);
        return vqscilexerpython->receivers(signal);
    } else {
        return ((VirtualQsciLexerPython*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnReceivers(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_IsSignalConnected(const QsciLexerPython* self, const QMetaMethod* signal) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        return vqscilexerpython->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPython*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseIsSignalConnected(const QsciLexerPython* self, const QMetaMethod* signal) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_IsSignalConnected_IsBase(true);
        return vqscilexerpython->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPython*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnIsSignalConnected(const QsciLexerPython* self, intptr_t slot) {
    auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self));
    if (vqscilexerpython && vqscilexerpython->isVirtualQsciLexerPython) {
        vqscilexerpython->setQsciLexerPython_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPython_Delete(QsciLexerPython* self) {
    delete self;
}
