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
#include <qscilexersrec.h>
#include "libqscilexersrec.h"
#include "libqscilexersrec.hxx"

QsciLexerSRec* QsciLexerSRec_new() {
    return new VirtualQsciLexerSRec();
}

QsciLexerSRec* QsciLexerSRec_new2(QObject* parent) {
    return new VirtualQsciLexerSRec(parent);
}

QMetaObject* QsciLexerSRec_MetaObject(const QsciLexerSRec* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerSRec_Metacast(QsciLexerSRec* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerSRec_Metacall(QsciLexerSRec* self, int param1, int param2, void** param3) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerSRec*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerSRec_OnMetacall(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Metacall_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerSRec_QBaseMetacall(QsciLexerSRec* self, int param1, int param2, void** param3) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Metacall_IsBase(true);
        return vqscilexersrec->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerSRec*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerSRec_Tr(const char* s) {
    QString _ret = QsciLexerSRec::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerSRec_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerSRec::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerSRec_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerSRec::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
const char* QsciLexerSRec_Language(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return (const char*)vqscilexersrec->language();
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerSRec_QBaseLanguage(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Language_IsBase(true);
        return (const char*)vqscilexersrec->language();
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnLanguage(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Language_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSRec_Lexer(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return (const char*)vqscilexersrec->lexer();
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerSRec_QBaseLexer(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Lexer_IsBase(true);
        return (const char*)vqscilexersrec->lexer();
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnLexer(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Lexer_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSRec_LexerId(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->lexerId();
    } else {
        return ((VirtualQsciLexerSRec*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerSRec_QBaseLexerId(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_LexerId_IsBase(true);
        return vqscilexersrec->lexerId();
    } else {
        return ((VirtualQsciLexerSRec*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnLexerId(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_LexerId_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSRec_AutoCompletionFillups(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return (const char*)vqscilexersrec->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerSRec_QBaseAutoCompletionFillups(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexersrec->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnAutoCompletionFillups(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerSRec_AutoCompletionWordSeparators(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        QList<QString> _ret = vqscilexersrec->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = ((VirtualQsciLexerSRec*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
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
libqt_list /* of libqt_string */ QsciLexerSRec_QBaseAutoCompletionWordSeparators(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexersrec->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = ((VirtualQsciLexerSRec*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
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
void QsciLexerSRec_OnAutoCompletionWordSeparators(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSRec_BlockEnd(const QsciLexerSRec* self, int* style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return (const char*)vqscilexersrec->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSRec_QBaseBlockEnd(const QsciLexerSRec* self, int* style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BlockEnd_IsBase(true);
        return (const char*)vqscilexersrec->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBlockEnd(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSRec_BlockLookback(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->blockLookback();
    } else {
        return ((VirtualQsciLexerSRec*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerSRec_QBaseBlockLookback(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BlockLookback_IsBase(true);
        return vqscilexersrec->blockLookback();
    } else {
        return ((VirtualQsciLexerSRec*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBlockLookback(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSRec_BlockStart(const QsciLexerSRec* self, int* style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return (const char*)vqscilexersrec->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSRec_QBaseBlockStart(const QsciLexerSRec* self, int* style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BlockStart_IsBase(true);
        return (const char*)vqscilexersrec->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBlockStart(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSRec_BlockStartKeyword(const QsciLexerSRec* self, int* style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return (const char*)vqscilexersrec->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSRec_QBaseBlockStartKeyword(const QsciLexerSRec* self, int* style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexersrec->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBlockStartKeyword(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSRec_BraceStyle(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->braceStyle();
    } else {
        return ((VirtualQsciLexerSRec*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerSRec_QBaseBraceStyle(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BraceStyle_IsBase(true);
        return vqscilexersrec->braceStyle();
    } else {
        return ((VirtualQsciLexerSRec*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBraceStyle(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSRec_CaseSensitive(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->caseSensitive();
    } else {
        return ((VirtualQsciLexerSRec*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerSRec_QBaseCaseSensitive(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_CaseSensitive_IsBase(true);
        return vqscilexersrec->caseSensitive();
    } else {
        return ((VirtualQsciLexerSRec*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnCaseSensitive(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSRec_Color(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return new QColor(vqscilexersrec->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSRec*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSRec_QBaseColor(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Color_IsBase(true);
        return new QColor(vqscilexersrec->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSRec*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnColor(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Color_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSRec_EolFill(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSRec*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerSRec_QBaseEolFill(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_EolFill_IsBase(true);
        return vqscilexersrec->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSRec*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnEolFill(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_EolFill_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerSRec_Font(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return new QFont(vqscilexersrec->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSRec*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerSRec_QBaseFont(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Font_IsBase(true);
        return new QFont(vqscilexersrec->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSRec*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnFont(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Font_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSRec_IndentationGuideView(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->indentationGuideView();
    } else {
        return ((VirtualQsciLexerSRec*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerSRec_QBaseIndentationGuideView(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_IndentationGuideView_IsBase(true);
        return vqscilexersrec->indentationGuideView();
    } else {
        return ((VirtualQsciLexerSRec*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnIndentationGuideView(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSRec_Keywords(const QsciLexerSRec* self, int set) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return (const char*)vqscilexersrec->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerSRec_QBaseKeywords(const QsciLexerSRec* self, int set) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Keywords_IsBase(true);
        return (const char*)vqscilexersrec->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnKeywords(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Keywords_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSRec_DefaultStyle(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->defaultStyle();
    } else {
        return ((VirtualQsciLexerSRec*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerSRec_QBaseDefaultStyle(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultStyle_IsBase(true);
        return vqscilexersrec->defaultStyle();
    } else {
        return ((VirtualQsciLexerSRec*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultStyle(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSRec_Description(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        QString _ret = vqscilexersrec->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSRec*)self)->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerSRec_QBaseDescription(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Description_IsBase(true);
        QString _ret = vqscilexersrec->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSRec*)self)->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDescription(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Description_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSRec_Paper(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return new QColor(vqscilexersrec->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSRec*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSRec_QBasePaper(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Paper_IsBase(true);
        return new QColor(vqscilexersrec->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSRec*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnPaper(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Paper_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSRec_DefaultColorWithStyle(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return new QColor(vqscilexersrec->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSRec*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSRec_QBaseDefaultColorWithStyle(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexersrec->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSRec*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultColorWithStyle(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSRec_DefaultEolFill(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSRec*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerSRec_QBaseDefaultEolFill(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultEolFill_IsBase(true);
        return vqscilexersrec->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSRec*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultEolFill(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerSRec_DefaultFontWithStyle(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return new QFont(vqscilexersrec->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSRec*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerSRec_QBaseDefaultFontWithStyle(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexersrec->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSRec*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultFontWithStyle(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSRec_DefaultPaperWithStyle(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return new QColor(vqscilexersrec->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSRec*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSRec_QBaseDefaultPaperWithStyle(const QsciLexerSRec* self, int style) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexersrec->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSRec*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultPaperWithStyle(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_SetEditor(QsciLexerSRec* self, QsciScintilla* editor) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setEditor(editor);
    } else {
        ((VirtualQsciLexerSRec*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseSetEditor(QsciLexerSRec* self, QsciScintilla* editor) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetEditor_IsBase(true);
        vqscilexersrec->setEditor(editor);
    } else {
        ((VirtualQsciLexerSRec*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetEditor(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_RefreshProperties(QsciLexerSRec* self) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->refreshProperties();
    } else {
        ((VirtualQsciLexerSRec*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseRefreshProperties(QsciLexerSRec* self) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_RefreshProperties_IsBase(true);
        vqscilexersrec->refreshProperties();
    } else {
        ((VirtualQsciLexerSRec*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnRefreshProperties(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSRec_StyleBitsNeeded(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerSRec*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerSRec_QBaseStyleBitsNeeded(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_StyleBitsNeeded_IsBase(true);
        return vqscilexersrec->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerSRec*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnStyleBitsNeeded(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSRec_WordCharacters(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return (const char*)vqscilexersrec->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerSRec_QBaseWordCharacters(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_WordCharacters_IsBase(true);
        return (const char*)vqscilexersrec->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerSRec*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnWordCharacters(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_SetAutoIndentStyle(QsciLexerSRec* self, int autoindentstyle) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerSRec*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseSetAutoIndentStyle(QsciLexerSRec* self, int autoindentstyle) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetAutoIndentStyle_IsBase(true);
        vqscilexersrec->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerSRec*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetAutoIndentStyle(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_SetColor(QsciLexerSRec* self, const QColor* c, int style) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSRec*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseSetColor(QsciLexerSRec* self, const QColor* c, int style) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetColor_IsBase(true);
        vqscilexersrec->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSRec*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetColor(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetColor_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_SetEolFill(QsciLexerSRec* self, bool eoffill, int style) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSRec*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseSetEolFill(QsciLexerSRec* self, bool eoffill, int style) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetEolFill_IsBase(true);
        vqscilexersrec->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSRec*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetEolFill(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_SetFont(QsciLexerSRec* self, const QFont* f, int style) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSRec*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseSetFont(QsciLexerSRec* self, const QFont* f, int style) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetFont_IsBase(true);
        vqscilexersrec->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSRec*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetFont(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetFont_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_SetPaper(QsciLexerSRec* self, const QColor* c, int style) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSRec*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseSetPaper(QsciLexerSRec* self, const QColor* c, int style) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetPaper_IsBase(true);
        vqscilexersrec->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSRec*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetPaper(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSRec_ReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSRec*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerSRec_QBaseReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_ReadProperties_IsBase(true);
        return vqscilexersrec->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSRec*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnReadProperties(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSRec_WriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSRec*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerSRec_QBaseWriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_WriteProperties_IsBase(true);
        return vqscilexersrec->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSRec*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnWriteProperties(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSRec_Event(QsciLexerSRec* self, QEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->event(event);
    } else {
        return ((VirtualQsciLexerSRec*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerSRec_QBaseEvent(QsciLexerSRec* self, QEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Event_IsBase(true);
        return vqscilexersrec->event(event);
    } else {
        return ((VirtualQsciLexerSRec*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnEvent(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Event_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSRec_EventFilter(QsciLexerSRec* self, QObject* watched, QEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerSRec*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerSRec_QBaseEventFilter(QsciLexerSRec* self, QObject* watched, QEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_EventFilter_IsBase(true);
        return vqscilexersrec->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerSRec*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnEventFilter(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_TimerEvent(QsciLexerSRec* self, QTimerEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->timerEvent(event);
    } else {
        ((VirtualQsciLexerSRec*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseTimerEvent(QsciLexerSRec* self, QTimerEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_TimerEvent_IsBase(true);
        vqscilexersrec->timerEvent(event);
    } else {
        ((VirtualQsciLexerSRec*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnTimerEvent(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_ChildEvent(QsciLexerSRec* self, QChildEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->childEvent(event);
    } else {
        ((VirtualQsciLexerSRec*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseChildEvent(QsciLexerSRec* self, QChildEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_ChildEvent_IsBase(true);
        vqscilexersrec->childEvent(event);
    } else {
        ((VirtualQsciLexerSRec*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnChildEvent(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_CustomEvent(QsciLexerSRec* self, QEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->customEvent(event);
    } else {
        ((VirtualQsciLexerSRec*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseCustomEvent(QsciLexerSRec* self, QEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_CustomEvent_IsBase(true);
        vqscilexersrec->customEvent(event);
    } else {
        ((VirtualQsciLexerSRec*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnCustomEvent(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_ConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerSRec*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_ConnectNotify_IsBase(true);
        vqscilexersrec->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerSRec*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnConnectNotify(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSRec_DisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerSRec*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerSRec_QBaseDisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DisconnectNotify_IsBase(true);
        vqscilexersrec->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerSRec*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDisconnectNotify(QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSRec_TextAsBytes(const QsciLexerSRec* self, const libqt_string text) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        QByteArray _qb = vqscilexersrec->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerSRec*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerSRec_QBaseTextAsBytes(const QsciLexerSRec* self, const libqt_string text) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexersrec->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerSRec*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnTextAsBytes(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSRec_BytesAsText(const QsciLexerSRec* self, const char* bytes, int size) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        QString _ret = vqscilexersrec->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSRec*)self)->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerSRec_QBaseBytesAsText(const QsciLexerSRec* self, const char* bytes, int size) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BytesAsText_IsBase(true);
        QString _ret = vqscilexersrec->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSRec*)self)->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBytesAsText(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerSRec_Sender(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->sender();
    } else {
        return ((VirtualQsciLexerSRec*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerSRec_QBaseSender(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Sender_IsBase(true);
        return vqscilexersrec->sender();
    } else {
        return ((VirtualQsciLexerSRec*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSender(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Sender_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSRec_SenderSignalIndex(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerSRec*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerSRec_QBaseSenderSignalIndex(const QsciLexerSRec* self) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SenderSignalIndex_IsBase(true);
        return vqscilexersrec->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerSRec*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSenderSignalIndex(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSRec_Receivers(const QsciLexerSRec* self, const char* signal) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->receivers(signal);
    } else {
        return ((VirtualQsciLexerSRec*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerSRec_QBaseReceivers(const QsciLexerSRec* self, const char* signal) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Receivers_IsBase(true);
        return vqscilexersrec->receivers(signal);
    } else {
        return ((VirtualQsciLexerSRec*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnReceivers(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_Receivers_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSRec_IsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        return vqscilexersrec->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerSRec*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerSRec_QBaseIsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_IsSignalConnected_IsBase(true);
        return vqscilexersrec->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerSRec*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnIsSignalConnected(const QsciLexerSRec* self, intptr_t slot) {
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec && vqscilexersrec->isVirtualQsciLexerSRec) {
        vqscilexersrec->setQsciLexerSRec_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerSRec_Delete(QsciLexerSRec* self) {
    delete self;
}
