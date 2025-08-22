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
#include <qscilexerproperties.h>
#include "libqscilexerproperties.h"
#include "libqscilexerproperties.hxx"

QsciLexerProperties* QsciLexerProperties_new() {
    return new VirtualQsciLexerProperties();
}

QsciLexerProperties* QsciLexerProperties_new2(QObject* parent) {
    return new VirtualQsciLexerProperties(parent);
}

QMetaObject* QsciLexerProperties_MetaObject(const QsciLexerProperties* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerProperties_Metacast(QsciLexerProperties* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerProperties_Metacall(QsciLexerProperties* self, int param1, int param2, void** param3) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerProperties*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerProperties_OnMetacall(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Metacall_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerProperties_QBaseMetacall(QsciLexerProperties* self, int param1, int param2, void** param3) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Metacall_IsBase(true);
        return vqscilexerproperties->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerProperties*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerProperties_Tr(const char* s) {
    QString _ret = QsciLexerProperties::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerProperties_DefaultColor(const QsciLexerProperties* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerProperties_DefaultFont(const QsciLexerProperties* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerProperties_DefaultPaper(const QsciLexerProperties* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerProperties_FoldCompact(const QsciLexerProperties* self) {
    return self->foldCompact();
}

void QsciLexerProperties_SetInitialSpaces(QsciLexerProperties* self, bool enable) {
    self->setInitialSpaces(enable);
}

bool QsciLexerProperties_InitialSpaces(const QsciLexerProperties* self) {
    return self->initialSpaces();
}

libqt_string QsciLexerProperties_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerProperties::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerProperties_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerProperties::tr(s, c, static_cast<int>(n));
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
void QsciLexerProperties_SetFoldCompact(QsciLexerProperties* self, bool fold) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerProperties*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseSetFoldCompact(QsciLexerProperties* self, bool fold) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetFoldCompact_IsBase(true);
        vqscilexerproperties->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerProperties*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetFoldCompact(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerProperties_Language(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return (const char*)vqscilexerproperties->language();
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerProperties_QBaseLanguage(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Language_IsBase(true);
        return (const char*)vqscilexerproperties->language();
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnLanguage(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Language_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerProperties_Lexer(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return (const char*)vqscilexerproperties->lexer();
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerProperties_QBaseLexer(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Lexer_IsBase(true);
        return (const char*)vqscilexerproperties->lexer();
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnLexer(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Lexer_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerProperties_LexerId(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->lexerId();
    } else {
        return ((VirtualQsciLexerProperties*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerProperties_QBaseLexerId(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_LexerId_IsBase(true);
        return vqscilexerproperties->lexerId();
    } else {
        return ((VirtualQsciLexerProperties*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnLexerId(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_LexerId_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerProperties_AutoCompletionFillups(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return (const char*)vqscilexerproperties->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerProperties_QBaseAutoCompletionFillups(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerproperties->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnAutoCompletionFillups(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerProperties_AutoCompletionWordSeparators(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        QList<QString> _ret = vqscilexerproperties->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerProperties*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerProperties_QBaseAutoCompletionWordSeparators(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerproperties->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerProperties*)self)->autoCompletionWordSeparators();
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
void QsciLexerProperties_OnAutoCompletionWordSeparators(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerProperties_BlockEnd(const QsciLexerProperties* self, int* style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return (const char*)vqscilexerproperties->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerProperties_QBaseBlockEnd(const QsciLexerProperties* self, int* style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BlockEnd_IsBase(true);
        return (const char*)vqscilexerproperties->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBlockEnd(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerProperties_BlockLookback(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->blockLookback();
    } else {
        return ((VirtualQsciLexerProperties*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerProperties_QBaseBlockLookback(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BlockLookback_IsBase(true);
        return vqscilexerproperties->blockLookback();
    } else {
        return ((VirtualQsciLexerProperties*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBlockLookback(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerProperties_BlockStart(const QsciLexerProperties* self, int* style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return (const char*)vqscilexerproperties->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerProperties_QBaseBlockStart(const QsciLexerProperties* self, int* style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BlockStart_IsBase(true);
        return (const char*)vqscilexerproperties->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBlockStart(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerProperties_BlockStartKeyword(const QsciLexerProperties* self, int* style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return (const char*)vqscilexerproperties->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerProperties_QBaseBlockStartKeyword(const QsciLexerProperties* self, int* style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerproperties->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBlockStartKeyword(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerProperties_BraceStyle(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->braceStyle();
    } else {
        return ((VirtualQsciLexerProperties*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerProperties_QBaseBraceStyle(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BraceStyle_IsBase(true);
        return vqscilexerproperties->braceStyle();
    } else {
        return ((VirtualQsciLexerProperties*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBraceStyle(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerProperties_CaseSensitive(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->caseSensitive();
    } else {
        return ((VirtualQsciLexerProperties*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerProperties_QBaseCaseSensitive(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_CaseSensitive_IsBase(true);
        return vqscilexerproperties->caseSensitive();
    } else {
        return ((VirtualQsciLexerProperties*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnCaseSensitive(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerProperties_Color(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return new QColor(vqscilexerproperties->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerProperties*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerProperties_QBaseColor(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Color_IsBase(true);
        return new QColor(vqscilexerproperties->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerProperties*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnColor(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Color_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerProperties_EolFill(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerProperties*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerProperties_QBaseEolFill(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_EolFill_IsBase(true);
        return vqscilexerproperties->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerProperties*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnEolFill(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_EolFill_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerProperties_Font(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return new QFont(vqscilexerproperties->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerProperties*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerProperties_QBaseFont(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Font_IsBase(true);
        return new QFont(vqscilexerproperties->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerProperties*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnFont(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Font_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerProperties_IndentationGuideView(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->indentationGuideView();
    } else {
        return ((VirtualQsciLexerProperties*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerProperties_QBaseIndentationGuideView(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_IndentationGuideView_IsBase(true);
        return vqscilexerproperties->indentationGuideView();
    } else {
        return ((VirtualQsciLexerProperties*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnIndentationGuideView(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerProperties_Keywords(const QsciLexerProperties* self, int set) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return (const char*)vqscilexerproperties->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerProperties_QBaseKeywords(const QsciLexerProperties* self, int set) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Keywords_IsBase(true);
        return (const char*)vqscilexerproperties->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnKeywords(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Keywords_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerProperties_DefaultStyle(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->defaultStyle();
    } else {
        return ((VirtualQsciLexerProperties*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerProperties_QBaseDefaultStyle(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultStyle_IsBase(true);
        return vqscilexerproperties->defaultStyle();
    } else {
        return ((VirtualQsciLexerProperties*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultStyle(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerProperties_Description(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        QString _ret = vqscilexerproperties->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerProperties*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerProperties_QBaseDescription(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Description_IsBase(true);
        QString _ret = vqscilexerproperties->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerProperties*)self)->description(static_cast<int>(style));
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
void QsciLexerProperties_OnDescription(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Description_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerProperties_Paper(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return new QColor(vqscilexerproperties->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerProperties*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerProperties_QBasePaper(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Paper_IsBase(true);
        return new QColor(vqscilexerproperties->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerProperties*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnPaper(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Paper_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerProperties_DefaultColor2(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return new QColor(vqscilexerproperties->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerProperties*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerProperties_QBaseDefaultColor2(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerproperties->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerProperties*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultColor2(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerProperties_DefaultEolFill(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerProperties*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerProperties_QBaseDefaultEolFill(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultEolFill_IsBase(true);
        return vqscilexerproperties->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerProperties*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultEolFill(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerProperties_DefaultFont2(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return new QFont(vqscilexerproperties->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerProperties*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerProperties_QBaseDefaultFont2(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerproperties->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerProperties*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultFont2(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerProperties_DefaultPaper2(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return new QColor(vqscilexerproperties->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerProperties*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerProperties_QBaseDefaultPaper2(const QsciLexerProperties* self, int style) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerproperties->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerProperties*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultPaper2(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_SetEditor(QsciLexerProperties* self, QsciScintilla* editor) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setEditor(editor);
    } else {
        ((VirtualQsciLexerProperties*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseSetEditor(QsciLexerProperties* self, QsciScintilla* editor) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetEditor_IsBase(true);
        vqscilexerproperties->setEditor(editor);
    } else {
        ((VirtualQsciLexerProperties*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetEditor(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_RefreshProperties(QsciLexerProperties* self) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->refreshProperties();
    } else {
        ((VirtualQsciLexerProperties*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseRefreshProperties(QsciLexerProperties* self) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_RefreshProperties_IsBase(true);
        vqscilexerproperties->refreshProperties();
    } else {
        ((VirtualQsciLexerProperties*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnRefreshProperties(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerProperties_StyleBitsNeeded(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerProperties*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerProperties_QBaseStyleBitsNeeded(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_StyleBitsNeeded_IsBase(true);
        return vqscilexerproperties->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerProperties*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnStyleBitsNeeded(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerProperties_WordCharacters(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return (const char*)vqscilexerproperties->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerProperties_QBaseWordCharacters(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_WordCharacters_IsBase(true);
        return (const char*)vqscilexerproperties->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerProperties*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnWordCharacters(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_SetAutoIndentStyle(QsciLexerProperties* self, int autoindentstyle) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerProperties*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseSetAutoIndentStyle(QsciLexerProperties* self, int autoindentstyle) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetAutoIndentStyle_IsBase(true);
        vqscilexerproperties->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerProperties*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetAutoIndentStyle(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_SetColor(QsciLexerProperties* self, const QColor* c, int style) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerProperties*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseSetColor(QsciLexerProperties* self, const QColor* c, int style) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetColor_IsBase(true);
        vqscilexerproperties->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerProperties*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetColor(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetColor_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_SetEolFill(QsciLexerProperties* self, bool eoffill, int style) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerProperties*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseSetEolFill(QsciLexerProperties* self, bool eoffill, int style) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetEolFill_IsBase(true);
        vqscilexerproperties->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerProperties*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetEolFill(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_SetFont(QsciLexerProperties* self, const QFont* f, int style) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerProperties*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseSetFont(QsciLexerProperties* self, const QFont* f, int style) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetFont_IsBase(true);
        vqscilexerproperties->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerProperties*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetFont(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetFont_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_SetPaper(QsciLexerProperties* self, const QColor* c, int style) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerProperties*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseSetPaper(QsciLexerProperties* self, const QColor* c, int style) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetPaper_IsBase(true);
        vqscilexerproperties->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerProperties*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetPaper(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerProperties_ReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerProperties*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerProperties_QBaseReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_ReadProperties_IsBase(true);
        return vqscilexerproperties->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerProperties*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnReadProperties(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerProperties_WriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerProperties*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerProperties_QBaseWriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_WriteProperties_IsBase(true);
        return vqscilexerproperties->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerProperties*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnWriteProperties(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerProperties_Event(QsciLexerProperties* self, QEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->event(event);
    } else {
        return ((VirtualQsciLexerProperties*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerProperties_QBaseEvent(QsciLexerProperties* self, QEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Event_IsBase(true);
        return vqscilexerproperties->event(event);
    } else {
        return ((VirtualQsciLexerProperties*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnEvent(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Event_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerProperties_EventFilter(QsciLexerProperties* self, QObject* watched, QEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerProperties*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerProperties_QBaseEventFilter(QsciLexerProperties* self, QObject* watched, QEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_EventFilter_IsBase(true);
        return vqscilexerproperties->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerProperties*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnEventFilter(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_TimerEvent(QsciLexerProperties* self, QTimerEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->timerEvent(event);
    } else {
        ((VirtualQsciLexerProperties*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseTimerEvent(QsciLexerProperties* self, QTimerEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_TimerEvent_IsBase(true);
        vqscilexerproperties->timerEvent(event);
    } else {
        ((VirtualQsciLexerProperties*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnTimerEvent(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_ChildEvent(QsciLexerProperties* self, QChildEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->childEvent(event);
    } else {
        ((VirtualQsciLexerProperties*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseChildEvent(QsciLexerProperties* self, QChildEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_ChildEvent_IsBase(true);
        vqscilexerproperties->childEvent(event);
    } else {
        ((VirtualQsciLexerProperties*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnChildEvent(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_CustomEvent(QsciLexerProperties* self, QEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->customEvent(event);
    } else {
        ((VirtualQsciLexerProperties*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseCustomEvent(QsciLexerProperties* self, QEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_CustomEvent_IsBase(true);
        vqscilexerproperties->customEvent(event);
    } else {
        ((VirtualQsciLexerProperties*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnCustomEvent(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_ConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerProperties*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_ConnectNotify_IsBase(true);
        vqscilexerproperties->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerProperties*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnConnectNotify(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerProperties_DisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerProperties*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerProperties_QBaseDisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DisconnectNotify_IsBase(true);
        vqscilexerproperties->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerProperties*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDisconnectNotify(QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerProperties_TextAsBytes(const QsciLexerProperties* self, const libqt_string text) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        QByteArray _qb = vqscilexerproperties->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerProperties*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerProperties_QBaseTextAsBytes(const QsciLexerProperties* self, const libqt_string text) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerproperties->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerProperties*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnTextAsBytes(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerProperties_BytesAsText(const QsciLexerProperties* self, const char* bytes, int size) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        QString _ret = vqscilexerproperties->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerProperties*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerProperties_QBaseBytesAsText(const QsciLexerProperties* self, const char* bytes, int size) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BytesAsText_IsBase(true);
        QString _ret = vqscilexerproperties->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerProperties*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerProperties_OnBytesAsText(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerProperties_Sender(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->sender();
    } else {
        return ((VirtualQsciLexerProperties*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerProperties_QBaseSender(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Sender_IsBase(true);
        return vqscilexerproperties->sender();
    } else {
        return ((VirtualQsciLexerProperties*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSender(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Sender_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerProperties_SenderSignalIndex(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerProperties*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerProperties_QBaseSenderSignalIndex(const QsciLexerProperties* self) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SenderSignalIndex_IsBase(true);
        return vqscilexerproperties->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerProperties*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSenderSignalIndex(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerProperties_Receivers(const QsciLexerProperties* self, const char* signal) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->receivers(signal);
    } else {
        return ((VirtualQsciLexerProperties*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerProperties_QBaseReceivers(const QsciLexerProperties* self, const char* signal) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Receivers_IsBase(true);
        return vqscilexerproperties->receivers(signal);
    } else {
        return ((VirtualQsciLexerProperties*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnReceivers(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_Receivers_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerProperties_IsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        return vqscilexerproperties->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerProperties*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerProperties_QBaseIsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_IsSignalConnected_IsBase(true);
        return vqscilexerproperties->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerProperties*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnIsSignalConnected(const QsciLexerProperties* self, intptr_t slot) {
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties && vqscilexerproperties->isVirtualQsciLexerProperties) {
        vqscilexerproperties->setQsciLexerProperties_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerProperties_Delete(QsciLexerProperties* self) {
    delete self;
}
