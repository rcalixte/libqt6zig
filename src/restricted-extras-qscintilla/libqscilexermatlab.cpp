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
#include <qscilexermatlab.h>
#include "libqscilexermatlab.h"
#include "libqscilexermatlab.hxx"

QsciLexerMatlab* QsciLexerMatlab_new() {
    return new VirtualQsciLexerMatlab();
}

QsciLexerMatlab* QsciLexerMatlab_new2(QObject* parent) {
    return new VirtualQsciLexerMatlab(parent);
}

QMetaObject* QsciLexerMatlab_MetaObject(const QsciLexerMatlab* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMatlab_Metacast(QsciLexerMatlab* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMatlab_Metacall(QsciLexerMatlab* self, int param1, int param2, void** param3) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerMatlab_Tr(const char* s) {
    QString _ret = QsciLexerMatlab::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerMatlab_Language(const QsciLexerMatlab* self) {
    return (const char*)self->language();
}

const char* QsciLexerMatlab_Lexer(const QsciLexerMatlab* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerMatlab_DefaultColor(const QsciLexerMatlab* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMatlab_DefaultFont(const QsciLexerMatlab* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerMatlab_Keywords(const QsciLexerMatlab* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerMatlab_Description(const QsciLexerMatlab* self, int style) {
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

libqt_string QsciLexerMatlab_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerMatlab::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMatlab_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerMatlab::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int QsciLexerMatlab_QBaseMetacall(QsciLexerMatlab* self, int param1, int param2, void** param3) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Metacall_IsBase(true);
        return vqscilexermatlab->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnMetacall(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Metacall_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_LexerId(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->lexerId();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseLexerId(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_LexerId_IsBase(true);
        return vqscilexermatlab->lexerId();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnLexerId(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_LexerId_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_AutoCompletionFillups(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return (const char*)vqscilexermatlab->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseAutoCompletionFillups(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexermatlab->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnAutoCompletionFillups(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMatlab_AutoCompletionWordSeparators(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        QList<QString> _ret = vqscilexermatlab->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerMatlab*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerMatlab_QBaseAutoCompletionWordSeparators(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexermatlab->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerMatlab*)self)->autoCompletionWordSeparators();
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
void QsciLexerMatlab_OnAutoCompletionWordSeparators(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockEnd(const QsciLexerMatlab* self, int* style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return (const char*)vqscilexermatlab->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseBlockEnd(const QsciLexerMatlab* self, int* style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BlockEnd_IsBase(true);
        return (const char*)vqscilexermatlab->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockEnd(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_BlockLookback(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->blockLookback();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseBlockLookback(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BlockLookback_IsBase(true);
        return vqscilexermatlab->blockLookback();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockLookback(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockStart(const QsciLexerMatlab* self, int* style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return (const char*)vqscilexermatlab->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseBlockStart(const QsciLexerMatlab* self, int* style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BlockStart_IsBase(true);
        return (const char*)vqscilexermatlab->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockStart(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockStartKeyword(const QsciLexerMatlab* self, int* style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return (const char*)vqscilexermatlab->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseBlockStartKeyword(const QsciLexerMatlab* self, int* style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexermatlab->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockStartKeyword(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_BraceStyle(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->braceStyle();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseBraceStyle(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BraceStyle_IsBase(true);
        return vqscilexermatlab->braceStyle();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBraceStyle(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_CaseSensitive(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->caseSensitive();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseCaseSensitive(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_CaseSensitive_IsBase(true);
        return vqscilexermatlab->caseSensitive();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnCaseSensitive(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMatlab_Color(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return new QColor(vqscilexermatlab->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMatlab*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMatlab_QBaseColor(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Color_IsBase(true);
        return new QColor(vqscilexermatlab->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMatlab*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnColor(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Color_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_EolFill(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMatlab*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseEolFill(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_EolFill_IsBase(true);
        return vqscilexermatlab->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMatlab*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEolFill(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_EolFill_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMatlab_Font(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return new QFont(vqscilexermatlab->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMatlab*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMatlab_QBaseFont(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Font_IsBase(true);
        return new QFont(vqscilexermatlab->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMatlab*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnFont(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Font_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_IndentationGuideView(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->indentationGuideView();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseIndentationGuideView(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_IndentationGuideView_IsBase(true);
        return vqscilexermatlab->indentationGuideView();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnIndentationGuideView(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_DefaultStyle(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->defaultStyle();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseDefaultStyle(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultStyle_IsBase(true);
        return vqscilexermatlab->defaultStyle();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultStyle(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMatlab_Paper(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return new QColor(vqscilexermatlab->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMatlab*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMatlab_QBasePaper(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Paper_IsBase(true);
        return new QColor(vqscilexermatlab->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMatlab*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnPaper(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Paper_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMatlab_DefaultColor2(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return new QColor(vqscilexermatlab->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMatlab*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMatlab_QBaseDefaultColor2(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultColor2_IsBase(true);
        return new QColor(vqscilexermatlab->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMatlab*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultColor2(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_DefaultEolFill(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMatlab*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseDefaultEolFill(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultEolFill_IsBase(true);
        return vqscilexermatlab->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMatlab*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultEolFill(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMatlab_DefaultFont2(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return new QFont(vqscilexermatlab->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMatlab*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMatlab_QBaseDefaultFont2(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultFont2_IsBase(true);
        return new QFont(vqscilexermatlab->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMatlab*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultFont2(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMatlab_DefaultPaper2(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return new QColor(vqscilexermatlab->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMatlab*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMatlab_QBaseDefaultPaper2(const QsciLexerMatlab* self, int style) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexermatlab->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMatlab*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultPaper2(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetEditor(QsciLexerMatlab* self, QsciScintilla* editor) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setEditor(editor);
    } else {
        ((VirtualQsciLexerMatlab*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetEditor(QsciLexerMatlab* self, QsciScintilla* editor) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetEditor_IsBase(true);
        vqscilexermatlab->setEditor(editor);
    } else {
        ((VirtualQsciLexerMatlab*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetEditor(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_RefreshProperties(QsciLexerMatlab* self) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->refreshProperties();
    } else {
        ((VirtualQsciLexerMatlab*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseRefreshProperties(QsciLexerMatlab* self) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_RefreshProperties_IsBase(true);
        vqscilexermatlab->refreshProperties();
    } else {
        ((VirtualQsciLexerMatlab*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnRefreshProperties(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_StyleBitsNeeded(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseStyleBitsNeeded(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_StyleBitsNeeded_IsBase(true);
        return vqscilexermatlab->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnStyleBitsNeeded(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_WordCharacters(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return (const char*)vqscilexermatlab->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseWordCharacters(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_WordCharacters_IsBase(true);
        return (const char*)vqscilexermatlab->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerMatlab*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnWordCharacters(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetAutoIndentStyle(QsciLexerMatlab* self, int autoindentstyle) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetAutoIndentStyle(QsciLexerMatlab* self, int autoindentstyle) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetAutoIndentStyle_IsBase(true);
        vqscilexermatlab->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetAutoIndentStyle(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetColor(QsciLexerMatlab* self, const QColor* c, int style) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetColor(QsciLexerMatlab* self, const QColor* c, int style) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetColor_IsBase(true);
        vqscilexermatlab->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetColor(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetColor_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetEolFill(QsciLexerMatlab* self, bool eoffill, int style) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetEolFill(QsciLexerMatlab* self, bool eoffill, int style) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetEolFill_IsBase(true);
        vqscilexermatlab->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetEolFill(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetFont(QsciLexerMatlab* self, const QFont* f, int style) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetFont(QsciLexerMatlab* self, const QFont* f, int style) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetFont_IsBase(true);
        vqscilexermatlab->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetFont(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetFont_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetPaper(QsciLexerMatlab* self, const QColor* c, int style) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetPaper(QsciLexerMatlab* self, const QColor* c, int style) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetPaper_IsBase(true);
        vqscilexermatlab->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMatlab*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetPaper(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_ReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_ReadProperties_IsBase(true);
        return vqscilexermatlab->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnReadProperties(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_WriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseWriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_WriteProperties_IsBase(true);
        return vqscilexermatlab->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnWriteProperties(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_Event(QsciLexerMatlab* self, QEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->event(event);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseEvent(QsciLexerMatlab* self, QEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Event_IsBase(true);
        return vqscilexermatlab->event(event);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEvent(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Event_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_EventFilter(QsciLexerMatlab* self, QObject* watched, QEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseEventFilter(QsciLexerMatlab* self, QObject* watched, QEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_EventFilter_IsBase(true);
        return vqscilexermatlab->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEventFilter(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_TimerEvent(QsciLexerMatlab* self, QTimerEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->timerEvent(event);
    } else {
        ((VirtualQsciLexerMatlab*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseTimerEvent(QsciLexerMatlab* self, QTimerEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_TimerEvent_IsBase(true);
        vqscilexermatlab->timerEvent(event);
    } else {
        ((VirtualQsciLexerMatlab*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnTimerEvent(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_ChildEvent(QsciLexerMatlab* self, QChildEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->childEvent(event);
    } else {
        ((VirtualQsciLexerMatlab*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseChildEvent(QsciLexerMatlab* self, QChildEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_ChildEvent_IsBase(true);
        vqscilexermatlab->childEvent(event);
    } else {
        ((VirtualQsciLexerMatlab*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnChildEvent(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_CustomEvent(QsciLexerMatlab* self, QEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->customEvent(event);
    } else {
        ((VirtualQsciLexerMatlab*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseCustomEvent(QsciLexerMatlab* self, QEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_CustomEvent_IsBase(true);
        vqscilexermatlab->customEvent(event);
    } else {
        ((VirtualQsciLexerMatlab*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnCustomEvent(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_ConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerMatlab*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_ConnectNotify_IsBase(true);
        vqscilexermatlab->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerMatlab*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnConnectNotify(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_DisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerMatlab*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseDisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DisconnectNotify_IsBase(true);
        vqscilexermatlab->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerMatlab*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDisconnectNotify(QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerMatlab_TextAsBytes(const QsciLexerMatlab* self, const libqt_string text) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        QByteArray _qb = vqscilexermatlab->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerMatlab*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerMatlab_QBaseTextAsBytes(const QsciLexerMatlab* self, const libqt_string text) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexermatlab->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerMatlab*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnTextAsBytes(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerMatlab_BytesAsText(const QsciLexerMatlab* self, const char* bytes, int size) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        QString _ret = vqscilexermatlab->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerMatlab*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerMatlab_QBaseBytesAsText(const QsciLexerMatlab* self, const char* bytes, int size) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BytesAsText_IsBase(true);
        QString _ret = vqscilexermatlab->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerMatlab*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerMatlab_OnBytesAsText(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerMatlab_Sender(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->sender();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerMatlab_QBaseSender(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Sender_IsBase(true);
        return vqscilexermatlab->sender();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSender(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Sender_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_SenderSignalIndex(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseSenderSignalIndex(const QsciLexerMatlab* self) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SenderSignalIndex_IsBase(true);
        return vqscilexermatlab->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerMatlab*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSenderSignalIndex(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_Receivers(const QsciLexerMatlab* self, const char* signal) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->receivers(signal);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseReceivers(const QsciLexerMatlab* self, const char* signal) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Receivers_IsBase(true);
        return vqscilexermatlab->receivers(signal);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnReceivers(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_Receivers_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_IsSignalConnected(const QsciLexerMatlab* self, const QMetaMethod* signal) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        return vqscilexermatlab->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseIsSignalConnected(const QsciLexerMatlab* self, const QMetaMethod* signal) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_IsSignalConnected_IsBase(true);
        return vqscilexermatlab->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerMatlab*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnIsSignalConnected(const QsciLexerMatlab* self, intptr_t slot) {
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab && vqscilexermatlab->isVirtualQsciLexerMatlab) {
        vqscilexermatlab->setQsciLexerMatlab_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerMatlab_Delete(QsciLexerMatlab* self) {
    delete self;
}
