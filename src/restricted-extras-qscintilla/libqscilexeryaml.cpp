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
#include <qscilexeryaml.h>
#include "libqscilexeryaml.h"
#include "libqscilexeryaml.hxx"

QsciLexerYAML* QsciLexerYAML_new() {
    return new VirtualQsciLexerYAML();
}

QsciLexerYAML* QsciLexerYAML_new2(QObject* parent) {
    return new VirtualQsciLexerYAML(parent);
}

QMetaObject* QsciLexerYAML_MetaObject(const QsciLexerYAML* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerYAML_Metacast(QsciLexerYAML* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerYAML_Metacall(QsciLexerYAML* self, int param1, int param2, void** param3) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerYAML*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerYAML_OnMetacall(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Metacall_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerYAML_QBaseMetacall(QsciLexerYAML* self, int param1, int param2, void** param3) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Metacall_IsBase(true);
        return vqscilexeryaml->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerYAML*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerYAML_Tr(const char* s) {
    QString _ret = QsciLexerYAML::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerYAML_DefaultColor(const QsciLexerYAML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerYAML_DefaultFont(const QsciLexerYAML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerYAML_DefaultPaper(const QsciLexerYAML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerYAML_FoldComments(const QsciLexerYAML* self) {
    return self->foldComments();
}

libqt_string QsciLexerYAML_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerYAML::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerYAML_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerYAML::tr(s, c, static_cast<int>(n));
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
void QsciLexerYAML_SetFoldComments(QsciLexerYAML* self, bool fold) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerYAML*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseSetFoldComments(QsciLexerYAML* self, bool fold) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetFoldComments_IsBase(true);
        vqscilexeryaml->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerYAML*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetFoldComments(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerYAML_Language(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return (const char*)vqscilexeryaml->language();
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerYAML_QBaseLanguage(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Language_IsBase(true);
        return (const char*)vqscilexeryaml->language();
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnLanguage(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Language_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerYAML_Lexer(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return (const char*)vqscilexeryaml->lexer();
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerYAML_QBaseLexer(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Lexer_IsBase(true);
        return (const char*)vqscilexeryaml->lexer();
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnLexer(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Lexer_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerYAML_LexerId(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->lexerId();
    } else {
        return ((VirtualQsciLexerYAML*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerYAML_QBaseLexerId(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_LexerId_IsBase(true);
        return vqscilexeryaml->lexerId();
    } else {
        return ((VirtualQsciLexerYAML*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnLexerId(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_LexerId_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerYAML_AutoCompletionFillups(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return (const char*)vqscilexeryaml->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerYAML_QBaseAutoCompletionFillups(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexeryaml->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnAutoCompletionFillups(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerYAML_AutoCompletionWordSeparators(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        QStringList _ret = vqscilexeryaml->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
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
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = ((VirtualQsciLexerYAML*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
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
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciLexerYAML_QBaseAutoCompletionWordSeparators(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexeryaml->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
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
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = ((VirtualQsciLexerYAML*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
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
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnAutoCompletionWordSeparators(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerYAML_BlockEnd(const QsciLexerYAML* self, int* style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return (const char*)vqscilexeryaml->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerYAML_QBaseBlockEnd(const QsciLexerYAML* self, int* style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BlockEnd_IsBase(true);
        return (const char*)vqscilexeryaml->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBlockEnd(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerYAML_BlockLookback(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->blockLookback();
    } else {
        return ((VirtualQsciLexerYAML*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerYAML_QBaseBlockLookback(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BlockLookback_IsBase(true);
        return vqscilexeryaml->blockLookback();
    } else {
        return ((VirtualQsciLexerYAML*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBlockLookback(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerYAML_BlockStart(const QsciLexerYAML* self, int* style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return (const char*)vqscilexeryaml->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerYAML_QBaseBlockStart(const QsciLexerYAML* self, int* style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BlockStart_IsBase(true);
        return (const char*)vqscilexeryaml->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBlockStart(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerYAML_BlockStartKeyword(const QsciLexerYAML* self, int* style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return (const char*)vqscilexeryaml->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerYAML_QBaseBlockStartKeyword(const QsciLexerYAML* self, int* style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexeryaml->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBlockStartKeyword(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerYAML_BraceStyle(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->braceStyle();
    } else {
        return ((VirtualQsciLexerYAML*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerYAML_QBaseBraceStyle(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BraceStyle_IsBase(true);
        return vqscilexeryaml->braceStyle();
    } else {
        return ((VirtualQsciLexerYAML*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnBraceStyle(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerYAML_CaseSensitive(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->caseSensitive();
    } else {
        return ((VirtualQsciLexerYAML*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerYAML_QBaseCaseSensitive(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_CaseSensitive_IsBase(true);
        return vqscilexeryaml->caseSensitive();
    } else {
        return ((VirtualQsciLexerYAML*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnCaseSensitive(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerYAML_Color(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return new QColor(vqscilexeryaml->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerYAML*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerYAML_QBaseColor(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Color_IsBase(true);
        return new QColor(vqscilexeryaml->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerYAML*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnColor(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Color_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerYAML_EolFill(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerYAML*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerYAML_QBaseEolFill(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_EolFill_IsBase(true);
        return vqscilexeryaml->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerYAML*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnEolFill(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_EolFill_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerYAML_Font(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return new QFont(vqscilexeryaml->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerYAML*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerYAML_QBaseFont(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Font_IsBase(true);
        return new QFont(vqscilexeryaml->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerYAML*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnFont(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Font_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerYAML_IndentationGuideView(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->indentationGuideView();
    } else {
        return ((VirtualQsciLexerYAML*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerYAML_QBaseIndentationGuideView(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_IndentationGuideView_IsBase(true);
        return vqscilexeryaml->indentationGuideView();
    } else {
        return ((VirtualQsciLexerYAML*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnIndentationGuideView(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerYAML_Keywords(const QsciLexerYAML* self, int set) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return (const char*)vqscilexeryaml->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerYAML_QBaseKeywords(const QsciLexerYAML* self, int set) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Keywords_IsBase(true);
        return (const char*)vqscilexeryaml->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnKeywords(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Keywords_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerYAML_DefaultStyle(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->defaultStyle();
    } else {
        return ((VirtualQsciLexerYAML*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerYAML_QBaseDefaultStyle(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultStyle_IsBase(true);
        return vqscilexeryaml->defaultStyle();
    } else {
        return ((VirtualQsciLexerYAML*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultStyle(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerYAML_Description(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        QString _ret = vqscilexeryaml->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerYAML*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerYAML_QBaseDescription(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Description_IsBase(true);
        QString _ret = vqscilexeryaml->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerYAML*)self)->description(static_cast<int>(style));
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
void QsciLexerYAML_OnDescription(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Description_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerYAML_Paper(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return new QColor(vqscilexeryaml->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerYAML*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerYAML_QBasePaper(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Paper_IsBase(true);
        return new QColor(vqscilexeryaml->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerYAML*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnPaper(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Paper_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerYAML_DefaultColorWithStyle(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return new QColor(vqscilexeryaml->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerYAML*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerYAML_QBaseDefaultColorWithStyle(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexeryaml->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerYAML*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultColorWithStyle(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerYAML_DefaultEolFill(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerYAML*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerYAML_QBaseDefaultEolFill(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultEolFill_IsBase(true);
        return vqscilexeryaml->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerYAML*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultEolFill(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerYAML_DefaultFontWithStyle(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return new QFont(vqscilexeryaml->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerYAML*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerYAML_QBaseDefaultFontWithStyle(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexeryaml->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerYAML*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultFontWithStyle(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerYAML_DefaultPaperWithStyle(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return new QColor(vqscilexeryaml->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerYAML*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerYAML_QBaseDefaultPaperWithStyle(const QsciLexerYAML* self, int style) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexeryaml->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerYAML*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDefaultPaperWithStyle(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_SetEditor(QsciLexerYAML* self, QsciScintilla* editor) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setEditor(editor);
    } else {
        ((VirtualQsciLexerYAML*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseSetEditor(QsciLexerYAML* self, QsciScintilla* editor) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetEditor_IsBase(true);
        vqscilexeryaml->setEditor(editor);
    } else {
        ((VirtualQsciLexerYAML*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetEditor(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_RefreshProperties(QsciLexerYAML* self) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->refreshProperties();
    } else {
        ((VirtualQsciLexerYAML*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseRefreshProperties(QsciLexerYAML* self) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_RefreshProperties_IsBase(true);
        vqscilexeryaml->refreshProperties();
    } else {
        ((VirtualQsciLexerYAML*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnRefreshProperties(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerYAML_StyleBitsNeeded(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerYAML*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerYAML_QBaseStyleBitsNeeded(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_StyleBitsNeeded_IsBase(true);
        return vqscilexeryaml->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerYAML*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnStyleBitsNeeded(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerYAML_WordCharacters(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return (const char*)vqscilexeryaml->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerYAML_QBaseWordCharacters(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_WordCharacters_IsBase(true);
        return (const char*)vqscilexeryaml->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerYAML*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnWordCharacters(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_SetAutoIndentStyle(QsciLexerYAML* self, int autoindentstyle) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerYAML*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseSetAutoIndentStyle(QsciLexerYAML* self, int autoindentstyle) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetAutoIndentStyle_IsBase(true);
        vqscilexeryaml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerYAML*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetAutoIndentStyle(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_SetColor(QsciLexerYAML* self, const QColor* c, int style) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerYAML*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseSetColor(QsciLexerYAML* self, const QColor* c, int style) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetColor_IsBase(true);
        vqscilexeryaml->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerYAML*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetColor(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetColor_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_SetEolFill(QsciLexerYAML* self, bool eoffill, int style) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerYAML*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseSetEolFill(QsciLexerYAML* self, bool eoffill, int style) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetEolFill_IsBase(true);
        vqscilexeryaml->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerYAML*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetEolFill(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_SetFont(QsciLexerYAML* self, const QFont* f, int style) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerYAML*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseSetFont(QsciLexerYAML* self, const QFont* f, int style) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetFont_IsBase(true);
        vqscilexeryaml->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerYAML*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetFont(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetFont_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_SetPaper(QsciLexerYAML* self, const QColor* c, int style) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerYAML*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseSetPaper(QsciLexerYAML* self, const QColor* c, int style) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetPaper_IsBase(true);
        vqscilexeryaml->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerYAML*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSetPaper(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerYAML_ReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerYAML*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerYAML_QBaseReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_ReadProperties_IsBase(true);
        return vqscilexeryaml->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerYAML*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnReadProperties(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerYAML_WriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerYAML*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerYAML_QBaseWriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_WriteProperties_IsBase(true);
        return vqscilexeryaml->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerYAML*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnWriteProperties(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerYAML_Event(QsciLexerYAML* self, QEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->event(event);
    } else {
        return ((VirtualQsciLexerYAML*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerYAML_QBaseEvent(QsciLexerYAML* self, QEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Event_IsBase(true);
        return vqscilexeryaml->event(event);
    } else {
        return ((VirtualQsciLexerYAML*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnEvent(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Event_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerYAML_EventFilter(QsciLexerYAML* self, QObject* watched, QEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerYAML*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerYAML_QBaseEventFilter(QsciLexerYAML* self, QObject* watched, QEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_EventFilter_IsBase(true);
        return vqscilexeryaml->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerYAML*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnEventFilter(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_TimerEvent(QsciLexerYAML* self, QTimerEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->timerEvent(event);
    } else {
        ((VirtualQsciLexerYAML*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseTimerEvent(QsciLexerYAML* self, QTimerEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_TimerEvent_IsBase(true);
        vqscilexeryaml->timerEvent(event);
    } else {
        ((VirtualQsciLexerYAML*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnTimerEvent(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_ChildEvent(QsciLexerYAML* self, QChildEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->childEvent(event);
    } else {
        ((VirtualQsciLexerYAML*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseChildEvent(QsciLexerYAML* self, QChildEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_ChildEvent_IsBase(true);
        vqscilexeryaml->childEvent(event);
    } else {
        ((VirtualQsciLexerYAML*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnChildEvent(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_CustomEvent(QsciLexerYAML* self, QEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->customEvent(event);
    } else {
        ((VirtualQsciLexerYAML*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseCustomEvent(QsciLexerYAML* self, QEvent* event) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_CustomEvent_IsBase(true);
        vqscilexeryaml->customEvent(event);
    } else {
        ((VirtualQsciLexerYAML*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnCustomEvent(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_ConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerYAML*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_ConnectNotify_IsBase(true);
        vqscilexeryaml->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerYAML*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnConnectNotify(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerYAML_DisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerYAML*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerYAML_QBaseDisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DisconnectNotify_IsBase(true);
        vqscilexeryaml->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerYAML*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnDisconnectNotify(QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = dynamic_cast<VirtualQsciLexerYAML*>(self);
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerYAML_Sender(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->sender();
    } else {
        return ((VirtualQsciLexerYAML*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerYAML_QBaseSender(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Sender_IsBase(true);
        return vqscilexeryaml->sender();
    } else {
        return ((VirtualQsciLexerYAML*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSender(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Sender_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerYAML_SenderSignalIndex(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerYAML*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerYAML_QBaseSenderSignalIndex(const QsciLexerYAML* self) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SenderSignalIndex_IsBase(true);
        return vqscilexeryaml->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerYAML*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnSenderSignalIndex(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerYAML_Receivers(const QsciLexerYAML* self, const char* signal) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->receivers(signal);
    } else {
        return ((VirtualQsciLexerYAML*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerYAML_QBaseReceivers(const QsciLexerYAML* self, const char* signal) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Receivers_IsBase(true);
        return vqscilexeryaml->receivers(signal);
    } else {
        return ((VirtualQsciLexerYAML*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnReceivers(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_Receivers_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerYAML_IsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        return vqscilexeryaml->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerYAML*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerYAML_QBaseIsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_IsSignalConnected_IsBase(true);
        return vqscilexeryaml->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerYAML*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerYAML_OnIsSignalConnected(const QsciLexerYAML* self, intptr_t slot) {
    auto* vqscilexeryaml = const_cast<VirtualQsciLexerYAML*>(dynamic_cast<const VirtualQsciLexerYAML*>(self));
    if (vqscilexeryaml && vqscilexeryaml->isVirtualQsciLexerYAML) {
        vqscilexeryaml->setQsciLexerYAML_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerYAML::QsciLexerYAML_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerYAML_Delete(QsciLexerYAML* self) {
    delete self;
}
