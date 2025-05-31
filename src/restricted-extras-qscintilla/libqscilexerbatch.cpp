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
#include <qscilexerbatch.h>
#include "libqscilexerbatch.h"
#include "libqscilexerbatch.hxx"

QsciLexerBatch* QsciLexerBatch_new() {
    return new VirtualQsciLexerBatch();
}

QsciLexerBatch* QsciLexerBatch_new2(QObject* parent) {
    return new VirtualQsciLexerBatch(parent);
}

QMetaObject* QsciLexerBatch_MetaObject(const QsciLexerBatch* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerBatch_Metacast(QsciLexerBatch* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerBatch_Metacall(QsciLexerBatch* self, int param1, int param2, void** param3) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerBatch*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerBatch_OnMetacall(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Metacall_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerBatch_QBaseMetacall(QsciLexerBatch* self, int param1, int param2, void** param3) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Metacall_IsBase(true);
        return vqscilexerbatch->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerBatch*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerBatch_Tr(const char* s) {
    QString _ret = QsciLexerBatch::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerBatch_DefaultColor(const QsciLexerBatch* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerBatch_DefaultFont(const QsciLexerBatch* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerBatch_DefaultPaper(const QsciLexerBatch* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerBatch_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerBatch::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerBatch_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerBatch::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
const char* QsciLexerBatch_Language(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return (const char*)vqscilexerbatch->language();
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerBatch_QBaseLanguage(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Language_IsBase(true);
        return (const char*)vqscilexerbatch->language();
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnLanguage(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Language_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBatch_Lexer(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return (const char*)vqscilexerbatch->lexer();
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerBatch_QBaseLexer(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Lexer_IsBase(true);
        return (const char*)vqscilexerbatch->lexer();
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnLexer(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Lexer_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBatch_LexerId(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->lexerId();
    } else {
        return ((VirtualQsciLexerBatch*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerBatch_QBaseLexerId(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_LexerId_IsBase(true);
        return vqscilexerbatch->lexerId();
    } else {
        return ((VirtualQsciLexerBatch*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnLexerId(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_LexerId_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBatch_AutoCompletionFillups(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return (const char*)vqscilexerbatch->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerBatch_QBaseAutoCompletionFillups(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerbatch->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnAutoCompletionFillups(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerBatch_AutoCompletionWordSeparators(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        QStringList _ret = vqscilexerbatch->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = ((VirtualQsciLexerBatch*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciLexerBatch_QBaseAutoCompletionWordSeparators(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerbatch->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = ((VirtualQsciLexerBatch*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnAutoCompletionWordSeparators(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBatch_BlockEnd(const QsciLexerBatch* self, int* style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return (const char*)vqscilexerbatch->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerBatch_QBaseBlockEnd(const QsciLexerBatch* self, int* style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BlockEnd_IsBase(true);
        return (const char*)vqscilexerbatch->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBlockEnd(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBatch_BlockLookback(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->blockLookback();
    } else {
        return ((VirtualQsciLexerBatch*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerBatch_QBaseBlockLookback(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BlockLookback_IsBase(true);
        return vqscilexerbatch->blockLookback();
    } else {
        return ((VirtualQsciLexerBatch*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBlockLookback(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBatch_BlockStart(const QsciLexerBatch* self, int* style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return (const char*)vqscilexerbatch->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerBatch_QBaseBlockStart(const QsciLexerBatch* self, int* style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BlockStart_IsBase(true);
        return (const char*)vqscilexerbatch->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBlockStart(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBatch_BlockStartKeyword(const QsciLexerBatch* self, int* style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return (const char*)vqscilexerbatch->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerBatch_QBaseBlockStartKeyword(const QsciLexerBatch* self, int* style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerbatch->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBlockStartKeyword(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBatch_BraceStyle(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->braceStyle();
    } else {
        return ((VirtualQsciLexerBatch*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerBatch_QBaseBraceStyle(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BraceStyle_IsBase(true);
        return vqscilexerbatch->braceStyle();
    } else {
        return ((VirtualQsciLexerBatch*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnBraceStyle(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBatch_CaseSensitive(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->caseSensitive();
    } else {
        return ((VirtualQsciLexerBatch*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerBatch_QBaseCaseSensitive(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_CaseSensitive_IsBase(true);
        return vqscilexerbatch->caseSensitive();
    } else {
        return ((VirtualQsciLexerBatch*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnCaseSensitive(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerBatch_Color(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return new QColor(vqscilexerbatch->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerBatch*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerBatch_QBaseColor(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Color_IsBase(true);
        return new QColor(vqscilexerbatch->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerBatch*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnColor(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Color_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBatch_EolFill(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerBatch*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerBatch_QBaseEolFill(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_EolFill_IsBase(true);
        return vqscilexerbatch->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerBatch*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnEolFill(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_EolFill_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerBatch_Font(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return new QFont(vqscilexerbatch->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerBatch*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerBatch_QBaseFont(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Font_IsBase(true);
        return new QFont(vqscilexerbatch->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerBatch*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnFont(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Font_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBatch_IndentationGuideView(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->indentationGuideView();
    } else {
        return ((VirtualQsciLexerBatch*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerBatch_QBaseIndentationGuideView(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_IndentationGuideView_IsBase(true);
        return vqscilexerbatch->indentationGuideView();
    } else {
        return ((VirtualQsciLexerBatch*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnIndentationGuideView(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBatch_Keywords(const QsciLexerBatch* self, int set) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return (const char*)vqscilexerbatch->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerBatch_QBaseKeywords(const QsciLexerBatch* self, int set) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Keywords_IsBase(true);
        return (const char*)vqscilexerbatch->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnKeywords(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Keywords_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBatch_DefaultStyle(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->defaultStyle();
    } else {
        return ((VirtualQsciLexerBatch*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerBatch_QBaseDefaultStyle(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultStyle_IsBase(true);
        return vqscilexerbatch->defaultStyle();
    } else {
        return ((VirtualQsciLexerBatch*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultStyle(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerBatch_Description(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        QString _ret = vqscilexerbatch->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerBatch*)self)->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerBatch_QBaseDescription(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Description_IsBase(true);
        QString _ret = vqscilexerbatch->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerBatch*)self)->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDescription(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Description_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerBatch_Paper(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return new QColor(vqscilexerbatch->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerBatch*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerBatch_QBasePaper(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Paper_IsBase(true);
        return new QColor(vqscilexerbatch->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerBatch*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnPaper(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Paper_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerBatch_DefaultColorWithStyle(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return new QColor(vqscilexerbatch->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerBatch*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerBatch_QBaseDefaultColorWithStyle(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerbatch->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerBatch*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultColorWithStyle(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBatch_DefaultEolFill(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerBatch*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerBatch_QBaseDefaultEolFill(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultEolFill_IsBase(true);
        return vqscilexerbatch->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerBatch*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultEolFill(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerBatch_DefaultFontWithStyle(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return new QFont(vqscilexerbatch->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerBatch*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerBatch_QBaseDefaultFontWithStyle(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerbatch->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerBatch*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultFontWithStyle(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerBatch_DefaultPaperWithStyle(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return new QColor(vqscilexerbatch->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerBatch*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerBatch_QBaseDefaultPaperWithStyle(const QsciLexerBatch* self, int style) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerbatch->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerBatch*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDefaultPaperWithStyle(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_SetEditor(QsciLexerBatch* self, QsciScintilla* editor) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setEditor(editor);
    } else {
        ((VirtualQsciLexerBatch*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseSetEditor(QsciLexerBatch* self, QsciScintilla* editor) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetEditor_IsBase(true);
        vqscilexerbatch->setEditor(editor);
    } else {
        ((VirtualQsciLexerBatch*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetEditor(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_RefreshProperties(QsciLexerBatch* self) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->refreshProperties();
    } else {
        ((VirtualQsciLexerBatch*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseRefreshProperties(QsciLexerBatch* self) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_RefreshProperties_IsBase(true);
        vqscilexerbatch->refreshProperties();
    } else {
        ((VirtualQsciLexerBatch*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnRefreshProperties(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBatch_StyleBitsNeeded(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerBatch*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerBatch_QBaseStyleBitsNeeded(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_StyleBitsNeeded_IsBase(true);
        return vqscilexerbatch->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerBatch*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnStyleBitsNeeded(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBatch_WordCharacters(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return (const char*)vqscilexerbatch->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerBatch_QBaseWordCharacters(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_WordCharacters_IsBase(true);
        return (const char*)vqscilexerbatch->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerBatch*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnWordCharacters(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_SetAutoIndentStyle(QsciLexerBatch* self, int autoindentstyle) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerBatch*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseSetAutoIndentStyle(QsciLexerBatch* self, int autoindentstyle) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetAutoIndentStyle_IsBase(true);
        vqscilexerbatch->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerBatch*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetAutoIndentStyle(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_SetColor(QsciLexerBatch* self, const QColor* c, int style) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerBatch*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseSetColor(QsciLexerBatch* self, const QColor* c, int style) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetColor_IsBase(true);
        vqscilexerbatch->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerBatch*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetColor(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetColor_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_SetEolFill(QsciLexerBatch* self, bool eoffill, int style) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerBatch*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseSetEolFill(QsciLexerBatch* self, bool eoffill, int style) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetEolFill_IsBase(true);
        vqscilexerbatch->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerBatch*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetEolFill(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_SetFont(QsciLexerBatch* self, const QFont* f, int style) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerBatch*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseSetFont(QsciLexerBatch* self, const QFont* f, int style) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetFont_IsBase(true);
        vqscilexerbatch->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerBatch*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetFont(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetFont_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_SetPaper(QsciLexerBatch* self, const QColor* c, int style) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerBatch*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseSetPaper(QsciLexerBatch* self, const QColor* c, int style) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetPaper_IsBase(true);
        vqscilexerbatch->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerBatch*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSetPaper(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBatch_ReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerBatch*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerBatch_QBaseReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_ReadProperties_IsBase(true);
        return vqscilexerbatch->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerBatch*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnReadProperties(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBatch_WriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerBatch*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerBatch_QBaseWriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_WriteProperties_IsBase(true);
        return vqscilexerbatch->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerBatch*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnWriteProperties(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBatch_Event(QsciLexerBatch* self, QEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->event(event);
    } else {
        return ((VirtualQsciLexerBatch*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerBatch_QBaseEvent(QsciLexerBatch* self, QEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Event_IsBase(true);
        return vqscilexerbatch->event(event);
    } else {
        return ((VirtualQsciLexerBatch*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnEvent(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Event_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBatch_EventFilter(QsciLexerBatch* self, QObject* watched, QEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerBatch*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerBatch_QBaseEventFilter(QsciLexerBatch* self, QObject* watched, QEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_EventFilter_IsBase(true);
        return vqscilexerbatch->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerBatch*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnEventFilter(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_TimerEvent(QsciLexerBatch* self, QTimerEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->timerEvent(event);
    } else {
        ((VirtualQsciLexerBatch*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseTimerEvent(QsciLexerBatch* self, QTimerEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_TimerEvent_IsBase(true);
        vqscilexerbatch->timerEvent(event);
    } else {
        ((VirtualQsciLexerBatch*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnTimerEvent(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_ChildEvent(QsciLexerBatch* self, QChildEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->childEvent(event);
    } else {
        ((VirtualQsciLexerBatch*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseChildEvent(QsciLexerBatch* self, QChildEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_ChildEvent_IsBase(true);
        vqscilexerbatch->childEvent(event);
    } else {
        ((VirtualQsciLexerBatch*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnChildEvent(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_CustomEvent(QsciLexerBatch* self, QEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->customEvent(event);
    } else {
        ((VirtualQsciLexerBatch*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseCustomEvent(QsciLexerBatch* self, QEvent* event) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_CustomEvent_IsBase(true);
        vqscilexerbatch->customEvent(event);
    } else {
        ((VirtualQsciLexerBatch*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnCustomEvent(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_ConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerBatch*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_ConnectNotify_IsBase(true);
        vqscilexerbatch->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerBatch*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnConnectNotify(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBatch_DisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerBatch*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerBatch_QBaseDisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DisconnectNotify_IsBase(true);
        vqscilexerbatch->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerBatch*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnDisconnectNotify(QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = dynamic_cast<VirtualQsciLexerBatch*>(self);
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerBatch_Sender(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->sender();
    } else {
        return ((VirtualQsciLexerBatch*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerBatch_QBaseSender(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Sender_IsBase(true);
        return vqscilexerbatch->sender();
    } else {
        return ((VirtualQsciLexerBatch*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSender(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Sender_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBatch_SenderSignalIndex(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerBatch*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerBatch_QBaseSenderSignalIndex(const QsciLexerBatch* self) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SenderSignalIndex_IsBase(true);
        return vqscilexerbatch->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerBatch*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnSenderSignalIndex(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBatch_Receivers(const QsciLexerBatch* self, const char* signal) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->receivers(signal);
    } else {
        return ((VirtualQsciLexerBatch*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerBatch_QBaseReceivers(const QsciLexerBatch* self, const char* signal) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Receivers_IsBase(true);
        return vqscilexerbatch->receivers(signal);
    } else {
        return ((VirtualQsciLexerBatch*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnReceivers(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_Receivers_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBatch_IsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        return vqscilexerbatch->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerBatch*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerBatch_QBaseIsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_IsSignalConnected_IsBase(true);
        return vqscilexerbatch->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerBatch*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBatch_OnIsSignalConnected(const QsciLexerBatch* self, intptr_t slot) {
    auto* vqscilexerbatch = const_cast<VirtualQsciLexerBatch*>(dynamic_cast<const VirtualQsciLexerBatch*>(self));
    if (vqscilexerbatch && vqscilexerbatch->isVirtualQsciLexerBatch) {
        vqscilexerbatch->setQsciLexerBatch_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerBatch::QsciLexerBatch_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerBatch_Delete(QsciLexerBatch* self) {
    delete self;
}
