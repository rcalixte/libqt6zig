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
#include <qscilexerspice.h>
#include "libqscilexerspice.h"
#include "libqscilexerspice.hxx"

QsciLexerSpice* QsciLexerSpice_new() {
    return new VirtualQsciLexerSpice();
}

QsciLexerSpice* QsciLexerSpice_new2(QObject* parent) {
    return new VirtualQsciLexerSpice(parent);
}

QMetaObject* QsciLexerSpice_MetaObject(const QsciLexerSpice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerSpice_Metacast(QsciLexerSpice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerSpice_Metacall(QsciLexerSpice* self, int param1, int param2, void** param3) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerSpice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerSpice_OnMetacall(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Metacall_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerSpice_QBaseMetacall(QsciLexerSpice* self, int param1, int param2, void** param3) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Metacall_IsBase(true);
        return vqscilexerspice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerSpice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerSpice_Tr(const char* s) {
    QString _ret = QsciLexerSpice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerSpice_Language(const QsciLexerSpice* self) {
    return (const char*)self->language();
}

const char* QsciLexerSpice_Lexer(const QsciLexerSpice* self) {
    return (const char*)self->lexer();
}

int QsciLexerSpice_BraceStyle(const QsciLexerSpice* self) {
    return self->braceStyle();
}

const char* QsciLexerSpice_Keywords(const QsciLexerSpice* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

QColor* QsciLexerSpice_DefaultColor(const QsciLexerSpice* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerSpice_DefaultFont(const QsciLexerSpice* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

libqt_string QsciLexerSpice_Description(const QsciLexerSpice* self, int style) {
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

libqt_string QsciLexerSpice_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerSpice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerSpice_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerSpice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QsciLexerSpice_LexerId(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->lexerId();
    } else {
        return ((VirtualQsciLexerSpice*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseLexerId(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_LexerId_IsBase(true);
        return vqscilexerspice->lexerId();
    } else {
        return ((VirtualQsciLexerSpice*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnLexerId(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_LexerId_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_AutoCompletionFillups(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return (const char*)vqscilexerspice->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseAutoCompletionFillups(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerspice->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnAutoCompletionFillups(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerSpice_AutoCompletionWordSeparators(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        QList<QString> _ret = vqscilexerspice->autoCompletionWordSeparators();
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
    } else {
        QList<QString> _ret = ((VirtualQsciLexerSpice*)self)->autoCompletionWordSeparators();
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciLexerSpice_QBaseAutoCompletionWordSeparators(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerspice->autoCompletionWordSeparators();
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
    } else {
        QList<QString> _ret = ((VirtualQsciLexerSpice*)self)->autoCompletionWordSeparators();
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
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnAutoCompletionWordSeparators(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockEnd(const QsciLexerSpice* self, int* style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return (const char*)vqscilexerspice->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseBlockEnd(const QsciLexerSpice* self, int* style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BlockEnd_IsBase(true);
        return (const char*)vqscilexerspice->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockEnd(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_BlockLookback(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->blockLookback();
    } else {
        return ((VirtualQsciLexerSpice*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseBlockLookback(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BlockLookback_IsBase(true);
        return vqscilexerspice->blockLookback();
    } else {
        return ((VirtualQsciLexerSpice*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockLookback(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockStart(const QsciLexerSpice* self, int* style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return (const char*)vqscilexerspice->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseBlockStart(const QsciLexerSpice* self, int* style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BlockStart_IsBase(true);
        return (const char*)vqscilexerspice->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockStart(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockStartKeyword(const QsciLexerSpice* self, int* style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return (const char*)vqscilexerspice->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseBlockStartKeyword(const QsciLexerSpice* self, int* style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerspice->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockStartKeyword(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_CaseSensitive(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->caseSensitive();
    } else {
        return ((VirtualQsciLexerSpice*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseCaseSensitive(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_CaseSensitive_IsBase(true);
        return vqscilexerspice->caseSensitive();
    } else {
        return ((VirtualQsciLexerSpice*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnCaseSensitive(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSpice_Color(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return new QColor(vqscilexerspice->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSpice*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSpice_QBaseColor(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Color_IsBase(true);
        return new QColor(vqscilexerspice->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSpice*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnColor(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Color_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_EolFill(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSpice*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseEolFill(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_EolFill_IsBase(true);
        return vqscilexerspice->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSpice*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEolFill(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_EolFill_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerSpice_Font(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return new QFont(vqscilexerspice->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSpice*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerSpice_QBaseFont(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Font_IsBase(true);
        return new QFont(vqscilexerspice->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSpice*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnFont(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Font_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_IndentationGuideView(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->indentationGuideView();
    } else {
        return ((VirtualQsciLexerSpice*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseIndentationGuideView(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_IndentationGuideView_IsBase(true);
        return vqscilexerspice->indentationGuideView();
    } else {
        return ((VirtualQsciLexerSpice*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnIndentationGuideView(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_DefaultStyle(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->defaultStyle();
    } else {
        return ((VirtualQsciLexerSpice*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseDefaultStyle(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultStyle_IsBase(true);
        return vqscilexerspice->defaultStyle();
    } else {
        return ((VirtualQsciLexerSpice*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultStyle(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSpice_Paper(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return new QColor(vqscilexerspice->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSpice*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSpice_QBasePaper(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Paper_IsBase(true);
        return new QColor(vqscilexerspice->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSpice*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnPaper(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Paper_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSpice_DefaultColor2(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return new QColor(vqscilexerspice->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSpice*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSpice_QBaseDefaultColor2(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerspice->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSpice*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultColor2(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_DefaultEolFill(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSpice*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseDefaultEolFill(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultEolFill_IsBase(true);
        return vqscilexerspice->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSpice*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultEolFill(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerSpice_DefaultFont2(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return new QFont(vqscilexerspice->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSpice*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerSpice_QBaseDefaultFont2(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerspice->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSpice*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultFont2(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSpice_DefaultPaper2(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return new QColor(vqscilexerspice->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSpice*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSpice_QBaseDefaultPaper2(const QsciLexerSpice* self, int style) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerspice->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSpice*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultPaper2(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetEditor(QsciLexerSpice* self, QsciScintilla* editor) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setEditor(editor);
    } else {
        ((VirtualQsciLexerSpice*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetEditor(QsciLexerSpice* self, QsciScintilla* editor) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetEditor_IsBase(true);
        vqscilexerspice->setEditor(editor);
    } else {
        ((VirtualQsciLexerSpice*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetEditor(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_RefreshProperties(QsciLexerSpice* self) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->refreshProperties();
    } else {
        ((VirtualQsciLexerSpice*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseRefreshProperties(QsciLexerSpice* self) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_RefreshProperties_IsBase(true);
        vqscilexerspice->refreshProperties();
    } else {
        ((VirtualQsciLexerSpice*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnRefreshProperties(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_StyleBitsNeeded(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerSpice*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseStyleBitsNeeded(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_StyleBitsNeeded_IsBase(true);
        return vqscilexerspice->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerSpice*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnStyleBitsNeeded(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_WordCharacters(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return (const char*)vqscilexerspice->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseWordCharacters(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_WordCharacters_IsBase(true);
        return (const char*)vqscilexerspice->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerSpice*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnWordCharacters(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerSpice*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetAutoIndentStyle_IsBase(true);
        vqscilexerspice->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerSpice*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetAutoIndentStyle(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetColor(QsciLexerSpice* self, const QColor* c, int style) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSpice*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetColor(QsciLexerSpice* self, const QColor* c, int style) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetColor_IsBase(true);
        vqscilexerspice->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSpice*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetColor(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetColor_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetEolFill(QsciLexerSpice* self, bool eoffill, int style) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSpice*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetEolFill(QsciLexerSpice* self, bool eoffill, int style) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetEolFill_IsBase(true);
        vqscilexerspice->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSpice*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetEolFill(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetFont(QsciLexerSpice* self, const QFont* f, int style) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSpice*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetFont(QsciLexerSpice* self, const QFont* f, int style) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetFont_IsBase(true);
        vqscilexerspice->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSpice*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetFont(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetFont_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetPaper(QsciLexerSpice* self, const QColor* c, int style) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSpice*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetPaper(QsciLexerSpice* self, const QColor* c, int style) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetPaper_IsBase(true);
        vqscilexerspice->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSpice*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetPaper(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_ReadProperties(QsciLexerSpice* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSpice*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseReadProperties(QsciLexerSpice* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_ReadProperties_IsBase(true);
        return vqscilexerspice->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSpice*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnReadProperties(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_WriteProperties(const QsciLexerSpice* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSpice*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseWriteProperties(const QsciLexerSpice* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_WriteProperties_IsBase(true);
        return vqscilexerspice->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSpice*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnWriteProperties(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_Event(QsciLexerSpice* self, QEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->event(event);
    } else {
        return ((VirtualQsciLexerSpice*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseEvent(QsciLexerSpice* self, QEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Event_IsBase(true);
        return vqscilexerspice->event(event);
    } else {
        return ((VirtualQsciLexerSpice*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEvent(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Event_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_EventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerSpice*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseEventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_EventFilter_IsBase(true);
        return vqscilexerspice->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerSpice*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEventFilter(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_TimerEvent(QsciLexerSpice* self, QTimerEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->timerEvent(event);
    } else {
        ((VirtualQsciLexerSpice*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseTimerEvent(QsciLexerSpice* self, QTimerEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_TimerEvent_IsBase(true);
        vqscilexerspice->timerEvent(event);
    } else {
        ((VirtualQsciLexerSpice*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnTimerEvent(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_ChildEvent(QsciLexerSpice* self, QChildEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->childEvent(event);
    } else {
        ((VirtualQsciLexerSpice*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseChildEvent(QsciLexerSpice* self, QChildEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_ChildEvent_IsBase(true);
        vqscilexerspice->childEvent(event);
    } else {
        ((VirtualQsciLexerSpice*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnChildEvent(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_CustomEvent(QsciLexerSpice* self, QEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->customEvent(event);
    } else {
        ((VirtualQsciLexerSpice*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseCustomEvent(QsciLexerSpice* self, QEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_CustomEvent_IsBase(true);
        vqscilexerspice->customEvent(event);
    } else {
        ((VirtualQsciLexerSpice*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnCustomEvent(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_ConnectNotify(QsciLexerSpice* self, const QMetaMethod* signal) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerSpice*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseConnectNotify(QsciLexerSpice* self, const QMetaMethod* signal) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_ConnectNotify_IsBase(true);
        vqscilexerspice->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerSpice*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnConnectNotify(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_DisconnectNotify(QsciLexerSpice* self, const QMetaMethod* signal) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerSpice*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseDisconnectNotify(QsciLexerSpice* self, const QMetaMethod* signal) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DisconnectNotify_IsBase(true);
        vqscilexerspice->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerSpice*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDisconnectNotify(QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSpice_TextAsBytes(const QsciLexerSpice* self, const libqt_string text) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        QByteArray _qb = vqscilexerspice->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerSpice*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerSpice_QBaseTextAsBytes(const QsciLexerSpice* self, const libqt_string text) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerspice->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerSpice*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnTextAsBytes(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSpice_BytesAsText(const QsciLexerSpice* self, const char* bytes, int size) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        QString _ret = vqscilexerspice->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSpice*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerSpice_QBaseBytesAsText(const QsciLexerSpice* self, const char* bytes, int size) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BytesAsText_IsBase(true);
        QString _ret = vqscilexerspice->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSpice*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerSpice_OnBytesAsText(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerSpice_Sender(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->sender();
    } else {
        return ((VirtualQsciLexerSpice*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerSpice_QBaseSender(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Sender_IsBase(true);
        return vqscilexerspice->sender();
    } else {
        return ((VirtualQsciLexerSpice*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSender(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Sender_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_SenderSignalIndex(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerSpice*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseSenderSignalIndex(const QsciLexerSpice* self) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SenderSignalIndex_IsBase(true);
        return vqscilexerspice->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerSpice*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSenderSignalIndex(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_Receivers(const QsciLexerSpice* self, const char* signal) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->receivers(signal);
    } else {
        return ((VirtualQsciLexerSpice*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseReceivers(const QsciLexerSpice* self, const char* signal) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Receivers_IsBase(true);
        return vqscilexerspice->receivers(signal);
    } else {
        return ((VirtualQsciLexerSpice*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnReceivers(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_Receivers_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_IsSignalConnected(const QsciLexerSpice* self, const QMetaMethod* signal) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        return vqscilexerspice->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerSpice*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseIsSignalConnected(const QsciLexerSpice* self, const QMetaMethod* signal) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_IsSignalConnected_IsBase(true);
        return vqscilexerspice->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerSpice*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnIsSignalConnected(const QsciLexerSpice* self, intptr_t slot) {
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice && vqscilexerspice->isVirtualQsciLexerSpice) {
        vqscilexerspice->setQsciLexerSpice_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerSpice_Delete(QsciLexerSpice* self) {
    delete self;
}
