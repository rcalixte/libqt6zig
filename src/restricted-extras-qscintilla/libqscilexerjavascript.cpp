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
#include <qscilexerjavascript.h>
#include "libqscilexerjavascript.h"
#include "libqscilexerjavascript.hxx"

QsciLexerJavaScript* QsciLexerJavaScript_new() {
    return new VirtualQsciLexerJavaScript();
}

QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent) {
    return new VirtualQsciLexerJavaScript(parent);
}

QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerJavaScript_Metacall(QsciLexerJavaScript* self, int param1, int param2, void** param3) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerJavaScript_OnMetacall(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Metacall_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerJavaScript_QBaseMetacall(QsciLexerJavaScript* self, int param1, int param2, void** param3) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Metacall_IsBase(true);
        return vqscilexerjavascript->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerJavaScript_Tr(const char* s) {
    QString _ret = QsciLexerJavaScript::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerJavaScript::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerJavaScript::tr(s, c, static_cast<int>(n));
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
void QsciLexerJavaScript_SetFoldAtElse(QsciLexerJavaScript* self, bool fold) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFoldAtElse(QsciLexerJavaScript* self, bool fold) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldAtElse_IsBase(true);
        vqscilexerjavascript->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldAtElse(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldComments(QsciLexerJavaScript* self, bool fold) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFoldComments(QsciLexerJavaScript* self, bool fold) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldComments_IsBase(true);
        vqscilexerjavascript->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldComments(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldCompact(QsciLexerJavaScript* self, bool fold) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFoldCompact(QsciLexerJavaScript* self, bool fold) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldCompact_IsBase(true);
        vqscilexerjavascript->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldCompact(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldPreprocessor(QsciLexerJavaScript* self, bool fold) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFoldPreprocessor(QsciLexerJavaScript* self, bool fold) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldPreprocessor_IsBase(true);
        vqscilexerjavascript->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldPreprocessor(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetStylePreprocessor(QsciLexerJavaScript* self, bool style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setStylePreprocessor(style);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetStylePreprocessor(QsciLexerJavaScript* self, bool style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetStylePreprocessor_IsBase(true);
        vqscilexerjavascript->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setStylePreprocessor(style);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetStylePreprocessor(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetStylePreprocessor_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetStylePreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return (const char*)vqscilexerjavascript->language();
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseLanguage(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Language_IsBase(true);
        return (const char*)vqscilexerjavascript->language();
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnLanguage(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Language_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_Lexer(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return (const char*)vqscilexerjavascript->lexer();
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseLexer(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Lexer_IsBase(true);
        return (const char*)vqscilexerjavascript->lexer();
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnLexer(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Lexer_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_LexerId(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->lexerId();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseLexerId(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_LexerId_IsBase(true);
        return vqscilexerjavascript->lexerId();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnLexerId(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_LexerId_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_AutoCompletionFillups(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return (const char*)vqscilexerjavascript->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseAutoCompletionFillups(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerjavascript->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnAutoCompletionFillups(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerJavaScript_AutoCompletionWordSeparators(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        QList<QString> _ret = vqscilexerjavascript->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerJavaScript*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerJavaScript_QBaseAutoCompletionWordSeparators(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerjavascript->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerJavaScript*)self)->autoCompletionWordSeparators();
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
void QsciLexerJavaScript_OnAutoCompletionWordSeparators(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockEnd(const QsciLexerJavaScript* self, int* style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return (const char*)vqscilexerjavascript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseBlockEnd(const QsciLexerJavaScript* self, int* style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockEnd_IsBase(true);
        return (const char*)vqscilexerjavascript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockEnd(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_BlockLookback(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->blockLookback();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseBlockLookback(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockLookback_IsBase(true);
        return vqscilexerjavascript->blockLookback();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockLookback(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockStart(const QsciLexerJavaScript* self, int* style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return (const char*)vqscilexerjavascript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseBlockStart(const QsciLexerJavaScript* self, int* style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockStart_IsBase(true);
        return (const char*)vqscilexerjavascript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockStart(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockStartKeyword(const QsciLexerJavaScript* self, int* style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return (const char*)vqscilexerjavascript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseBlockStartKeyword(const QsciLexerJavaScript* self, int* style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerjavascript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockStartKeyword(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_BraceStyle(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->braceStyle();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseBraceStyle(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BraceStyle_IsBase(true);
        return vqscilexerjavascript->braceStyle();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBraceStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_CaseSensitive(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->caseSensitive();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseCaseSensitive(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_CaseSensitive_IsBase(true);
        return vqscilexerjavascript->caseSensitive();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnCaseSensitive(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_Color(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return new QColor(vqscilexerjavascript->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJavaScript*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJavaScript_QBaseColor(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Color_IsBase(true);
        return new QColor(vqscilexerjavascript->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJavaScript*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnColor(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Color_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_EolFill(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseEolFill(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_EolFill_IsBase(true);
        return vqscilexerjavascript->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEolFill(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_EolFill_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJavaScript_Font(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return new QFont(vqscilexerjavascript->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJavaScript*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJavaScript_QBaseFont(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Font_IsBase(true);
        return new QFont(vqscilexerjavascript->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJavaScript*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnFont(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Font_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_IndentationGuideView(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->indentationGuideView();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseIndentationGuideView(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_IndentationGuideView_IsBase(true);
        return vqscilexerjavascript->indentationGuideView();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnIndentationGuideView(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return (const char*)vqscilexerjavascript->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseKeywords(const QsciLexerJavaScript* self, int set) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Keywords_IsBase(true);
        return (const char*)vqscilexerjavascript->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnKeywords(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Keywords_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_DefaultStyle(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->defaultStyle();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseDefaultStyle(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultStyle_IsBase(true);
        return vqscilexerjavascript->defaultStyle();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        QString _ret = vqscilexerjavascript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJavaScript*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerJavaScript_QBaseDescription(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Description_IsBase(true);
        QString _ret = vqscilexerjavascript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJavaScript*)self)->description(static_cast<int>(style));
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
void QsciLexerJavaScript_OnDescription(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Description_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_Paper(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return new QColor(vqscilexerjavascript->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJavaScript*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJavaScript_QBasePaper(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Paper_IsBase(true);
        return new QColor(vqscilexerjavascript->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJavaScript*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnPaper(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Paper_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_DefaultColorWithStyle(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return new QColor(vqscilexerjavascript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJavaScript*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJavaScript_QBaseDefaultColorWithStyle(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerjavascript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJavaScript*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultColorWithStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseDefaultEolFill(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultEolFill_IsBase(true);
        return vqscilexerjavascript->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultEolFill(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJavaScript_DefaultFontWithStyle(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return new QFont(vqscilexerjavascript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJavaScript*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJavaScript_QBaseDefaultFontWithStyle(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerjavascript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJavaScript*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultFontWithStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_DefaultPaperWithStyle(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return new QColor(vqscilexerjavascript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJavaScript*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJavaScript_QBaseDefaultPaperWithStyle(const QsciLexerJavaScript* self, int style) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerjavascript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJavaScript*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultPaperWithStyle(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetEditor(QsciLexerJavaScript* self, QsciScintilla* editor) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setEditor(editor);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetEditor(QsciLexerJavaScript* self, QsciScintilla* editor) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetEditor_IsBase(true);
        vqscilexerjavascript->setEditor(editor);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetEditor(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_RefreshProperties(QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->refreshProperties();
    } else {
        ((VirtualQsciLexerJavaScript*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseRefreshProperties(QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_RefreshProperties_IsBase(true);
        vqscilexerjavascript->refreshProperties();
    } else {
        ((VirtualQsciLexerJavaScript*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnRefreshProperties(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_StyleBitsNeeded(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseStyleBitsNeeded(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_StyleBitsNeeded_IsBase(true);
        return vqscilexerjavascript->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnStyleBitsNeeded(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJavaScript_WordCharacters(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return (const char*)vqscilexerjavascript->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerJavaScript_QBaseWordCharacters(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_WordCharacters_IsBase(true);
        return (const char*)vqscilexerjavascript->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerJavaScript*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnWordCharacters(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetAutoIndentStyle_IsBase(true);
        vqscilexerjavascript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetAutoIndentStyle(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetColor(QsciLexerJavaScript* self, const QColor* c, int style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetColor(QsciLexerJavaScript* self, const QColor* c, int style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetColor_IsBase(true);
        vqscilexerjavascript->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetColor(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetColor_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetEolFill(QsciLexerJavaScript* self, bool eoffill, int style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetEolFill(QsciLexerJavaScript* self, bool eoffill, int style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetEolFill_IsBase(true);
        vqscilexerjavascript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetEolFill(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFont(QsciLexerJavaScript* self, const QFont* f, int style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetFont(QsciLexerJavaScript* self, const QFont* f, int style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFont_IsBase(true);
        vqscilexerjavascript->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFont(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetFont_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_SetPaper(QsciLexerJavaScript* self, const QColor* c, int style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseSetPaper(QsciLexerJavaScript* self, const QColor* c, int style) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetPaper_IsBase(true);
        vqscilexerjavascript->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJavaScript*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetPaper(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_ReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_ReadProperties_IsBase(true);
        return vqscilexerjavascript->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnReadProperties(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_WriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseWriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_WriteProperties_IsBase(true);
        return vqscilexerjavascript->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnWriteProperties(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_Event(QsciLexerJavaScript* self, QEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->event(event);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseEvent(QsciLexerJavaScript* self, QEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Event_IsBase(true);
        return vqscilexerjavascript->event(event);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEvent(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Event_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_EventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseEventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_EventFilter_IsBase(true);
        return vqscilexerjavascript->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEventFilter(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_TimerEvent(QsciLexerJavaScript* self, QTimerEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->timerEvent(event);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseTimerEvent(QsciLexerJavaScript* self, QTimerEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_TimerEvent_IsBase(true);
        vqscilexerjavascript->timerEvent(event);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnTimerEvent(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_ChildEvent(QsciLexerJavaScript* self, QChildEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->childEvent(event);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseChildEvent(QsciLexerJavaScript* self, QChildEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_ChildEvent_IsBase(true);
        vqscilexerjavascript->childEvent(event);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnChildEvent(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_CustomEvent(QsciLexerJavaScript* self, QEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->customEvent(event);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseCustomEvent(QsciLexerJavaScript* self, QEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_CustomEvent_IsBase(true);
        vqscilexerjavascript->customEvent(event);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnCustomEvent(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_ConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_ConnectNotify_IsBase(true);
        vqscilexerjavascript->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnConnectNotify(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJavaScript_DisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJavaScript_QBaseDisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DisconnectNotify_IsBase(true);
        vqscilexerjavascript->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerJavaScript*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDisconnectNotify(QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJavaScript_TextAsBytes(const QsciLexerJavaScript* self, const libqt_string text) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        QByteArray _qb = vqscilexerjavascript->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerJavaScript*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerJavaScript_QBaseTextAsBytes(const QsciLexerJavaScript* self, const libqt_string text) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerjavascript->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerJavaScript*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnTextAsBytes(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJavaScript_BytesAsText(const QsciLexerJavaScript* self, const char* bytes, int size) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        QString _ret = vqscilexerjavascript->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJavaScript*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerJavaScript_QBaseBytesAsText(const QsciLexerJavaScript* self, const char* bytes, int size) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BytesAsText_IsBase(true);
        QString _ret = vqscilexerjavascript->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJavaScript*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerJavaScript_OnBytesAsText(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerJavaScript_Sender(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->sender();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerJavaScript_QBaseSender(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Sender_IsBase(true);
        return vqscilexerjavascript->sender();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSender(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Sender_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_SenderSignalIndex(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseSenderSignalIndex(const QsciLexerJavaScript* self) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SenderSignalIndex_IsBase(true);
        return vqscilexerjavascript->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSenderSignalIndex(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJavaScript_Receivers(const QsciLexerJavaScript* self, const char* signal) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->receivers(signal);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerJavaScript_QBaseReceivers(const QsciLexerJavaScript* self, const char* signal) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Receivers_IsBase(true);
        return vqscilexerjavascript->receivers(signal);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnReceivers(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_Receivers_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJavaScript_IsSignalConnected(const QsciLexerJavaScript* self, const QMetaMethod* signal) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        return vqscilexerjavascript->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_QBaseIsSignalConnected(const QsciLexerJavaScript* self, const QMetaMethod* signal) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_IsSignalConnected_IsBase(true);
        return vqscilexerjavascript->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerJavaScript*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnIsSignalConnected(const QsciLexerJavaScript* self, intptr_t slot) {
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript && vqscilexerjavascript->isVirtualQsciLexerJavaScript) {
        vqscilexerjavascript->setQsciLexerJavaScript_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self) {
    delete self;
}
