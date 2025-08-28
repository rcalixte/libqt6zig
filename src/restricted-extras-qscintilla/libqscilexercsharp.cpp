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
#include <qscilexercsharp.h>
#include "libqscilexercsharp.h"
#include "libqscilexercsharp.hxx"

QsciLexerCSharp* QsciLexerCSharp_new() {
    return new VirtualQsciLexerCSharp();
}

QsciLexerCSharp* QsciLexerCSharp_new2(QObject* parent) {
    return new VirtualQsciLexerCSharp(parent);
}

QMetaObject* QsciLexerCSharp_MetaObject(const QsciLexerCSharp* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCSharp_Metacast(QsciLexerCSharp* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCSharp_Metacall(QsciLexerCSharp* self, int param1, int param2, void** param3) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCSharp_OnMetacall(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCSharp_QBaseMetacall(QsciLexerCSharp* self, int param1, int param2, void** param3) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Metacall_IsBase(true);
        return vqscilexercsharp->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCSharp_Tr(const char* s) {
    QString _ret = QsciLexerCSharp::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCSharp_Language(const QsciLexerCSharp* self) {
    return (const char*)self->language();
}

QColor* QsciLexerCSharp_DefaultColor(const QsciLexerCSharp* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCSharp_DefaultEolFill(const QsciLexerCSharp* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCSharp_DefaultFont(const QsciLexerCSharp* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCSharp_DefaultPaper(const QsciLexerCSharp* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCSharp_Keywords(const QsciLexerCSharp* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerCSharp_Description(const QsciLexerCSharp* self, int style) {
    QString _ret = self->description(static_cast<int>(style));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCSharp_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCSharp::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCSharp_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCSharp::tr(s, c, static_cast<int>(n));
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
void QsciLexerCSharp_SetFoldAtElse(QsciLexerCSharp* self, bool fold) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetFoldAtElse(QsciLexerCSharp* self, bool fold) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFoldAtElse_IsBase(true);
        vqscilexercsharp->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFoldAtElse(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetFoldComments(QsciLexerCSharp* self, bool fold) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetFoldComments(QsciLexerCSharp* self, bool fold) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFoldComments_IsBase(true);
        vqscilexercsharp->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFoldComments(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetFoldCompact(QsciLexerCSharp* self, bool fold) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetFoldCompact(QsciLexerCSharp* self, bool fold) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFoldCompact_IsBase(true);
        vqscilexercsharp->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFoldCompact(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetFoldPreprocessor(QsciLexerCSharp* self, bool fold) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetFoldPreprocessor(QsciLexerCSharp* self, bool fold) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFoldPreprocessor_IsBase(true);
        vqscilexercsharp->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFoldPreprocessor(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetStylePreprocessor(QsciLexerCSharp* self, bool style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setStylePreprocessor(style);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetStylePreprocessor(QsciLexerCSharp* self, bool style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetStylePreprocessor_IsBase(true);
        vqscilexercsharp->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setStylePreprocessor(style);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetStylePreprocessor(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetStylePreprocessor_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetStylePreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSharp_Lexer(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return (const char*)vqscilexercsharp->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCSharp_QBaseLexer(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Lexer_IsBase(true);
        return (const char*)vqscilexercsharp->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnLexer(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSharp_LexerId(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->lexerId();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCSharp_QBaseLexerId(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_LexerId_IsBase(true);
        return vqscilexercsharp->lexerId();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnLexerId(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSharp_AutoCompletionFillups(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return (const char*)vqscilexercsharp->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCSharp_QBaseAutoCompletionFillups(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercsharp->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnAutoCompletionFillups(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCSharp_AutoCompletionWordSeparators(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        QList<QString> _ret = vqscilexercsharp->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerCSharp*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerCSharp_QBaseAutoCompletionWordSeparators(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexercsharp->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerCSharp*)self)->autoCompletionWordSeparators();
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
void QsciLexerCSharp_OnAutoCompletionWordSeparators(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSharp_BlockEnd(const QsciLexerCSharp* self, int* style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return (const char*)vqscilexercsharp->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSharp_QBaseBlockEnd(const QsciLexerCSharp* self, int* style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BlockEnd_IsBase(true);
        return (const char*)vqscilexercsharp->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBlockEnd(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSharp_BlockLookback(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->blockLookback();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCSharp_QBaseBlockLookback(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BlockLookback_IsBase(true);
        return vqscilexercsharp->blockLookback();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBlockLookback(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSharp_BlockStart(const QsciLexerCSharp* self, int* style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return (const char*)vqscilexercsharp->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSharp_QBaseBlockStart(const QsciLexerCSharp* self, int* style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BlockStart_IsBase(true);
        return (const char*)vqscilexercsharp->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBlockStart(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSharp_BlockStartKeyword(const QsciLexerCSharp* self, int* style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return (const char*)vqscilexercsharp->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSharp_QBaseBlockStartKeyword(const QsciLexerCSharp* self, int* style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercsharp->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBlockStartKeyword(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSharp_BraceStyle(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->braceStyle();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCSharp_QBaseBraceStyle(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BraceStyle_IsBase(true);
        return vqscilexercsharp->braceStyle();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBraceStyle(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSharp_CaseSensitive(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->caseSensitive();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCSharp_QBaseCaseSensitive(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_CaseSensitive_IsBase(true);
        return vqscilexercsharp->caseSensitive();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnCaseSensitive(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSharp_Color(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return new QColor(vqscilexercsharp->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSharp*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSharp_QBaseColor(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Color_IsBase(true);
        return new QColor(vqscilexercsharp->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSharp*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnColor(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Color_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSharp_EolFill(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCSharp*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCSharp_QBaseEolFill(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_EolFill_IsBase(true);
        return vqscilexercsharp->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCSharp*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnEolFill(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCSharp_Font(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return new QFont(vqscilexercsharp->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCSharp*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCSharp_QBaseFont(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Font_IsBase(true);
        return new QFont(vqscilexercsharp->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCSharp*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnFont(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Font_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSharp_IndentationGuideView(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCSharp_QBaseIndentationGuideView(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_IndentationGuideView_IsBase(true);
        return vqscilexercsharp->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnIndentationGuideView(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSharp_DefaultStyle(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->defaultStyle();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCSharp_QBaseDefaultStyle(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DefaultStyle_IsBase(true);
        return vqscilexercsharp->defaultStyle();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDefaultStyle(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSharp_Paper(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return new QColor(vqscilexercsharp->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSharp*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSharp_QBasePaper(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Paper_IsBase(true);
        return new QColor(vqscilexercsharp->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSharp*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnPaper(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Paper_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSharp_DefaultColor2(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return new QColor(vqscilexercsharp->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSharp*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSharp_QBaseDefaultColor2(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DefaultColor2_IsBase(true);
        return new QColor(vqscilexercsharp->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSharp*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDefaultColor2(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCSharp_DefaultFont2(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return new QFont(vqscilexercsharp->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCSharp*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCSharp_QBaseDefaultFont2(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DefaultFont2_IsBase(true);
        return new QFont(vqscilexercsharp->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCSharp*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDefaultFont2(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSharp_DefaultPaper2(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return new QColor(vqscilexercsharp->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSharp*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSharp_QBaseDefaultPaper2(const QsciLexerCSharp* self, int style) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexercsharp->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSharp*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDefaultPaper2(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetEditor(QsciLexerCSharp* self, QsciScintilla* editor) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setEditor(editor);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetEditor(QsciLexerCSharp* self, QsciScintilla* editor) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetEditor_IsBase(true);
        vqscilexercsharp->setEditor(editor);
    } else {
        ((VirtualQsciLexerCSharp*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetEditor(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_RefreshProperties(QsciLexerCSharp* self) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->refreshProperties();
    } else {
        ((VirtualQsciLexerCSharp*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseRefreshProperties(QsciLexerCSharp* self) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_RefreshProperties_IsBase(true);
        vqscilexercsharp->refreshProperties();
    } else {
        ((VirtualQsciLexerCSharp*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnRefreshProperties(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSharp_StyleBitsNeeded(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCSharp_QBaseStyleBitsNeeded(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_StyleBitsNeeded_IsBase(true);
        return vqscilexercsharp->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnStyleBitsNeeded(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSharp_WordCharacters(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return (const char*)vqscilexercsharp->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCSharp_QBaseWordCharacters(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_WordCharacters_IsBase(true);
        return (const char*)vqscilexercsharp->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCSharp*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnWordCharacters(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetAutoIndentStyle(QsciLexerCSharp* self, int autoindentstyle) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetAutoIndentStyle(QsciLexerCSharp* self, int autoindentstyle) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetAutoIndentStyle_IsBase(true);
        vqscilexercsharp->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetAutoIndentStyle(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetColor(QsciLexerCSharp* self, const QColor* c, int style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetColor(QsciLexerCSharp* self, const QColor* c, int style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetColor_IsBase(true);
        vqscilexercsharp->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetColor(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetEolFill(QsciLexerCSharp* self, bool eoffill, int style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetEolFill(QsciLexerCSharp* self, bool eoffill, int style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetEolFill_IsBase(true);
        vqscilexercsharp->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetEolFill(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetFont(QsciLexerCSharp* self, const QFont* f, int style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetFont(QsciLexerCSharp* self, const QFont* f, int style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFont_IsBase(true);
        vqscilexercsharp->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFont(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_SetPaper(QsciLexerCSharp* self, const QColor* c, int style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseSetPaper(QsciLexerCSharp* self, const QColor* c, int style) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetPaper_IsBase(true);
        vqscilexercsharp->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSharp*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetPaper(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSharp_ReadProperties(QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCSharp_QBaseReadProperties(QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_ReadProperties_IsBase(true);
        return vqscilexercsharp->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnReadProperties(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSharp_WriteProperties(const QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCSharp_QBaseWriteProperties(const QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_WriteProperties_IsBase(true);
        return vqscilexercsharp->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnWriteProperties(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSharp_Event(QsciLexerCSharp* self, QEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->event(event);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCSharp_QBaseEvent(QsciLexerCSharp* self, QEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Event_IsBase(true);
        return vqscilexercsharp->event(event);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnEvent(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Event_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSharp_EventFilter(QsciLexerCSharp* self, QObject* watched, QEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCSharp_QBaseEventFilter(QsciLexerCSharp* self, QObject* watched, QEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_EventFilter_IsBase(true);
        return vqscilexercsharp->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnEventFilter(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_TimerEvent(QsciLexerCSharp* self, QTimerEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->timerEvent(event);
    } else {
        ((VirtualQsciLexerCSharp*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseTimerEvent(QsciLexerCSharp* self, QTimerEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_TimerEvent_IsBase(true);
        vqscilexercsharp->timerEvent(event);
    } else {
        ((VirtualQsciLexerCSharp*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnTimerEvent(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_ChildEvent(QsciLexerCSharp* self, QChildEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->childEvent(event);
    } else {
        ((VirtualQsciLexerCSharp*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseChildEvent(QsciLexerCSharp* self, QChildEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_ChildEvent_IsBase(true);
        vqscilexercsharp->childEvent(event);
    } else {
        ((VirtualQsciLexerCSharp*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnChildEvent(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_CustomEvent(QsciLexerCSharp* self, QEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->customEvent(event);
    } else {
        ((VirtualQsciLexerCSharp*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseCustomEvent(QsciLexerCSharp* self, QEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_CustomEvent_IsBase(true);
        vqscilexercsharp->customEvent(event);
    } else {
        ((VirtualQsciLexerCSharp*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnCustomEvent(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_ConnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCSharp*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseConnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_ConnectNotify_IsBase(true);
        vqscilexercsharp->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCSharp*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnConnectNotify(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSharp_DisconnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCSharp*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCSharp_QBaseDisconnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DisconnectNotify_IsBase(true);
        vqscilexercsharp->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCSharp*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDisconnectNotify(QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCSharp_TextAsBytes(const QsciLexerCSharp* self, const libqt_string text) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        QByteArray _qb = vqscilexercsharp->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCSharp*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerCSharp_QBaseTextAsBytes(const QsciLexerCSharp* self, const libqt_string text) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexercsharp->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCSharp*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnTextAsBytes(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCSharp_BytesAsText(const QsciLexerCSharp* self, const char* bytes, int size) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        QString _ret = vqscilexercsharp->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCSharp*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerCSharp_QBaseBytesAsText(const QsciLexerCSharp* self, const char* bytes, int size) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BytesAsText_IsBase(true);
        QString _ret = vqscilexercsharp->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCSharp*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerCSharp_OnBytesAsText(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCSharp_Sender(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->sender();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCSharp_QBaseSender(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Sender_IsBase(true);
        return vqscilexercsharp->sender();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSender(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Sender_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSharp_SenderSignalIndex(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCSharp_QBaseSenderSignalIndex(const QsciLexerCSharp* self) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SenderSignalIndex_IsBase(true);
        return vqscilexercsharp->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCSharp*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSenderSignalIndex(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSharp_Receivers(const QsciLexerCSharp* self, const char* signal) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->receivers(signal);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCSharp_QBaseReceivers(const QsciLexerCSharp* self, const char* signal) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Receivers_IsBase(true);
        return vqscilexercsharp->receivers(signal);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnReceivers(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSharp_IsSignalConnected(const QsciLexerCSharp* self, const QMetaMethod* signal) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        return vqscilexercsharp->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCSharp_QBaseIsSignalConnected(const QsciLexerCSharp* self, const QMetaMethod* signal) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_IsSignalConnected_IsBase(true);
        return vqscilexercsharp->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCSharp*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnIsSignalConnected(const QsciLexerCSharp* self, intptr_t slot) {
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp && vqscilexercsharp->isVirtualQsciLexerCSharp) {
        vqscilexercsharp->setQsciLexerCSharp_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCSharp_Delete(QsciLexerCSharp* self) {
    delete self;
}
