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
#include <qscilexerintelhex.h>
#include "libqscilexerintelhex.h"
#include "libqscilexerintelhex.hxx"

QsciLexerIntelHex* QsciLexerIntelHex_new() {
    return new VirtualQsciLexerIntelHex();
}

QsciLexerIntelHex* QsciLexerIntelHex_new2(QObject* parent) {
    return new VirtualQsciLexerIntelHex(parent);
}

QMetaObject* QsciLexerIntelHex_MetaObject(const QsciLexerIntelHex* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerIntelHex_Metacast(QsciLexerIntelHex* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerIntelHex_Metacall(QsciLexerIntelHex* self, int param1, int param2, void** param3) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerIntelHex_OnMetacall(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Metacall_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerIntelHex_QBaseMetacall(QsciLexerIntelHex* self, int param1, int param2, void** param3) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Metacall_IsBase(true);
        return vqscilexerintelhex->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerIntelHex_Tr(const char* s) {
    QString _ret = QsciLexerIntelHex::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerIntelHex_Language(const QsciLexerIntelHex* self) {
    return (const char*)self->language();
}

const char* QsciLexerIntelHex_Lexer(const QsciLexerIntelHex* self) {
    return (const char*)self->lexer();
}

libqt_string QsciLexerIntelHex_Description(const QsciLexerIntelHex* self, int style) {
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

libqt_string QsciLexerIntelHex_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerIntelHex::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerIntelHex_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerIntelHex::tr(s, c, static_cast<int>(n));
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
int QsciLexerIntelHex_LexerId(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->lexerId();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerIntelHex_QBaseLexerId(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_LexerId_IsBase(true);
        return vqscilexerintelhex->lexerId();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnLexerId(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_LexerId_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIntelHex_AutoCompletionFillups(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return (const char*)vqscilexerintelhex->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerIntelHex_QBaseAutoCompletionFillups(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerintelhex->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnAutoCompletionFillups(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerIntelHex_AutoCompletionWordSeparators(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        QList<QString> _ret = vqscilexerintelhex->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerIntelHex*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerIntelHex_QBaseAutoCompletionWordSeparators(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerintelhex->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerIntelHex*)self)->autoCompletionWordSeparators();
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
void QsciLexerIntelHex_OnAutoCompletionWordSeparators(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIntelHex_BlockEnd(const QsciLexerIntelHex* self, int* style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return (const char*)vqscilexerintelhex->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerIntelHex_QBaseBlockEnd(const QsciLexerIntelHex* self, int* style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BlockEnd_IsBase(true);
        return (const char*)vqscilexerintelhex->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBlockEnd(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIntelHex_BlockLookback(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->blockLookback();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerIntelHex_QBaseBlockLookback(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BlockLookback_IsBase(true);
        return vqscilexerintelhex->blockLookback();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBlockLookback(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIntelHex_BlockStart(const QsciLexerIntelHex* self, int* style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return (const char*)vqscilexerintelhex->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerIntelHex_QBaseBlockStart(const QsciLexerIntelHex* self, int* style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BlockStart_IsBase(true);
        return (const char*)vqscilexerintelhex->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBlockStart(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIntelHex_BlockStartKeyword(const QsciLexerIntelHex* self, int* style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return (const char*)vqscilexerintelhex->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerIntelHex_QBaseBlockStartKeyword(const QsciLexerIntelHex* self, int* style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerintelhex->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBlockStartKeyword(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIntelHex_BraceStyle(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->braceStyle();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerIntelHex_QBaseBraceStyle(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BraceStyle_IsBase(true);
        return vqscilexerintelhex->braceStyle();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBraceStyle(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIntelHex_CaseSensitive(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->caseSensitive();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_QBaseCaseSensitive(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_CaseSensitive_IsBase(true);
        return vqscilexerintelhex->caseSensitive();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnCaseSensitive(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerIntelHex_Color(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return new QColor(vqscilexerintelhex->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIntelHex*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerIntelHex_QBaseColor(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Color_IsBase(true);
        return new QColor(vqscilexerintelhex->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIntelHex*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnColor(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Color_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIntelHex_EolFill(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_QBaseEolFill(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_EolFill_IsBase(true);
        return vqscilexerintelhex->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnEolFill(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_EolFill_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerIntelHex_Font(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return new QFont(vqscilexerintelhex->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerIntelHex*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerIntelHex_QBaseFont(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Font_IsBase(true);
        return new QFont(vqscilexerintelhex->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerIntelHex*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnFont(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Font_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIntelHex_IndentationGuideView(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->indentationGuideView();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerIntelHex_QBaseIndentationGuideView(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_IndentationGuideView_IsBase(true);
        return vqscilexerintelhex->indentationGuideView();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnIndentationGuideView(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIntelHex_Keywords(const QsciLexerIntelHex* self, int set) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return (const char*)vqscilexerintelhex->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerIntelHex_QBaseKeywords(const QsciLexerIntelHex* self, int set) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Keywords_IsBase(true);
        return (const char*)vqscilexerintelhex->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnKeywords(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Keywords_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIntelHex_DefaultStyle(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->defaultStyle();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerIntelHex_QBaseDefaultStyle(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultStyle_IsBase(true);
        return vqscilexerintelhex->defaultStyle();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultStyle(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerIntelHex_Paper(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return new QColor(vqscilexerintelhex->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIntelHex*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerIntelHex_QBasePaper(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Paper_IsBase(true);
        return new QColor(vqscilexerintelhex->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIntelHex*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnPaper(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Paper_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerIntelHex_DefaultColor2(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return new QColor(vqscilexerintelhex->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIntelHex*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerIntelHex_QBaseDefaultColor2(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerintelhex->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIntelHex*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultColor2(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIntelHex_DefaultEolFill(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_QBaseDefaultEolFill(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultEolFill_IsBase(true);
        return vqscilexerintelhex->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultEolFill(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerIntelHex_DefaultFont2(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return new QFont(vqscilexerintelhex->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerIntelHex*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerIntelHex_QBaseDefaultFont2(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerintelhex->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerIntelHex*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultFont2(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerIntelHex_DefaultPaper2(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return new QColor(vqscilexerintelhex->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIntelHex*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerIntelHex_QBaseDefaultPaper2(const QsciLexerIntelHex* self, int style) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerintelhex->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIntelHex*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultPaper2(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_SetEditor(QsciLexerIntelHex* self, QsciScintilla* editor) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setEditor(editor);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseSetEditor(QsciLexerIntelHex* self, QsciScintilla* editor) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetEditor_IsBase(true);
        vqscilexerintelhex->setEditor(editor);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetEditor(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_RefreshProperties(QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->refreshProperties();
    } else {
        ((VirtualQsciLexerIntelHex*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseRefreshProperties(QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_RefreshProperties_IsBase(true);
        vqscilexerintelhex->refreshProperties();
    } else {
        ((VirtualQsciLexerIntelHex*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnRefreshProperties(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIntelHex_StyleBitsNeeded(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerIntelHex_QBaseStyleBitsNeeded(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_StyleBitsNeeded_IsBase(true);
        return vqscilexerintelhex->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnStyleBitsNeeded(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIntelHex_WordCharacters(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return (const char*)vqscilexerintelhex->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerIntelHex_QBaseWordCharacters(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_WordCharacters_IsBase(true);
        return (const char*)vqscilexerintelhex->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerIntelHex*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnWordCharacters(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_SetAutoIndentStyle(QsciLexerIntelHex* self, int autoindentstyle) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseSetAutoIndentStyle(QsciLexerIntelHex* self, int autoindentstyle) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetAutoIndentStyle_IsBase(true);
        vqscilexerintelhex->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetAutoIndentStyle(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_SetColor(QsciLexerIntelHex* self, const QColor* c, int style) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseSetColor(QsciLexerIntelHex* self, const QColor* c, int style) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetColor_IsBase(true);
        vqscilexerintelhex->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetColor(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetColor_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_SetEolFill(QsciLexerIntelHex* self, bool eoffill, int style) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseSetEolFill(QsciLexerIntelHex* self, bool eoffill, int style) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetEolFill_IsBase(true);
        vqscilexerintelhex->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetEolFill(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_SetFont(QsciLexerIntelHex* self, const QFont* f, int style) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseSetFont(QsciLexerIntelHex* self, const QFont* f, int style) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetFont_IsBase(true);
        vqscilexerintelhex->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetFont(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetFont_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_SetPaper(QsciLexerIntelHex* self, const QColor* c, int style) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseSetPaper(QsciLexerIntelHex* self, const QColor* c, int style) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetPaper_IsBase(true);
        vqscilexerintelhex->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIntelHex*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetPaper(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIntelHex_ReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_QBaseReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_ReadProperties_IsBase(true);
        return vqscilexerintelhex->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnReadProperties(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIntelHex_WriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_QBaseWriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_WriteProperties_IsBase(true);
        return vqscilexerintelhex->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnWriteProperties(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIntelHex_Event(QsciLexerIntelHex* self, QEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->event(event);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_QBaseEvent(QsciLexerIntelHex* self, QEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Event_IsBase(true);
        return vqscilexerintelhex->event(event);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnEvent(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Event_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIntelHex_EventFilter(QsciLexerIntelHex* self, QObject* watched, QEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_QBaseEventFilter(QsciLexerIntelHex* self, QObject* watched, QEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_EventFilter_IsBase(true);
        return vqscilexerintelhex->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnEventFilter(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_TimerEvent(QsciLexerIntelHex* self, QTimerEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->timerEvent(event);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseTimerEvent(QsciLexerIntelHex* self, QTimerEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_TimerEvent_IsBase(true);
        vqscilexerintelhex->timerEvent(event);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnTimerEvent(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_ChildEvent(QsciLexerIntelHex* self, QChildEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->childEvent(event);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseChildEvent(QsciLexerIntelHex* self, QChildEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_ChildEvent_IsBase(true);
        vqscilexerintelhex->childEvent(event);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnChildEvent(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_CustomEvent(QsciLexerIntelHex* self, QEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->customEvent(event);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseCustomEvent(QsciLexerIntelHex* self, QEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_CustomEvent_IsBase(true);
        vqscilexerintelhex->customEvent(event);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnCustomEvent(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_ConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_ConnectNotify_IsBase(true);
        vqscilexerintelhex->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnConnectNotify(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIntelHex_DisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerIntelHex_QBaseDisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DisconnectNotify_IsBase(true);
        vqscilexerintelhex->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerIntelHex*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDisconnectNotify(QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerIntelHex_TextAsBytes(const QsciLexerIntelHex* self, const libqt_string text) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        QByteArray _qb = vqscilexerintelhex->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerIntelHex*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerIntelHex_QBaseTextAsBytes(const QsciLexerIntelHex* self, const libqt_string text) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerintelhex->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerIntelHex*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnTextAsBytes(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerIntelHex_BytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        QString _ret = vqscilexerintelhex->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerIntelHex*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerIntelHex_QBaseBytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BytesAsText_IsBase(true);
        QString _ret = vqscilexerintelhex->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerIntelHex*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerIntelHex_OnBytesAsText(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerIntelHex_Sender(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->sender();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerIntelHex_QBaseSender(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Sender_IsBase(true);
        return vqscilexerintelhex->sender();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSender(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Sender_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIntelHex_SenderSignalIndex(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerIntelHex_QBaseSenderSignalIndex(const QsciLexerIntelHex* self) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SenderSignalIndex_IsBase(true);
        return vqscilexerintelhex->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSenderSignalIndex(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIntelHex_Receivers(const QsciLexerIntelHex* self, const char* signal) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->receivers(signal);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerIntelHex_QBaseReceivers(const QsciLexerIntelHex* self, const char* signal) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Receivers_IsBase(true);
        return vqscilexerintelhex->receivers(signal);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnReceivers(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_Receivers_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIntelHex_IsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        return vqscilexerintelhex->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_QBaseIsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_IsSignalConnected_IsBase(true);
        return vqscilexerintelhex->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerIntelHex*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnIsSignalConnected(const QsciLexerIntelHex* self, intptr_t slot) {
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex && vqscilexerintelhex->isVirtualQsciLexerIntelHex) {
        vqscilexerintelhex->setQsciLexerIntelHex_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerIntelHex_Delete(QsciLexerIntelHex* self) {
    delete self;
}
