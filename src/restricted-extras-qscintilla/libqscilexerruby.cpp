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
#include <qscilexerruby.h>
#include "libqscilexerruby.h"
#include "libqscilexerruby.hxx"

QsciLexerRuby* QsciLexerRuby_new() {
    return new VirtualQsciLexerRuby();
}

QsciLexerRuby* QsciLexerRuby_new2(QObject* parent) {
    return new VirtualQsciLexerRuby(parent);
}

QMetaObject* QsciLexerRuby_MetaObject(const QsciLexerRuby* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerRuby_Metacast(QsciLexerRuby* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerRuby_Metacall(QsciLexerRuby* self, int param1, int param2, void** param3) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerRuby*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerRuby_OnMetacall(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Metacall_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerRuby_QBaseMetacall(QsciLexerRuby* self, int param1, int param2, void** param3) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Metacall_IsBase(true);
        return vqscilexerruby->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerRuby*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerRuby_Tr(const char* s) {
    QString _ret = QsciLexerRuby::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerRuby_DefaultColor(const QsciLexerRuby* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerRuby_DefaultFont(const QsciLexerRuby* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerRuby_DefaultPaper(const QsciLexerRuby* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

void QsciLexerRuby_SetFoldComments(QsciLexerRuby* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerRuby_FoldComments(const QsciLexerRuby* self) {
    return self->foldComments();
}

void QsciLexerRuby_SetFoldCompact(QsciLexerRuby* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerRuby_FoldCompact(const QsciLexerRuby* self) {
    return self->foldCompact();
}

libqt_string QsciLexerRuby_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerRuby::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerRuby_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerRuby::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerRuby_BlockEnd1(const QsciLexerRuby* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerRuby_BlockStart1(const QsciLexerRuby* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerRuby_BlockStartKeyword1(const QsciLexerRuby* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Derived class handler implementation
const char* QsciLexerRuby_Language(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return (const char*)vqscilexerruby->language();
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerRuby_QBaseLanguage(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Language_IsBase(true);
        return (const char*)vqscilexerruby->language();
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnLanguage(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Language_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerRuby_Lexer(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return (const char*)vqscilexerruby->lexer();
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerRuby_QBaseLexer(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Lexer_IsBase(true);
        return (const char*)vqscilexerruby->lexer();
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnLexer(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Lexer_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerRuby_LexerId(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->lexerId();
    } else {
        return ((VirtualQsciLexerRuby*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerRuby_QBaseLexerId(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_LexerId_IsBase(true);
        return vqscilexerruby->lexerId();
    } else {
        return ((VirtualQsciLexerRuby*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnLexerId(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_LexerId_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerRuby_AutoCompletionFillups(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return (const char*)vqscilexerruby->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerRuby_QBaseAutoCompletionFillups(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerruby->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnAutoCompletionFillups(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerRuby_AutoCompletionWordSeparators(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        QList<QString> _ret = vqscilexerruby->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerRuby*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerRuby_QBaseAutoCompletionWordSeparators(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerruby->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerRuby*)self)->autoCompletionWordSeparators();
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
void QsciLexerRuby_OnAutoCompletionWordSeparators(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerRuby_BlockEnd(const QsciLexerRuby* self, int* style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return (const char*)vqscilexerruby->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerRuby_QBaseBlockEnd(const QsciLexerRuby* self, int* style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BlockEnd_IsBase(true);
        return (const char*)vqscilexerruby->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnBlockEnd(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerRuby_BlockLookback(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->blockLookback();
    } else {
        return ((VirtualQsciLexerRuby*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerRuby_QBaseBlockLookback(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BlockLookback_IsBase(true);
        return vqscilexerruby->blockLookback();
    } else {
        return ((VirtualQsciLexerRuby*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnBlockLookback(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerRuby_BlockStart(const QsciLexerRuby* self, int* style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return (const char*)vqscilexerruby->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerRuby_QBaseBlockStart(const QsciLexerRuby* self, int* style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BlockStart_IsBase(true);
        return (const char*)vqscilexerruby->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnBlockStart(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerRuby_BlockStartKeyword(const QsciLexerRuby* self, int* style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return (const char*)vqscilexerruby->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerRuby_QBaseBlockStartKeyword(const QsciLexerRuby* self, int* style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerruby->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnBlockStartKeyword(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerRuby_BraceStyle(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->braceStyle();
    } else {
        return ((VirtualQsciLexerRuby*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerRuby_QBaseBraceStyle(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BraceStyle_IsBase(true);
        return vqscilexerruby->braceStyle();
    } else {
        return ((VirtualQsciLexerRuby*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnBraceStyle(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerRuby_CaseSensitive(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->caseSensitive();
    } else {
        return ((VirtualQsciLexerRuby*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerRuby_QBaseCaseSensitive(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_CaseSensitive_IsBase(true);
        return vqscilexerruby->caseSensitive();
    } else {
        return ((VirtualQsciLexerRuby*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnCaseSensitive(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerRuby_Color(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return new QColor(vqscilexerruby->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerRuby*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerRuby_QBaseColor(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Color_IsBase(true);
        return new QColor(vqscilexerruby->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerRuby*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnColor(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Color_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerRuby_EolFill(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerRuby*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerRuby_QBaseEolFill(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_EolFill_IsBase(true);
        return vqscilexerruby->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerRuby*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnEolFill(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_EolFill_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerRuby_Font(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return new QFont(vqscilexerruby->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerRuby*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerRuby_QBaseFont(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Font_IsBase(true);
        return new QFont(vqscilexerruby->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerRuby*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnFont(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Font_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerRuby_IndentationGuideView(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->indentationGuideView();
    } else {
        return ((VirtualQsciLexerRuby*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerRuby_QBaseIndentationGuideView(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_IndentationGuideView_IsBase(true);
        return vqscilexerruby->indentationGuideView();
    } else {
        return ((VirtualQsciLexerRuby*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnIndentationGuideView(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerRuby_Keywords(const QsciLexerRuby* self, int set) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return (const char*)vqscilexerruby->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerRuby_QBaseKeywords(const QsciLexerRuby* self, int set) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Keywords_IsBase(true);
        return (const char*)vqscilexerruby->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnKeywords(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Keywords_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerRuby_DefaultStyle(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->defaultStyle();
    } else {
        return ((VirtualQsciLexerRuby*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerRuby_QBaseDefaultStyle(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultStyle_IsBase(true);
        return vqscilexerruby->defaultStyle();
    } else {
        return ((VirtualQsciLexerRuby*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultStyle(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerRuby_Description(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        QString _ret = vqscilexerruby->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerRuby*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerRuby_QBaseDescription(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Description_IsBase(true);
        QString _ret = vqscilexerruby->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerRuby*)self)->description(static_cast<int>(style));
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
void QsciLexerRuby_OnDescription(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Description_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerRuby_Paper(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return new QColor(vqscilexerruby->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerRuby*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerRuby_QBasePaper(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Paper_IsBase(true);
        return new QColor(vqscilexerruby->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerRuby*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnPaper(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Paper_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerRuby_DefaultColorWithStyle(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return new QColor(vqscilexerruby->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerRuby*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerRuby_QBaseDefaultColorWithStyle(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerruby->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerRuby*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultColorWithStyle(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerRuby_DefaultEolFill(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerRuby*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerRuby_QBaseDefaultEolFill(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultEolFill_IsBase(true);
        return vqscilexerruby->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerRuby*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultEolFill(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerRuby_DefaultFontWithStyle(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return new QFont(vqscilexerruby->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerRuby*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerRuby_QBaseDefaultFontWithStyle(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerruby->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerRuby*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultFontWithStyle(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerRuby_DefaultPaperWithStyle(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return new QColor(vqscilexerruby->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerRuby*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerRuby_QBaseDefaultPaperWithStyle(const QsciLexerRuby* self, int style) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerruby->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerRuby*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDefaultPaperWithStyle(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_SetEditor(QsciLexerRuby* self, QsciScintilla* editor) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setEditor(editor);
    } else {
        ((VirtualQsciLexerRuby*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseSetEditor(QsciLexerRuby* self, QsciScintilla* editor) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetEditor_IsBase(true);
        vqscilexerruby->setEditor(editor);
    } else {
        ((VirtualQsciLexerRuby*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetEditor(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_RefreshProperties(QsciLexerRuby* self) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->refreshProperties();
    } else {
        ((VirtualQsciLexerRuby*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseRefreshProperties(QsciLexerRuby* self) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_RefreshProperties_IsBase(true);
        vqscilexerruby->refreshProperties();
    } else {
        ((VirtualQsciLexerRuby*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnRefreshProperties(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerRuby_StyleBitsNeeded(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerRuby*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerRuby_QBaseStyleBitsNeeded(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_StyleBitsNeeded_IsBase(true);
        return vqscilexerruby->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerRuby*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnStyleBitsNeeded(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerRuby_WordCharacters(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return (const char*)vqscilexerruby->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerRuby_QBaseWordCharacters(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_WordCharacters_IsBase(true);
        return (const char*)vqscilexerruby->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerRuby*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnWordCharacters(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_SetAutoIndentStyle(QsciLexerRuby* self, int autoindentstyle) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerRuby*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseSetAutoIndentStyle(QsciLexerRuby* self, int autoindentstyle) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetAutoIndentStyle_IsBase(true);
        vqscilexerruby->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerRuby*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetAutoIndentStyle(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_SetColor(QsciLexerRuby* self, const QColor* c, int style) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerRuby*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseSetColor(QsciLexerRuby* self, const QColor* c, int style) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetColor_IsBase(true);
        vqscilexerruby->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerRuby*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetColor(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetColor_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_SetEolFill(QsciLexerRuby* self, bool eoffill, int style) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerRuby*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseSetEolFill(QsciLexerRuby* self, bool eoffill, int style) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetEolFill_IsBase(true);
        vqscilexerruby->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerRuby*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetEolFill(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_SetFont(QsciLexerRuby* self, const QFont* f, int style) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerRuby*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseSetFont(QsciLexerRuby* self, const QFont* f, int style) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetFont_IsBase(true);
        vqscilexerruby->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerRuby*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetFont(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetFont_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_SetPaper(QsciLexerRuby* self, const QColor* c, int style) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerRuby*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseSetPaper(QsciLexerRuby* self, const QColor* c, int style) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetPaper_IsBase(true);
        vqscilexerruby->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerRuby*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSetPaper(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerRuby_ReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerRuby*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerRuby_QBaseReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_ReadProperties_IsBase(true);
        return vqscilexerruby->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerRuby*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnReadProperties(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerRuby_WriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerRuby*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerRuby_QBaseWriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_WriteProperties_IsBase(true);
        return vqscilexerruby->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerRuby*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnWriteProperties(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerRuby_Event(QsciLexerRuby* self, QEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->event(event);
    } else {
        return ((VirtualQsciLexerRuby*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerRuby_QBaseEvent(QsciLexerRuby* self, QEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Event_IsBase(true);
        return vqscilexerruby->event(event);
    } else {
        return ((VirtualQsciLexerRuby*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnEvent(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Event_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerRuby_EventFilter(QsciLexerRuby* self, QObject* watched, QEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerRuby*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerRuby_QBaseEventFilter(QsciLexerRuby* self, QObject* watched, QEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_EventFilter_IsBase(true);
        return vqscilexerruby->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerRuby*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnEventFilter(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_TimerEvent(QsciLexerRuby* self, QTimerEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->timerEvent(event);
    } else {
        ((VirtualQsciLexerRuby*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseTimerEvent(QsciLexerRuby* self, QTimerEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_TimerEvent_IsBase(true);
        vqscilexerruby->timerEvent(event);
    } else {
        ((VirtualQsciLexerRuby*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnTimerEvent(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_ChildEvent(QsciLexerRuby* self, QChildEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->childEvent(event);
    } else {
        ((VirtualQsciLexerRuby*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseChildEvent(QsciLexerRuby* self, QChildEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_ChildEvent_IsBase(true);
        vqscilexerruby->childEvent(event);
    } else {
        ((VirtualQsciLexerRuby*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnChildEvent(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_CustomEvent(QsciLexerRuby* self, QEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->customEvent(event);
    } else {
        ((VirtualQsciLexerRuby*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseCustomEvent(QsciLexerRuby* self, QEvent* event) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_CustomEvent_IsBase(true);
        vqscilexerruby->customEvent(event);
    } else {
        ((VirtualQsciLexerRuby*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnCustomEvent(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_ConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerRuby*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_ConnectNotify_IsBase(true);
        vqscilexerruby->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerRuby*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnConnectNotify(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerRuby_DisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerRuby*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerRuby_QBaseDisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DisconnectNotify_IsBase(true);
        vqscilexerruby->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerRuby*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnDisconnectNotify(QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = dynamic_cast<VirtualQsciLexerRuby*>(self);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerRuby_TextAsBytes(const QsciLexerRuby* self, const libqt_string text) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        QByteArray _qb = vqscilexerruby->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerRuby*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerRuby_QBaseTextAsBytes(const QsciLexerRuby* self, const libqt_string text) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerruby->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerRuby*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnTextAsBytes(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerRuby_BytesAsText(const QsciLexerRuby* self, const char* bytes, int size) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        QString _ret = vqscilexerruby->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerRuby*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerRuby_QBaseBytesAsText(const QsciLexerRuby* self, const char* bytes, int size) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BytesAsText_IsBase(true);
        QString _ret = vqscilexerruby->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerRuby*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerRuby_OnBytesAsText(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerRuby_Sender(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->sender();
    } else {
        return ((VirtualQsciLexerRuby*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerRuby_QBaseSender(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Sender_IsBase(true);
        return vqscilexerruby->sender();
    } else {
        return ((VirtualQsciLexerRuby*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSender(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Sender_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerRuby_SenderSignalIndex(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerRuby*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerRuby_QBaseSenderSignalIndex(const QsciLexerRuby* self) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SenderSignalIndex_IsBase(true);
        return vqscilexerruby->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerRuby*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnSenderSignalIndex(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerRuby_Receivers(const QsciLexerRuby* self, const char* signal) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->receivers(signal);
    } else {
        return ((VirtualQsciLexerRuby*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerRuby_QBaseReceivers(const QsciLexerRuby* self, const char* signal) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Receivers_IsBase(true);
        return vqscilexerruby->receivers(signal);
    } else {
        return ((VirtualQsciLexerRuby*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnReceivers(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_Receivers_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerRuby_IsSignalConnected(const QsciLexerRuby* self, const QMetaMethod* signal) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        return vqscilexerruby->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerRuby*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerRuby_QBaseIsSignalConnected(const QsciLexerRuby* self, const QMetaMethod* signal) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_IsSignalConnected_IsBase(true);
        return vqscilexerruby->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerRuby*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerRuby_OnIsSignalConnected(const QsciLexerRuby* self, intptr_t slot) {
    auto* vqscilexerruby = const_cast<VirtualQsciLexerRuby*>(dynamic_cast<const VirtualQsciLexerRuby*>(self));
    if (vqscilexerruby && vqscilexerruby->isVirtualQsciLexerRuby) {
        vqscilexerruby->setQsciLexerRuby_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerRuby::QsciLexerRuby_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerRuby_Delete(QsciLexerRuby* self) {
    delete self;
}
