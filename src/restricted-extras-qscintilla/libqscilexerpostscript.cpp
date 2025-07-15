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
#include <qscilexerpostscript.h>
#include "libqscilexerpostscript.h"
#include "libqscilexerpostscript.hxx"

QsciLexerPostScript* QsciLexerPostScript_new() {
    return new VirtualQsciLexerPostScript();
}

QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent) {
    return new VirtualQsciLexerPostScript(parent);
}

QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPostScript_Metacall(QsciLexerPostScript* self, int param1, int param2, void** param3) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPostScript_OnMetacall(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPostScript_QBaseMetacall(QsciLexerPostScript* self, int param1, int param2, void** param3) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Metacall_IsBase(true);
        return vqscilexerpostscript->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPostScript_Tr(const char* s) {
    QString _ret = QsciLexerPostScript::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self) {
    return self->tokenize();
}

int QsciLexerPostScript_Level(const QsciLexerPostScript* self) {
    return self->level();
}

bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self) {
    return self->foldCompact();
}

bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self) {
    return self->foldAtElse();
}

libqt_string QsciLexerPostScript_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPostScript::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPostScript_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerPostScript::tr(s, c, static_cast<int>(n));
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
void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setTokenize(tokenize);
    } else {
        ((VirtualQsciLexerPostScript*)self)->setTokenize(tokenize);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetTokenize(QsciLexerPostScript* self, bool tokenize) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetTokenize_IsBase(true);
        vqscilexerpostscript->setTokenize(tokenize);
    } else {
        ((VirtualQsciLexerPostScript*)self)->setTokenize(tokenize);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetTokenize(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetTokenize_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetTokenize_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setLevel(static_cast<int>(level));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setLevel(static_cast<int>(level));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetLevel(QsciLexerPostScript* self, int level) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetLevel_IsBase(true);
        vqscilexerpostscript->setLevel(static_cast<int>(level));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setLevel(static_cast<int>(level));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetLevel(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetLevel_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetLevel_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerPostScript*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetFoldCompact(QsciLexerPostScript* self, bool fold) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFoldCompact_IsBase(true);
        vqscilexerpostscript->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerPostScript*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFoldCompact(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerPostScript*)self)->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetFoldAtElse(QsciLexerPostScript* self, bool fold) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFoldAtElse_IsBase(true);
        vqscilexerpostscript->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerPostScript*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFoldAtElse(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return (const char*)vqscilexerpostscript->language();
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseLanguage(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Language_IsBase(true);
        return (const char*)vqscilexerpostscript->language();
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnLanguage(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Language_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return (const char*)vqscilexerpostscript->lexer();
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseLexer(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Lexer_IsBase(true);
        return (const char*)vqscilexerpostscript->lexer();
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnLexer(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Lexer_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_LexerId(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->lexerId();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseLexerId(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_LexerId_IsBase(true);
        return vqscilexerpostscript->lexerId();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnLexerId(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_AutoCompletionFillups(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return (const char*)vqscilexerpostscript->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseAutoCompletionFillups(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerpostscript->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnAutoCompletionFillups(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPostScript_AutoCompletionWordSeparators(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        QList<QString> _ret = vqscilexerpostscript->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerPostScript*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerPostScript_QBaseAutoCompletionWordSeparators(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerpostscript->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerPostScript*)self)->autoCompletionWordSeparators();
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
void QsciLexerPostScript_OnAutoCompletionWordSeparators(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockEnd(const QsciLexerPostScript* self, int* style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return (const char*)vqscilexerpostscript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseBlockEnd(const QsciLexerPostScript* self, int* style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockEnd_IsBase(true);
        return (const char*)vqscilexerpostscript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockEnd(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_BlockLookback(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->blockLookback();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseBlockLookback(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockLookback_IsBase(true);
        return vqscilexerpostscript->blockLookback();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockLookback(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockStart(const QsciLexerPostScript* self, int* style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return (const char*)vqscilexerpostscript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseBlockStart(const QsciLexerPostScript* self, int* style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockStart_IsBase(true);
        return (const char*)vqscilexerpostscript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockStart(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockStartKeyword(const QsciLexerPostScript* self, int* style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return (const char*)vqscilexerpostscript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseBlockStartKeyword(const QsciLexerPostScript* self, int* style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerpostscript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockStartKeyword(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->braceStyle();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseBraceStyle(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BraceStyle_IsBase(true);
        return vqscilexerpostscript->braceStyle();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBraceStyle(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_CaseSensitive(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->caseSensitive();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseCaseSensitive(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_CaseSensitive_IsBase(true);
        return vqscilexerpostscript->caseSensitive();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnCaseSensitive(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPostScript_Color(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return new QColor(vqscilexerpostscript->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPostScript*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPostScript_QBaseColor(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Color_IsBase(true);
        return new QColor(vqscilexerpostscript->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPostScript*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnColor(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Color_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_EolFill(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPostScript*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseEolFill(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_EolFill_IsBase(true);
        return vqscilexerpostscript->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPostScript*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEolFill(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPostScript_Font(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return new QFont(vqscilexerpostscript->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPostScript*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPostScript_QBaseFont(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Font_IsBase(true);
        return new QFont(vqscilexerpostscript->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPostScript*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnFont(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Font_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_IndentationGuideView(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseIndentationGuideView(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_IndentationGuideView_IsBase(true);
        return vqscilexerpostscript->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnIndentationGuideView(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return (const char*)vqscilexerpostscript->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseKeywords(const QsciLexerPostScript* self, int set) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Keywords_IsBase(true);
        return (const char*)vqscilexerpostscript->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnKeywords(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Keywords_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_DefaultStyle(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->defaultStyle();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseDefaultStyle(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultStyle_IsBase(true);
        return vqscilexerpostscript->defaultStyle();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultStyle(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        QString _ret = vqscilexerpostscript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPostScript*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerPostScript_QBaseDescription(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Description_IsBase(true);
        QString _ret = vqscilexerpostscript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPostScript*)self)->description(static_cast<int>(style));
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
void QsciLexerPostScript_OnDescription(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Description_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPostScript_Paper(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return new QColor(vqscilexerpostscript->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPostScript*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPostScript_QBasePaper(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Paper_IsBase(true);
        return new QColor(vqscilexerpostscript->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPostScript*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnPaper(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Paper_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPostScript_DefaultColor2(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return new QColor(vqscilexerpostscript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPostScript*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPostScript_QBaseDefaultColor2(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerpostscript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPostScript*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultColor2(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_DefaultEolFill(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPostScript*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseDefaultEolFill(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultEolFill_IsBase(true);
        return vqscilexerpostscript->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPostScript*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultEolFill(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPostScript_DefaultFont2(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return new QFont(vqscilexerpostscript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPostScript*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPostScript_QBaseDefaultFont2(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerpostscript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPostScript*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultFont2(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPostScript_DefaultPaper2(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return new QColor(vqscilexerpostscript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPostScript*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPostScript_QBaseDefaultPaper2(const QsciLexerPostScript* self, int style) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerpostscript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPostScript*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultPaper2(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetEditor(QsciLexerPostScript* self, QsciScintilla* editor) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setEditor(editor);
    } else {
        ((VirtualQsciLexerPostScript*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetEditor(QsciLexerPostScript* self, QsciScintilla* editor) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetEditor_IsBase(true);
        vqscilexerpostscript->setEditor(editor);
    } else {
        ((VirtualQsciLexerPostScript*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetEditor(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->refreshProperties();
    } else {
        ((VirtualQsciLexerPostScript*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseRefreshProperties(QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_RefreshProperties_IsBase(true);
        vqscilexerpostscript->refreshProperties();
    } else {
        ((VirtualQsciLexerPostScript*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnRefreshProperties(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_StyleBitsNeeded(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseStyleBitsNeeded(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_StyleBitsNeeded_IsBase(true);
        return vqscilexerpostscript->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnStyleBitsNeeded(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_WordCharacters(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return (const char*)vqscilexerpostscript->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseWordCharacters(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_WordCharacters_IsBase(true);
        return (const char*)vqscilexerpostscript->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPostScript*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnWordCharacters(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetAutoIndentStyle_IsBase(true);
        vqscilexerpostscript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetAutoIndentStyle(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetColor(QsciLexerPostScript* self, const QColor* c, int style) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetColor(QsciLexerPostScript* self, const QColor* c, int style) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetColor_IsBase(true);
        vqscilexerpostscript->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetColor(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetEolFill(QsciLexerPostScript* self, bool eoffill, int style) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetEolFill(QsciLexerPostScript* self, bool eoffill, int style) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetEolFill_IsBase(true);
        vqscilexerpostscript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetEolFill(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetFont(QsciLexerPostScript* self, const QFont* f, int style) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetFont(QsciLexerPostScript* self, const QFont* f, int style) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFont_IsBase(true);
        vqscilexerpostscript->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFont(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetPaper(QsciLexerPostScript* self, const QColor* c, int style) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetPaper(QsciLexerPostScript* self, const QColor* c, int style) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetPaper_IsBase(true);
        vqscilexerpostscript->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPostScript*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetPaper(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_ReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_ReadProperties_IsBase(true);
        return vqscilexerpostscript->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnReadProperties(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_WriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseWriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_WriteProperties_IsBase(true);
        return vqscilexerpostscript->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnWriteProperties(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_Event(QsciLexerPostScript* self, QEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->event(event);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseEvent(QsciLexerPostScript* self, QEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Event_IsBase(true);
        return vqscilexerpostscript->event(event);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEvent(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Event_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_EventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseEventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_EventFilter_IsBase(true);
        return vqscilexerpostscript->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEventFilter(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_TimerEvent(QsciLexerPostScript* self, QTimerEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->timerEvent(event);
    } else {
        ((VirtualQsciLexerPostScript*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseTimerEvent(QsciLexerPostScript* self, QTimerEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_TimerEvent_IsBase(true);
        vqscilexerpostscript->timerEvent(event);
    } else {
        ((VirtualQsciLexerPostScript*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnTimerEvent(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_ChildEvent(QsciLexerPostScript* self, QChildEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->childEvent(event);
    } else {
        ((VirtualQsciLexerPostScript*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseChildEvent(QsciLexerPostScript* self, QChildEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_ChildEvent_IsBase(true);
        vqscilexerpostscript->childEvent(event);
    } else {
        ((VirtualQsciLexerPostScript*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnChildEvent(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_CustomEvent(QsciLexerPostScript* self, QEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->customEvent(event);
    } else {
        ((VirtualQsciLexerPostScript*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseCustomEvent(QsciLexerPostScript* self, QEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_CustomEvent_IsBase(true);
        vqscilexerpostscript->customEvent(event);
    } else {
        ((VirtualQsciLexerPostScript*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnCustomEvent(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_ConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPostScript*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_ConnectNotify_IsBase(true);
        vqscilexerpostscript->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPostScript*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnConnectNotify(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_DisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPostScript*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseDisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DisconnectNotify_IsBase(true);
        vqscilexerpostscript->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPostScript*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDisconnectNotify(QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPostScript_TextAsBytes(const QsciLexerPostScript* self, const libqt_string text) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        QByteArray _qb = vqscilexerpostscript->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerPostScript*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerPostScript_QBaseTextAsBytes(const QsciLexerPostScript* self, const libqt_string text) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerpostscript->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerPostScript*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnTextAsBytes(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPostScript_BytesAsText(const QsciLexerPostScript* self, const char* bytes, int size) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        QString _ret = vqscilexerpostscript->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPostScript*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerPostScript_QBaseBytesAsText(const QsciLexerPostScript* self, const char* bytes, int size) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BytesAsText_IsBase(true);
        QString _ret = vqscilexerpostscript->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPostScript*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerPostScript_OnBytesAsText(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPostScript_Sender(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->sender();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPostScript_QBaseSender(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Sender_IsBase(true);
        return vqscilexerpostscript->sender();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSender(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Sender_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_SenderSignalIndex(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseSenderSignalIndex(const QsciLexerPostScript* self) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SenderSignalIndex_IsBase(true);
        return vqscilexerpostscript->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPostScript*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSenderSignalIndex(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_Receivers(const QsciLexerPostScript* self, const char* signal) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->receivers(signal);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseReceivers(const QsciLexerPostScript* self, const char* signal) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Receivers_IsBase(true);
        return vqscilexerpostscript->receivers(signal);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnReceivers(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_IsSignalConnected(const QsciLexerPostScript* self, const QMetaMethod* signal) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        return vqscilexerpostscript->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseIsSignalConnected(const QsciLexerPostScript* self, const QMetaMethod* signal) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_IsSignalConnected_IsBase(true);
        return vqscilexerpostscript->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPostScript*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnIsSignalConnected(const QsciLexerPostScript* self, intptr_t slot) {
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript && vqscilexerpostscript->isVirtualQsciLexerPostScript) {
        vqscilexerpostscript->setQsciLexerPostScript_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPostScript_Delete(QsciLexerPostScript* self) {
    delete self;
}
