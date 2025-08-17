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
#include <qscilexerperl.h>
#include "libqscilexerperl.h"
#include "libqscilexerperl.hxx"

QsciLexerPerl* QsciLexerPerl_new() {
    return new VirtualQsciLexerPerl();
}

QsciLexerPerl* QsciLexerPerl_new2(QObject* parent) {
    return new VirtualQsciLexerPerl(parent);
}

QMetaObject* QsciLexerPerl_MetaObject(const QsciLexerPerl* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPerl_Metacast(QsciLexerPerl* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPerl_Metacall(QsciLexerPerl* self, int param1, int param2, void** param3) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPerl*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPerl_OnMetacall(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPerl_QBaseMetacall(QsciLexerPerl* self, int param1, int param2, void** param3) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Metacall_IsBase(true);
        return vqscilexerperl->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerPerl*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPerl_Tr(const char* s) {
    QString _ret = QsciLexerPerl::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerPerl_DefaultColor(const QsciLexerPerl* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPerl_DefaultFont(const QsciLexerPerl* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPerl_DefaultPaper(const QsciLexerPerl* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

void QsciLexerPerl_SetFoldAtElse(QsciLexerPerl* self, bool fold) {
    self->setFoldAtElse(fold);
}

bool QsciLexerPerl_FoldAtElse(const QsciLexerPerl* self) {
    return self->foldAtElse();
}

bool QsciLexerPerl_FoldComments(const QsciLexerPerl* self) {
    return self->foldComments();
}

bool QsciLexerPerl_FoldCompact(const QsciLexerPerl* self) {
    return self->foldCompact();
}

void QsciLexerPerl_SetFoldPackages(QsciLexerPerl* self, bool fold) {
    self->setFoldPackages(fold);
}

bool QsciLexerPerl_FoldPackages(const QsciLexerPerl* self) {
    return self->foldPackages();
}

void QsciLexerPerl_SetFoldPODBlocks(QsciLexerPerl* self, bool fold) {
    self->setFoldPODBlocks(fold);
}

bool QsciLexerPerl_FoldPODBlocks(const QsciLexerPerl* self) {
    return self->foldPODBlocks();
}

libqt_string QsciLexerPerl_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPerl::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPerl_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerPerl::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPerl_BlockEnd1(const QsciLexerPerl* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerPerl_BlockStart1(const QsciLexerPerl* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerPerl_SetFoldComments(QsciLexerPerl* self, bool fold) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerPerl*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetFoldComments(QsciLexerPerl* self, bool fold) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetFoldComments_IsBase(true);
        vqscilexerperl->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerPerl*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFoldComments(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetFoldCompact(QsciLexerPerl* self, bool fold) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerPerl*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetFoldCompact(QsciLexerPerl* self, bool fold) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetFoldCompact_IsBase(true);
        vqscilexerperl->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerPerl*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFoldCompact(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_Language(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return (const char*)vqscilexerperl->language();
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseLanguage(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Language_IsBase(true);
        return (const char*)vqscilexerperl->language();
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnLanguage(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Language_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_Lexer(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return (const char*)vqscilexerperl->lexer();
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseLexer(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Lexer_IsBase(true);
        return (const char*)vqscilexerperl->lexer();
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnLexer(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Lexer_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_LexerId(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->lexerId();
    } else {
        return ((VirtualQsciLexerPerl*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseLexerId(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_LexerId_IsBase(true);
        return vqscilexerperl->lexerId();
    } else {
        return ((VirtualQsciLexerPerl*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnLexerId(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_AutoCompletionFillups(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return (const char*)vqscilexerperl->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseAutoCompletionFillups(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerperl->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnAutoCompletionFillups(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPerl_AutoCompletionWordSeparators(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        QList<QString> _ret = vqscilexerperl->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerPerl*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerPerl_QBaseAutoCompletionWordSeparators(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerperl->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerPerl*)self)->autoCompletionWordSeparators();
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
void QsciLexerPerl_OnAutoCompletionWordSeparators(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_BlockEnd(const QsciLexerPerl* self, int* style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return (const char*)vqscilexerperl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseBlockEnd(const QsciLexerPerl* self, int* style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BlockEnd_IsBase(true);
        return (const char*)vqscilexerperl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockEnd(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_BlockLookback(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->blockLookback();
    } else {
        return ((VirtualQsciLexerPerl*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseBlockLookback(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BlockLookback_IsBase(true);
        return vqscilexerperl->blockLookback();
    } else {
        return ((VirtualQsciLexerPerl*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockLookback(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_BlockStart(const QsciLexerPerl* self, int* style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return (const char*)vqscilexerperl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseBlockStart(const QsciLexerPerl* self, int* style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BlockStart_IsBase(true);
        return (const char*)vqscilexerperl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockStart(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_BlockStartKeyword(const QsciLexerPerl* self, int* style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return (const char*)vqscilexerperl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseBlockStartKeyword(const QsciLexerPerl* self, int* style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerperl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockStartKeyword(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_BraceStyle(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->braceStyle();
    } else {
        return ((VirtualQsciLexerPerl*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseBraceStyle(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BraceStyle_IsBase(true);
        return vqscilexerperl->braceStyle();
    } else {
        return ((VirtualQsciLexerPerl*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBraceStyle(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_CaseSensitive(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->caseSensitive();
    } else {
        return ((VirtualQsciLexerPerl*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseCaseSensitive(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_CaseSensitive_IsBase(true);
        return vqscilexerperl->caseSensitive();
    } else {
        return ((VirtualQsciLexerPerl*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnCaseSensitive(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPerl_Color(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return new QColor(vqscilexerperl->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPerl*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPerl_QBaseColor(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Color_IsBase(true);
        return new QColor(vqscilexerperl->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPerl*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnColor(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Color_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_EolFill(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPerl*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseEolFill(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_EolFill_IsBase(true);
        return vqscilexerperl->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPerl*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEolFill(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPerl_Font(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return new QFont(vqscilexerperl->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPerl*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPerl_QBaseFont(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Font_IsBase(true);
        return new QFont(vqscilexerperl->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPerl*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnFont(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Font_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_IndentationGuideView(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPerl*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseIndentationGuideView(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_IndentationGuideView_IsBase(true);
        return vqscilexerperl->indentationGuideView();
    } else {
        return ((VirtualQsciLexerPerl*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnIndentationGuideView(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_Keywords(const QsciLexerPerl* self, int set) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return (const char*)vqscilexerperl->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseKeywords(const QsciLexerPerl* self, int set) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Keywords_IsBase(true);
        return (const char*)vqscilexerperl->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnKeywords(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Keywords_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_DefaultStyle(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->defaultStyle();
    } else {
        return ((VirtualQsciLexerPerl*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseDefaultStyle(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultStyle_IsBase(true);
        return vqscilexerperl->defaultStyle();
    } else {
        return ((VirtualQsciLexerPerl*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultStyle(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPerl_Description(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        QString _ret = vqscilexerperl->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPerl*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerPerl_QBaseDescription(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Description_IsBase(true);
        QString _ret = vqscilexerperl->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPerl*)self)->description(static_cast<int>(style));
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
void QsciLexerPerl_OnDescription(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Description_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPerl_Paper(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return new QColor(vqscilexerperl->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPerl*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPerl_QBasePaper(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Paper_IsBase(true);
        return new QColor(vqscilexerperl->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPerl*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnPaper(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Paper_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPerl_DefaultColor2(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return new QColor(vqscilexerperl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPerl*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPerl_QBaseDefaultColor2(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerperl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPerl*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultColor2(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_DefaultEolFill(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPerl*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseDefaultEolFill(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultEolFill_IsBase(true);
        return vqscilexerperl->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerPerl*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultEolFill(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPerl_DefaultFont2(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return new QFont(vqscilexerperl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPerl*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPerl_QBaseDefaultFont2(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerperl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerPerl*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultFont2(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPerl_DefaultPaper2(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return new QColor(vqscilexerperl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPerl*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPerl_QBaseDefaultPaper2(const QsciLexerPerl* self, int style) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerperl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerPerl*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultPaper2(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetEditor(QsciLexerPerl* self, QsciScintilla* editor) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setEditor(editor);
    } else {
        ((VirtualQsciLexerPerl*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetEditor(QsciLexerPerl* self, QsciScintilla* editor) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetEditor_IsBase(true);
        vqscilexerperl->setEditor(editor);
    } else {
        ((VirtualQsciLexerPerl*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetEditor(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_RefreshProperties(QsciLexerPerl* self) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->refreshProperties();
    } else {
        ((VirtualQsciLexerPerl*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseRefreshProperties(QsciLexerPerl* self) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_RefreshProperties_IsBase(true);
        vqscilexerperl->refreshProperties();
    } else {
        ((VirtualQsciLexerPerl*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnRefreshProperties(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_StyleBitsNeeded(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPerl*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseStyleBitsNeeded(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_StyleBitsNeeded_IsBase(true);
        return vqscilexerperl->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerPerl*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnStyleBitsNeeded(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_WordCharacters(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return (const char*)vqscilexerperl->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseWordCharacters(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_WordCharacters_IsBase(true);
        return (const char*)vqscilexerperl->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerPerl*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnWordCharacters(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetAutoIndentStyle(QsciLexerPerl* self, int autoindentstyle) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPerl*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetAutoIndentStyle(QsciLexerPerl* self, int autoindentstyle) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetAutoIndentStyle_IsBase(true);
        vqscilexerperl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerPerl*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetAutoIndentStyle(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetColor(QsciLexerPerl* self, const QColor* c, int style) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPerl*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetColor(QsciLexerPerl* self, const QColor* c, int style) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetColor_IsBase(true);
        vqscilexerperl->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPerl*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetColor(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetEolFill(QsciLexerPerl* self, bool eoffill, int style) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPerl*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetEolFill(QsciLexerPerl* self, bool eoffill, int style) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetEolFill_IsBase(true);
        vqscilexerperl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPerl*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetEolFill(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetFont(QsciLexerPerl* self, const QFont* f, int style) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPerl*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetFont(QsciLexerPerl* self, const QFont* f, int style) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetFont_IsBase(true);
        vqscilexerperl->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPerl*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFont(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetPaper(QsciLexerPerl* self, const QColor* c, int style) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPerl*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetPaper(QsciLexerPerl* self, const QColor* c, int style) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetPaper_IsBase(true);
        vqscilexerperl->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerPerl*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetPaper(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_ReadProperties(QsciLexerPerl* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPerl*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseReadProperties(QsciLexerPerl* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_ReadProperties_IsBase(true);
        return vqscilexerperl->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPerl*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnReadProperties(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_WriteProperties(const QsciLexerPerl* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPerl*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseWriteProperties(const QsciLexerPerl* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_WriteProperties_IsBase(true);
        return vqscilexerperl->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerPerl*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnWriteProperties(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_Event(QsciLexerPerl* self, QEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->event(event);
    } else {
        return ((VirtualQsciLexerPerl*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseEvent(QsciLexerPerl* self, QEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Event_IsBase(true);
        return vqscilexerperl->event(event);
    } else {
        return ((VirtualQsciLexerPerl*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEvent(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Event_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_EventFilter(QsciLexerPerl* self, QObject* watched, QEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPerl*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseEventFilter(QsciLexerPerl* self, QObject* watched, QEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_EventFilter_IsBase(true);
        return vqscilexerperl->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerPerl*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEventFilter(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_TimerEvent(QsciLexerPerl* self, QTimerEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->timerEvent(event);
    } else {
        ((VirtualQsciLexerPerl*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseTimerEvent(QsciLexerPerl* self, QTimerEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_TimerEvent_IsBase(true);
        vqscilexerperl->timerEvent(event);
    } else {
        ((VirtualQsciLexerPerl*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnTimerEvent(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_ChildEvent(QsciLexerPerl* self, QChildEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->childEvent(event);
    } else {
        ((VirtualQsciLexerPerl*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseChildEvent(QsciLexerPerl* self, QChildEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_ChildEvent_IsBase(true);
        vqscilexerperl->childEvent(event);
    } else {
        ((VirtualQsciLexerPerl*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnChildEvent(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_CustomEvent(QsciLexerPerl* self, QEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->customEvent(event);
    } else {
        ((VirtualQsciLexerPerl*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseCustomEvent(QsciLexerPerl* self, QEvent* event) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_CustomEvent_IsBase(true);
        vqscilexerperl->customEvent(event);
    } else {
        ((VirtualQsciLexerPerl*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnCustomEvent(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_ConnectNotify(QsciLexerPerl* self, const QMetaMethod* signal) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPerl*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseConnectNotify(QsciLexerPerl* self, const QMetaMethod* signal) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_ConnectNotify_IsBase(true);
        vqscilexerperl->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerPerl*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnConnectNotify(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_DisconnectNotify(QsciLexerPerl* self, const QMetaMethod* signal) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPerl*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseDisconnectNotify(QsciLexerPerl* self, const QMetaMethod* signal) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DisconnectNotify_IsBase(true);
        vqscilexerperl->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerPerl*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDisconnectNotify(QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPerl_TextAsBytes(const QsciLexerPerl* self, const libqt_string text) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        QByteArray _qb = vqscilexerperl->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerPerl*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerPerl_QBaseTextAsBytes(const QsciLexerPerl* self, const libqt_string text) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerperl->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerPerl*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnTextAsBytes(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPerl_BytesAsText(const QsciLexerPerl* self, const char* bytes, int size) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        QString _ret = vqscilexerperl->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPerl*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerPerl_QBaseBytesAsText(const QsciLexerPerl* self, const char* bytes, int size) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BytesAsText_IsBase(true);
        QString _ret = vqscilexerperl->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerPerl*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerPerl_OnBytesAsText(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPerl_Sender(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->sender();
    } else {
        return ((VirtualQsciLexerPerl*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPerl_QBaseSender(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Sender_IsBase(true);
        return vqscilexerperl->sender();
    } else {
        return ((VirtualQsciLexerPerl*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSender(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Sender_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_SenderSignalIndex(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPerl*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseSenderSignalIndex(const QsciLexerPerl* self) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SenderSignalIndex_IsBase(true);
        return vqscilexerperl->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerPerl*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSenderSignalIndex(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_Receivers(const QsciLexerPerl* self, const char* signal) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->receivers(signal);
    } else {
        return ((VirtualQsciLexerPerl*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseReceivers(const QsciLexerPerl* self, const char* signal) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Receivers_IsBase(true);
        return vqscilexerperl->receivers(signal);
    } else {
        return ((VirtualQsciLexerPerl*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnReceivers(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_IsSignalConnected(const QsciLexerPerl* self, const QMetaMethod* signal) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        return vqscilexerperl->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPerl*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseIsSignalConnected(const QsciLexerPerl* self, const QMetaMethod* signal) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_IsSignalConnected_IsBase(true);
        return vqscilexerperl->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerPerl*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnIsSignalConnected(const QsciLexerPerl* self, intptr_t slot) {
    auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self));
    if (vqscilexerperl && vqscilexerperl->isVirtualQsciLexerPerl) {
        vqscilexerperl->setQsciLexerPerl_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPerl_Delete(QsciLexerPerl* self) {
    delete self;
}
