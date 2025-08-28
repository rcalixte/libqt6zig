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
#include <qscilexerjava.h>
#include "libqscilexerjava.h"
#include "libqscilexerjava.hxx"

QsciLexerJava* QsciLexerJava_new() {
    return new VirtualQsciLexerJava();
}

QsciLexerJava* QsciLexerJava_new2(QObject* parent) {
    return new VirtualQsciLexerJava(parent);
}

QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerJava_Metacall(QsciLexerJava* self, int param1, int param2, void** param3) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerJava*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerJava_OnMetacall(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Metacall_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerJava_QBaseMetacall(QsciLexerJava* self, int param1, int param2, void** param3) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Metacall_IsBase(true);
        return vqscilexerjava->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerJava*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerJava_Tr(const char* s) {
    QString _ret = QsciLexerJava::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerJava_Language(const QsciLexerJava* self) {
    return (const char*)self->language();
}

const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerJava_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerJava::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJava_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerJava::tr(s, c, static_cast<int>(n));
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
void QsciLexerJava_SetFoldAtElse(QsciLexerJava* self, bool fold) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerJava*)self)->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFoldAtElse(QsciLexerJava* self, bool fold) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFoldAtElse_IsBase(true);
        vqscilexerjava->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerJava*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldAtElse(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetFoldComments(QsciLexerJava* self, bool fold) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerJava*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFoldComments(QsciLexerJava* self, bool fold) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFoldComments_IsBase(true);
        vqscilexerjava->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerJava*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldComments(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetFoldCompact(QsciLexerJava* self, bool fold) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerJava*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFoldCompact(QsciLexerJava* self, bool fold) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFoldCompact_IsBase(true);
        vqscilexerjava->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerJava*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldCompact(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetFoldPreprocessor(QsciLexerJava* self, bool fold) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerJava*)self)->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFoldPreprocessor(QsciLexerJava* self, bool fold) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFoldPreprocessor_IsBase(true);
        vqscilexerjava->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerJava*)self)->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldPreprocessor(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetStylePreprocessor(QsciLexerJava* self, bool style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerJava*)self)->setStylePreprocessor(style);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetStylePreprocessor(QsciLexerJava* self, bool style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetStylePreprocessor_IsBase(true);
        vqscilexerjava->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerJava*)self)->setStylePreprocessor(style);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetStylePreprocessor(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetStylePreprocessor_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetStylePreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_Lexer(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return (const char*)vqscilexerjava->lexer();
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseLexer(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Lexer_IsBase(true);
        return (const char*)vqscilexerjava->lexer();
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnLexer(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Lexer_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_LexerId(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->lexerId();
    } else {
        return ((VirtualQsciLexerJava*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseLexerId(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_LexerId_IsBase(true);
        return vqscilexerjava->lexerId();
    } else {
        return ((VirtualQsciLexerJava*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnLexerId(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_LexerId_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_AutoCompletionFillups(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return (const char*)vqscilexerjava->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseAutoCompletionFillups(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerjava->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnAutoCompletionFillups(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerJava_AutoCompletionWordSeparators(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        QList<QString> _ret = vqscilexerjava->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerJava*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerJava_QBaseAutoCompletionWordSeparators(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerjava->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerJava*)self)->autoCompletionWordSeparators();
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
void QsciLexerJava_OnAutoCompletionWordSeparators(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_BlockEnd(const QsciLexerJava* self, int* style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return (const char*)vqscilexerjava->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseBlockEnd(const QsciLexerJava* self, int* style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BlockEnd_IsBase(true);
        return (const char*)vqscilexerjava->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockEnd(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_BlockLookback(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->blockLookback();
    } else {
        return ((VirtualQsciLexerJava*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseBlockLookback(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BlockLookback_IsBase(true);
        return vqscilexerjava->blockLookback();
    } else {
        return ((VirtualQsciLexerJava*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockLookback(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_BlockStart(const QsciLexerJava* self, int* style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return (const char*)vqscilexerjava->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseBlockStart(const QsciLexerJava* self, int* style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BlockStart_IsBase(true);
        return (const char*)vqscilexerjava->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockStart(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_BlockStartKeyword(const QsciLexerJava* self, int* style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return (const char*)vqscilexerjava->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseBlockStartKeyword(const QsciLexerJava* self, int* style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerjava->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockStartKeyword(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_BraceStyle(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->braceStyle();
    } else {
        return ((VirtualQsciLexerJava*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseBraceStyle(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BraceStyle_IsBase(true);
        return vqscilexerjava->braceStyle();
    } else {
        return ((VirtualQsciLexerJava*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBraceStyle(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_CaseSensitive(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->caseSensitive();
    } else {
        return ((VirtualQsciLexerJava*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseCaseSensitive(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_CaseSensitive_IsBase(true);
        return vqscilexerjava->caseSensitive();
    } else {
        return ((VirtualQsciLexerJava*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnCaseSensitive(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJava_Color(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return new QColor(vqscilexerjava->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJava*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJava_QBaseColor(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Color_IsBase(true);
        return new QColor(vqscilexerjava->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJava*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnColor(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Color_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_EolFill(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJava*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseEolFill(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_EolFill_IsBase(true);
        return vqscilexerjava->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJava*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEolFill(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_EolFill_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJava_Font(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return new QFont(vqscilexerjava->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJava*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJava_QBaseFont(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Font_IsBase(true);
        return new QFont(vqscilexerjava->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJava*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnFont(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Font_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_IndentationGuideView(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->indentationGuideView();
    } else {
        return ((VirtualQsciLexerJava*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseIndentationGuideView(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_IndentationGuideView_IsBase(true);
        return vqscilexerjava->indentationGuideView();
    } else {
        return ((VirtualQsciLexerJava*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnIndentationGuideView(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_DefaultStyle(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->defaultStyle();
    } else {
        return ((VirtualQsciLexerJava*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseDefaultStyle(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultStyle_IsBase(true);
        return vqscilexerjava->defaultStyle();
    } else {
        return ((VirtualQsciLexerJava*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultStyle(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJava_Description(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        QString _ret = vqscilexerjava->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJava*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerJava_QBaseDescription(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Description_IsBase(true);
        QString _ret = vqscilexerjava->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJava*)self)->description(static_cast<int>(style));
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
void QsciLexerJava_OnDescription(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Description_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJava_Paper(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return new QColor(vqscilexerjava->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJava*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJava_QBasePaper(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Paper_IsBase(true);
        return new QColor(vqscilexerjava->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJava*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnPaper(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Paper_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJava_DefaultColor2(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return new QColor(vqscilexerjava->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJava*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJava_QBaseDefaultColor2(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerjava->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJava*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultColor2(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_DefaultEolFill(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJava*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseDefaultEolFill(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultEolFill_IsBase(true);
        return vqscilexerjava->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJava*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultEolFill(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJava_DefaultFont2(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return new QFont(vqscilexerjava->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJava*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJava_QBaseDefaultFont2(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerjava->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJava*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultFont2(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJava_DefaultPaper2(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return new QColor(vqscilexerjava->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJava*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJava_QBaseDefaultPaper2(const QsciLexerJava* self, int style) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerjava->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJava*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultPaper2(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetEditor(QsciLexerJava* self, QsciScintilla* editor) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setEditor(editor);
    } else {
        ((VirtualQsciLexerJava*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetEditor(QsciLexerJava* self, QsciScintilla* editor) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetEditor_IsBase(true);
        vqscilexerjava->setEditor(editor);
    } else {
        ((VirtualQsciLexerJava*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetEditor(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_RefreshProperties(QsciLexerJava* self) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->refreshProperties();
    } else {
        ((VirtualQsciLexerJava*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseRefreshProperties(QsciLexerJava* self) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_RefreshProperties_IsBase(true);
        vqscilexerjava->refreshProperties();
    } else {
        ((VirtualQsciLexerJava*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnRefreshProperties(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_StyleBitsNeeded(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerJava*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseStyleBitsNeeded(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_StyleBitsNeeded_IsBase(true);
        return vqscilexerjava->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerJava*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnStyleBitsNeeded(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_WordCharacters(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return (const char*)vqscilexerjava->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseWordCharacters(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_WordCharacters_IsBase(true);
        return (const char*)vqscilexerjava->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerJava*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnWordCharacters(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetAutoIndentStyle(QsciLexerJava* self, int autoindentstyle) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerJava*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetAutoIndentStyle(QsciLexerJava* self, int autoindentstyle) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetAutoIndentStyle_IsBase(true);
        vqscilexerjava->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerJava*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetAutoIndentStyle(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetColor(QsciLexerJava* self, const QColor* c, int style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJava*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetColor(QsciLexerJava* self, const QColor* c, int style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetColor_IsBase(true);
        vqscilexerjava->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJava*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetColor(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetColor_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetEolFill(QsciLexerJava* self, bool eoffill, int style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJava*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetEolFill(QsciLexerJava* self, bool eoffill, int style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetEolFill_IsBase(true);
        vqscilexerjava->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJava*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetEolFill(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetFont(QsciLexerJava* self, const QFont* f, int style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJava*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFont(QsciLexerJava* self, const QFont* f, int style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFont_IsBase(true);
        vqscilexerjava->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJava*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFont(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetFont_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetPaper(QsciLexerJava* self, const QColor* c, int style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJava*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetPaper(QsciLexerJava* self, const QColor* c, int style) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetPaper_IsBase(true);
        vqscilexerjava->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJava*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetPaper(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_ReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJava*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_ReadProperties_IsBase(true);
        return vqscilexerjava->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJava*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnReadProperties(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_WriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJava*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseWriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_WriteProperties_IsBase(true);
        return vqscilexerjava->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJava*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnWriteProperties(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_Event(QsciLexerJava* self, QEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->event(event);
    } else {
        return ((VirtualQsciLexerJava*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseEvent(QsciLexerJava* self, QEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Event_IsBase(true);
        return vqscilexerjava->event(event);
    } else {
        return ((VirtualQsciLexerJava*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEvent(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Event_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_EventFilter(QsciLexerJava* self, QObject* watched, QEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerJava*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseEventFilter(QsciLexerJava* self, QObject* watched, QEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_EventFilter_IsBase(true);
        return vqscilexerjava->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerJava*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEventFilter(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_TimerEvent(QsciLexerJava* self, QTimerEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->timerEvent(event);
    } else {
        ((VirtualQsciLexerJava*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseTimerEvent(QsciLexerJava* self, QTimerEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_TimerEvent_IsBase(true);
        vqscilexerjava->timerEvent(event);
    } else {
        ((VirtualQsciLexerJava*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnTimerEvent(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_ChildEvent(QsciLexerJava* self, QChildEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->childEvent(event);
    } else {
        ((VirtualQsciLexerJava*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseChildEvent(QsciLexerJava* self, QChildEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_ChildEvent_IsBase(true);
        vqscilexerjava->childEvent(event);
    } else {
        ((VirtualQsciLexerJava*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnChildEvent(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_CustomEvent(QsciLexerJava* self, QEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->customEvent(event);
    } else {
        ((VirtualQsciLexerJava*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseCustomEvent(QsciLexerJava* self, QEvent* event) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_CustomEvent_IsBase(true);
        vqscilexerjava->customEvent(event);
    } else {
        ((VirtualQsciLexerJava*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnCustomEvent(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_ConnectNotify(QsciLexerJava* self, const QMetaMethod* signal) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerJava*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseConnectNotify(QsciLexerJava* self, const QMetaMethod* signal) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_ConnectNotify_IsBase(true);
        vqscilexerjava->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerJava*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnConnectNotify(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_DisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerJava*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseDisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DisconnectNotify_IsBase(true);
        vqscilexerjava->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerJava*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDisconnectNotify(QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJava_TextAsBytes(const QsciLexerJava* self, const libqt_string text) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        QByteArray _qb = vqscilexerjava->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerJava*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerJava_QBaseTextAsBytes(const QsciLexerJava* self, const libqt_string text) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerjava->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerJava*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnTextAsBytes(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJava_BytesAsText(const QsciLexerJava* self, const char* bytes, int size) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        QString _ret = vqscilexerjava->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJava*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerJava_QBaseBytesAsText(const QsciLexerJava* self, const char* bytes, int size) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BytesAsText_IsBase(true);
        QString _ret = vqscilexerjava->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJava*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerJava_OnBytesAsText(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerJava_Sender(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->sender();
    } else {
        return ((VirtualQsciLexerJava*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerJava_QBaseSender(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Sender_IsBase(true);
        return vqscilexerjava->sender();
    } else {
        return ((VirtualQsciLexerJava*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSender(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Sender_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_SenderSignalIndex(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerJava*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseSenderSignalIndex(const QsciLexerJava* self) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SenderSignalIndex_IsBase(true);
        return vqscilexerjava->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerJava*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSenderSignalIndex(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_Receivers(const QsciLexerJava* self, const char* signal) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->receivers(signal);
    } else {
        return ((VirtualQsciLexerJava*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseReceivers(const QsciLexerJava* self, const char* signal) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Receivers_IsBase(true);
        return vqscilexerjava->receivers(signal);
    } else {
        return ((VirtualQsciLexerJava*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnReceivers(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_Receivers_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_IsSignalConnected(const QsciLexerJava* self, const QMetaMethod* signal) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        return vqscilexerjava->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerJava*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseIsSignalConnected(const QsciLexerJava* self, const QMetaMethod* signal) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_IsSignalConnected_IsBase(true);
        return vqscilexerjava->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerJava*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnIsSignalConnected(const QsciLexerJava* self, intptr_t slot) {
    auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self));
    if (vqscilexerjava && vqscilexerjava->isVirtualQsciLexerJava) {
        vqscilexerjava->setQsciLexerJava_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerJava_Delete(QsciLexerJava* self) {
    delete self;
}
