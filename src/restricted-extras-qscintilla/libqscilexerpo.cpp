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
#include <qscilexerpo.h>
#include "libqscilexerpo.h"
#include "libqscilexerpo.hxx"

QsciLexerPO* QsciLexerPO_new() {
    return new VirtualQsciLexerPO();
}

QsciLexerPO* QsciLexerPO_new2(QObject* parent) {
    return new VirtualQsciLexerPO(parent);
}

QMetaObject* QsciLexerPO_MetaObject(const QsciLexerPO* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPO_Metacast(QsciLexerPO* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPO_Metacall(QsciLexerPO* self, int param1, int param2, void** param3) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPO*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPO_OnMetacall(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPO_QBaseMetacall(QsciLexerPO* self, int param1, int param2, void** param3) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Metacall_IsBase(true);
        return vqscilexerpo->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPO*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPO_Tr(const char* s) {
    QString _ret = QsciLexerPO::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerPO_DefaultColor(const QsciLexerPO* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPO_DefaultFont(const QsciLexerPO* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

bool QsciLexerPO_FoldComments(const QsciLexerPO* self) {
    return self->foldComments();
}

bool QsciLexerPO_FoldCompact(const QsciLexerPO* self) {
    return self->foldCompact();
}

libqt_string QsciLexerPO_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPO::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPO_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerPO::tr(s, c, static_cast<int>(n));
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
void QsciLexerPO_SetFoldComments(QsciLexerPO* self, bool fold) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerPO*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseSetFoldComments(QsciLexerPO* self, bool fold) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetFoldComments_IsBase(true);
        vqscilexerpo->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerPO*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetFoldComments(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_SetFoldCompact(QsciLexerPO* self, bool fold) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerPO*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseSetFoldCompact(QsciLexerPO* self, bool fold) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetFoldCompact_IsBase(true);
        vqscilexerpo->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerPO*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetFoldCompact(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPO_Language(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return (const char*)vqscilexerpo->language();
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerPO_QBaseLanguage(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Language_IsBase(true);
        return (const char*)vqscilexerpo->language();
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnLanguage(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Language_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPO_Lexer(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return (const char*)vqscilexerpo->lexer();
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerPO_QBaseLexer(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Lexer_IsBase(true);
        return (const char*)vqscilexerpo->lexer();
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnLexer(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Lexer_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPO_LexerId(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->lexerId();
    } else {
        return ((VirtualQsciLexerPO*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPO_QBaseLexerId(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_LexerId_IsBase(true);
        return vqscilexerpo->lexerId();
    } else {
        return ((VirtualQsciLexerPO*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnLexerId(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPO_AutoCompletionFillups(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return (const char*)vqscilexerpo->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPO_QBaseAutoCompletionFillups(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerpo->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnAutoCompletionFillups(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPO_AutoCompletionWordSeparators(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        QStringList _ret = vqscilexerpo->autoCompletionWordSeparators();
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
        QStringList _ret = ((VirtualQsciLexerPO*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerPO_QBaseAutoCompletionWordSeparators(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerpo->autoCompletionWordSeparators();
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
        QStringList _ret = ((VirtualQsciLexerPO*)self)->autoCompletionWordSeparators();
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
void QsciLexerPO_OnAutoCompletionWordSeparators(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPO_BlockEnd(const QsciLexerPO* self, int* style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return (const char*)vqscilexerpo->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPO_QBaseBlockEnd(const QsciLexerPO* self, int* style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BlockEnd_IsBase(true);
        return (const char*)vqscilexerpo->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBlockEnd(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPO_BlockLookback(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->blockLookback();
    } else {
        return ((VirtualQsciLexerPO*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerPO_QBaseBlockLookback(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BlockLookback_IsBase(true);
        return vqscilexerpo->blockLookback();
    } else {
        return ((VirtualQsciLexerPO*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBlockLookback(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPO_BlockStart(const QsciLexerPO* self, int* style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return (const char*)vqscilexerpo->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPO_QBaseBlockStart(const QsciLexerPO* self, int* style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BlockStart_IsBase(true);
        return (const char*)vqscilexerpo->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBlockStart(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPO_BlockStartKeyword(const QsciLexerPO* self, int* style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return (const char*)vqscilexerpo->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPO_QBaseBlockStartKeyword(const QsciLexerPO* self, int* style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerpo->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBlockStartKeyword(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPO_BraceStyle(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->braceStyle();
    } else {
        return ((VirtualQsciLexerPO*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerPO_QBaseBraceStyle(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BraceStyle_IsBase(true);
        return vqscilexerpo->braceStyle();
    } else {
        return ((VirtualQsciLexerPO*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnBraceStyle(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPO_CaseSensitive(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->caseSensitive();
    } else {
        return ((VirtualQsciLexerPO*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPO_QBaseCaseSensitive(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_CaseSensitive_IsBase(true);
        return vqscilexerpo->caseSensitive();
    } else {
        return ((VirtualQsciLexerPO*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnCaseSensitive(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPO_Color(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return new QColor(vqscilexerpo->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPO*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPO_QBaseColor(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Color_IsBase(true);
        return new QColor(vqscilexerpo->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPO*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnColor(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Color_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPO_EolFill(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPO*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPO_QBaseEolFill(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_EolFill_IsBase(true);
        return vqscilexerpo->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPO*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnEolFill(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPO_Font(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return new QFont(vqscilexerpo->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPO*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPO_QBaseFont(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Font_IsBase(true);
        return new QFont(vqscilexerpo->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPO*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnFont(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Font_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPO_IndentationGuideView(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPO*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerPO_QBaseIndentationGuideView(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_IndentationGuideView_IsBase(true);
        return vqscilexerpo->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPO*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnIndentationGuideView(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPO_Keywords(const QsciLexerPO* self, int set) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return (const char*)vqscilexerpo->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerPO_QBaseKeywords(const QsciLexerPO* self, int set) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Keywords_IsBase(true);
        return (const char*)vqscilexerpo->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnKeywords(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Keywords_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPO_DefaultStyle(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->defaultStyle();
    } else {
        return ((VirtualQsciLexerPO*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPO_QBaseDefaultStyle(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultStyle_IsBase(true);
        return vqscilexerpo->defaultStyle();
    } else {
        return ((VirtualQsciLexerPO*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultStyle(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPO_Description(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        QString _ret = vqscilexerpo->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPO*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerPO_QBaseDescription(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Description_IsBase(true);
        QString _ret = vqscilexerpo->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPO*)self)->description(static_cast<int>(style));
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
void QsciLexerPO_OnDescription(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Description_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPO_Paper(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return new QColor(vqscilexerpo->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPO*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPO_QBasePaper(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Paper_IsBase(true);
        return new QColor(vqscilexerpo->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPO*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnPaper(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Paper_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPO_DefaultColorWithStyle(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return new QColor(vqscilexerpo->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPO*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPO_QBaseDefaultColorWithStyle(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerpo->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPO*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultColorWithStyle(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPO_DefaultEolFill(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPO*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPO_QBaseDefaultEolFill(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultEolFill_IsBase(true);
        return vqscilexerpo->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPO*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultEolFill(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPO_DefaultFontWithStyle(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return new QFont(vqscilexerpo->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPO*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPO_QBaseDefaultFontWithStyle(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerpo->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPO*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultFontWithStyle(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPO_DefaultPaperWithStyle(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return new QColor(vqscilexerpo->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPO*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPO_QBaseDefaultPaperWithStyle(const QsciLexerPO* self, int style) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerpo->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPO*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDefaultPaperWithStyle(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_SetEditor(QsciLexerPO* self, QsciScintilla* editor) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setEditor(editor);
    } else {
        ((VirtualQsciLexerPO*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseSetEditor(QsciLexerPO* self, QsciScintilla* editor) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetEditor_IsBase(true);
        vqscilexerpo->setEditor(editor);
    } else {
        ((VirtualQsciLexerPO*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetEditor(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_RefreshProperties(QsciLexerPO* self) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->refreshProperties();
    } else {
        ((VirtualQsciLexerPO*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseRefreshProperties(QsciLexerPO* self) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_RefreshProperties_IsBase(true);
        vqscilexerpo->refreshProperties();
    } else {
        ((VirtualQsciLexerPO*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnRefreshProperties(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPO_StyleBitsNeeded(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPO*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPO_QBaseStyleBitsNeeded(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_StyleBitsNeeded_IsBase(true);
        return vqscilexerpo->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPO*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnStyleBitsNeeded(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPO_WordCharacters(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return (const char*)vqscilexerpo->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPO_QBaseWordCharacters(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_WordCharacters_IsBase(true);
        return (const char*)vqscilexerpo->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPO*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnWordCharacters(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_SetAutoIndentStyle(QsciLexerPO* self, int autoindentstyle) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPO*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseSetAutoIndentStyle(QsciLexerPO* self, int autoindentstyle) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetAutoIndentStyle_IsBase(true);
        vqscilexerpo->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPO*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetAutoIndentStyle(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_SetColor(QsciLexerPO* self, const QColor* c, int style) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPO*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseSetColor(QsciLexerPO* self, const QColor* c, int style) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetColor_IsBase(true);
        vqscilexerpo->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPO*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetColor(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_SetEolFill(QsciLexerPO* self, bool eoffill, int style) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPO*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseSetEolFill(QsciLexerPO* self, bool eoffill, int style) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetEolFill_IsBase(true);
        vqscilexerpo->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPO*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetEolFill(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_SetFont(QsciLexerPO* self, const QFont* f, int style) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPO*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseSetFont(QsciLexerPO* self, const QFont* f, int style) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetFont_IsBase(true);
        vqscilexerpo->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPO*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetFont(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_SetPaper(QsciLexerPO* self, const QColor* c, int style) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPO*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseSetPaper(QsciLexerPO* self, const QColor* c, int style) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetPaper_IsBase(true);
        vqscilexerpo->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPO*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSetPaper(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPO_ReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPO*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPO_QBaseReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_ReadProperties_IsBase(true);
        return vqscilexerpo->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPO*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnReadProperties(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPO_WriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPO*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPO_QBaseWriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_WriteProperties_IsBase(true);
        return vqscilexerpo->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPO*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnWriteProperties(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPO_Event(QsciLexerPO* self, QEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->event(event);
    } else {
        return ((VirtualQsciLexerPO*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPO_QBaseEvent(QsciLexerPO* self, QEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Event_IsBase(true);
        return vqscilexerpo->event(event);
    } else {
        return ((VirtualQsciLexerPO*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnEvent(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Event_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPO_EventFilter(QsciLexerPO* self, QObject* watched, QEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPO*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPO_QBaseEventFilter(QsciLexerPO* self, QObject* watched, QEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_EventFilter_IsBase(true);
        return vqscilexerpo->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPO*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnEventFilter(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_TimerEvent(QsciLexerPO* self, QTimerEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->timerEvent(event);
    } else {
        ((VirtualQsciLexerPO*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseTimerEvent(QsciLexerPO* self, QTimerEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_TimerEvent_IsBase(true);
        vqscilexerpo->timerEvent(event);
    } else {
        ((VirtualQsciLexerPO*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnTimerEvent(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_ChildEvent(QsciLexerPO* self, QChildEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->childEvent(event);
    } else {
        ((VirtualQsciLexerPO*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseChildEvent(QsciLexerPO* self, QChildEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_ChildEvent_IsBase(true);
        vqscilexerpo->childEvent(event);
    } else {
        ((VirtualQsciLexerPO*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnChildEvent(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_CustomEvent(QsciLexerPO* self, QEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->customEvent(event);
    } else {
        ((VirtualQsciLexerPO*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseCustomEvent(QsciLexerPO* self, QEvent* event) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_CustomEvent_IsBase(true);
        vqscilexerpo->customEvent(event);
    } else {
        ((VirtualQsciLexerPO*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnCustomEvent(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_ConnectNotify(QsciLexerPO* self, const QMetaMethod* signal) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPO*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseConnectNotify(QsciLexerPO* self, const QMetaMethod* signal) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_ConnectNotify_IsBase(true);
        vqscilexerpo->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPO*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnConnectNotify(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPO_DisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPO*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPO_QBaseDisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DisconnectNotify_IsBase(true);
        vqscilexerpo->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPO*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnDisconnectNotify(QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = dynamic_cast<VirtualQsciLexerPO*>(self);
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPO_Sender(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->sender();
    } else {
        return ((VirtualQsciLexerPO*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPO_QBaseSender(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Sender_IsBase(true);
        return vqscilexerpo->sender();
    } else {
        return ((VirtualQsciLexerPO*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSender(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Sender_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPO_SenderSignalIndex(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPO*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPO_QBaseSenderSignalIndex(const QsciLexerPO* self) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SenderSignalIndex_IsBase(true);
        return vqscilexerpo->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPO*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnSenderSignalIndex(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPO_Receivers(const QsciLexerPO* self, const char* signal) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->receivers(signal);
    } else {
        return ((VirtualQsciLexerPO*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPO_QBaseReceivers(const QsciLexerPO* self, const char* signal) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Receivers_IsBase(true);
        return vqscilexerpo->receivers(signal);
    } else {
        return ((VirtualQsciLexerPO*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnReceivers(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPO_IsSignalConnected(const QsciLexerPO* self, const QMetaMethod* signal) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        return vqscilexerpo->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPO*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPO_QBaseIsSignalConnected(const QsciLexerPO* self, const QMetaMethod* signal) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_IsSignalConnected_IsBase(true);
        return vqscilexerpo->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPO*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPO_OnIsSignalConnected(const QsciLexerPO* self, intptr_t slot) {
    auto* vqscilexerpo = const_cast<VirtualQsciLexerPO*>(dynamic_cast<const VirtualQsciLexerPO*>(self));
    if (vqscilexerpo && vqscilexerpo->isVirtualQsciLexerPO) {
        vqscilexerpo->setQsciLexerPO_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPO::QsciLexerPO_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPO_Delete(QsciLexerPO* self) {
    delete self;
}
