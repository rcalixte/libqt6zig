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
#include <qscilexeridl.h>
#include "libqscilexeridl.h"
#include "libqscilexeridl.hxx"

QsciLexerIDL* QsciLexerIDL_new() {
    return new VirtualQsciLexerIDL();
}

QsciLexerIDL* QsciLexerIDL_new2(QObject* parent) {
    return new VirtualQsciLexerIDL(parent);
}

QMetaObject* QsciLexerIDL_MetaObject(const QsciLexerIDL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerIDL_Metacast(QsciLexerIDL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerIDL_Metacall(QsciLexerIDL* self, int param1, int param2, void** param3) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerIDL*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerIDL_OnMetacall(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Metacall_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerIDL_QBaseMetacall(QsciLexerIDL* self, int param1, int param2, void** param3) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Metacall_IsBase(true);
        return vqscilexeridl->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerIDL*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerIDL_Tr(const char* s) {
    QString _ret = QsciLexerIDL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerIDL_Language(const QsciLexerIDL* self) {
    return (const char*)self->language();
}

QColor* QsciLexerIDL_DefaultColor(const QsciLexerIDL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

const char* QsciLexerIDL_Keywords(const QsciLexerIDL* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerIDL_Description(const QsciLexerIDL* self, int style) {
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

libqt_string QsciLexerIDL_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerIDL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerIDL_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerIDL::tr(s, c, static_cast<int>(n));
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
void QsciLexerIDL_SetFoldAtElse(QsciLexerIDL* self, bool fold) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerIDL*)self)->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetFoldAtElse(QsciLexerIDL* self, bool fold) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFoldAtElse_IsBase(true);
        vqscilexeridl->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerIDL*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFoldAtElse(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetFoldComments(QsciLexerIDL* self, bool fold) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerIDL*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetFoldComments(QsciLexerIDL* self, bool fold) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFoldComments_IsBase(true);
        vqscilexeridl->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerIDL*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFoldComments(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetFoldCompact(QsciLexerIDL* self, bool fold) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerIDL*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetFoldCompact(QsciLexerIDL* self, bool fold) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFoldCompact_IsBase(true);
        vqscilexeridl->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerIDL*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFoldCompact(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetFoldPreprocessor(QsciLexerIDL* self, bool fold) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerIDL*)self)->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetFoldPreprocessor(QsciLexerIDL* self, bool fold) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFoldPreprocessor_IsBase(true);
        vqscilexeridl->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerIDL*)self)->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFoldPreprocessor(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetStylePreprocessor(QsciLexerIDL* self, bool style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerIDL*)self)->setStylePreprocessor(style);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetStylePreprocessor(QsciLexerIDL* self, bool style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetStylePreprocessor_IsBase(true);
        vqscilexeridl->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerIDL*)self)->setStylePreprocessor(style);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetStylePreprocessor(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetStylePreprocessor_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetStylePreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIDL_Lexer(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return (const char*)vqscilexeridl->lexer();
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerIDL_QBaseLexer(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Lexer_IsBase(true);
        return (const char*)vqscilexeridl->lexer();
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnLexer(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Lexer_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIDL_LexerId(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->lexerId();
    } else {
        return ((VirtualQsciLexerIDL*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerIDL_QBaseLexerId(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_LexerId_IsBase(true);
        return vqscilexeridl->lexerId();
    } else {
        return ((VirtualQsciLexerIDL*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnLexerId(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_LexerId_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIDL_AutoCompletionFillups(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return (const char*)vqscilexeridl->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerIDL_QBaseAutoCompletionFillups(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexeridl->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnAutoCompletionFillups(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerIDL_AutoCompletionWordSeparators(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        QList<QString> _ret = vqscilexeridl->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerIDL*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerIDL_QBaseAutoCompletionWordSeparators(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexeridl->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerIDL*)self)->autoCompletionWordSeparators();
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
void QsciLexerIDL_OnAutoCompletionWordSeparators(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIDL_BlockEnd(const QsciLexerIDL* self, int* style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return (const char*)vqscilexeridl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerIDL_QBaseBlockEnd(const QsciLexerIDL* self, int* style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BlockEnd_IsBase(true);
        return (const char*)vqscilexeridl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBlockEnd(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIDL_BlockLookback(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->blockLookback();
    } else {
        return ((VirtualQsciLexerIDL*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerIDL_QBaseBlockLookback(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BlockLookback_IsBase(true);
        return vqscilexeridl->blockLookback();
    } else {
        return ((VirtualQsciLexerIDL*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBlockLookback(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIDL_BlockStart(const QsciLexerIDL* self, int* style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return (const char*)vqscilexeridl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerIDL_QBaseBlockStart(const QsciLexerIDL* self, int* style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BlockStart_IsBase(true);
        return (const char*)vqscilexeridl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBlockStart(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIDL_BlockStartKeyword(const QsciLexerIDL* self, int* style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return (const char*)vqscilexeridl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerIDL_QBaseBlockStartKeyword(const QsciLexerIDL* self, int* style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexeridl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBlockStartKeyword(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIDL_BraceStyle(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->braceStyle();
    } else {
        return ((VirtualQsciLexerIDL*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerIDL_QBaseBraceStyle(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BraceStyle_IsBase(true);
        return vqscilexeridl->braceStyle();
    } else {
        return ((VirtualQsciLexerIDL*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnBraceStyle(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIDL_CaseSensitive(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->caseSensitive();
    } else {
        return ((VirtualQsciLexerIDL*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerIDL_QBaseCaseSensitive(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_CaseSensitive_IsBase(true);
        return vqscilexeridl->caseSensitive();
    } else {
        return ((VirtualQsciLexerIDL*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnCaseSensitive(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerIDL_Color(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return new QColor(vqscilexeridl->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIDL*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerIDL_QBaseColor(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Color_IsBase(true);
        return new QColor(vqscilexeridl->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIDL*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnColor(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Color_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIDL_EolFill(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerIDL*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerIDL_QBaseEolFill(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_EolFill_IsBase(true);
        return vqscilexeridl->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerIDL*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnEolFill(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_EolFill_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerIDL_Font(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return new QFont(vqscilexeridl->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerIDL*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerIDL_QBaseFont(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Font_IsBase(true);
        return new QFont(vqscilexeridl->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerIDL*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnFont(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Font_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIDL_IndentationGuideView(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->indentationGuideView();
    } else {
        return ((VirtualQsciLexerIDL*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerIDL_QBaseIndentationGuideView(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_IndentationGuideView_IsBase(true);
        return vqscilexeridl->indentationGuideView();
    } else {
        return ((VirtualQsciLexerIDL*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnIndentationGuideView(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIDL_DefaultStyle(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->defaultStyle();
    } else {
        return ((VirtualQsciLexerIDL*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerIDL_QBaseDefaultStyle(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultStyle_IsBase(true);
        return vqscilexeridl->defaultStyle();
    } else {
        return ((VirtualQsciLexerIDL*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultStyle(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerIDL_Paper(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return new QColor(vqscilexeridl->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIDL*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerIDL_QBasePaper(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Paper_IsBase(true);
        return new QColor(vqscilexeridl->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIDL*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnPaper(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Paper_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerIDL_DefaultColor2(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return new QColor(vqscilexeridl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIDL*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerIDL_QBaseDefaultColor2(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultColor2_IsBase(true);
        return new QColor(vqscilexeridl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIDL*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultColor2(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIDL_DefaultEolFill(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerIDL*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerIDL_QBaseDefaultEolFill(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultEolFill_IsBase(true);
        return vqscilexeridl->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerIDL*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultEolFill(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerIDL_DefaultFont2(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return new QFont(vqscilexeridl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerIDL*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerIDL_QBaseDefaultFont2(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultFont2_IsBase(true);
        return new QFont(vqscilexeridl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerIDL*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultFont2(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerIDL_DefaultPaper2(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return new QColor(vqscilexeridl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIDL*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerIDL_QBaseDefaultPaper2(const QsciLexerIDL* self, int style) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexeridl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerIDL*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDefaultPaper2(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetEditor(QsciLexerIDL* self, QsciScintilla* editor) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setEditor(editor);
    } else {
        ((VirtualQsciLexerIDL*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetEditor(QsciLexerIDL* self, QsciScintilla* editor) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetEditor_IsBase(true);
        vqscilexeridl->setEditor(editor);
    } else {
        ((VirtualQsciLexerIDL*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetEditor(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_RefreshProperties(QsciLexerIDL* self) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->refreshProperties();
    } else {
        ((VirtualQsciLexerIDL*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseRefreshProperties(QsciLexerIDL* self) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_RefreshProperties_IsBase(true);
        vqscilexeridl->refreshProperties();
    } else {
        ((VirtualQsciLexerIDL*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnRefreshProperties(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIDL_StyleBitsNeeded(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerIDL*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerIDL_QBaseStyleBitsNeeded(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_StyleBitsNeeded_IsBase(true);
        return vqscilexeridl->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerIDL*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnStyleBitsNeeded(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerIDL_WordCharacters(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return (const char*)vqscilexeridl->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerIDL_QBaseWordCharacters(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_WordCharacters_IsBase(true);
        return (const char*)vqscilexeridl->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerIDL*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnWordCharacters(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetAutoIndentStyle(QsciLexerIDL* self, int autoindentstyle) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerIDL*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetAutoIndentStyle(QsciLexerIDL* self, int autoindentstyle) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetAutoIndentStyle_IsBase(true);
        vqscilexeridl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerIDL*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetAutoIndentStyle(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetColor(QsciLexerIDL* self, const QColor* c, int style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIDL*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetColor(QsciLexerIDL* self, const QColor* c, int style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetColor_IsBase(true);
        vqscilexeridl->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIDL*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetColor(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetColor_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetEolFill(QsciLexerIDL* self, bool eoffill, int style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIDL*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetEolFill(QsciLexerIDL* self, bool eoffill, int style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetEolFill_IsBase(true);
        vqscilexeridl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIDL*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetEolFill(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetFont(QsciLexerIDL* self, const QFont* f, int style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIDL*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetFont(QsciLexerIDL* self, const QFont* f, int style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFont_IsBase(true);
        vqscilexeridl->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIDL*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetFont(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetFont_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_SetPaper(QsciLexerIDL* self, const QColor* c, int style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIDL*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseSetPaper(QsciLexerIDL* self, const QColor* c, int style) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetPaper_IsBase(true);
        vqscilexeridl->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerIDL*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSetPaper(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIDL_ReadProperties(QsciLexerIDL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerIDL*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerIDL_QBaseReadProperties(QsciLexerIDL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_ReadProperties_IsBase(true);
        return vqscilexeridl->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerIDL*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnReadProperties(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIDL_WriteProperties(const QsciLexerIDL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerIDL*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerIDL_QBaseWriteProperties(const QsciLexerIDL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_WriteProperties_IsBase(true);
        return vqscilexeridl->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerIDL*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnWriteProperties(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIDL_Event(QsciLexerIDL* self, QEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->event(event);
    } else {
        return ((VirtualQsciLexerIDL*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerIDL_QBaseEvent(QsciLexerIDL* self, QEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Event_IsBase(true);
        return vqscilexeridl->event(event);
    } else {
        return ((VirtualQsciLexerIDL*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnEvent(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Event_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIDL_EventFilter(QsciLexerIDL* self, QObject* watched, QEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerIDL*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerIDL_QBaseEventFilter(QsciLexerIDL* self, QObject* watched, QEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_EventFilter_IsBase(true);
        return vqscilexeridl->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerIDL*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnEventFilter(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_TimerEvent(QsciLexerIDL* self, QTimerEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->timerEvent(event);
    } else {
        ((VirtualQsciLexerIDL*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseTimerEvent(QsciLexerIDL* self, QTimerEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_TimerEvent_IsBase(true);
        vqscilexeridl->timerEvent(event);
    } else {
        ((VirtualQsciLexerIDL*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnTimerEvent(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_ChildEvent(QsciLexerIDL* self, QChildEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->childEvent(event);
    } else {
        ((VirtualQsciLexerIDL*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseChildEvent(QsciLexerIDL* self, QChildEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_ChildEvent_IsBase(true);
        vqscilexeridl->childEvent(event);
    } else {
        ((VirtualQsciLexerIDL*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnChildEvent(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_CustomEvent(QsciLexerIDL* self, QEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->customEvent(event);
    } else {
        ((VirtualQsciLexerIDL*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseCustomEvent(QsciLexerIDL* self, QEvent* event) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_CustomEvent_IsBase(true);
        vqscilexeridl->customEvent(event);
    } else {
        ((VirtualQsciLexerIDL*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnCustomEvent(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_ConnectNotify(QsciLexerIDL* self, const QMetaMethod* signal) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerIDL*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseConnectNotify(QsciLexerIDL* self, const QMetaMethod* signal) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_ConnectNotify_IsBase(true);
        vqscilexeridl->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerIDL*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnConnectNotify(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerIDL_DisconnectNotify(QsciLexerIDL* self, const QMetaMethod* signal) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerIDL*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerIDL_QBaseDisconnectNotify(QsciLexerIDL* self, const QMetaMethod* signal) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DisconnectNotify_IsBase(true);
        vqscilexeridl->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerIDL*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnDisconnectNotify(QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = dynamic_cast<VirtualQsciLexerIDL*>(self);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerIDL_TextAsBytes(const QsciLexerIDL* self, const libqt_string text) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        QByteArray _qb = vqscilexeridl->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerIDL*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerIDL_QBaseTextAsBytes(const QsciLexerIDL* self, const libqt_string text) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexeridl->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerIDL*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnTextAsBytes(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerIDL_BytesAsText(const QsciLexerIDL* self, const char* bytes, int size) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        QString _ret = vqscilexeridl->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerIDL*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerIDL_QBaseBytesAsText(const QsciLexerIDL* self, const char* bytes, int size) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BytesAsText_IsBase(true);
        QString _ret = vqscilexeridl->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerIDL*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerIDL_OnBytesAsText(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerIDL_Sender(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->sender();
    } else {
        return ((VirtualQsciLexerIDL*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerIDL_QBaseSender(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Sender_IsBase(true);
        return vqscilexeridl->sender();
    } else {
        return ((VirtualQsciLexerIDL*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSender(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Sender_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIDL_SenderSignalIndex(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerIDL*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerIDL_QBaseSenderSignalIndex(const QsciLexerIDL* self) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SenderSignalIndex_IsBase(true);
        return vqscilexeridl->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerIDL*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnSenderSignalIndex(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerIDL_Receivers(const QsciLexerIDL* self, const char* signal) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->receivers(signal);
    } else {
        return ((VirtualQsciLexerIDL*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerIDL_QBaseReceivers(const QsciLexerIDL* self, const char* signal) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Receivers_IsBase(true);
        return vqscilexeridl->receivers(signal);
    } else {
        return ((VirtualQsciLexerIDL*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnReceivers(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_Receivers_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerIDL_IsSignalConnected(const QsciLexerIDL* self, const QMetaMethod* signal) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        return vqscilexeridl->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerIDL*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerIDL_QBaseIsSignalConnected(const QsciLexerIDL* self, const QMetaMethod* signal) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_IsSignalConnected_IsBase(true);
        return vqscilexeridl->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerIDL*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIDL_OnIsSignalConnected(const QsciLexerIDL* self, intptr_t slot) {
    auto* vqscilexeridl = const_cast<VirtualQsciLexerIDL*>(dynamic_cast<const VirtualQsciLexerIDL*>(self));
    if (vqscilexeridl && vqscilexeridl->isVirtualQsciLexerIDL) {
        vqscilexeridl->setQsciLexerIDL_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerIDL::QsciLexerIDL_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerIDL_Delete(QsciLexerIDL* self) {
    delete self;
}
