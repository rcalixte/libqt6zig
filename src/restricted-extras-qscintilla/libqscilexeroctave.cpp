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
#include <qscilexeroctave.h>
#include "libqscilexeroctave.h"
#include "libqscilexeroctave.hxx"

QsciLexerOctave* QsciLexerOctave_new() {
    return new VirtualQsciLexerOctave();
}

QsciLexerOctave* QsciLexerOctave_new2(QObject* parent) {
    return new VirtualQsciLexerOctave(parent);
}

QMetaObject* QsciLexerOctave_MetaObject(const QsciLexerOctave* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerOctave_Metacast(QsciLexerOctave* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerOctave_Metacall(QsciLexerOctave* self, int param1, int param2, void** param3) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerOctave*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerOctave_OnMetacall(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Metacall_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerOctave_QBaseMetacall(QsciLexerOctave* self, int param1, int param2, void** param3) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Metacall_IsBase(true);
        return vqscilexeroctave->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerOctave*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerOctave_Tr(const char* s) {
    QString _ret = QsciLexerOctave::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerOctave_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerOctave::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerOctave_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerOctave::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerOctave_Language(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return (const char*)vqscilexeroctave->language();
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseLanguage(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Language_IsBase(true);
        return (const char*)vqscilexeroctave->language();
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnLanguage(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Language_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_Lexer(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return (const char*)vqscilexeroctave->lexer();
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseLexer(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Lexer_IsBase(true);
        return (const char*)vqscilexeroctave->lexer();
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnLexer(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Lexer_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_LexerId(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->lexerId();
    } else {
        return ((VirtualQsciLexerOctave*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseLexerId(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_LexerId_IsBase(true);
        return vqscilexeroctave->lexerId();
    } else {
        return ((VirtualQsciLexerOctave*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnLexerId(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_LexerId_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_AutoCompletionFillups(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return (const char*)vqscilexeroctave->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseAutoCompletionFillups(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexeroctave->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnAutoCompletionFillups(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerOctave_AutoCompletionWordSeparators(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        QList<QString> _ret = vqscilexeroctave->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
        QList<QString> _ret = ((VirtualQsciLexerOctave*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
libqt_list /* of libqt_string */ QsciLexerOctave_QBaseAutoCompletionWordSeparators(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexeroctave->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
        QList<QString> _ret = ((VirtualQsciLexerOctave*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
void QsciLexerOctave_OnAutoCompletionWordSeparators(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockEnd(const QsciLexerOctave* self, int* style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return (const char*)vqscilexeroctave->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseBlockEnd(const QsciLexerOctave* self, int* style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BlockEnd_IsBase(true);
        return (const char*)vqscilexeroctave->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockEnd(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_BlockLookback(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->blockLookback();
    } else {
        return ((VirtualQsciLexerOctave*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseBlockLookback(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BlockLookback_IsBase(true);
        return vqscilexeroctave->blockLookback();
    } else {
        return ((VirtualQsciLexerOctave*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockLookback(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockStart(const QsciLexerOctave* self, int* style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return (const char*)vqscilexeroctave->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseBlockStart(const QsciLexerOctave* self, int* style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BlockStart_IsBase(true);
        return (const char*)vqscilexeroctave->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockStart(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockStartKeyword(const QsciLexerOctave* self, int* style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return (const char*)vqscilexeroctave->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseBlockStartKeyword(const QsciLexerOctave* self, int* style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexeroctave->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockStartKeyword(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_BraceStyle(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->braceStyle();
    } else {
        return ((VirtualQsciLexerOctave*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseBraceStyle(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BraceStyle_IsBase(true);
        return vqscilexeroctave->braceStyle();
    } else {
        return ((VirtualQsciLexerOctave*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBraceStyle(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_CaseSensitive(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->caseSensitive();
    } else {
        return ((VirtualQsciLexerOctave*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseCaseSensitive(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_CaseSensitive_IsBase(true);
        return vqscilexeroctave->caseSensitive();
    } else {
        return ((VirtualQsciLexerOctave*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnCaseSensitive(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerOctave_Color(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return new QColor(vqscilexeroctave->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerOctave*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerOctave_QBaseColor(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Color_IsBase(true);
        return new QColor(vqscilexeroctave->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerOctave*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnColor(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Color_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_EolFill(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerOctave*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseEolFill(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_EolFill_IsBase(true);
        return vqscilexeroctave->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerOctave*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEolFill(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_EolFill_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerOctave_Font(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return new QFont(vqscilexeroctave->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerOctave*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerOctave_QBaseFont(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Font_IsBase(true);
        return new QFont(vqscilexeroctave->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerOctave*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnFont(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Font_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_IndentationGuideView(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->indentationGuideView();
    } else {
        return ((VirtualQsciLexerOctave*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseIndentationGuideView(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_IndentationGuideView_IsBase(true);
        return vqscilexeroctave->indentationGuideView();
    } else {
        return ((VirtualQsciLexerOctave*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnIndentationGuideView(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_Keywords(const QsciLexerOctave* self, int set) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return (const char*)vqscilexeroctave->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseKeywords(const QsciLexerOctave* self, int set) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Keywords_IsBase(true);
        return (const char*)vqscilexeroctave->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnKeywords(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Keywords_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_DefaultStyle(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->defaultStyle();
    } else {
        return ((VirtualQsciLexerOctave*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseDefaultStyle(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultStyle_IsBase(true);
        return vqscilexeroctave->defaultStyle();
    } else {
        return ((VirtualQsciLexerOctave*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultStyle(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerOctave_Description(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        QString _ret = vqscilexeroctave->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerOctave*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerOctave_QBaseDescription(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Description_IsBase(true);
        QString _ret = vqscilexeroctave->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerOctave*)self)->description(static_cast<int>(style));
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
void QsciLexerOctave_OnDescription(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Description_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerOctave_Paper(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return new QColor(vqscilexeroctave->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerOctave*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerOctave_QBasePaper(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Paper_IsBase(true);
        return new QColor(vqscilexeroctave->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerOctave*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnPaper(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Paper_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerOctave_DefaultColor2(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return new QColor(vqscilexeroctave->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerOctave*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerOctave_QBaseDefaultColor2(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultColor2_IsBase(true);
        return new QColor(vqscilexeroctave->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerOctave*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultColor2(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_DefaultEolFill(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerOctave*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseDefaultEolFill(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultEolFill_IsBase(true);
        return vqscilexeroctave->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerOctave*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultEolFill(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerOctave_DefaultFont2(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return new QFont(vqscilexeroctave->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerOctave*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerOctave_QBaseDefaultFont2(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultFont2_IsBase(true);
        return new QFont(vqscilexeroctave->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerOctave*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultFont2(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerOctave_DefaultPaper2(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return new QColor(vqscilexeroctave->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerOctave*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerOctave_QBaseDefaultPaper2(const QsciLexerOctave* self, int style) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexeroctave->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerOctave*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultPaper2(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetEditor(QsciLexerOctave* self, QsciScintilla* editor) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setEditor(editor);
    } else {
        ((VirtualQsciLexerOctave*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetEditor(QsciLexerOctave* self, QsciScintilla* editor) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetEditor_IsBase(true);
        vqscilexeroctave->setEditor(editor);
    } else {
        ((VirtualQsciLexerOctave*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetEditor(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_RefreshProperties(QsciLexerOctave* self) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->refreshProperties();
    } else {
        ((VirtualQsciLexerOctave*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseRefreshProperties(QsciLexerOctave* self) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_RefreshProperties_IsBase(true);
        vqscilexeroctave->refreshProperties();
    } else {
        ((VirtualQsciLexerOctave*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnRefreshProperties(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_StyleBitsNeeded(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerOctave*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseStyleBitsNeeded(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_StyleBitsNeeded_IsBase(true);
        return vqscilexeroctave->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerOctave*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnStyleBitsNeeded(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_WordCharacters(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return (const char*)vqscilexeroctave->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseWordCharacters(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_WordCharacters_IsBase(true);
        return (const char*)vqscilexeroctave->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerOctave*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnWordCharacters(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerOctave*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetAutoIndentStyle_IsBase(true);
        vqscilexeroctave->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerOctave*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetAutoIndentStyle(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetColor(QsciLexerOctave* self, const QColor* c, int style) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerOctave*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetColor(QsciLexerOctave* self, const QColor* c, int style) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetColor_IsBase(true);
        vqscilexeroctave->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerOctave*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetColor(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetColor_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetEolFill(QsciLexerOctave* self, bool eoffill, int style) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerOctave*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetEolFill(QsciLexerOctave* self, bool eoffill, int style) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetEolFill_IsBase(true);
        vqscilexeroctave->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerOctave*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetEolFill(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetFont(QsciLexerOctave* self, const QFont* f, int style) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerOctave*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetFont(QsciLexerOctave* self, const QFont* f, int style) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetFont_IsBase(true);
        vqscilexeroctave->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerOctave*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetFont(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetFont_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetPaper(QsciLexerOctave* self, const QColor* c, int style) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerOctave*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetPaper(QsciLexerOctave* self, const QColor* c, int style) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetPaper_IsBase(true);
        vqscilexeroctave->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerOctave*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetPaper(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_ReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerOctave*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_ReadProperties_IsBase(true);
        return vqscilexeroctave->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerOctave*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnReadProperties(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_WriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerOctave*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseWriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_WriteProperties_IsBase(true);
        return vqscilexeroctave->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerOctave*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnWriteProperties(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_Event(QsciLexerOctave* self, QEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->event(event);
    } else {
        return ((VirtualQsciLexerOctave*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseEvent(QsciLexerOctave* self, QEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Event_IsBase(true);
        return vqscilexeroctave->event(event);
    } else {
        return ((VirtualQsciLexerOctave*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEvent(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Event_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_EventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerOctave*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseEventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_EventFilter_IsBase(true);
        return vqscilexeroctave->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerOctave*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEventFilter(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_TimerEvent(QsciLexerOctave* self, QTimerEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->timerEvent(event);
    } else {
        ((VirtualQsciLexerOctave*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseTimerEvent(QsciLexerOctave* self, QTimerEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_TimerEvent_IsBase(true);
        vqscilexeroctave->timerEvent(event);
    } else {
        ((VirtualQsciLexerOctave*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnTimerEvent(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_ChildEvent(QsciLexerOctave* self, QChildEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->childEvent(event);
    } else {
        ((VirtualQsciLexerOctave*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseChildEvent(QsciLexerOctave* self, QChildEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_ChildEvent_IsBase(true);
        vqscilexeroctave->childEvent(event);
    } else {
        ((VirtualQsciLexerOctave*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnChildEvent(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_CustomEvent(QsciLexerOctave* self, QEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->customEvent(event);
    } else {
        ((VirtualQsciLexerOctave*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseCustomEvent(QsciLexerOctave* self, QEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_CustomEvent_IsBase(true);
        vqscilexeroctave->customEvent(event);
    } else {
        ((VirtualQsciLexerOctave*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnCustomEvent(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_ConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerOctave*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_ConnectNotify_IsBase(true);
        vqscilexeroctave->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerOctave*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnConnectNotify(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_DisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerOctave*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseDisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DisconnectNotify_IsBase(true);
        vqscilexeroctave->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerOctave*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDisconnectNotify(QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerOctave_TextAsBytes(const QsciLexerOctave* self, const libqt_string text) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        QByteArray _qb = vqscilexeroctave->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerOctave*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerOctave_QBaseTextAsBytes(const QsciLexerOctave* self, const libqt_string text) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexeroctave->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerOctave*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnTextAsBytes(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerOctave_BytesAsText(const QsciLexerOctave* self, const char* bytes, int size) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        QString _ret = vqscilexeroctave->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerOctave*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerOctave_QBaseBytesAsText(const QsciLexerOctave* self, const char* bytes, int size) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BytesAsText_IsBase(true);
        QString _ret = vqscilexeroctave->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerOctave*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerOctave_OnBytesAsText(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerOctave_Sender(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->sender();
    } else {
        return ((VirtualQsciLexerOctave*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerOctave_QBaseSender(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Sender_IsBase(true);
        return vqscilexeroctave->sender();
    } else {
        return ((VirtualQsciLexerOctave*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSender(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Sender_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_SenderSignalIndex(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerOctave*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseSenderSignalIndex(const QsciLexerOctave* self) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SenderSignalIndex_IsBase(true);
        return vqscilexeroctave->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerOctave*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSenderSignalIndex(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_Receivers(const QsciLexerOctave* self, const char* signal) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->receivers(signal);
    } else {
        return ((VirtualQsciLexerOctave*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseReceivers(const QsciLexerOctave* self, const char* signal) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Receivers_IsBase(true);
        return vqscilexeroctave->receivers(signal);
    } else {
        return ((VirtualQsciLexerOctave*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnReceivers(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_Receivers_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_IsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        return vqscilexeroctave->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerOctave*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseIsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_IsSignalConnected_IsBase(true);
        return vqscilexeroctave->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerOctave*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnIsSignalConnected(const QsciLexerOctave* self, intptr_t slot) {
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave && vqscilexeroctave->isVirtualQsciLexerOctave) {
        vqscilexeroctave->setQsciLexerOctave_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerOctave_Delete(QsciLexerOctave* self) {
    delete self;
}
