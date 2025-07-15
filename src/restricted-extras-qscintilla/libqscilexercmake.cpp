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
#include <qscilexercmake.h>
#include "libqscilexercmake.h"
#include "libqscilexercmake.hxx"

QsciLexerCMake* QsciLexerCMake_new() {
    return new VirtualQsciLexerCMake();
}

QsciLexerCMake* QsciLexerCMake_new2(QObject* parent) {
    return new VirtualQsciLexerCMake(parent);
}

QMetaObject* QsciLexerCMake_MetaObject(const QsciLexerCMake* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCMake_Metacast(QsciLexerCMake* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCMake_Metacall(QsciLexerCMake* self, int param1, int param2, void** param3) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCMake*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCMake_OnMetacall(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCMake_QBaseMetacall(QsciLexerCMake* self, int param1, int param2, void** param3) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Metacall_IsBase(true);
        return vqscilexercmake->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCMake*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCMake_Tr(const char* s) {
    QString _ret = QsciLexerCMake::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerCMake_DefaultColor(const QsciLexerCMake* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCMake_DefaultFont(const QsciLexerCMake* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCMake_DefaultPaper(const QsciLexerCMake* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerCMake_FoldAtElse(const QsciLexerCMake* self) {
    return self->foldAtElse();
}

libqt_string QsciLexerCMake_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCMake::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCMake_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCMake::tr(s, c, static_cast<int>(n));
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
void QsciLexerCMake_SetFoldAtElse(QsciLexerCMake* self, bool fold) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerCMake*)self)->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetFoldAtElse(QsciLexerCMake* self, bool fold) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetFoldAtElse_IsBase(true);
        vqscilexercmake->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerCMake*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetFoldAtElse(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_Language(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return (const char*)vqscilexercmake->language();
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseLanguage(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Language_IsBase(true);
        return (const char*)vqscilexercmake->language();
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnLanguage(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Language_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_Lexer(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return (const char*)vqscilexercmake->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseLexer(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Lexer_IsBase(true);
        return (const char*)vqscilexercmake->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnLexer(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_LexerId(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->lexerId();
    } else {
        return ((VirtualQsciLexerCMake*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseLexerId(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_LexerId_IsBase(true);
        return vqscilexercmake->lexerId();
    } else {
        return ((VirtualQsciLexerCMake*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnLexerId(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_AutoCompletionFillups(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return (const char*)vqscilexercmake->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseAutoCompletionFillups(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercmake->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnAutoCompletionFillups(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCMake_AutoCompletionWordSeparators(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        QList<QString> _ret = vqscilexercmake->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerCMake*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerCMake_QBaseAutoCompletionWordSeparators(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexercmake->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerCMake*)self)->autoCompletionWordSeparators();
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
void QsciLexerCMake_OnAutoCompletionWordSeparators(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockEnd(const QsciLexerCMake* self, int* style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return (const char*)vqscilexercmake->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseBlockEnd(const QsciLexerCMake* self, int* style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BlockEnd_IsBase(true);
        return (const char*)vqscilexercmake->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockEnd(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_BlockLookback(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->blockLookback();
    } else {
        return ((VirtualQsciLexerCMake*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseBlockLookback(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BlockLookback_IsBase(true);
        return vqscilexercmake->blockLookback();
    } else {
        return ((VirtualQsciLexerCMake*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockLookback(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockStart(const QsciLexerCMake* self, int* style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return (const char*)vqscilexercmake->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseBlockStart(const QsciLexerCMake* self, int* style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BlockStart_IsBase(true);
        return (const char*)vqscilexercmake->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockStart(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockStartKeyword(const QsciLexerCMake* self, int* style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return (const char*)vqscilexercmake->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseBlockStartKeyword(const QsciLexerCMake* self, int* style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercmake->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockStartKeyword(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_BraceStyle(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->braceStyle();
    } else {
        return ((VirtualQsciLexerCMake*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseBraceStyle(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BraceStyle_IsBase(true);
        return vqscilexercmake->braceStyle();
    } else {
        return ((VirtualQsciLexerCMake*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBraceStyle(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_CaseSensitive(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->caseSensitive();
    } else {
        return ((VirtualQsciLexerCMake*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseCaseSensitive(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_CaseSensitive_IsBase(true);
        return vqscilexercmake->caseSensitive();
    } else {
        return ((VirtualQsciLexerCMake*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnCaseSensitive(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCMake_Color(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return new QColor(vqscilexercmake->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCMake*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCMake_QBaseColor(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Color_IsBase(true);
        return new QColor(vqscilexercmake->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCMake*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnColor(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Color_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_EolFill(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCMake*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseEolFill(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_EolFill_IsBase(true);
        return vqscilexercmake->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCMake*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEolFill(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCMake_Font(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return new QFont(vqscilexercmake->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCMake*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCMake_QBaseFont(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Font_IsBase(true);
        return new QFont(vqscilexercmake->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCMake*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnFont(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Font_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_IndentationGuideView(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCMake*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseIndentationGuideView(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_IndentationGuideView_IsBase(true);
        return vqscilexercmake->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCMake*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnIndentationGuideView(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_Keywords(const QsciLexerCMake* self, int set) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return (const char*)vqscilexercmake->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseKeywords(const QsciLexerCMake* self, int set) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Keywords_IsBase(true);
        return (const char*)vqscilexercmake->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnKeywords(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Keywords_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_DefaultStyle(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->defaultStyle();
    } else {
        return ((VirtualQsciLexerCMake*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseDefaultStyle(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultStyle_IsBase(true);
        return vqscilexercmake->defaultStyle();
    } else {
        return ((VirtualQsciLexerCMake*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultStyle(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCMake_Description(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        QString _ret = vqscilexercmake->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCMake*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerCMake_QBaseDescription(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Description_IsBase(true);
        QString _ret = vqscilexercmake->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCMake*)self)->description(static_cast<int>(style));
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
void QsciLexerCMake_OnDescription(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Description_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCMake_Paper(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return new QColor(vqscilexercmake->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCMake*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCMake_QBasePaper(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Paper_IsBase(true);
        return new QColor(vqscilexercmake->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCMake*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnPaper(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Paper_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCMake_DefaultColor2(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return new QColor(vqscilexercmake->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCMake*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCMake_QBaseDefaultColor2(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultColor2_IsBase(true);
        return new QColor(vqscilexercmake->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCMake*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultColor2(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_DefaultEolFill(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCMake*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseDefaultEolFill(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultEolFill_IsBase(true);
        return vqscilexercmake->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCMake*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultEolFill(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCMake_DefaultFont2(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return new QFont(vqscilexercmake->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCMake*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCMake_QBaseDefaultFont2(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultFont2_IsBase(true);
        return new QFont(vqscilexercmake->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCMake*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultFont2(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCMake_DefaultPaper2(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return new QColor(vqscilexercmake->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCMake*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCMake_QBaseDefaultPaper2(const QsciLexerCMake* self, int style) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexercmake->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCMake*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultPaper2(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetEditor(QsciLexerCMake* self, QsciScintilla* editor) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setEditor(editor);
    } else {
        ((VirtualQsciLexerCMake*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetEditor(QsciLexerCMake* self, QsciScintilla* editor) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetEditor_IsBase(true);
        vqscilexercmake->setEditor(editor);
    } else {
        ((VirtualQsciLexerCMake*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetEditor(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_RefreshProperties(QsciLexerCMake* self) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->refreshProperties();
    } else {
        ((VirtualQsciLexerCMake*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseRefreshProperties(QsciLexerCMake* self) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_RefreshProperties_IsBase(true);
        vqscilexercmake->refreshProperties();
    } else {
        ((VirtualQsciLexerCMake*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnRefreshProperties(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_StyleBitsNeeded(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCMake*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseStyleBitsNeeded(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_StyleBitsNeeded_IsBase(true);
        return vqscilexercmake->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCMake*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnStyleBitsNeeded(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_WordCharacters(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return (const char*)vqscilexercmake->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseWordCharacters(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_WordCharacters_IsBase(true);
        return (const char*)vqscilexercmake->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCMake*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnWordCharacters(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCMake*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetAutoIndentStyle_IsBase(true);
        vqscilexercmake->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCMake*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetAutoIndentStyle(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetColor(QsciLexerCMake* self, const QColor* c, int style) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCMake*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetColor(QsciLexerCMake* self, const QColor* c, int style) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetColor_IsBase(true);
        vqscilexercmake->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCMake*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetColor(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetEolFill(QsciLexerCMake* self, bool eoffill, int style) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCMake*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetEolFill(QsciLexerCMake* self, bool eoffill, int style) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetEolFill_IsBase(true);
        vqscilexercmake->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCMake*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetEolFill(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetFont(QsciLexerCMake* self, const QFont* f, int style) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCMake*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetFont(QsciLexerCMake* self, const QFont* f, int style) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetFont_IsBase(true);
        vqscilexercmake->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCMake*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetFont(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetPaper(QsciLexerCMake* self, const QColor* c, int style) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCMake*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetPaper(QsciLexerCMake* self, const QColor* c, int style) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetPaper_IsBase(true);
        vqscilexercmake->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCMake*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetPaper(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_ReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCMake*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_ReadProperties_IsBase(true);
        return vqscilexercmake->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCMake*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnReadProperties(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_WriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCMake*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseWriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_WriteProperties_IsBase(true);
        return vqscilexercmake->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCMake*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnWriteProperties(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_Event(QsciLexerCMake* self, QEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->event(event);
    } else {
        return ((VirtualQsciLexerCMake*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseEvent(QsciLexerCMake* self, QEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Event_IsBase(true);
        return vqscilexercmake->event(event);
    } else {
        return ((VirtualQsciLexerCMake*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEvent(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Event_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_EventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCMake*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseEventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_EventFilter_IsBase(true);
        return vqscilexercmake->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCMake*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEventFilter(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_TimerEvent(QsciLexerCMake* self, QTimerEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->timerEvent(event);
    } else {
        ((VirtualQsciLexerCMake*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseTimerEvent(QsciLexerCMake* self, QTimerEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_TimerEvent_IsBase(true);
        vqscilexercmake->timerEvent(event);
    } else {
        ((VirtualQsciLexerCMake*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnTimerEvent(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_ChildEvent(QsciLexerCMake* self, QChildEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->childEvent(event);
    } else {
        ((VirtualQsciLexerCMake*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseChildEvent(QsciLexerCMake* self, QChildEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_ChildEvent_IsBase(true);
        vqscilexercmake->childEvent(event);
    } else {
        ((VirtualQsciLexerCMake*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnChildEvent(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_CustomEvent(QsciLexerCMake* self, QEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->customEvent(event);
    } else {
        ((VirtualQsciLexerCMake*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseCustomEvent(QsciLexerCMake* self, QEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_CustomEvent_IsBase(true);
        vqscilexercmake->customEvent(event);
    } else {
        ((VirtualQsciLexerCMake*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnCustomEvent(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_ConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCMake*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_ConnectNotify_IsBase(true);
        vqscilexercmake->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCMake*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnConnectNotify(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_DisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCMake*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseDisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DisconnectNotify_IsBase(true);
        vqscilexercmake->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCMake*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDisconnectNotify(QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCMake_TextAsBytes(const QsciLexerCMake* self, const libqt_string text) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        QByteArray _qb = vqscilexercmake->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCMake*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerCMake_QBaseTextAsBytes(const QsciLexerCMake* self, const libqt_string text) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexercmake->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCMake*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnTextAsBytes(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCMake_BytesAsText(const QsciLexerCMake* self, const char* bytes, int size) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        QString _ret = vqscilexercmake->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCMake*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerCMake_QBaseBytesAsText(const QsciLexerCMake* self, const char* bytes, int size) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BytesAsText_IsBase(true);
        QString _ret = vqscilexercmake->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCMake*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerCMake_OnBytesAsText(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCMake_Sender(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->sender();
    } else {
        return ((VirtualQsciLexerCMake*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCMake_QBaseSender(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Sender_IsBase(true);
        return vqscilexercmake->sender();
    } else {
        return ((VirtualQsciLexerCMake*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSender(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Sender_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_SenderSignalIndex(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCMake*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseSenderSignalIndex(const QsciLexerCMake* self) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SenderSignalIndex_IsBase(true);
        return vqscilexercmake->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCMake*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSenderSignalIndex(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_Receivers(const QsciLexerCMake* self, const char* signal) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->receivers(signal);
    } else {
        return ((VirtualQsciLexerCMake*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseReceivers(const QsciLexerCMake* self, const char* signal) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Receivers_IsBase(true);
        return vqscilexercmake->receivers(signal);
    } else {
        return ((VirtualQsciLexerCMake*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnReceivers(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_IsSignalConnected(const QsciLexerCMake* self, const QMetaMethod* signal) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        return vqscilexercmake->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCMake*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseIsSignalConnected(const QsciLexerCMake* self, const QMetaMethod* signal) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_IsSignalConnected_IsBase(true);
        return vqscilexercmake->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCMake*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnIsSignalConnected(const QsciLexerCMake* self, intptr_t slot) {
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake && vqscilexercmake->isVirtualQsciLexerCMake) {
        vqscilexercmake->setQsciLexerCMake_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCMake_Delete(QsciLexerCMake* self) {
    delete self;
}
