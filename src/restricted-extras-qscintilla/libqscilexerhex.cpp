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
#include <qscilexerhex.h>
#include "libqscilexerhex.h"
#include "libqscilexerhex.hxx"

QsciLexerHex* QsciLexerHex_new() {
    return new VirtualQsciLexerHex();
}

QsciLexerHex* QsciLexerHex_new2(QObject* parent) {
    return new VirtualQsciLexerHex(parent);
}

QMetaObject* QsciLexerHex_MetaObject(const QsciLexerHex* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerHex_Metacast(QsciLexerHex* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerHex_Metacall(QsciLexerHex* self, int param1, int param2, void** param3) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerHex*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerHex_OnMetacall(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Metacall_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerHex_QBaseMetacall(QsciLexerHex* self, int param1, int param2, void** param3) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Metacall_IsBase(true);
        return vqscilexerhex->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerHex*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerHex_Tr(const char* s) {
    QString _ret = QsciLexerHex::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerHex_DefaultColor(const QsciLexerHex* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerHex_DefaultFont(const QsciLexerHex* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerHex_DefaultPaper(const QsciLexerHex* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerHex_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerHex::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerHex_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerHex::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerHex_Language(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return (const char*)vqscilexerhex->language();
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerHex_QBaseLanguage(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Language_IsBase(true);
        return (const char*)vqscilexerhex->language();
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnLanguage(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Language_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHex_Lexer(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return (const char*)vqscilexerhex->lexer();
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerHex_QBaseLexer(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Lexer_IsBase(true);
        return (const char*)vqscilexerhex->lexer();
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnLexer(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Lexer_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHex_LexerId(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->lexerId();
    } else {
        return ((VirtualQsciLexerHex*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerHex_QBaseLexerId(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_LexerId_IsBase(true);
        return vqscilexerhex->lexerId();
    } else {
        return ((VirtualQsciLexerHex*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnLexerId(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_LexerId_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHex_AutoCompletionFillups(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return (const char*)vqscilexerhex->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerHex_QBaseAutoCompletionFillups(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerhex->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnAutoCompletionFillups(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerHex_AutoCompletionWordSeparators(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        QList<QString> _ret = vqscilexerhex->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerHex*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerHex_QBaseAutoCompletionWordSeparators(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerhex->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerHex*)self)->autoCompletionWordSeparators();
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
void QsciLexerHex_OnAutoCompletionWordSeparators(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHex_BlockEnd(const QsciLexerHex* self, int* style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return (const char*)vqscilexerhex->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHex_QBaseBlockEnd(const QsciLexerHex* self, int* style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BlockEnd_IsBase(true);
        return (const char*)vqscilexerhex->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBlockEnd(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHex_BlockLookback(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->blockLookback();
    } else {
        return ((VirtualQsciLexerHex*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerHex_QBaseBlockLookback(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BlockLookback_IsBase(true);
        return vqscilexerhex->blockLookback();
    } else {
        return ((VirtualQsciLexerHex*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBlockLookback(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHex_BlockStart(const QsciLexerHex* self, int* style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return (const char*)vqscilexerhex->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHex_QBaseBlockStart(const QsciLexerHex* self, int* style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BlockStart_IsBase(true);
        return (const char*)vqscilexerhex->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBlockStart(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHex_BlockStartKeyword(const QsciLexerHex* self, int* style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return (const char*)vqscilexerhex->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHex_QBaseBlockStartKeyword(const QsciLexerHex* self, int* style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerhex->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBlockStartKeyword(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHex_BraceStyle(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->braceStyle();
    } else {
        return ((VirtualQsciLexerHex*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerHex_QBaseBraceStyle(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BraceStyle_IsBase(true);
        return vqscilexerhex->braceStyle();
    } else {
        return ((VirtualQsciLexerHex*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBraceStyle(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHex_CaseSensitive(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->caseSensitive();
    } else {
        return ((VirtualQsciLexerHex*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerHex_QBaseCaseSensitive(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_CaseSensitive_IsBase(true);
        return vqscilexerhex->caseSensitive();
    } else {
        return ((VirtualQsciLexerHex*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnCaseSensitive(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHex_Color(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return new QColor(vqscilexerhex->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHex*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHex_QBaseColor(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Color_IsBase(true);
        return new QColor(vqscilexerhex->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHex*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnColor(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Color_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHex_EolFill(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerHex*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerHex_QBaseEolFill(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_EolFill_IsBase(true);
        return vqscilexerhex->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerHex*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnEolFill(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_EolFill_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerHex_Font(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return new QFont(vqscilexerhex->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerHex*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerHex_QBaseFont(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Font_IsBase(true);
        return new QFont(vqscilexerhex->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerHex*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnFont(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Font_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHex_IndentationGuideView(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->indentationGuideView();
    } else {
        return ((VirtualQsciLexerHex*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerHex_QBaseIndentationGuideView(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_IndentationGuideView_IsBase(true);
        return vqscilexerhex->indentationGuideView();
    } else {
        return ((VirtualQsciLexerHex*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnIndentationGuideView(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHex_Keywords(const QsciLexerHex* self, int set) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return (const char*)vqscilexerhex->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerHex_QBaseKeywords(const QsciLexerHex* self, int set) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Keywords_IsBase(true);
        return (const char*)vqscilexerhex->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnKeywords(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Keywords_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHex_DefaultStyle(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->defaultStyle();
    } else {
        return ((VirtualQsciLexerHex*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerHex_QBaseDefaultStyle(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultStyle_IsBase(true);
        return vqscilexerhex->defaultStyle();
    } else {
        return ((VirtualQsciLexerHex*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultStyle(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerHex_Description(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        QString _ret = vqscilexerhex->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerHex*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerHex_QBaseDescription(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Description_IsBase(true);
        QString _ret = vqscilexerhex->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerHex*)self)->description(static_cast<int>(style));
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
void QsciLexerHex_OnDescription(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Description_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHex_Paper(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return new QColor(vqscilexerhex->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHex*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHex_QBasePaper(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Paper_IsBase(true);
        return new QColor(vqscilexerhex->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHex*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnPaper(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Paper_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHex_DefaultColorWithStyle(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return new QColor(vqscilexerhex->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHex*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHex_QBaseDefaultColorWithStyle(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerhex->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHex*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultColorWithStyle(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHex_DefaultEolFill(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerHex*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerHex_QBaseDefaultEolFill(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultEolFill_IsBase(true);
        return vqscilexerhex->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerHex*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultEolFill(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerHex_DefaultFontWithStyle(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return new QFont(vqscilexerhex->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerHex*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerHex_QBaseDefaultFontWithStyle(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerhex->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerHex*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultFontWithStyle(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHex_DefaultPaperWithStyle(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return new QColor(vqscilexerhex->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHex*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHex_QBaseDefaultPaperWithStyle(const QsciLexerHex* self, int style) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerhex->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHex*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultPaperWithStyle(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_SetEditor(QsciLexerHex* self, QsciScintilla* editor) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setEditor(editor);
    } else {
        ((VirtualQsciLexerHex*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseSetEditor(QsciLexerHex* self, QsciScintilla* editor) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetEditor_IsBase(true);
        vqscilexerhex->setEditor(editor);
    } else {
        ((VirtualQsciLexerHex*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetEditor(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_RefreshProperties(QsciLexerHex* self) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->refreshProperties();
    } else {
        ((VirtualQsciLexerHex*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseRefreshProperties(QsciLexerHex* self) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_RefreshProperties_IsBase(true);
        vqscilexerhex->refreshProperties();
    } else {
        ((VirtualQsciLexerHex*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnRefreshProperties(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHex_StyleBitsNeeded(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerHex*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerHex_QBaseStyleBitsNeeded(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_StyleBitsNeeded_IsBase(true);
        return vqscilexerhex->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerHex*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnStyleBitsNeeded(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHex_WordCharacters(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return (const char*)vqscilexerhex->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerHex_QBaseWordCharacters(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_WordCharacters_IsBase(true);
        return (const char*)vqscilexerhex->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerHex*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnWordCharacters(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_SetAutoIndentStyle(QsciLexerHex* self, int autoindentstyle) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerHex*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseSetAutoIndentStyle(QsciLexerHex* self, int autoindentstyle) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetAutoIndentStyle_IsBase(true);
        vqscilexerhex->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerHex*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetAutoIndentStyle(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_SetColor(QsciLexerHex* self, const QColor* c, int style) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHex*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseSetColor(QsciLexerHex* self, const QColor* c, int style) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetColor_IsBase(true);
        vqscilexerhex->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHex*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetColor(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetColor_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_SetEolFill(QsciLexerHex* self, bool eoffill, int style) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHex*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseSetEolFill(QsciLexerHex* self, bool eoffill, int style) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetEolFill_IsBase(true);
        vqscilexerhex->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHex*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetEolFill(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_SetFont(QsciLexerHex* self, const QFont* f, int style) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHex*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseSetFont(QsciLexerHex* self, const QFont* f, int style) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetFont_IsBase(true);
        vqscilexerhex->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHex*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetFont(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetFont_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_SetPaper(QsciLexerHex* self, const QColor* c, int style) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHex*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseSetPaper(QsciLexerHex* self, const QColor* c, int style) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetPaper_IsBase(true);
        vqscilexerhex->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHex*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetPaper(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHex_ReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerHex*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerHex_QBaseReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_ReadProperties_IsBase(true);
        return vqscilexerhex->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerHex*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnReadProperties(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHex_WriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerHex*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerHex_QBaseWriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_WriteProperties_IsBase(true);
        return vqscilexerhex->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerHex*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnWriteProperties(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHex_Event(QsciLexerHex* self, QEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->event(event);
    } else {
        return ((VirtualQsciLexerHex*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerHex_QBaseEvent(QsciLexerHex* self, QEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Event_IsBase(true);
        return vqscilexerhex->event(event);
    } else {
        return ((VirtualQsciLexerHex*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnEvent(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Event_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHex_EventFilter(QsciLexerHex* self, QObject* watched, QEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerHex*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerHex_QBaseEventFilter(QsciLexerHex* self, QObject* watched, QEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_EventFilter_IsBase(true);
        return vqscilexerhex->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerHex*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnEventFilter(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_TimerEvent(QsciLexerHex* self, QTimerEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->timerEvent(event);
    } else {
        ((VirtualQsciLexerHex*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseTimerEvent(QsciLexerHex* self, QTimerEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_TimerEvent_IsBase(true);
        vqscilexerhex->timerEvent(event);
    } else {
        ((VirtualQsciLexerHex*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnTimerEvent(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_ChildEvent(QsciLexerHex* self, QChildEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->childEvent(event);
    } else {
        ((VirtualQsciLexerHex*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseChildEvent(QsciLexerHex* self, QChildEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_ChildEvent_IsBase(true);
        vqscilexerhex->childEvent(event);
    } else {
        ((VirtualQsciLexerHex*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnChildEvent(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_CustomEvent(QsciLexerHex* self, QEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->customEvent(event);
    } else {
        ((VirtualQsciLexerHex*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseCustomEvent(QsciLexerHex* self, QEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_CustomEvent_IsBase(true);
        vqscilexerhex->customEvent(event);
    } else {
        ((VirtualQsciLexerHex*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnCustomEvent(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_ConnectNotify(QsciLexerHex* self, const QMetaMethod* signal) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerHex*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseConnectNotify(QsciLexerHex* self, const QMetaMethod* signal) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_ConnectNotify_IsBase(true);
        vqscilexerhex->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerHex*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnConnectNotify(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHex_DisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerHex*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerHex_QBaseDisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DisconnectNotify_IsBase(true);
        vqscilexerhex->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerHex*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDisconnectNotify(QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerHex_TextAsBytes(const QsciLexerHex* self, const libqt_string text) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        QByteArray _qb = vqscilexerhex->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerHex*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerHex_QBaseTextAsBytes(const QsciLexerHex* self, const libqt_string text) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerhex->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerHex*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnTextAsBytes(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerHex_BytesAsText(const QsciLexerHex* self, const char* bytes, int size) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        QString _ret = vqscilexerhex->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerHex*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerHex_QBaseBytesAsText(const QsciLexerHex* self, const char* bytes, int size) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BytesAsText_IsBase(true);
        QString _ret = vqscilexerhex->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerHex*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerHex_OnBytesAsText(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerHex_Sender(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->sender();
    } else {
        return ((VirtualQsciLexerHex*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerHex_QBaseSender(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Sender_IsBase(true);
        return vqscilexerhex->sender();
    } else {
        return ((VirtualQsciLexerHex*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSender(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Sender_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHex_SenderSignalIndex(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerHex*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerHex_QBaseSenderSignalIndex(const QsciLexerHex* self) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SenderSignalIndex_IsBase(true);
        return vqscilexerhex->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerHex*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSenderSignalIndex(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHex_Receivers(const QsciLexerHex* self, const char* signal) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->receivers(signal);
    } else {
        return ((VirtualQsciLexerHex*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerHex_QBaseReceivers(const QsciLexerHex* self, const char* signal) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Receivers_IsBase(true);
        return vqscilexerhex->receivers(signal);
    } else {
        return ((VirtualQsciLexerHex*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnReceivers(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_Receivers_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHex_IsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        return vqscilexerhex->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerHex*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerHex_QBaseIsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_IsSignalConnected_IsBase(true);
        return vqscilexerhex->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerHex*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnIsSignalConnected(const QsciLexerHex* self, intptr_t slot) {
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex && vqscilexerhex->isVirtualQsciLexerHex) {
        vqscilexerhex->setQsciLexerHex_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerHex_Delete(QsciLexerHex* self) {
    delete self;
}
