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
#include <qscilexertekhex.h>
#include "libqscilexertekhex.h"
#include "libqscilexertekhex.hxx"

QsciLexerTekHex* QsciLexerTekHex_new() {
    return new VirtualQsciLexerTekHex();
}

QsciLexerTekHex* QsciLexerTekHex_new2(QObject* parent) {
    return new VirtualQsciLexerTekHex(parent);
}

QMetaObject* QsciLexerTekHex_MetaObject(const QsciLexerTekHex* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerTekHex_Metacast(QsciLexerTekHex* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerTekHex_Metacall(QsciLexerTekHex* self, int param1, int param2, void** param3) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerTekHex_OnMetacall(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Metacall_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerTekHex_QBaseMetacall(QsciLexerTekHex* self, int param1, int param2, void** param3) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Metacall_IsBase(true);
        return vqscilexertekhex->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerTekHex_Tr(const char* s) {
    QString _ret = QsciLexerTekHex::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerTekHex_Language(const QsciLexerTekHex* self) {
    return (const char*)self->language();
}

const char* QsciLexerTekHex_Lexer(const QsciLexerTekHex* self) {
    return (const char*)self->lexer();
}

libqt_string QsciLexerTekHex_Description(const QsciLexerTekHex* self, int style) {
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

libqt_string QsciLexerTekHex_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerTekHex::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerTekHex_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerTekHex::tr(s, c, static_cast<int>(n));
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
int QsciLexerTekHex_LexerId(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->lexerId();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerTekHex_QBaseLexerId(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_LexerId_IsBase(true);
        return vqscilexertekhex->lexerId();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnLexerId(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_LexerId_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTekHex_AutoCompletionFillups(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return (const char*)vqscilexertekhex->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerTekHex_QBaseAutoCompletionFillups(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexertekhex->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnAutoCompletionFillups(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerTekHex_AutoCompletionWordSeparators(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        QList<QString> _ret = vqscilexertekhex->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerTekHex*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerTekHex_QBaseAutoCompletionWordSeparators(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexertekhex->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerTekHex*)self)->autoCompletionWordSeparators();
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
void QsciLexerTekHex_OnAutoCompletionWordSeparators(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTekHex_BlockEnd(const QsciLexerTekHex* self, int* style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return (const char*)vqscilexertekhex->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTekHex_QBaseBlockEnd(const QsciLexerTekHex* self, int* style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BlockEnd_IsBase(true);
        return (const char*)vqscilexertekhex->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBlockEnd(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTekHex_BlockLookback(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->blockLookback();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerTekHex_QBaseBlockLookback(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BlockLookback_IsBase(true);
        return vqscilexertekhex->blockLookback();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBlockLookback(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTekHex_BlockStart(const QsciLexerTekHex* self, int* style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return (const char*)vqscilexertekhex->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTekHex_QBaseBlockStart(const QsciLexerTekHex* self, int* style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BlockStart_IsBase(true);
        return (const char*)vqscilexertekhex->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBlockStart(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTekHex_BlockStartKeyword(const QsciLexerTekHex* self, int* style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return (const char*)vqscilexertekhex->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTekHex_QBaseBlockStartKeyword(const QsciLexerTekHex* self, int* style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexertekhex->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBlockStartKeyword(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTekHex_BraceStyle(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->braceStyle();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerTekHex_QBaseBraceStyle(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BraceStyle_IsBase(true);
        return vqscilexertekhex->braceStyle();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBraceStyle(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTekHex_CaseSensitive(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->caseSensitive();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerTekHex_QBaseCaseSensitive(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_CaseSensitive_IsBase(true);
        return vqscilexertekhex->caseSensitive();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnCaseSensitive(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTekHex_Color(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return new QColor(vqscilexertekhex->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTekHex*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTekHex_QBaseColor(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Color_IsBase(true);
        return new QColor(vqscilexertekhex->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTekHex*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnColor(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Color_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTekHex_EolFill(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTekHex*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerTekHex_QBaseEolFill(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_EolFill_IsBase(true);
        return vqscilexertekhex->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTekHex*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnEolFill(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_EolFill_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerTekHex_Font(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return new QFont(vqscilexertekhex->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTekHex*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerTekHex_QBaseFont(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Font_IsBase(true);
        return new QFont(vqscilexertekhex->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTekHex*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnFont(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Font_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTekHex_IndentationGuideView(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->indentationGuideView();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerTekHex_QBaseIndentationGuideView(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_IndentationGuideView_IsBase(true);
        return vqscilexertekhex->indentationGuideView();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnIndentationGuideView(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTekHex_Keywords(const QsciLexerTekHex* self, int set) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return (const char*)vqscilexertekhex->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerTekHex_QBaseKeywords(const QsciLexerTekHex* self, int set) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Keywords_IsBase(true);
        return (const char*)vqscilexertekhex->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnKeywords(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Keywords_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTekHex_DefaultStyle(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->defaultStyle();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerTekHex_QBaseDefaultStyle(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultStyle_IsBase(true);
        return vqscilexertekhex->defaultStyle();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultStyle(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTekHex_Paper(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return new QColor(vqscilexertekhex->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTekHex*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTekHex_QBasePaper(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Paper_IsBase(true);
        return new QColor(vqscilexertekhex->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTekHex*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnPaper(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Paper_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTekHex_DefaultColor2(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return new QColor(vqscilexertekhex->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTekHex*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTekHex_QBaseDefaultColor2(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultColor2_IsBase(true);
        return new QColor(vqscilexertekhex->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTekHex*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultColor2(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTekHex_DefaultEolFill(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTekHex*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerTekHex_QBaseDefaultEolFill(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultEolFill_IsBase(true);
        return vqscilexertekhex->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTekHex*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultEolFill(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerTekHex_DefaultFont2(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return new QFont(vqscilexertekhex->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTekHex*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerTekHex_QBaseDefaultFont2(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultFont2_IsBase(true);
        return new QFont(vqscilexertekhex->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTekHex*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultFont2(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTekHex_DefaultPaper2(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return new QColor(vqscilexertekhex->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTekHex*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTekHex_QBaseDefaultPaper2(const QsciLexerTekHex* self, int style) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexertekhex->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTekHex*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultPaper2(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_SetEditor(QsciLexerTekHex* self, QsciScintilla* editor) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setEditor(editor);
    } else {
        ((VirtualQsciLexerTekHex*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseSetEditor(QsciLexerTekHex* self, QsciScintilla* editor) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetEditor_IsBase(true);
        vqscilexertekhex->setEditor(editor);
    } else {
        ((VirtualQsciLexerTekHex*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetEditor(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_RefreshProperties(QsciLexerTekHex* self) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->refreshProperties();
    } else {
        ((VirtualQsciLexerTekHex*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseRefreshProperties(QsciLexerTekHex* self) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_RefreshProperties_IsBase(true);
        vqscilexertekhex->refreshProperties();
    } else {
        ((VirtualQsciLexerTekHex*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnRefreshProperties(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTekHex_StyleBitsNeeded(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerTekHex_QBaseStyleBitsNeeded(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_StyleBitsNeeded_IsBase(true);
        return vqscilexertekhex->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnStyleBitsNeeded(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTekHex_WordCharacters(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return (const char*)vqscilexertekhex->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerTekHex_QBaseWordCharacters(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_WordCharacters_IsBase(true);
        return (const char*)vqscilexertekhex->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerTekHex*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnWordCharacters(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_SetAutoIndentStyle(QsciLexerTekHex* self, int autoindentstyle) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseSetAutoIndentStyle(QsciLexerTekHex* self, int autoindentstyle) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetAutoIndentStyle_IsBase(true);
        vqscilexertekhex->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetAutoIndentStyle(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_SetColor(QsciLexerTekHex* self, const QColor* c, int style) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseSetColor(QsciLexerTekHex* self, const QColor* c, int style) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetColor_IsBase(true);
        vqscilexertekhex->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetColor(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetColor_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_SetEolFill(QsciLexerTekHex* self, bool eoffill, int style) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseSetEolFill(QsciLexerTekHex* self, bool eoffill, int style) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetEolFill_IsBase(true);
        vqscilexertekhex->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetEolFill(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_SetFont(QsciLexerTekHex* self, const QFont* f, int style) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseSetFont(QsciLexerTekHex* self, const QFont* f, int style) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetFont_IsBase(true);
        vqscilexertekhex->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetFont(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetFont_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_SetPaper(QsciLexerTekHex* self, const QColor* c, int style) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseSetPaper(QsciLexerTekHex* self, const QColor* c, int style) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetPaper_IsBase(true);
        vqscilexertekhex->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTekHex*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetPaper(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTekHex_ReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerTekHex_QBaseReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_ReadProperties_IsBase(true);
        return vqscilexertekhex->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnReadProperties(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTekHex_WriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerTekHex_QBaseWriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_WriteProperties_IsBase(true);
        return vqscilexertekhex->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnWriteProperties(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTekHex_Event(QsciLexerTekHex* self, QEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->event(event);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerTekHex_QBaseEvent(QsciLexerTekHex* self, QEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Event_IsBase(true);
        return vqscilexertekhex->event(event);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnEvent(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Event_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTekHex_EventFilter(QsciLexerTekHex* self, QObject* watched, QEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerTekHex_QBaseEventFilter(QsciLexerTekHex* self, QObject* watched, QEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_EventFilter_IsBase(true);
        return vqscilexertekhex->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnEventFilter(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_TimerEvent(QsciLexerTekHex* self, QTimerEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->timerEvent(event);
    } else {
        ((VirtualQsciLexerTekHex*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseTimerEvent(QsciLexerTekHex* self, QTimerEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_TimerEvent_IsBase(true);
        vqscilexertekhex->timerEvent(event);
    } else {
        ((VirtualQsciLexerTekHex*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnTimerEvent(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_ChildEvent(QsciLexerTekHex* self, QChildEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->childEvent(event);
    } else {
        ((VirtualQsciLexerTekHex*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseChildEvent(QsciLexerTekHex* self, QChildEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_ChildEvent_IsBase(true);
        vqscilexertekhex->childEvent(event);
    } else {
        ((VirtualQsciLexerTekHex*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnChildEvent(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_CustomEvent(QsciLexerTekHex* self, QEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->customEvent(event);
    } else {
        ((VirtualQsciLexerTekHex*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseCustomEvent(QsciLexerTekHex* self, QEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_CustomEvent_IsBase(true);
        vqscilexertekhex->customEvent(event);
    } else {
        ((VirtualQsciLexerTekHex*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnCustomEvent(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_ConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerTekHex*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_ConnectNotify_IsBase(true);
        vqscilexertekhex->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerTekHex*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnConnectNotify(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTekHex_DisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerTekHex*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerTekHex_QBaseDisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DisconnectNotify_IsBase(true);
        vqscilexertekhex->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerTekHex*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDisconnectNotify(QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerTekHex_TextAsBytes(const QsciLexerTekHex* self, const libqt_string text) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        QByteArray _qb = vqscilexertekhex->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerTekHex*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerTekHex_QBaseTextAsBytes(const QsciLexerTekHex* self, const libqt_string text) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexertekhex->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerTekHex*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnTextAsBytes(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerTekHex_BytesAsText(const QsciLexerTekHex* self, const char* bytes, int size) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        QString _ret = vqscilexertekhex->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerTekHex*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerTekHex_QBaseBytesAsText(const QsciLexerTekHex* self, const char* bytes, int size) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BytesAsText_IsBase(true);
        QString _ret = vqscilexertekhex->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerTekHex*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerTekHex_OnBytesAsText(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerTekHex_Sender(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->sender();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerTekHex_QBaseSender(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Sender_IsBase(true);
        return vqscilexertekhex->sender();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSender(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Sender_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTekHex_SenderSignalIndex(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerTekHex_QBaseSenderSignalIndex(const QsciLexerTekHex* self) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SenderSignalIndex_IsBase(true);
        return vqscilexertekhex->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerTekHex*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSenderSignalIndex(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTekHex_Receivers(const QsciLexerTekHex* self, const char* signal) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->receivers(signal);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerTekHex_QBaseReceivers(const QsciLexerTekHex* self, const char* signal) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Receivers_IsBase(true);
        return vqscilexertekhex->receivers(signal);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnReceivers(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_Receivers_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTekHex_IsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        return vqscilexertekhex->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerTekHex_QBaseIsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_IsSignalConnected_IsBase(true);
        return vqscilexertekhex->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerTekHex*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnIsSignalConnected(const QsciLexerTekHex* self, intptr_t slot) {
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex && vqscilexertekhex->isVirtualQsciLexerTekHex) {
        vqscilexertekhex->setQsciLexerTekHex_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerTekHex_Delete(QsciLexerTekHex* self) {
    delete self;
}
