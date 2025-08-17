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
#include <qscilexercoffeescript.h>
#include "libqscilexercoffeescript.h"
#include "libqscilexercoffeescript.hxx"

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new() {
    return new VirtualQsciLexerCoffeeScript();
}

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new2(QObject* parent) {
    return new VirtualQsciLexerCoffeeScript(parent);
}

QMetaObject* QsciLexerCoffeeScript_MetaObject(const QsciLexerCoffeeScript* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCoffeeScript_Metacast(QsciLexerCoffeeScript* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCoffeeScript_Metacall(QsciLexerCoffeeScript* self, int param1, int param2, void** param3) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCoffeeScript_OnMetacall(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCoffeeScript_QBaseMetacall(QsciLexerCoffeeScript* self, int param1, int param2, void** param3) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Metacall_IsBase(true);
        return vqscilexercoffeescript->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCoffeeScript_Tr(const char* s) {
    QString _ret = QsciLexerCoffeeScript::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerCoffeeScript_DefaultColor(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCoffeeScript_DefaultFont(const QsciLexerCoffeeScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCoffeeScript_DefaultPaper(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerCoffeeScript_DollarsAllowed(const QsciLexerCoffeeScript* self) {
    return self->dollarsAllowed();
}

void QsciLexerCoffeeScript_SetDollarsAllowed(QsciLexerCoffeeScript* self, bool allowed) {
    self->setDollarsAllowed(allowed);
}

bool QsciLexerCoffeeScript_FoldComments(const QsciLexerCoffeeScript* self) {
    return self->foldComments();
}

void QsciLexerCoffeeScript_SetFoldComments(QsciLexerCoffeeScript* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerCoffeeScript_FoldCompact(const QsciLexerCoffeeScript* self) {
    return self->foldCompact();
}

void QsciLexerCoffeeScript_SetFoldCompact(QsciLexerCoffeeScript* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerCoffeeScript_StylePreprocessor(const QsciLexerCoffeeScript* self) {
    return self->stylePreprocessor();
}

void QsciLexerCoffeeScript_SetStylePreprocessor(QsciLexerCoffeeScript* self, bool style) {
    self->setStylePreprocessor(style);
}

libqt_string QsciLexerCoffeeScript_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCoffeeScript::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCoffeeScript_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCoffeeScript::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCoffeeScript_BlockEnd1(const QsciLexerCoffeeScript* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCoffeeScript_BlockStart1(const QsciLexerCoffeeScript* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCoffeeScript_BlockStartKeyword1(const QsciLexerCoffeeScript* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_Language(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return (const char*)vqscilexercoffeescript->language();
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_QBaseLanguage(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Language_IsBase(true);
        return (const char*)vqscilexercoffeescript->language();
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnLanguage(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Language_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_Lexer(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return (const char*)vqscilexercoffeescript->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_QBaseLexer(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Lexer_IsBase(true);
        return (const char*)vqscilexercoffeescript->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnLexer(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCoffeeScript_LexerId(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->lexerId();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCoffeeScript_QBaseLexerId(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_LexerId_IsBase(true);
        return vqscilexercoffeescript->lexerId();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnLexerId(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_AutoCompletionFillups(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return (const char*)vqscilexercoffeescript->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_QBaseAutoCompletionFillups(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercoffeescript->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnAutoCompletionFillups(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCoffeeScript_AutoCompletionWordSeparators(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        QList<QString> _ret = vqscilexercoffeescript->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
        QList<QString> _ret = ((VirtualQsciLexerCoffeeScript*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
libqt_list /* of libqt_string */ QsciLexerCoffeeScript_QBaseAutoCompletionWordSeparators(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexercoffeescript->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
        QList<QString> _ret = ((VirtualQsciLexerCoffeeScript*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
void QsciLexerCoffeeScript_OnAutoCompletionWordSeparators(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_BlockEnd(const QsciLexerCoffeeScript* self, int* style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return (const char*)vqscilexercoffeescript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_QBaseBlockEnd(const QsciLexerCoffeeScript* self, int* style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BlockEnd_IsBase(true);
        return (const char*)vqscilexercoffeescript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnBlockEnd(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCoffeeScript_BlockLookback(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->blockLookback();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCoffeeScript_QBaseBlockLookback(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BlockLookback_IsBase(true);
        return vqscilexercoffeescript->blockLookback();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnBlockLookback(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_BlockStart(const QsciLexerCoffeeScript* self, int* style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return (const char*)vqscilexercoffeescript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_QBaseBlockStart(const QsciLexerCoffeeScript* self, int* style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BlockStart_IsBase(true);
        return (const char*)vqscilexercoffeescript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnBlockStart(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_BlockStartKeyword(const QsciLexerCoffeeScript* self, int* style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return (const char*)vqscilexercoffeescript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_QBaseBlockStartKeyword(const QsciLexerCoffeeScript* self, int* style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercoffeescript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnBlockStartKeyword(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCoffeeScript_BraceStyle(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->braceStyle();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCoffeeScript_QBaseBraceStyle(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BraceStyle_IsBase(true);
        return vqscilexercoffeescript->braceStyle();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnBraceStyle(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_CaseSensitive(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->caseSensitive();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_QBaseCaseSensitive(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_CaseSensitive_IsBase(true);
        return vqscilexercoffeescript->caseSensitive();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnCaseSensitive(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCoffeeScript_Color(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return new QColor(vqscilexercoffeescript->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCoffeeScript*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCoffeeScript_QBaseColor(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Color_IsBase(true);
        return new QColor(vqscilexercoffeescript->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCoffeeScript*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnColor(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Color_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_EolFill(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_QBaseEolFill(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_EolFill_IsBase(true);
        return vqscilexercoffeescript->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnEolFill(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCoffeeScript_Font(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return new QFont(vqscilexercoffeescript->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCoffeeScript*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCoffeeScript_QBaseFont(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Font_IsBase(true);
        return new QFont(vqscilexercoffeescript->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCoffeeScript*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnFont(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Font_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCoffeeScript_IndentationGuideView(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCoffeeScript_QBaseIndentationGuideView(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_IndentationGuideView_IsBase(true);
        return vqscilexercoffeescript->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnIndentationGuideView(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_Keywords(const QsciLexerCoffeeScript* self, int set) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return (const char*)vqscilexercoffeescript->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_QBaseKeywords(const QsciLexerCoffeeScript* self, int set) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Keywords_IsBase(true);
        return (const char*)vqscilexercoffeescript->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnKeywords(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Keywords_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCoffeeScript_DefaultStyle(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->defaultStyle();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCoffeeScript_QBaseDefaultStyle(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultStyle_IsBase(true);
        return vqscilexercoffeescript->defaultStyle();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultStyle(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCoffeeScript_Description(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        QString _ret = vqscilexercoffeescript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCoffeeScript*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerCoffeeScript_QBaseDescription(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Description_IsBase(true);
        QString _ret = vqscilexercoffeescript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCoffeeScript*)self)->description(static_cast<int>(style));
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
void QsciLexerCoffeeScript_OnDescription(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Description_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCoffeeScript_Paper(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return new QColor(vqscilexercoffeescript->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCoffeeScript*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCoffeeScript_QBasePaper(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Paper_IsBase(true);
        return new QColor(vqscilexercoffeescript->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCoffeeScript*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnPaper(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Paper_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCoffeeScript_DefaultColor2(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return new QColor(vqscilexercoffeescript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCoffeeScript*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCoffeeScript_QBaseDefaultColor2(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultColor2_IsBase(true);
        return new QColor(vqscilexercoffeescript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCoffeeScript*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultColor2(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_DefaultEolFill(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_QBaseDefaultEolFill(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultEolFill_IsBase(true);
        return vqscilexercoffeescript->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultEolFill(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCoffeeScript_DefaultFont2(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return new QFont(vqscilexercoffeescript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCoffeeScript*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCoffeeScript_QBaseDefaultFont2(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultFont2_IsBase(true);
        return new QFont(vqscilexercoffeescript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCoffeeScript*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultFont2(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCoffeeScript_DefaultPaper2(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return new QColor(vqscilexercoffeescript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCoffeeScript*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCoffeeScript_QBaseDefaultPaper2(const QsciLexerCoffeeScript* self, int style) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexercoffeescript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCoffeeScript*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultPaper2(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetEditor(QsciLexerCoffeeScript* self, QsciScintilla* editor) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setEditor(editor);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseSetEditor(QsciLexerCoffeeScript* self, QsciScintilla* editor) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetEditor_IsBase(true);
        vqscilexercoffeescript->setEditor(editor);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetEditor(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_RefreshProperties(QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->refreshProperties();
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseRefreshProperties(QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_RefreshProperties_IsBase(true);
        vqscilexercoffeescript->refreshProperties();
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnRefreshProperties(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCoffeeScript_StyleBitsNeeded(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCoffeeScript_QBaseStyleBitsNeeded(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_StyleBitsNeeded_IsBase(true);
        return vqscilexercoffeescript->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnStyleBitsNeeded(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_WordCharacters(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return (const char*)vqscilexercoffeescript->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_QBaseWordCharacters(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_WordCharacters_IsBase(true);
        return (const char*)vqscilexercoffeescript->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCoffeeScript*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnWordCharacters(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetAutoIndentStyle(QsciLexerCoffeeScript* self, int autoindentstyle) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseSetAutoIndentStyle(QsciLexerCoffeeScript* self, int autoindentstyle) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetAutoIndentStyle_IsBase(true);
        vqscilexercoffeescript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetAutoIndentStyle(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetColor(QsciLexerCoffeeScript* self, const QColor* c, int style) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseSetColor(QsciLexerCoffeeScript* self, const QColor* c, int style) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetColor_IsBase(true);
        vqscilexercoffeescript->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetColor(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetEolFill(QsciLexerCoffeeScript* self, bool eoffill, int style) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseSetEolFill(QsciLexerCoffeeScript* self, bool eoffill, int style) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetEolFill_IsBase(true);
        vqscilexercoffeescript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetEolFill(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetFont(QsciLexerCoffeeScript* self, const QFont* f, int style) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseSetFont(QsciLexerCoffeeScript* self, const QFont* f, int style) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetFont_IsBase(true);
        vqscilexercoffeescript->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetFont(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetPaper(QsciLexerCoffeeScript* self, const QColor* c, int style) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseSetPaper(QsciLexerCoffeeScript* self, const QColor* c, int style) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetPaper_IsBase(true);
        vqscilexercoffeescript->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetPaper(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_ReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_QBaseReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_ReadProperties_IsBase(true);
        return vqscilexercoffeescript->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnReadProperties(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_WriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_QBaseWriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_WriteProperties_IsBase(true);
        return vqscilexercoffeescript->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnWriteProperties(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_Event(QsciLexerCoffeeScript* self, QEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->event(event);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_QBaseEvent(QsciLexerCoffeeScript* self, QEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Event_IsBase(true);
        return vqscilexercoffeescript->event(event);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnEvent(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Event_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_EventFilter(QsciLexerCoffeeScript* self, QObject* watched, QEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_QBaseEventFilter(QsciLexerCoffeeScript* self, QObject* watched, QEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_EventFilter_IsBase(true);
        return vqscilexercoffeescript->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnEventFilter(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_TimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->timerEvent(event);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseTimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_TimerEvent_IsBase(true);
        vqscilexercoffeescript->timerEvent(event);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnTimerEvent(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_ChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->childEvent(event);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_ChildEvent_IsBase(true);
        vqscilexercoffeescript->childEvent(event);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnChildEvent(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_CustomEvent(QsciLexerCoffeeScript* self, QEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->customEvent(event);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseCustomEvent(QsciLexerCoffeeScript* self, QEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_CustomEvent_IsBase(true);
        vqscilexercoffeescript->customEvent(event);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnCustomEvent(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_ConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_ConnectNotify_IsBase(true);
        vqscilexercoffeescript->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnConnectNotify(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCoffeeScript_DisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_QBaseDisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DisconnectNotify_IsBase(true);
        vqscilexercoffeescript->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCoffeeScript*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDisconnectNotify(QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCoffeeScript_TextAsBytes(const QsciLexerCoffeeScript* self, const libqt_string text) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        QByteArray _qb = vqscilexercoffeescript->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCoffeeScript*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerCoffeeScript_QBaseTextAsBytes(const QsciLexerCoffeeScript* self, const libqt_string text) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexercoffeescript->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCoffeeScript*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnTextAsBytes(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCoffeeScript_BytesAsText(const QsciLexerCoffeeScript* self, const char* bytes, int size) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        QString _ret = vqscilexercoffeescript->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCoffeeScript*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerCoffeeScript_QBaseBytesAsText(const QsciLexerCoffeeScript* self, const char* bytes, int size) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BytesAsText_IsBase(true);
        QString _ret = vqscilexercoffeescript->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCoffeeScript*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerCoffeeScript_OnBytesAsText(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCoffeeScript_Sender(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->sender();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCoffeeScript_QBaseSender(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Sender_IsBase(true);
        return vqscilexercoffeescript->sender();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSender(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Sender_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCoffeeScript_SenderSignalIndex(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCoffeeScript_QBaseSenderSignalIndex(const QsciLexerCoffeeScript* self) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SenderSignalIndex_IsBase(true);
        return vqscilexercoffeescript->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSenderSignalIndex(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCoffeeScript_Receivers(const QsciLexerCoffeeScript* self, const char* signal) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->receivers(signal);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCoffeeScript_QBaseReceivers(const QsciLexerCoffeeScript* self, const char* signal) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Receivers_IsBase(true);
        return vqscilexercoffeescript->receivers(signal);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnReceivers(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_IsSignalConnected(const QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        return vqscilexercoffeescript->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_QBaseIsSignalConnected(const QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_IsSignalConnected_IsBase(true);
        return vqscilexercoffeescript->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCoffeeScript*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnIsSignalConnected(const QsciLexerCoffeeScript* self, intptr_t slot) {
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript && vqscilexercoffeescript->isVirtualQsciLexerCoffeeScript) {
        vqscilexercoffeescript->setQsciLexerCoffeeScript_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCoffeeScript_Delete(QsciLexerCoffeeScript* self) {
    delete self;
}
