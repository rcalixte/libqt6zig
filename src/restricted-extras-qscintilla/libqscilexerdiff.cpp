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
#include <qscilexerdiff.h>
#include "libqscilexerdiff.h"
#include "libqscilexerdiff.hxx"

QsciLexerDiff* QsciLexerDiff_new() {
    return new VirtualQsciLexerDiff();
}

QsciLexerDiff* QsciLexerDiff_new2(QObject* parent) {
    return new VirtualQsciLexerDiff(parent);
}

QMetaObject* QsciLexerDiff_MetaObject(const QsciLexerDiff* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerDiff_Metacast(QsciLexerDiff* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerDiff_Metacall(QsciLexerDiff* self, int param1, int param2, void** param3) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerDiff*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerDiff_OnMetacall(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Metacall_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerDiff_QBaseMetacall(QsciLexerDiff* self, int param1, int param2, void** param3) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Metacall_IsBase(true);
        return vqscilexerdiff->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerDiff*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerDiff_Tr(const char* s) {
    QString _ret = QsciLexerDiff::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerDiff_DefaultColor(const QsciLexerDiff* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

libqt_string QsciLexerDiff_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerDiff::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerDiff_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerDiff::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerDiff_Language(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return (const char*)vqscilexerdiff->language();
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseLanguage(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Language_IsBase(true);
        return (const char*)vqscilexerdiff->language();
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnLanguage(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Language_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_Lexer(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return (const char*)vqscilexerdiff->lexer();
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseLexer(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Lexer_IsBase(true);
        return (const char*)vqscilexerdiff->lexer();
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnLexer(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Lexer_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_LexerId(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->lexerId();
    } else {
        return ((VirtualQsciLexerDiff*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseLexerId(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_LexerId_IsBase(true);
        return vqscilexerdiff->lexerId();
    } else {
        return ((VirtualQsciLexerDiff*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnLexerId(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_LexerId_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_AutoCompletionFillups(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return (const char*)vqscilexerdiff->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseAutoCompletionFillups(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerdiff->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnAutoCompletionFillups(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerDiff_AutoCompletionWordSeparators(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        QList<QString> _ret = vqscilexerdiff->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerDiff*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerDiff_QBaseAutoCompletionWordSeparators(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerdiff->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerDiff*)self)->autoCompletionWordSeparators();
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
void QsciLexerDiff_OnAutoCompletionWordSeparators(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockEnd(const QsciLexerDiff* self, int* style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return (const char*)vqscilexerdiff->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseBlockEnd(const QsciLexerDiff* self, int* style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BlockEnd_IsBase(true);
        return (const char*)vqscilexerdiff->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockEnd(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_BlockLookback(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->blockLookback();
    } else {
        return ((VirtualQsciLexerDiff*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseBlockLookback(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BlockLookback_IsBase(true);
        return vqscilexerdiff->blockLookback();
    } else {
        return ((VirtualQsciLexerDiff*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockLookback(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockStart(const QsciLexerDiff* self, int* style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return (const char*)vqscilexerdiff->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseBlockStart(const QsciLexerDiff* self, int* style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BlockStart_IsBase(true);
        return (const char*)vqscilexerdiff->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockStart(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockStartKeyword(const QsciLexerDiff* self, int* style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return (const char*)vqscilexerdiff->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseBlockStartKeyword(const QsciLexerDiff* self, int* style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerdiff->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockStartKeyword(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_BraceStyle(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->braceStyle();
    } else {
        return ((VirtualQsciLexerDiff*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseBraceStyle(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BraceStyle_IsBase(true);
        return vqscilexerdiff->braceStyle();
    } else {
        return ((VirtualQsciLexerDiff*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBraceStyle(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_CaseSensitive(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->caseSensitive();
    } else {
        return ((VirtualQsciLexerDiff*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseCaseSensitive(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_CaseSensitive_IsBase(true);
        return vqscilexerdiff->caseSensitive();
    } else {
        return ((VirtualQsciLexerDiff*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnCaseSensitive(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerDiff_Color(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return new QColor(vqscilexerdiff->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerDiff*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerDiff_QBaseColor(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Color_IsBase(true);
        return new QColor(vqscilexerdiff->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerDiff*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnColor(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Color_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_EolFill(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerDiff*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseEolFill(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_EolFill_IsBase(true);
        return vqscilexerdiff->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerDiff*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEolFill(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_EolFill_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerDiff_Font(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return new QFont(vqscilexerdiff->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerDiff*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerDiff_QBaseFont(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Font_IsBase(true);
        return new QFont(vqscilexerdiff->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerDiff*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnFont(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Font_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_IndentationGuideView(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->indentationGuideView();
    } else {
        return ((VirtualQsciLexerDiff*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseIndentationGuideView(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_IndentationGuideView_IsBase(true);
        return vqscilexerdiff->indentationGuideView();
    } else {
        return ((VirtualQsciLexerDiff*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnIndentationGuideView(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_Keywords(const QsciLexerDiff* self, int set) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return (const char*)vqscilexerdiff->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseKeywords(const QsciLexerDiff* self, int set) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Keywords_IsBase(true);
        return (const char*)vqscilexerdiff->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnKeywords(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Keywords_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_DefaultStyle(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->defaultStyle();
    } else {
        return ((VirtualQsciLexerDiff*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseDefaultStyle(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultStyle_IsBase(true);
        return vqscilexerdiff->defaultStyle();
    } else {
        return ((VirtualQsciLexerDiff*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultStyle(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerDiff_Description(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        QString _ret = vqscilexerdiff->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerDiff*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerDiff_QBaseDescription(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Description_IsBase(true);
        QString _ret = vqscilexerdiff->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerDiff*)self)->description(static_cast<int>(style));
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
void QsciLexerDiff_OnDescription(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Description_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerDiff_Paper(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return new QColor(vqscilexerdiff->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerDiff*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerDiff_QBasePaper(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Paper_IsBase(true);
        return new QColor(vqscilexerdiff->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerDiff*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnPaper(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Paper_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerDiff_DefaultColor2(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return new QColor(vqscilexerdiff->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerDiff*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerDiff_QBaseDefaultColor2(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerdiff->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerDiff*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultColor2(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_DefaultEolFill(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerDiff*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseDefaultEolFill(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultEolFill_IsBase(true);
        return vqscilexerdiff->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerDiff*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultEolFill(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerDiff_DefaultFont2(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return new QFont(vqscilexerdiff->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerDiff*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerDiff_QBaseDefaultFont2(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerdiff->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerDiff*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultFont2(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerDiff_DefaultPaper2(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return new QColor(vqscilexerdiff->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerDiff*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerDiff_QBaseDefaultPaper2(const QsciLexerDiff* self, int style) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerdiff->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerDiff*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultPaper2(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetEditor(QsciLexerDiff* self, QsciScintilla* editor) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setEditor(editor);
    } else {
        ((VirtualQsciLexerDiff*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetEditor(QsciLexerDiff* self, QsciScintilla* editor) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetEditor_IsBase(true);
        vqscilexerdiff->setEditor(editor);
    } else {
        ((VirtualQsciLexerDiff*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetEditor(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_RefreshProperties(QsciLexerDiff* self) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->refreshProperties();
    } else {
        ((VirtualQsciLexerDiff*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseRefreshProperties(QsciLexerDiff* self) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_RefreshProperties_IsBase(true);
        vqscilexerdiff->refreshProperties();
    } else {
        ((VirtualQsciLexerDiff*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnRefreshProperties(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_StyleBitsNeeded(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerDiff*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseStyleBitsNeeded(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_StyleBitsNeeded_IsBase(true);
        return vqscilexerdiff->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerDiff*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnStyleBitsNeeded(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_WordCharacters(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return (const char*)vqscilexerdiff->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseWordCharacters(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_WordCharacters_IsBase(true);
        return (const char*)vqscilexerdiff->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerDiff*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnWordCharacters(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetAutoIndentStyle(QsciLexerDiff* self, int autoindentstyle) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerDiff*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetAutoIndentStyle(QsciLexerDiff* self, int autoindentstyle) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetAutoIndentStyle_IsBase(true);
        vqscilexerdiff->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerDiff*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetAutoIndentStyle(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetColor(QsciLexerDiff* self, const QColor* c, int style) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerDiff*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetColor(QsciLexerDiff* self, const QColor* c, int style) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetColor_IsBase(true);
        vqscilexerdiff->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerDiff*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetColor(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetColor_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetEolFill(QsciLexerDiff* self, bool eoffill, int style) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerDiff*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetEolFill(QsciLexerDiff* self, bool eoffill, int style) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetEolFill_IsBase(true);
        vqscilexerdiff->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerDiff*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetEolFill(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetFont(QsciLexerDiff* self, const QFont* f, int style) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerDiff*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetFont(QsciLexerDiff* self, const QFont* f, int style) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetFont_IsBase(true);
        vqscilexerdiff->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerDiff*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetFont(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetFont_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetPaper(QsciLexerDiff* self, const QColor* c, int style) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerDiff*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetPaper(QsciLexerDiff* self, const QColor* c, int style) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetPaper_IsBase(true);
        vqscilexerdiff->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerDiff*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetPaper(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_ReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerDiff*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_ReadProperties_IsBase(true);
        return vqscilexerdiff->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerDiff*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnReadProperties(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_WriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerDiff*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseWriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_WriteProperties_IsBase(true);
        return vqscilexerdiff->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerDiff*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnWriteProperties(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_Event(QsciLexerDiff* self, QEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->event(event);
    } else {
        return ((VirtualQsciLexerDiff*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseEvent(QsciLexerDiff* self, QEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Event_IsBase(true);
        return vqscilexerdiff->event(event);
    } else {
        return ((VirtualQsciLexerDiff*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEvent(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Event_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_EventFilter(QsciLexerDiff* self, QObject* watched, QEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerDiff*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseEventFilter(QsciLexerDiff* self, QObject* watched, QEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_EventFilter_IsBase(true);
        return vqscilexerdiff->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerDiff*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEventFilter(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_TimerEvent(QsciLexerDiff* self, QTimerEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->timerEvent(event);
    } else {
        ((VirtualQsciLexerDiff*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseTimerEvent(QsciLexerDiff* self, QTimerEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_TimerEvent_IsBase(true);
        vqscilexerdiff->timerEvent(event);
    } else {
        ((VirtualQsciLexerDiff*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnTimerEvent(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_ChildEvent(QsciLexerDiff* self, QChildEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->childEvent(event);
    } else {
        ((VirtualQsciLexerDiff*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseChildEvent(QsciLexerDiff* self, QChildEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_ChildEvent_IsBase(true);
        vqscilexerdiff->childEvent(event);
    } else {
        ((VirtualQsciLexerDiff*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnChildEvent(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_CustomEvent(QsciLexerDiff* self, QEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->customEvent(event);
    } else {
        ((VirtualQsciLexerDiff*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseCustomEvent(QsciLexerDiff* self, QEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_CustomEvent_IsBase(true);
        vqscilexerdiff->customEvent(event);
    } else {
        ((VirtualQsciLexerDiff*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnCustomEvent(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_ConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerDiff*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_ConnectNotify_IsBase(true);
        vqscilexerdiff->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerDiff*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnConnectNotify(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_DisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerDiff*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseDisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DisconnectNotify_IsBase(true);
        vqscilexerdiff->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerDiff*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDisconnectNotify(QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerDiff_TextAsBytes(const QsciLexerDiff* self, const libqt_string text) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        QByteArray _qb = vqscilexerdiff->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerDiff*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerDiff_QBaseTextAsBytes(const QsciLexerDiff* self, const libqt_string text) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerdiff->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerDiff*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnTextAsBytes(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerDiff_BytesAsText(const QsciLexerDiff* self, const char* bytes, int size) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        QString _ret = vqscilexerdiff->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerDiff*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerDiff_QBaseBytesAsText(const QsciLexerDiff* self, const char* bytes, int size) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BytesAsText_IsBase(true);
        QString _ret = vqscilexerdiff->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerDiff*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerDiff_OnBytesAsText(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerDiff_Sender(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->sender();
    } else {
        return ((VirtualQsciLexerDiff*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerDiff_QBaseSender(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Sender_IsBase(true);
        return vqscilexerdiff->sender();
    } else {
        return ((VirtualQsciLexerDiff*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSender(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Sender_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_SenderSignalIndex(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerDiff*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseSenderSignalIndex(const QsciLexerDiff* self) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SenderSignalIndex_IsBase(true);
        return vqscilexerdiff->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerDiff*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSenderSignalIndex(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_Receivers(const QsciLexerDiff* self, const char* signal) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->receivers(signal);
    } else {
        return ((VirtualQsciLexerDiff*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseReceivers(const QsciLexerDiff* self, const char* signal) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Receivers_IsBase(true);
        return vqscilexerdiff->receivers(signal);
    } else {
        return ((VirtualQsciLexerDiff*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnReceivers(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_Receivers_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_IsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        return vqscilexerdiff->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerDiff*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseIsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_IsSignalConnected_IsBase(true);
        return vqscilexerdiff->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerDiff*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnIsSignalConnected(const QsciLexerDiff* self, intptr_t slot) {
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff && vqscilexerdiff->isVirtualQsciLexerDiff) {
        vqscilexerdiff->setQsciLexerDiff_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerDiff_Delete(QsciLexerDiff* self) {
    delete self;
}
