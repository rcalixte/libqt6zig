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
#include <qscilexerfortran.h>
#include "libqscilexerfortran.h"
#include "libqscilexerfortran.hxx"

QsciLexerFortran* QsciLexerFortran_new() {
    return new VirtualQsciLexerFortran();
}

QsciLexerFortran* QsciLexerFortran_new2(QObject* parent) {
    return new VirtualQsciLexerFortran(parent);
}

QMetaObject* QsciLexerFortran_MetaObject(const QsciLexerFortran* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerFortran_Metacast(QsciLexerFortran* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerFortran_Metacall(QsciLexerFortran* self, int param1, int param2, void** param3) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerFortran*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerFortran_Tr(const char* s) {
    QString _ret = QsciLexerFortran::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerFortran_Language(const QsciLexerFortran* self) {
    return (const char*)self->language();
}

const char* QsciLexerFortran_Lexer(const QsciLexerFortran* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerFortran_Keywords(const QsciLexerFortran* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerFortran_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerFortran::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerFortran_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerFortran::tr(s, c, static_cast<int>(n));
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
int QsciLexerFortran_QBaseMetacall(QsciLexerFortran* self, int param1, int param2, void** param3) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Metacall_IsBase(true);
        return vqscilexerfortran->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerFortran*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnMetacall(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Metacall_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetFoldCompact(QsciLexerFortran* self, bool fold) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerFortran*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetFoldCompact(QsciLexerFortran* self, bool fold) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetFoldCompact_IsBase(true);
        vqscilexerfortran->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerFortran*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetFoldCompact(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_LexerId(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->lexerId();
    } else {
        return ((VirtualQsciLexerFortran*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseLexerId(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_LexerId_IsBase(true);
        return vqscilexerfortran->lexerId();
    } else {
        return ((VirtualQsciLexerFortran*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnLexerId(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_LexerId_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_AutoCompletionFillups(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return (const char*)vqscilexerfortran->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseAutoCompletionFillups(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerfortran->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnAutoCompletionFillups(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerFortran_AutoCompletionWordSeparators(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        QList<QString> _ret = vqscilexerfortran->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerFortran*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerFortran_QBaseAutoCompletionWordSeparators(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerfortran->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerFortran*)self)->autoCompletionWordSeparators();
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
void QsciLexerFortran_OnAutoCompletionWordSeparators(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockEnd(const QsciLexerFortran* self, int* style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return (const char*)vqscilexerfortran->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseBlockEnd(const QsciLexerFortran* self, int* style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BlockEnd_IsBase(true);
        return (const char*)vqscilexerfortran->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockEnd(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_BlockLookback(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->blockLookback();
    } else {
        return ((VirtualQsciLexerFortran*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseBlockLookback(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BlockLookback_IsBase(true);
        return vqscilexerfortran->blockLookback();
    } else {
        return ((VirtualQsciLexerFortran*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockLookback(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockStart(const QsciLexerFortran* self, int* style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return (const char*)vqscilexerfortran->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseBlockStart(const QsciLexerFortran* self, int* style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BlockStart_IsBase(true);
        return (const char*)vqscilexerfortran->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockStart(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockStartKeyword(const QsciLexerFortran* self, int* style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return (const char*)vqscilexerfortran->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseBlockStartKeyword(const QsciLexerFortran* self, int* style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerfortran->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockStartKeyword(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_BraceStyle(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->braceStyle();
    } else {
        return ((VirtualQsciLexerFortran*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseBraceStyle(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BraceStyle_IsBase(true);
        return vqscilexerfortran->braceStyle();
    } else {
        return ((VirtualQsciLexerFortran*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBraceStyle(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_CaseSensitive(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->caseSensitive();
    } else {
        return ((VirtualQsciLexerFortran*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseCaseSensitive(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_CaseSensitive_IsBase(true);
        return vqscilexerfortran->caseSensitive();
    } else {
        return ((VirtualQsciLexerFortran*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnCaseSensitive(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran_Color(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return new QColor(vqscilexerfortran->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerFortran*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran_QBaseColor(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Color_IsBase(true);
        return new QColor(vqscilexerfortran->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerFortran*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnColor(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Color_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_EolFill(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerFortran*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseEolFill(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_EolFill_IsBase(true);
        return vqscilexerfortran->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerFortran*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEolFill(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_EolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerFortran_Font(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return new QFont(vqscilexerfortran->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerFortran*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerFortran_QBaseFont(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Font_IsBase(true);
        return new QFont(vqscilexerfortran->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerFortran*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnFont(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Font_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_IndentationGuideView(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->indentationGuideView();
    } else {
        return ((VirtualQsciLexerFortran*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseIndentationGuideView(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_IndentationGuideView_IsBase(true);
        return vqscilexerfortran->indentationGuideView();
    } else {
        return ((VirtualQsciLexerFortran*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnIndentationGuideView(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_DefaultStyle(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->defaultStyle();
    } else {
        return ((VirtualQsciLexerFortran*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseDefaultStyle(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultStyle_IsBase(true);
        return vqscilexerfortran->defaultStyle();
    } else {
        return ((VirtualQsciLexerFortran*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultStyle(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerFortran_Description(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        QString _ret = vqscilexerfortran->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerFortran*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerFortran_QBaseDescription(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Description_IsBase(true);
        QString _ret = vqscilexerfortran->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerFortran*)self)->description(static_cast<int>(style));
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
void QsciLexerFortran_OnDescription(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Description_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran_Paper(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return new QColor(vqscilexerfortran->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerFortran*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran_QBasePaper(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Paper_IsBase(true);
        return new QColor(vqscilexerfortran->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerFortran*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnPaper(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Paper_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran_DefaultColor2(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return new QColor(vqscilexerfortran->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerFortran*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran_QBaseDefaultColor2(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerfortran->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerFortran*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultColor2(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_DefaultEolFill(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerFortran*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseDefaultEolFill(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultEolFill_IsBase(true);
        return vqscilexerfortran->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerFortran*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultEolFill(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerFortran_DefaultFont2(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return new QFont(vqscilexerfortran->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerFortran*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerFortran_QBaseDefaultFont2(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerfortran->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerFortran*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultFont2(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran_DefaultPaper2(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return new QColor(vqscilexerfortran->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerFortran*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran_QBaseDefaultPaper2(const QsciLexerFortran* self, int style) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerfortran->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerFortran*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultPaper2(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetEditor(QsciLexerFortran* self, QsciScintilla* editor) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setEditor(editor);
    } else {
        ((VirtualQsciLexerFortran*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetEditor(QsciLexerFortran* self, QsciScintilla* editor) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetEditor_IsBase(true);
        vqscilexerfortran->setEditor(editor);
    } else {
        ((VirtualQsciLexerFortran*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetEditor(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_RefreshProperties(QsciLexerFortran* self) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->refreshProperties();
    } else {
        ((VirtualQsciLexerFortran*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseRefreshProperties(QsciLexerFortran* self) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_RefreshProperties_IsBase(true);
        vqscilexerfortran->refreshProperties();
    } else {
        ((VirtualQsciLexerFortran*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnRefreshProperties(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_StyleBitsNeeded(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerFortran*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseStyleBitsNeeded(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_StyleBitsNeeded_IsBase(true);
        return vqscilexerfortran->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerFortran*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnStyleBitsNeeded(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_WordCharacters(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return (const char*)vqscilexerfortran->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseWordCharacters(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_WordCharacters_IsBase(true);
        return (const char*)vqscilexerfortran->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerFortran*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnWordCharacters(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerFortran*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetAutoIndentStyle_IsBase(true);
        vqscilexerfortran->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerFortran*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetAutoIndentStyle(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetColor(QsciLexerFortran* self, const QColor* c, int style) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerFortran*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetColor(QsciLexerFortran* self, const QColor* c, int style) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetColor_IsBase(true);
        vqscilexerfortran->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerFortran*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetColor(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetColor_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetEolFill(QsciLexerFortran* self, bool eoffill, int style) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerFortran*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetEolFill(QsciLexerFortran* self, bool eoffill, int style) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetEolFill_IsBase(true);
        vqscilexerfortran->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerFortran*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetEolFill(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetFont(QsciLexerFortran* self, const QFont* f, int style) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerFortran*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetFont(QsciLexerFortran* self, const QFont* f, int style) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetFont_IsBase(true);
        vqscilexerfortran->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerFortran*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetFont(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetFont_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetPaper(QsciLexerFortran* self, const QColor* c, int style) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerFortran*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetPaper(QsciLexerFortran* self, const QColor* c, int style) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetPaper_IsBase(true);
        vqscilexerfortran->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerFortran*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetPaper(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_ReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerFortran*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_ReadProperties_IsBase(true);
        return vqscilexerfortran->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerFortran*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnReadProperties(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_WriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerFortran*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseWriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_WriteProperties_IsBase(true);
        return vqscilexerfortran->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerFortran*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnWriteProperties(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_Event(QsciLexerFortran* self, QEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->event(event);
    } else {
        return ((VirtualQsciLexerFortran*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseEvent(QsciLexerFortran* self, QEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Event_IsBase(true);
        return vqscilexerfortran->event(event);
    } else {
        return ((VirtualQsciLexerFortran*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEvent(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Event_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_EventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerFortran*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseEventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_EventFilter_IsBase(true);
        return vqscilexerfortran->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerFortran*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEventFilter(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_TimerEvent(QsciLexerFortran* self, QTimerEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->timerEvent(event);
    } else {
        ((VirtualQsciLexerFortran*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseTimerEvent(QsciLexerFortran* self, QTimerEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_TimerEvent_IsBase(true);
        vqscilexerfortran->timerEvent(event);
    } else {
        ((VirtualQsciLexerFortran*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnTimerEvent(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_ChildEvent(QsciLexerFortran* self, QChildEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->childEvent(event);
    } else {
        ((VirtualQsciLexerFortran*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseChildEvent(QsciLexerFortran* self, QChildEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_ChildEvent_IsBase(true);
        vqscilexerfortran->childEvent(event);
    } else {
        ((VirtualQsciLexerFortran*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnChildEvent(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_CustomEvent(QsciLexerFortran* self, QEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->customEvent(event);
    } else {
        ((VirtualQsciLexerFortran*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseCustomEvent(QsciLexerFortran* self, QEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_CustomEvent_IsBase(true);
        vqscilexerfortran->customEvent(event);
    } else {
        ((VirtualQsciLexerFortran*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnCustomEvent(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_ConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerFortran*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_ConnectNotify_IsBase(true);
        vqscilexerfortran->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerFortran*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnConnectNotify(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_DisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerFortran*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseDisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DisconnectNotify_IsBase(true);
        vqscilexerfortran->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerFortran*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDisconnectNotify(QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerFortran_TextAsBytes(const QsciLexerFortran* self, const libqt_string text) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        QByteArray _qb = vqscilexerfortran->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerFortran*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerFortran_QBaseTextAsBytes(const QsciLexerFortran* self, const libqt_string text) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerfortran->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerFortran*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnTextAsBytes(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerFortran_BytesAsText(const QsciLexerFortran* self, const char* bytes, int size) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        QString _ret = vqscilexerfortran->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerFortran*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerFortran_QBaseBytesAsText(const QsciLexerFortran* self, const char* bytes, int size) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BytesAsText_IsBase(true);
        QString _ret = vqscilexerfortran->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerFortran*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerFortran_OnBytesAsText(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerFortran_Sender(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->sender();
    } else {
        return ((VirtualQsciLexerFortran*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerFortran_QBaseSender(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Sender_IsBase(true);
        return vqscilexerfortran->sender();
    } else {
        return ((VirtualQsciLexerFortran*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSender(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Sender_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_SenderSignalIndex(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerFortran*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseSenderSignalIndex(const QsciLexerFortran* self) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SenderSignalIndex_IsBase(true);
        return vqscilexerfortran->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerFortran*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSenderSignalIndex(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_Receivers(const QsciLexerFortran* self, const char* signal) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->receivers(signal);
    } else {
        return ((VirtualQsciLexerFortran*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseReceivers(const QsciLexerFortran* self, const char* signal) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Receivers_IsBase(true);
        return vqscilexerfortran->receivers(signal);
    } else {
        return ((VirtualQsciLexerFortran*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnReceivers(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_Receivers_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_IsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        return vqscilexerfortran->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerFortran*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseIsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_IsSignalConnected_IsBase(true);
        return vqscilexerfortran->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerFortran*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnIsSignalConnected(const QsciLexerFortran* self, intptr_t slot) {
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran && vqscilexerfortran->isVirtualQsciLexerFortran) {
        vqscilexerfortran->setQsciLexerFortran_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerFortran_Delete(QsciLexerFortran* self) {
    delete self;
}
