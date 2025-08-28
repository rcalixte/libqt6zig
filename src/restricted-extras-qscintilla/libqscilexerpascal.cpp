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
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPascal*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPascal_OnMetacall(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPascal_QBaseMetacall(QsciLexerPascal* self, int param1, int param2, void** param3) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Metacall_IsBase(true);
        return vqscilexerpascal->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPascal*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPascal_Tr(const char* s) {
    QString _ret = QsciLexerPascal::tr(s);
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
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        self->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerPascal*)self)->setFoldComments(fold);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPascal_OnSetFoldComments(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetFoldComments_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QsciLexerPascal_QBaseSetFoldComments(QsciLexerPascal* self, bool fold) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetFoldComments_IsBase(true);
        vqscilexerpascal->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerPascal*)self)->setFoldComments(fold);
    }
}

void QsciLexerPascal_SetFoldCompact(QsciLexerPascal* self, bool fold) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        self->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerPascal*)self)->setFoldCompact(fold);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPascal_OnSetFoldCompact(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetFoldCompact_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QsciLexerPascal_QBaseSetFoldCompact(QsciLexerPascal* self, bool fold) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetFoldCompact_IsBase(true);
        vqscilexerpascal->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerPascal*)self)->setFoldCompact(fold);
    }
}

void QsciLexerPascal_SetFoldPreprocessor(QsciLexerPascal* self, bool fold) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        self->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerPascal*)self)->setFoldPreprocessor(fold);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPascal_OnSetFoldPreprocessor(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetFoldPreprocessor_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QsciLexerPascal_QBaseSetFoldPreprocessor(QsciLexerPascal* self, bool fold) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetFoldPreprocessor_IsBase(true);
        vqscilexerpascal->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerPascal*)self)->setFoldPreprocessor(fold);
    }
}

libqt_string QsciLexerPascal_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPascal::tr(s, c);
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
    QString _ret = QsciLexerPascal::tr(s, c, static_cast<int>(n));
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

// Derived class handler implementation
int QsciLexerPascal_LexerId(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->lexerId();
    } else {
        return ((VirtualQsciLexerPascal*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPascal_QBaseLexerId(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_LexerId_IsBase(true);
        return vqscilexerpascal->lexerId();
    } else {
        return ((VirtualQsciLexerPascal*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnLexerId(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPascal_AutoCompletionFillups(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return (const char*)vqscilexerpascal->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPascal*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPascal_QBaseAutoCompletionFillups(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerpascal->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPascal*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnAutoCompletionFillups(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPascal_BlockLookback(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->blockLookback();
    } else {
        return ((VirtualQsciLexerPascal*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerPascal_QBaseBlockLookback(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_BlockLookback_IsBase(true);
        return vqscilexerpascal->blockLookback();
    } else {
        return ((VirtualQsciLexerPascal*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnBlockLookback(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPascal_CaseSensitive(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->caseSensitive();
    } else {
        return ((VirtualQsciLexerPascal*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPascal_QBaseCaseSensitive(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_CaseSensitive_IsBase(true);
        return vqscilexerpascal->caseSensitive();
    } else {
        return ((VirtualQsciLexerPascal*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnCaseSensitive(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPascal_Color(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return new QColor(vqscilexerpascal->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPascal*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPascal_QBaseColor(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Color_IsBase(true);
        return new QColor(vqscilexerpascal->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPascal*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnColor(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Color_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPascal_EolFill(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPascal*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPascal_QBaseEolFill(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_EolFill_IsBase(true);
        return vqscilexerpascal->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPascal*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnEolFill(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPascal_Font(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return new QFont(vqscilexerpascal->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPascal*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPascal_QBaseFont(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Font_IsBase(true);
        return new QFont(vqscilexerpascal->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPascal*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnFont(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Font_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPascal_IndentationGuideView(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPascal*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerPascal_QBaseIndentationGuideView(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_IndentationGuideView_IsBase(true);
        return vqscilexerpascal->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPascal*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnIndentationGuideView(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPascal_DefaultStyle(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->defaultStyle();
    } else {
        return ((VirtualQsciLexerPascal*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPascal_QBaseDefaultStyle(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DefaultStyle_IsBase(true);
        return vqscilexerpascal->defaultStyle();
    } else {
        return ((VirtualQsciLexerPascal*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDefaultStyle(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPascal_Paper(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return new QColor(vqscilexerpascal->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPascal*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPascal_QBasePaper(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Paper_IsBase(true);
        return new QColor(vqscilexerpascal->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPascal*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnPaper(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Paper_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPascal_DefaultColor2(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return new QColor(vqscilexerpascal->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPascal*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPascal_QBaseDefaultColor2(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerpascal->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPascal*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDefaultColor2(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPascal_DefaultFont2(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return new QFont(vqscilexerpascal->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPascal*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPascal_QBaseDefaultFont2(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerpascal->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPascal*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDefaultFont2(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPascal_DefaultPaper2(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return new QColor(vqscilexerpascal->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPascal*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPascal_QBaseDefaultPaper2(const QsciLexerPascal* self, int style) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerpascal->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPascal*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDefaultPaper2(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_SetEditor(QsciLexerPascal* self, QsciScintilla* editor) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setEditor(editor);
    } else {
        ((VirtualQsciLexerPascal*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseSetEditor(QsciLexerPascal* self, QsciScintilla* editor) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetEditor_IsBase(true);
        vqscilexerpascal->setEditor(editor);
    } else {
        ((VirtualQsciLexerPascal*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetEditor(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPascal_StyleBitsNeeded(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPascal*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPascal_QBaseStyleBitsNeeded(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_StyleBitsNeeded_IsBase(true);
        return vqscilexerpascal->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPascal*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnStyleBitsNeeded(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPascal_WordCharacters(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return (const char*)vqscilexerpascal->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPascal*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPascal_QBaseWordCharacters(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_WordCharacters_IsBase(true);
        return (const char*)vqscilexerpascal->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPascal*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnWordCharacters(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_SetAutoIndentStyle(QsciLexerPascal* self, int autoindentstyle) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPascal*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseSetAutoIndentStyle(QsciLexerPascal* self, int autoindentstyle) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetAutoIndentStyle_IsBase(true);
        vqscilexerpascal->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPascal*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetAutoIndentStyle(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_SetColor(QsciLexerPascal* self, const QColor* c, int style) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPascal*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseSetColor(QsciLexerPascal* self, const QColor* c, int style) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetColor_IsBase(true);
        vqscilexerpascal->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPascal*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetColor(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_SetEolFill(QsciLexerPascal* self, bool eoffill, int style) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPascal*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseSetEolFill(QsciLexerPascal* self, bool eoffill, int style) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetEolFill_IsBase(true);
        vqscilexerpascal->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPascal*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetEolFill(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_SetFont(QsciLexerPascal* self, const QFont* f, int style) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPascal*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseSetFont(QsciLexerPascal* self, const QFont* f, int style) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetFont_IsBase(true);
        vqscilexerpascal->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPascal*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetFont(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_SetPaper(QsciLexerPascal* self, const QColor* c, int style) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPascal*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseSetPaper(QsciLexerPascal* self, const QColor* c, int style) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetPaper_IsBase(true);
        vqscilexerpascal->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPascal*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSetPaper(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPascal_ReadProperties(QsciLexerPascal* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPascal*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPascal_QBaseReadProperties(QsciLexerPascal* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_ReadProperties_IsBase(true);
        return vqscilexerpascal->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPascal*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnReadProperties(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPascal_WriteProperties(const QsciLexerPascal* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPascal*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPascal_QBaseWriteProperties(const QsciLexerPascal* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_WriteProperties_IsBase(true);
        return vqscilexerpascal->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPascal*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnWriteProperties(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPascal_Event(QsciLexerPascal* self, QEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->event(event);
    } else {
        return ((VirtualQsciLexerPascal*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPascal_QBaseEvent(QsciLexerPascal* self, QEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Event_IsBase(true);
        return vqscilexerpascal->event(event);
    } else {
        return ((VirtualQsciLexerPascal*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnEvent(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Event_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPascal_EventFilter(QsciLexerPascal* self, QObject* watched, QEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPascal*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPascal_QBaseEventFilter(QsciLexerPascal* self, QObject* watched, QEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_EventFilter_IsBase(true);
        return vqscilexerpascal->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPascal*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnEventFilter(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_TimerEvent(QsciLexerPascal* self, QTimerEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->timerEvent(event);
    } else {
        ((VirtualQsciLexerPascal*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseTimerEvent(QsciLexerPascal* self, QTimerEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_TimerEvent_IsBase(true);
        vqscilexerpascal->timerEvent(event);
    } else {
        ((VirtualQsciLexerPascal*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnTimerEvent(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_ChildEvent(QsciLexerPascal* self, QChildEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->childEvent(event);
    } else {
        ((VirtualQsciLexerPascal*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseChildEvent(QsciLexerPascal* self, QChildEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_ChildEvent_IsBase(true);
        vqscilexerpascal->childEvent(event);
    } else {
        ((VirtualQsciLexerPascal*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnChildEvent(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_CustomEvent(QsciLexerPascal* self, QEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->customEvent(event);
    } else {
        ((VirtualQsciLexerPascal*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseCustomEvent(QsciLexerPascal* self, QEvent* event) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_CustomEvent_IsBase(true);
        vqscilexerpascal->customEvent(event);
    } else {
        ((VirtualQsciLexerPascal*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnCustomEvent(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_ConnectNotify(QsciLexerPascal* self, const QMetaMethod* signal) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPascal*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseConnectNotify(QsciLexerPascal* self, const QMetaMethod* signal) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_ConnectNotify_IsBase(true);
        vqscilexerpascal->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPascal*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnConnectNotify(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPascal_DisconnectNotify(QsciLexerPascal* self, const QMetaMethod* signal) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPascal*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPascal_QBaseDisconnectNotify(QsciLexerPascal* self, const QMetaMethod* signal) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DisconnectNotify_IsBase(true);
        vqscilexerpascal->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPascal*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnDisconnectNotify(QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = dynamic_cast<VirtualQsciLexerPascal*>(self);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPascal_TextAsBytes(const QsciLexerPascal* self, const libqt_string text) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        QByteArray _qb = vqscilexerpascal->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerPascal*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerPascal_QBaseTextAsBytes(const QsciLexerPascal* self, const libqt_string text) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerpascal->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerPascal*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnTextAsBytes(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPascal_BytesAsText(const QsciLexerPascal* self, const char* bytes, int size) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        QString _ret = vqscilexerpascal->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPascal*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerPascal_QBaseBytesAsText(const QsciLexerPascal* self, const char* bytes, int size) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_BytesAsText_IsBase(true);
        QString _ret = vqscilexerpascal->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPascal*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerPascal_OnBytesAsText(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPascal_Sender(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->sender();
    } else {
        return ((VirtualQsciLexerPascal*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPascal_QBaseSender(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Sender_IsBase(true);
        return vqscilexerpascal->sender();
    } else {
        return ((VirtualQsciLexerPascal*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSender(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Sender_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPascal_SenderSignalIndex(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPascal*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPascal_QBaseSenderSignalIndex(const QsciLexerPascal* self) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SenderSignalIndex_IsBase(true);
        return vqscilexerpascal->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPascal*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnSenderSignalIndex(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPascal_Receivers(const QsciLexerPascal* self, const char* signal) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->receivers(signal);
    } else {
        return ((VirtualQsciLexerPascal*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPascal_QBaseReceivers(const QsciLexerPascal* self, const char* signal) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Receivers_IsBase(true);
        return vqscilexerpascal->receivers(signal);
    } else {
        return ((VirtualQsciLexerPascal*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnReceivers(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPascal_IsSignalConnected(const QsciLexerPascal* self, const QMetaMethod* signal) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        return vqscilexerpascal->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPascal*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPascal_QBaseIsSignalConnected(const QsciLexerPascal* self, const QMetaMethod* signal) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_IsSignalConnected_IsBase(true);
        return vqscilexerpascal->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPascal*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPascal_OnIsSignalConnected(const QsciLexerPascal* self, intptr_t slot) {
    auto* vqscilexerpascal = const_cast<VirtualQsciLexerPascal*>(dynamic_cast<const VirtualQsciLexerPascal*>(self));
    if (vqscilexerpascal && vqscilexerpascal->isVirtualQsciLexerPascal) {
        vqscilexerpascal->setQsciLexerPascal_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPascal::QsciLexerPascal_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPascal_Delete(QsciLexerPascal* self) {
    delete self;
}
