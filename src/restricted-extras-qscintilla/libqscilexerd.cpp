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
#include <qscilexerd.h>
#include "libqscilexerd.h"
#include "libqscilexerd.hxx"

QsciLexerD* QsciLexerD_new() {
    return new VirtualQsciLexerD();
}

QsciLexerD* QsciLexerD_new2(QObject* parent) {
    return new VirtualQsciLexerD(parent);
}

QMetaObject* QsciLexerD_MetaObject(const QsciLexerD* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerD_Metacast(QsciLexerD* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerD_Metacall(QsciLexerD* self, int param1, int param2, void** param3) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerD*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerD_OnMetacall(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Metacall_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerD_QBaseMetacall(QsciLexerD* self, int param1, int param2, void** param3) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Metacall_IsBase(true);
        return vqscilexerd->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerD*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerD_Tr(const char* s) {
    QString _ret = QsciLexerD::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerD_DefaultColor(const QsciLexerD* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerD_DefaultFont(const QsciLexerD* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerD_DefaultPaper(const QsciLexerD* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerD_FoldAtElse(const QsciLexerD* self) {
    return self->foldAtElse();
}

bool QsciLexerD_FoldComments(const QsciLexerD* self) {
    return self->foldComments();
}

bool QsciLexerD_FoldCompact(const QsciLexerD* self) {
    return self->foldCompact();
}

libqt_string QsciLexerD_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerD::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerD_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerD::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

const char* QsciLexerD_BlockEnd1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStart1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStartKeyword1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerD_SetFoldAtElse(QsciLexerD* self, bool fold) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerD*)self)->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetFoldAtElse(QsciLexerD* self, bool fold) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetFoldAtElse_IsBase(true);
        vqscilexerd->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerD*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldAtElse(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetFoldComments(QsciLexerD* self, bool fold) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerD*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetFoldComments(QsciLexerD* self, bool fold) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetFoldComments_IsBase(true);
        vqscilexerd->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerD*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldComments(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetFoldCompact(QsciLexerD* self, bool fold) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerD*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetFoldCompact(QsciLexerD* self, bool fold) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetFoldCompact_IsBase(true);
        vqscilexerd->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerD*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldCompact(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_Language(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return (const char*)vqscilexerd->language();
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseLanguage(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Language_IsBase(true);
        return (const char*)vqscilexerd->language();
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnLanguage(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Language_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_Lexer(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return (const char*)vqscilexerd->lexer();
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseLexer(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Lexer_IsBase(true);
        return (const char*)vqscilexerd->lexer();
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnLexer(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Lexer_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_LexerId(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->lexerId();
    } else {
        return ((VirtualQsciLexerD*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseLexerId(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_LexerId_IsBase(true);
        return vqscilexerd->lexerId();
    } else {
        return ((VirtualQsciLexerD*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnLexerId(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_LexerId_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_AutoCompletionFillups(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return (const char*)vqscilexerd->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseAutoCompletionFillups(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerd->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnAutoCompletionFillups(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerD_AutoCompletionWordSeparators(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        QStringList _ret = vqscilexerd->autoCompletionWordSeparators();
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
        QStringList _ret = ((VirtualQsciLexerD*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerD_QBaseAutoCompletionWordSeparators(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerd->autoCompletionWordSeparators();
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
        QStringList _ret = ((VirtualQsciLexerD*)self)->autoCompletionWordSeparators();
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
void QsciLexerD_OnAutoCompletionWordSeparators(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_BlockEnd(const QsciLexerD* self, int* style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return (const char*)vqscilexerd->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseBlockEnd(const QsciLexerD* self, int* style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BlockEnd_IsBase(true);
        return (const char*)vqscilexerd->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockEnd(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_BlockLookback(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->blockLookback();
    } else {
        return ((VirtualQsciLexerD*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseBlockLookback(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BlockLookback_IsBase(true);
        return vqscilexerd->blockLookback();
    } else {
        return ((VirtualQsciLexerD*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockLookback(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_BlockStart(const QsciLexerD* self, int* style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return (const char*)vqscilexerd->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseBlockStart(const QsciLexerD* self, int* style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BlockStart_IsBase(true);
        return (const char*)vqscilexerd->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockStart(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_BlockStartKeyword(const QsciLexerD* self, int* style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return (const char*)vqscilexerd->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseBlockStartKeyword(const QsciLexerD* self, int* style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerd->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockStartKeyword(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_BraceStyle(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->braceStyle();
    } else {
        return ((VirtualQsciLexerD*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseBraceStyle(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BraceStyle_IsBase(true);
        return vqscilexerd->braceStyle();
    } else {
        return ((VirtualQsciLexerD*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBraceStyle(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_CaseSensitive(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->caseSensitive();
    } else {
        return ((VirtualQsciLexerD*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseCaseSensitive(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_CaseSensitive_IsBase(true);
        return vqscilexerd->caseSensitive();
    } else {
        return ((VirtualQsciLexerD*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnCaseSensitive(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerD_Color(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return new QColor(vqscilexerd->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerD*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerD_QBaseColor(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Color_IsBase(true);
        return new QColor(vqscilexerd->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerD*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnColor(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Color_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_EolFill(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerD*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseEolFill(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_EolFill_IsBase(true);
        return vqscilexerd->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerD*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEolFill(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_EolFill_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerD_Font(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return new QFont(vqscilexerd->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerD*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerD_QBaseFont(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Font_IsBase(true);
        return new QFont(vqscilexerd->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerD*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnFont(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Font_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_IndentationGuideView(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->indentationGuideView();
    } else {
        return ((VirtualQsciLexerD*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseIndentationGuideView(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_IndentationGuideView_IsBase(true);
        return vqscilexerd->indentationGuideView();
    } else {
        return ((VirtualQsciLexerD*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnIndentationGuideView(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_Keywords(const QsciLexerD* self, int set) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return (const char*)vqscilexerd->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseKeywords(const QsciLexerD* self, int set) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Keywords_IsBase(true);
        return (const char*)vqscilexerd->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnKeywords(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Keywords_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_DefaultStyle(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->defaultStyle();
    } else {
        return ((VirtualQsciLexerD*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseDefaultStyle(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultStyle_IsBase(true);
        return vqscilexerd->defaultStyle();
    } else {
        return ((VirtualQsciLexerD*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultStyle(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerD_Description(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        QString _ret = vqscilexerd->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerD*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerD_QBaseDescription(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Description_IsBase(true);
        QString _ret = vqscilexerd->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerD*)self)->description(static_cast<int>(style));
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
void QsciLexerD_OnDescription(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Description_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerD_Paper(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return new QColor(vqscilexerd->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerD*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerD_QBasePaper(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Paper_IsBase(true);
        return new QColor(vqscilexerd->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerD*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnPaper(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Paper_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerD_DefaultColorWithStyle(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return new QColor(vqscilexerd->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerD*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerD_QBaseDefaultColorWithStyle(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerd->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerD*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultColorWithStyle(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_DefaultEolFill(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerD*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseDefaultEolFill(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultEolFill_IsBase(true);
        return vqscilexerd->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerD*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultEolFill(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerD_DefaultFontWithStyle(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return new QFont(vqscilexerd->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerD*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerD_QBaseDefaultFontWithStyle(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerd->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerD*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultFontWithStyle(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerD_DefaultPaperWithStyle(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return new QColor(vqscilexerd->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerD*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerD_QBaseDefaultPaperWithStyle(const QsciLexerD* self, int style) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerd->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerD*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultPaperWithStyle(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetEditor(QsciLexerD* self, QsciScintilla* editor) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setEditor(editor);
    } else {
        ((VirtualQsciLexerD*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetEditor(QsciLexerD* self, QsciScintilla* editor) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetEditor_IsBase(true);
        vqscilexerd->setEditor(editor);
    } else {
        ((VirtualQsciLexerD*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetEditor(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_RefreshProperties(QsciLexerD* self) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->refreshProperties();
    } else {
        ((VirtualQsciLexerD*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerD_QBaseRefreshProperties(QsciLexerD* self) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_RefreshProperties_IsBase(true);
        vqscilexerd->refreshProperties();
    } else {
        ((VirtualQsciLexerD*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnRefreshProperties(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_StyleBitsNeeded(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerD*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseStyleBitsNeeded(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_StyleBitsNeeded_IsBase(true);
        return vqscilexerd->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerD*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnStyleBitsNeeded(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_WordCharacters(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return (const char*)vqscilexerd->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseWordCharacters(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_WordCharacters_IsBase(true);
        return (const char*)vqscilexerd->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerD*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnWordCharacters(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetAutoIndentStyle(QsciLexerD* self, int autoindentstyle) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerD*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetAutoIndentStyle(QsciLexerD* self, int autoindentstyle) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetAutoIndentStyle_IsBase(true);
        vqscilexerd->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerD*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetAutoIndentStyle(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetColor(QsciLexerD* self, const QColor* c, int style) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerD*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetColor(QsciLexerD* self, const QColor* c, int style) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetColor_IsBase(true);
        vqscilexerd->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerD*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetColor(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetColor_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetEolFill(QsciLexerD* self, bool eoffill, int style) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerD*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetEolFill(QsciLexerD* self, bool eoffill, int style) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetEolFill_IsBase(true);
        vqscilexerd->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerD*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetEolFill(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetFont(QsciLexerD* self, const QFont* f, int style) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerD*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetFont(QsciLexerD* self, const QFont* f, int style) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetFont_IsBase(true);
        vqscilexerd->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerD*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFont(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetFont_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetPaper(QsciLexerD* self, const QColor* c, int style) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerD*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetPaper(QsciLexerD* self, const QColor* c, int style) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetPaper_IsBase(true);
        vqscilexerd->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerD*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetPaper(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_ReadProperties(QsciLexerD* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerD*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseReadProperties(QsciLexerD* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_ReadProperties_IsBase(true);
        return vqscilexerd->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerD*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnReadProperties(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_WriteProperties(const QsciLexerD* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerD*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseWriteProperties(const QsciLexerD* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_WriteProperties_IsBase(true);
        return vqscilexerd->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerD*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnWriteProperties(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_Event(QsciLexerD* self, QEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->event(event);
    } else {
        return ((VirtualQsciLexerD*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseEvent(QsciLexerD* self, QEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Event_IsBase(true);
        return vqscilexerd->event(event);
    } else {
        return ((VirtualQsciLexerD*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEvent(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Event_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_EventFilter(QsciLexerD* self, QObject* watched, QEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerD*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseEventFilter(QsciLexerD* self, QObject* watched, QEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_EventFilter_IsBase(true);
        return vqscilexerd->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerD*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEventFilter(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_TimerEvent(QsciLexerD* self, QTimerEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->timerEvent(event);
    } else {
        ((VirtualQsciLexerD*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseTimerEvent(QsciLexerD* self, QTimerEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_TimerEvent_IsBase(true);
        vqscilexerd->timerEvent(event);
    } else {
        ((VirtualQsciLexerD*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnTimerEvent(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_ChildEvent(QsciLexerD* self, QChildEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->childEvent(event);
    } else {
        ((VirtualQsciLexerD*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseChildEvent(QsciLexerD* self, QChildEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_ChildEvent_IsBase(true);
        vqscilexerd->childEvent(event);
    } else {
        ((VirtualQsciLexerD*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnChildEvent(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_CustomEvent(QsciLexerD* self, QEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->customEvent(event);
    } else {
        ((VirtualQsciLexerD*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseCustomEvent(QsciLexerD* self, QEvent* event) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_CustomEvent_IsBase(true);
        vqscilexerd->customEvent(event);
    } else {
        ((VirtualQsciLexerD*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnCustomEvent(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_ConnectNotify(QsciLexerD* self, const QMetaMethod* signal) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerD*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseConnectNotify(QsciLexerD* self, const QMetaMethod* signal) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_ConnectNotify_IsBase(true);
        vqscilexerd->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerD*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnConnectNotify(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_DisconnectNotify(QsciLexerD* self, const QMetaMethod* signal) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerD*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseDisconnectNotify(QsciLexerD* self, const QMetaMethod* signal) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DisconnectNotify_IsBase(true);
        vqscilexerd->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerD*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDisconnectNotify(QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self);
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerD_Sender(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->sender();
    } else {
        return ((VirtualQsciLexerD*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerD_QBaseSender(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Sender_IsBase(true);
        return vqscilexerd->sender();
    } else {
        return ((VirtualQsciLexerD*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSender(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Sender_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_SenderSignalIndex(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerD*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseSenderSignalIndex(const QsciLexerD* self) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SenderSignalIndex_IsBase(true);
        return vqscilexerd->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerD*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSenderSignalIndex(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_Receivers(const QsciLexerD* self, const char* signal) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->receivers(signal);
    } else {
        return ((VirtualQsciLexerD*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerD_QBaseReceivers(const QsciLexerD* self, const char* signal) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Receivers_IsBase(true);
        return vqscilexerd->receivers(signal);
    } else {
        return ((VirtualQsciLexerD*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnReceivers(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_Receivers_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_IsSignalConnected(const QsciLexerD* self, const QMetaMethod* signal) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        return vqscilexerd->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerD*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseIsSignalConnected(const QsciLexerD* self, const QMetaMethod* signal) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_IsSignalConnected_IsBase(true);
        return vqscilexerd->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerD*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnIsSignalConnected(const QsciLexerD* self, intptr_t slot) {
    auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self));
    if (vqscilexerd && vqscilexerd->isVirtualQsciLexerD) {
        vqscilexerd->setQsciLexerD_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerD_Delete(QsciLexerD* self) {
    delete self;
}
