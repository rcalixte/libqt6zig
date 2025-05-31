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
#include <qscilexertex.h>
#include "libqscilexertex.h"
#include "libqscilexertex.hxx"

QsciLexerTeX* QsciLexerTeX_new() {
    return new VirtualQsciLexerTeX();
}

QsciLexerTeX* QsciLexerTeX_new2(QObject* parent) {
    return new VirtualQsciLexerTeX(parent);
}

QMetaObject* QsciLexerTeX_MetaObject(const QsciLexerTeX* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerTeX_Metacast(QsciLexerTeX* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerTeX_Metacall(QsciLexerTeX* self, int param1, int param2, void** param3) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerTeX*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerTeX_OnMetacall(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Metacall_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerTeX_QBaseMetacall(QsciLexerTeX* self, int param1, int param2, void** param3) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Metacall_IsBase(true);
        return vqscilexertex->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerTeX*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerTeX_Tr(const char* s) {
    QString _ret = QsciLexerTeX::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerTeX_DefaultColor(const QsciLexerTeX* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

void QsciLexerTeX_SetFoldComments(QsciLexerTeX* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerTeX_FoldComments(const QsciLexerTeX* self) {
    return self->foldComments();
}

void QsciLexerTeX_SetFoldCompact(QsciLexerTeX* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerTeX_FoldCompact(const QsciLexerTeX* self) {
    return self->foldCompact();
}

void QsciLexerTeX_SetProcessComments(QsciLexerTeX* self, bool enable) {
    self->setProcessComments(enable);
}

bool QsciLexerTeX_ProcessComments(const QsciLexerTeX* self) {
    return self->processComments();
}

void QsciLexerTeX_SetProcessIf(QsciLexerTeX* self, bool enable) {
    self->setProcessIf(enable);
}

bool QsciLexerTeX_ProcessIf(const QsciLexerTeX* self) {
    return self->processIf();
}

libqt_string QsciLexerTeX_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerTeX::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerTeX_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerTeX::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
const char* QsciLexerTeX_Language(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return (const char*)vqscilexertex->language();
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerTeX_QBaseLanguage(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Language_IsBase(true);
        return (const char*)vqscilexertex->language();
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnLanguage(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Language_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTeX_Lexer(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return (const char*)vqscilexertex->lexer();
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerTeX_QBaseLexer(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Lexer_IsBase(true);
        return (const char*)vqscilexertex->lexer();
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnLexer(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Lexer_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTeX_LexerId(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->lexerId();
    } else {
        return ((VirtualQsciLexerTeX*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerTeX_QBaseLexerId(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_LexerId_IsBase(true);
        return vqscilexertex->lexerId();
    } else {
        return ((VirtualQsciLexerTeX*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnLexerId(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_LexerId_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTeX_AutoCompletionFillups(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return (const char*)vqscilexertex->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerTeX_QBaseAutoCompletionFillups(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexertex->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnAutoCompletionFillups(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerTeX_AutoCompletionWordSeparators(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        QStringList _ret = vqscilexertex->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = ((VirtualQsciLexerTeX*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciLexerTeX_QBaseAutoCompletionWordSeparators(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexertex->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = ((VirtualQsciLexerTeX*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnAutoCompletionWordSeparators(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTeX_BlockEnd(const QsciLexerTeX* self, int* style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return (const char*)vqscilexertex->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTeX_QBaseBlockEnd(const QsciLexerTeX* self, int* style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BlockEnd_IsBase(true);
        return (const char*)vqscilexertex->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBlockEnd(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTeX_BlockLookback(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->blockLookback();
    } else {
        return ((VirtualQsciLexerTeX*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerTeX_QBaseBlockLookback(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BlockLookback_IsBase(true);
        return vqscilexertex->blockLookback();
    } else {
        return ((VirtualQsciLexerTeX*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBlockLookback(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTeX_BlockStart(const QsciLexerTeX* self, int* style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return (const char*)vqscilexertex->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTeX_QBaseBlockStart(const QsciLexerTeX* self, int* style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BlockStart_IsBase(true);
        return (const char*)vqscilexertex->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBlockStart(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTeX_BlockStartKeyword(const QsciLexerTeX* self, int* style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return (const char*)vqscilexertex->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTeX_QBaseBlockStartKeyword(const QsciLexerTeX* self, int* style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexertex->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBlockStartKeyword(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTeX_BraceStyle(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->braceStyle();
    } else {
        return ((VirtualQsciLexerTeX*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerTeX_QBaseBraceStyle(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BraceStyle_IsBase(true);
        return vqscilexertex->braceStyle();
    } else {
        return ((VirtualQsciLexerTeX*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBraceStyle(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTeX_CaseSensitive(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->caseSensitive();
    } else {
        return ((VirtualQsciLexerTeX*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerTeX_QBaseCaseSensitive(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_CaseSensitive_IsBase(true);
        return vqscilexertex->caseSensitive();
    } else {
        return ((VirtualQsciLexerTeX*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnCaseSensitive(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTeX_Color(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return new QColor(vqscilexertex->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTeX*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTeX_QBaseColor(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Color_IsBase(true);
        return new QColor(vqscilexertex->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTeX*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnColor(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Color_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTeX_EolFill(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTeX*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerTeX_QBaseEolFill(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_EolFill_IsBase(true);
        return vqscilexertex->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTeX*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnEolFill(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_EolFill_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerTeX_Font(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return new QFont(vqscilexertex->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTeX*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerTeX_QBaseFont(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Font_IsBase(true);
        return new QFont(vqscilexertex->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTeX*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnFont(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Font_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTeX_IndentationGuideView(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->indentationGuideView();
    } else {
        return ((VirtualQsciLexerTeX*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerTeX_QBaseIndentationGuideView(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_IndentationGuideView_IsBase(true);
        return vqscilexertex->indentationGuideView();
    } else {
        return ((VirtualQsciLexerTeX*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnIndentationGuideView(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTeX_Keywords(const QsciLexerTeX* self, int set) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return (const char*)vqscilexertex->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerTeX_QBaseKeywords(const QsciLexerTeX* self, int set) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Keywords_IsBase(true);
        return (const char*)vqscilexertex->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnKeywords(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Keywords_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTeX_DefaultStyle(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->defaultStyle();
    } else {
        return ((VirtualQsciLexerTeX*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerTeX_QBaseDefaultStyle(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultStyle_IsBase(true);
        return vqscilexertex->defaultStyle();
    } else {
        return ((VirtualQsciLexerTeX*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultStyle(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerTeX_Description(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        QString _ret = vqscilexertex->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerTeX*)self)->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerTeX_QBaseDescription(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Description_IsBase(true);
        QString _ret = vqscilexertex->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerTeX*)self)->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDescription(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Description_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTeX_Paper(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return new QColor(vqscilexertex->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTeX*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTeX_QBasePaper(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Paper_IsBase(true);
        return new QColor(vqscilexertex->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTeX*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnPaper(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Paper_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTeX_DefaultColorWithStyle(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return new QColor(vqscilexertex->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTeX*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTeX_QBaseDefaultColorWithStyle(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexertex->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTeX*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultColorWithStyle(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTeX_DefaultEolFill(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTeX*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerTeX_QBaseDefaultEolFill(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultEolFill_IsBase(true);
        return vqscilexertex->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTeX*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultEolFill(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerTeX_DefaultFontWithStyle(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return new QFont(vqscilexertex->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTeX*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerTeX_QBaseDefaultFontWithStyle(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexertex->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTeX*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultFontWithStyle(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTeX_DefaultPaperWithStyle(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return new QColor(vqscilexertex->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTeX*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTeX_QBaseDefaultPaperWithStyle(const QsciLexerTeX* self, int style) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexertex->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTeX*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultPaperWithStyle(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_SetEditor(QsciLexerTeX* self, QsciScintilla* editor) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setEditor(editor);
    } else {
        ((VirtualQsciLexerTeX*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseSetEditor(QsciLexerTeX* self, QsciScintilla* editor) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetEditor_IsBase(true);
        vqscilexertex->setEditor(editor);
    } else {
        ((VirtualQsciLexerTeX*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetEditor(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_RefreshProperties(QsciLexerTeX* self) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->refreshProperties();
    } else {
        ((VirtualQsciLexerTeX*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseRefreshProperties(QsciLexerTeX* self) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_RefreshProperties_IsBase(true);
        vqscilexertex->refreshProperties();
    } else {
        ((VirtualQsciLexerTeX*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnRefreshProperties(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTeX_StyleBitsNeeded(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerTeX*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerTeX_QBaseStyleBitsNeeded(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_StyleBitsNeeded_IsBase(true);
        return vqscilexertex->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerTeX*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnStyleBitsNeeded(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTeX_WordCharacters(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return (const char*)vqscilexertex->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerTeX_QBaseWordCharacters(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_WordCharacters_IsBase(true);
        return (const char*)vqscilexertex->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerTeX*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnWordCharacters(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_SetAutoIndentStyle(QsciLexerTeX* self, int autoindentstyle) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerTeX*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseSetAutoIndentStyle(QsciLexerTeX* self, int autoindentstyle) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetAutoIndentStyle_IsBase(true);
        vqscilexertex->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerTeX*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetAutoIndentStyle(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_SetColor(QsciLexerTeX* self, const QColor* c, int style) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTeX*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseSetColor(QsciLexerTeX* self, const QColor* c, int style) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetColor_IsBase(true);
        vqscilexertex->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTeX*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetColor(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetColor_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_SetEolFill(QsciLexerTeX* self, bool eoffill, int style) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTeX*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseSetEolFill(QsciLexerTeX* self, bool eoffill, int style) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetEolFill_IsBase(true);
        vqscilexertex->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTeX*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetEolFill(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_SetFont(QsciLexerTeX* self, const QFont* f, int style) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTeX*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseSetFont(QsciLexerTeX* self, const QFont* f, int style) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetFont_IsBase(true);
        vqscilexertex->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTeX*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetFont(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetFont_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_SetPaper(QsciLexerTeX* self, const QColor* c, int style) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTeX*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseSetPaper(QsciLexerTeX* self, const QColor* c, int style) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetPaper_IsBase(true);
        vqscilexertex->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTeX*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetPaper(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTeX_ReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTeX*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerTeX_QBaseReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_ReadProperties_IsBase(true);
        return vqscilexertex->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTeX*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnReadProperties(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTeX_WriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTeX*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerTeX_QBaseWriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_WriteProperties_IsBase(true);
        return vqscilexertex->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTeX*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnWriteProperties(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTeX_Event(QsciLexerTeX* self, QEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->event(event);
    } else {
        return ((VirtualQsciLexerTeX*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerTeX_QBaseEvent(QsciLexerTeX* self, QEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Event_IsBase(true);
        return vqscilexertex->event(event);
    } else {
        return ((VirtualQsciLexerTeX*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnEvent(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Event_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTeX_EventFilter(QsciLexerTeX* self, QObject* watched, QEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerTeX*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerTeX_QBaseEventFilter(QsciLexerTeX* self, QObject* watched, QEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_EventFilter_IsBase(true);
        return vqscilexertex->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerTeX*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnEventFilter(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_TimerEvent(QsciLexerTeX* self, QTimerEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->timerEvent(event);
    } else {
        ((VirtualQsciLexerTeX*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseTimerEvent(QsciLexerTeX* self, QTimerEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_TimerEvent_IsBase(true);
        vqscilexertex->timerEvent(event);
    } else {
        ((VirtualQsciLexerTeX*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnTimerEvent(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_ChildEvent(QsciLexerTeX* self, QChildEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->childEvent(event);
    } else {
        ((VirtualQsciLexerTeX*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseChildEvent(QsciLexerTeX* self, QChildEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_ChildEvent_IsBase(true);
        vqscilexertex->childEvent(event);
    } else {
        ((VirtualQsciLexerTeX*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnChildEvent(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_CustomEvent(QsciLexerTeX* self, QEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->customEvent(event);
    } else {
        ((VirtualQsciLexerTeX*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseCustomEvent(QsciLexerTeX* self, QEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_CustomEvent_IsBase(true);
        vqscilexertex->customEvent(event);
    } else {
        ((VirtualQsciLexerTeX*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnCustomEvent(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_ConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerTeX*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_ConnectNotify_IsBase(true);
        vqscilexertex->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerTeX*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnConnectNotify(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTeX_DisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerTeX*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerTeX_QBaseDisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DisconnectNotify_IsBase(true);
        vqscilexertex->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerTeX*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDisconnectNotify(QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerTeX_Sender(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->sender();
    } else {
        return ((VirtualQsciLexerTeX*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerTeX_QBaseSender(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Sender_IsBase(true);
        return vqscilexertex->sender();
    } else {
        return ((VirtualQsciLexerTeX*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSender(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Sender_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTeX_SenderSignalIndex(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerTeX*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerTeX_QBaseSenderSignalIndex(const QsciLexerTeX* self) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SenderSignalIndex_IsBase(true);
        return vqscilexertex->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerTeX*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSenderSignalIndex(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTeX_Receivers(const QsciLexerTeX* self, const char* signal) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->receivers(signal);
    } else {
        return ((VirtualQsciLexerTeX*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerTeX_QBaseReceivers(const QsciLexerTeX* self, const char* signal) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Receivers_IsBase(true);
        return vqscilexertex->receivers(signal);
    } else {
        return ((VirtualQsciLexerTeX*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnReceivers(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_Receivers_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTeX_IsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        return vqscilexertex->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerTeX*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerTeX_QBaseIsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_IsSignalConnected_IsBase(true);
        return vqscilexertex->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerTeX*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnIsSignalConnected(const QsciLexerTeX* self, intptr_t slot) {
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex && vqscilexertex->isVirtualQsciLexerTeX) {
        vqscilexertex->setQsciLexerTeX_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerTeX_Delete(QsciLexerTeX* self) {
    delete self;
}
