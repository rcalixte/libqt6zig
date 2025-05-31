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
#include <qscilexeravs.h>
#include "libqscilexeravs.h"
#include "libqscilexeravs.hxx"

QsciLexerAVS* QsciLexerAVS_new() {
    return new VirtualQsciLexerAVS();
}

QsciLexerAVS* QsciLexerAVS_new2(QObject* parent) {
    return new VirtualQsciLexerAVS(parent);
}

QMetaObject* QsciLexerAVS_MetaObject(const QsciLexerAVS* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerAVS_Metacast(QsciLexerAVS* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerAVS_Metacall(QsciLexerAVS* self, int param1, int param2, void** param3) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerAVS*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerAVS_OnMetacall(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Metacall_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerAVS_QBaseMetacall(QsciLexerAVS* self, int param1, int param2, void** param3) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Metacall_IsBase(true);
        return vqscilexeravs->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerAVS*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerAVS_Tr(const char* s) {
    QString _ret = QsciLexerAVS::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerAVS_DefaultColor(const QsciLexerAVS* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerAVS_DefaultFont(const QsciLexerAVS* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

bool QsciLexerAVS_FoldComments(const QsciLexerAVS* self) {
    return self->foldComments();
}

bool QsciLexerAVS_FoldCompact(const QsciLexerAVS* self) {
    return self->foldCompact();
}

libqt_string QsciLexerAVS_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerAVS::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerAVS_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerAVS::tr(s, c, static_cast<int>(n));
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
void QsciLexerAVS_SetFoldComments(QsciLexerAVS* self, bool fold) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerAVS*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseSetFoldComments(QsciLexerAVS* self, bool fold) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetFoldComments_IsBase(true);
        vqscilexeravs->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerAVS*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetFoldComments(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_SetFoldCompact(QsciLexerAVS* self, bool fold) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerAVS*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseSetFoldCompact(QsciLexerAVS* self, bool fold) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetFoldCompact_IsBase(true);
        vqscilexeravs->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerAVS*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetFoldCompact(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAVS_Language(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return (const char*)vqscilexeravs->language();
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerAVS_QBaseLanguage(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Language_IsBase(true);
        return (const char*)vqscilexeravs->language();
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnLanguage(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Language_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAVS_Lexer(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return (const char*)vqscilexeravs->lexer();
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerAVS_QBaseLexer(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Lexer_IsBase(true);
        return (const char*)vqscilexeravs->lexer();
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnLexer(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Lexer_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAVS_LexerId(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->lexerId();
    } else {
        return ((VirtualQsciLexerAVS*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerAVS_QBaseLexerId(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_LexerId_IsBase(true);
        return vqscilexeravs->lexerId();
    } else {
        return ((VirtualQsciLexerAVS*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnLexerId(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_LexerId_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAVS_AutoCompletionFillups(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return (const char*)vqscilexeravs->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerAVS_QBaseAutoCompletionFillups(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexeravs->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnAutoCompletionFillups(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerAVS_AutoCompletionWordSeparators(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        QStringList _ret = vqscilexeravs->autoCompletionWordSeparators();
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
        QStringList _ret = ((VirtualQsciLexerAVS*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerAVS_QBaseAutoCompletionWordSeparators(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexeravs->autoCompletionWordSeparators();
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
        QStringList _ret = ((VirtualQsciLexerAVS*)self)->autoCompletionWordSeparators();
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
void QsciLexerAVS_OnAutoCompletionWordSeparators(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAVS_BlockEnd(const QsciLexerAVS* self, int* style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return (const char*)vqscilexeravs->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerAVS_QBaseBlockEnd(const QsciLexerAVS* self, int* style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BlockEnd_IsBase(true);
        return (const char*)vqscilexeravs->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBlockEnd(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAVS_BlockLookback(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->blockLookback();
    } else {
        return ((VirtualQsciLexerAVS*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerAVS_QBaseBlockLookback(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BlockLookback_IsBase(true);
        return vqscilexeravs->blockLookback();
    } else {
        return ((VirtualQsciLexerAVS*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBlockLookback(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAVS_BlockStart(const QsciLexerAVS* self, int* style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return (const char*)vqscilexeravs->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerAVS_QBaseBlockStart(const QsciLexerAVS* self, int* style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BlockStart_IsBase(true);
        return (const char*)vqscilexeravs->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBlockStart(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAVS_BlockStartKeyword(const QsciLexerAVS* self, int* style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return (const char*)vqscilexeravs->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerAVS_QBaseBlockStartKeyword(const QsciLexerAVS* self, int* style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexeravs->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBlockStartKeyword(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAVS_BraceStyle(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->braceStyle();
    } else {
        return ((VirtualQsciLexerAVS*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerAVS_QBaseBraceStyle(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BraceStyle_IsBase(true);
        return vqscilexeravs->braceStyle();
    } else {
        return ((VirtualQsciLexerAVS*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnBraceStyle(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAVS_CaseSensitive(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->caseSensitive();
    } else {
        return ((VirtualQsciLexerAVS*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerAVS_QBaseCaseSensitive(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_CaseSensitive_IsBase(true);
        return vqscilexeravs->caseSensitive();
    } else {
        return ((VirtualQsciLexerAVS*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnCaseSensitive(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerAVS_Color(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return new QColor(vqscilexeravs->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAVS*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerAVS_QBaseColor(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Color_IsBase(true);
        return new QColor(vqscilexeravs->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAVS*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnColor(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Color_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAVS_EolFill(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerAVS*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerAVS_QBaseEolFill(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_EolFill_IsBase(true);
        return vqscilexeravs->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerAVS*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnEolFill(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_EolFill_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerAVS_Font(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return new QFont(vqscilexeravs->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerAVS*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerAVS_QBaseFont(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Font_IsBase(true);
        return new QFont(vqscilexeravs->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerAVS*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnFont(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Font_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAVS_IndentationGuideView(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->indentationGuideView();
    } else {
        return ((VirtualQsciLexerAVS*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerAVS_QBaseIndentationGuideView(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_IndentationGuideView_IsBase(true);
        return vqscilexeravs->indentationGuideView();
    } else {
        return ((VirtualQsciLexerAVS*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnIndentationGuideView(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAVS_Keywords(const QsciLexerAVS* self, int set) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return (const char*)vqscilexeravs->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerAVS_QBaseKeywords(const QsciLexerAVS* self, int set) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Keywords_IsBase(true);
        return (const char*)vqscilexeravs->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnKeywords(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Keywords_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAVS_DefaultStyle(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->defaultStyle();
    } else {
        return ((VirtualQsciLexerAVS*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerAVS_QBaseDefaultStyle(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultStyle_IsBase(true);
        return vqscilexeravs->defaultStyle();
    } else {
        return ((VirtualQsciLexerAVS*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultStyle(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerAVS_Description(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        QString _ret = vqscilexeravs->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerAVS*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerAVS_QBaseDescription(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Description_IsBase(true);
        QString _ret = vqscilexeravs->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerAVS*)self)->description(static_cast<int>(style));
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
void QsciLexerAVS_OnDescription(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Description_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerAVS_Paper(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return new QColor(vqscilexeravs->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAVS*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerAVS_QBasePaper(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Paper_IsBase(true);
        return new QColor(vqscilexeravs->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAVS*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnPaper(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Paper_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerAVS_DefaultColorWithStyle(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return new QColor(vqscilexeravs->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAVS*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerAVS_QBaseDefaultColorWithStyle(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexeravs->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAVS*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultColorWithStyle(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAVS_DefaultEolFill(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerAVS*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerAVS_QBaseDefaultEolFill(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultEolFill_IsBase(true);
        return vqscilexeravs->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerAVS*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultEolFill(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerAVS_DefaultFontWithStyle(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return new QFont(vqscilexeravs->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerAVS*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerAVS_QBaseDefaultFontWithStyle(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexeravs->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerAVS*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultFontWithStyle(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerAVS_DefaultPaperWithStyle(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return new QColor(vqscilexeravs->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAVS*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerAVS_QBaseDefaultPaperWithStyle(const QsciLexerAVS* self, int style) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexeravs->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAVS*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDefaultPaperWithStyle(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_SetEditor(QsciLexerAVS* self, QsciScintilla* editor) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setEditor(editor);
    } else {
        ((VirtualQsciLexerAVS*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseSetEditor(QsciLexerAVS* self, QsciScintilla* editor) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetEditor_IsBase(true);
        vqscilexeravs->setEditor(editor);
    } else {
        ((VirtualQsciLexerAVS*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetEditor(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_RefreshProperties(QsciLexerAVS* self) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->refreshProperties();
    } else {
        ((VirtualQsciLexerAVS*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseRefreshProperties(QsciLexerAVS* self) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_RefreshProperties_IsBase(true);
        vqscilexeravs->refreshProperties();
    } else {
        ((VirtualQsciLexerAVS*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnRefreshProperties(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAVS_StyleBitsNeeded(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerAVS*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerAVS_QBaseStyleBitsNeeded(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_StyleBitsNeeded_IsBase(true);
        return vqscilexeravs->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerAVS*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnStyleBitsNeeded(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAVS_WordCharacters(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return (const char*)vqscilexeravs->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerAVS_QBaseWordCharacters(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_WordCharacters_IsBase(true);
        return (const char*)vqscilexeravs->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerAVS*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnWordCharacters(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_SetAutoIndentStyle(QsciLexerAVS* self, int autoindentstyle) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerAVS*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseSetAutoIndentStyle(QsciLexerAVS* self, int autoindentstyle) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetAutoIndentStyle_IsBase(true);
        vqscilexeravs->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerAVS*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetAutoIndentStyle(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_SetColor(QsciLexerAVS* self, const QColor* c, int style) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAVS*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseSetColor(QsciLexerAVS* self, const QColor* c, int style) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetColor_IsBase(true);
        vqscilexeravs->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAVS*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetColor(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetColor_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_SetEolFill(QsciLexerAVS* self, bool eoffill, int style) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAVS*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseSetEolFill(QsciLexerAVS* self, bool eoffill, int style) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetEolFill_IsBase(true);
        vqscilexeravs->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAVS*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetEolFill(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_SetFont(QsciLexerAVS* self, const QFont* f, int style) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAVS*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseSetFont(QsciLexerAVS* self, const QFont* f, int style) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetFont_IsBase(true);
        vqscilexeravs->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAVS*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetFont(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetFont_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_SetPaper(QsciLexerAVS* self, const QColor* c, int style) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAVS*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseSetPaper(QsciLexerAVS* self, const QColor* c, int style) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetPaper_IsBase(true);
        vqscilexeravs->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAVS*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSetPaper(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAVS_ReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerAVS*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerAVS_QBaseReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_ReadProperties_IsBase(true);
        return vqscilexeravs->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerAVS*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnReadProperties(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAVS_WriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerAVS*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerAVS_QBaseWriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_WriteProperties_IsBase(true);
        return vqscilexeravs->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerAVS*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnWriteProperties(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAVS_Event(QsciLexerAVS* self, QEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->event(event);
    } else {
        return ((VirtualQsciLexerAVS*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerAVS_QBaseEvent(QsciLexerAVS* self, QEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Event_IsBase(true);
        return vqscilexeravs->event(event);
    } else {
        return ((VirtualQsciLexerAVS*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnEvent(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Event_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAVS_EventFilter(QsciLexerAVS* self, QObject* watched, QEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerAVS*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerAVS_QBaseEventFilter(QsciLexerAVS* self, QObject* watched, QEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_EventFilter_IsBase(true);
        return vqscilexeravs->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerAVS*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnEventFilter(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_TimerEvent(QsciLexerAVS* self, QTimerEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->timerEvent(event);
    } else {
        ((VirtualQsciLexerAVS*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseTimerEvent(QsciLexerAVS* self, QTimerEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_TimerEvent_IsBase(true);
        vqscilexeravs->timerEvent(event);
    } else {
        ((VirtualQsciLexerAVS*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnTimerEvent(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_ChildEvent(QsciLexerAVS* self, QChildEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->childEvent(event);
    } else {
        ((VirtualQsciLexerAVS*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseChildEvent(QsciLexerAVS* self, QChildEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_ChildEvent_IsBase(true);
        vqscilexeravs->childEvent(event);
    } else {
        ((VirtualQsciLexerAVS*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnChildEvent(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_CustomEvent(QsciLexerAVS* self, QEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->customEvent(event);
    } else {
        ((VirtualQsciLexerAVS*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseCustomEvent(QsciLexerAVS* self, QEvent* event) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_CustomEvent_IsBase(true);
        vqscilexeravs->customEvent(event);
    } else {
        ((VirtualQsciLexerAVS*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnCustomEvent(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_ConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerAVS*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_ConnectNotify_IsBase(true);
        vqscilexeravs->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerAVS*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnConnectNotify(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAVS_DisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerAVS*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerAVS_QBaseDisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DisconnectNotify_IsBase(true);
        vqscilexeravs->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerAVS*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnDisconnectNotify(QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = dynamic_cast<VirtualQsciLexerAVS*>(self);
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerAVS_Sender(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->sender();
    } else {
        return ((VirtualQsciLexerAVS*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerAVS_QBaseSender(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Sender_IsBase(true);
        return vqscilexeravs->sender();
    } else {
        return ((VirtualQsciLexerAVS*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSender(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Sender_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAVS_SenderSignalIndex(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerAVS*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerAVS_QBaseSenderSignalIndex(const QsciLexerAVS* self) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SenderSignalIndex_IsBase(true);
        return vqscilexeravs->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerAVS*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnSenderSignalIndex(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAVS_Receivers(const QsciLexerAVS* self, const char* signal) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->receivers(signal);
    } else {
        return ((VirtualQsciLexerAVS*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerAVS_QBaseReceivers(const QsciLexerAVS* self, const char* signal) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Receivers_IsBase(true);
        return vqscilexeravs->receivers(signal);
    } else {
        return ((VirtualQsciLexerAVS*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnReceivers(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_Receivers_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAVS_IsSignalConnected(const QsciLexerAVS* self, const QMetaMethod* signal) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        return vqscilexeravs->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerAVS*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerAVS_QBaseIsSignalConnected(const QsciLexerAVS* self, const QMetaMethod* signal) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_IsSignalConnected_IsBase(true);
        return vqscilexeravs->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerAVS*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAVS_OnIsSignalConnected(const QsciLexerAVS* self, intptr_t slot) {
    auto* vqscilexeravs = const_cast<VirtualQsciLexerAVS*>(dynamic_cast<const VirtualQsciLexerAVS*>(self));
    if (vqscilexeravs && vqscilexeravs->isVirtualQsciLexerAVS) {
        vqscilexeravs->setQsciLexerAVS_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerAVS::QsciLexerAVS_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerAVS_Delete(QsciLexerAVS* self) {
    delete self;
}
