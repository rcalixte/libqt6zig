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
#include <qscilexermarkdown.h>
#include "libqscilexermarkdown.h"
#include "libqscilexermarkdown.hxx"

QsciLexerMarkdown* QsciLexerMarkdown_new() {
    return new VirtualQsciLexerMarkdown();
}

QsciLexerMarkdown* QsciLexerMarkdown_new2(QObject* parent) {
    return new VirtualQsciLexerMarkdown(parent);
}

QMetaObject* QsciLexerMarkdown_MetaObject(const QsciLexerMarkdown* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMarkdown_Metacast(QsciLexerMarkdown* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMarkdown_Metacall(QsciLexerMarkdown* self, int param1, int param2, void** param3) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerMarkdown_OnMetacall(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Metacall_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerMarkdown_QBaseMetacall(QsciLexerMarkdown* self, int param1, int param2, void** param3) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Metacall_IsBase(true);
        return vqscilexermarkdown->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerMarkdown_Tr(const char* s) {
    QString _ret = QsciLexerMarkdown::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerMarkdown_DefaultColor(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMarkdown_DefaultFont(const QsciLexerMarkdown* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerMarkdown_DefaultPaper(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerMarkdown_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerMarkdown::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMarkdown_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerMarkdown::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerMarkdown_Language(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return (const char*)vqscilexermarkdown->language();
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerMarkdown_QBaseLanguage(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Language_IsBase(true);
        return (const char*)vqscilexermarkdown->language();
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnLanguage(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Language_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMarkdown_Lexer(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return (const char*)vqscilexermarkdown->lexer();
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerMarkdown_QBaseLexer(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Lexer_IsBase(true);
        return (const char*)vqscilexermarkdown->lexer();
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnLexer(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Lexer_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMarkdown_LexerId(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->lexerId();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerMarkdown_QBaseLexerId(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_LexerId_IsBase(true);
        return vqscilexermarkdown->lexerId();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnLexerId(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_LexerId_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMarkdown_AutoCompletionFillups(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return (const char*)vqscilexermarkdown->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerMarkdown_QBaseAutoCompletionFillups(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexermarkdown->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnAutoCompletionFillups(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMarkdown_AutoCompletionWordSeparators(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        QStringList _ret = vqscilexermarkdown->autoCompletionWordSeparators();
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
        QStringList _ret = ((VirtualQsciLexerMarkdown*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerMarkdown_QBaseAutoCompletionWordSeparators(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexermarkdown->autoCompletionWordSeparators();
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
        QStringList _ret = ((VirtualQsciLexerMarkdown*)self)->autoCompletionWordSeparators();
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
void QsciLexerMarkdown_OnAutoCompletionWordSeparators(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMarkdown_BlockEnd(const QsciLexerMarkdown* self, int* style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return (const char*)vqscilexermarkdown->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMarkdown_QBaseBlockEnd(const QsciLexerMarkdown* self, int* style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BlockEnd_IsBase(true);
        return (const char*)vqscilexermarkdown->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBlockEnd(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMarkdown_BlockLookback(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->blockLookback();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerMarkdown_QBaseBlockLookback(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BlockLookback_IsBase(true);
        return vqscilexermarkdown->blockLookback();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBlockLookback(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMarkdown_BlockStart(const QsciLexerMarkdown* self, int* style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return (const char*)vqscilexermarkdown->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMarkdown_QBaseBlockStart(const QsciLexerMarkdown* self, int* style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BlockStart_IsBase(true);
        return (const char*)vqscilexermarkdown->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBlockStart(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMarkdown_BlockStartKeyword(const QsciLexerMarkdown* self, int* style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return (const char*)vqscilexermarkdown->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMarkdown_QBaseBlockStartKeyword(const QsciLexerMarkdown* self, int* style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexermarkdown->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBlockStartKeyword(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMarkdown_BraceStyle(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->braceStyle();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerMarkdown_QBaseBraceStyle(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BraceStyle_IsBase(true);
        return vqscilexermarkdown->braceStyle();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBraceStyle(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMarkdown_CaseSensitive(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->caseSensitive();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_QBaseCaseSensitive(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_CaseSensitive_IsBase(true);
        return vqscilexermarkdown->caseSensitive();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnCaseSensitive(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMarkdown_Color(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return new QColor(vqscilexermarkdown->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMarkdown*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMarkdown_QBaseColor(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Color_IsBase(true);
        return new QColor(vqscilexermarkdown->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMarkdown*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnColor(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Color_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMarkdown_EolFill(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_QBaseEolFill(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_EolFill_IsBase(true);
        return vqscilexermarkdown->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnEolFill(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_EolFill_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMarkdown_Font(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return new QFont(vqscilexermarkdown->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMarkdown*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMarkdown_QBaseFont(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Font_IsBase(true);
        return new QFont(vqscilexermarkdown->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMarkdown*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnFont(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Font_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMarkdown_IndentationGuideView(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->indentationGuideView();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerMarkdown_QBaseIndentationGuideView(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_IndentationGuideView_IsBase(true);
        return vqscilexermarkdown->indentationGuideView();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnIndentationGuideView(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMarkdown_Keywords(const QsciLexerMarkdown* self, int set) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return (const char*)vqscilexermarkdown->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerMarkdown_QBaseKeywords(const QsciLexerMarkdown* self, int set) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Keywords_IsBase(true);
        return (const char*)vqscilexermarkdown->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnKeywords(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Keywords_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMarkdown_DefaultStyle(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->defaultStyle();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerMarkdown_QBaseDefaultStyle(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultStyle_IsBase(true);
        return vqscilexermarkdown->defaultStyle();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultStyle(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerMarkdown_Description(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        QString _ret = vqscilexermarkdown->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerMarkdown*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerMarkdown_QBaseDescription(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Description_IsBase(true);
        QString _ret = vqscilexermarkdown->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerMarkdown*)self)->description(static_cast<int>(style));
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
void QsciLexerMarkdown_OnDescription(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Description_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMarkdown_Paper(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return new QColor(vqscilexermarkdown->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMarkdown*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMarkdown_QBasePaper(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Paper_IsBase(true);
        return new QColor(vqscilexermarkdown->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMarkdown*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnPaper(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Paper_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMarkdown_DefaultColorWithStyle(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return new QColor(vqscilexermarkdown->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMarkdown*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMarkdown_QBaseDefaultColorWithStyle(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexermarkdown->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMarkdown*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultColorWithStyle(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMarkdown_DefaultEolFill(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_QBaseDefaultEolFill(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultEolFill_IsBase(true);
        return vqscilexermarkdown->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultEolFill(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMarkdown_DefaultFontWithStyle(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return new QFont(vqscilexermarkdown->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMarkdown*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMarkdown_QBaseDefaultFontWithStyle(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexermarkdown->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMarkdown*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultFontWithStyle(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMarkdown_DefaultPaperWithStyle(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return new QColor(vqscilexermarkdown->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMarkdown*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMarkdown_QBaseDefaultPaperWithStyle(const QsciLexerMarkdown* self, int style) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexermarkdown->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMarkdown*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultPaperWithStyle(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_SetEditor(QsciLexerMarkdown* self, QsciScintilla* editor) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setEditor(editor);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseSetEditor(QsciLexerMarkdown* self, QsciScintilla* editor) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetEditor_IsBase(true);
        vqscilexermarkdown->setEditor(editor);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetEditor(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_RefreshProperties(QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->refreshProperties();
    } else {
        ((VirtualQsciLexerMarkdown*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseRefreshProperties(QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_RefreshProperties_IsBase(true);
        vqscilexermarkdown->refreshProperties();
    } else {
        ((VirtualQsciLexerMarkdown*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnRefreshProperties(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMarkdown_StyleBitsNeeded(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerMarkdown_QBaseStyleBitsNeeded(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_StyleBitsNeeded_IsBase(true);
        return vqscilexermarkdown->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnStyleBitsNeeded(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMarkdown_WordCharacters(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return (const char*)vqscilexermarkdown->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerMarkdown_QBaseWordCharacters(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_WordCharacters_IsBase(true);
        return (const char*)vqscilexermarkdown->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerMarkdown*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnWordCharacters(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_SetAutoIndentStyle(QsciLexerMarkdown* self, int autoindentstyle) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseSetAutoIndentStyle(QsciLexerMarkdown* self, int autoindentstyle) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetAutoIndentStyle_IsBase(true);
        vqscilexermarkdown->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetAutoIndentStyle(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_SetColor(QsciLexerMarkdown* self, const QColor* c, int style) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseSetColor(QsciLexerMarkdown* self, const QColor* c, int style) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetColor_IsBase(true);
        vqscilexermarkdown->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetColor(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetColor_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_SetEolFill(QsciLexerMarkdown* self, bool eoffill, int style) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseSetEolFill(QsciLexerMarkdown* self, bool eoffill, int style) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetEolFill_IsBase(true);
        vqscilexermarkdown->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetEolFill(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_SetFont(QsciLexerMarkdown* self, const QFont* f, int style) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseSetFont(QsciLexerMarkdown* self, const QFont* f, int style) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetFont_IsBase(true);
        vqscilexermarkdown->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetFont(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetFont_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_SetPaper(QsciLexerMarkdown* self, const QColor* c, int style) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseSetPaper(QsciLexerMarkdown* self, const QColor* c, int style) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetPaper_IsBase(true);
        vqscilexermarkdown->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMarkdown*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetPaper(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMarkdown_ReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_QBaseReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_ReadProperties_IsBase(true);
        return vqscilexermarkdown->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnReadProperties(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMarkdown_WriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_QBaseWriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_WriteProperties_IsBase(true);
        return vqscilexermarkdown->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnWriteProperties(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMarkdown_Event(QsciLexerMarkdown* self, QEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->event(event);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_QBaseEvent(QsciLexerMarkdown* self, QEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Event_IsBase(true);
        return vqscilexermarkdown->event(event);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnEvent(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Event_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMarkdown_EventFilter(QsciLexerMarkdown* self, QObject* watched, QEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_QBaseEventFilter(QsciLexerMarkdown* self, QObject* watched, QEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_EventFilter_IsBase(true);
        return vqscilexermarkdown->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnEventFilter(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_TimerEvent(QsciLexerMarkdown* self, QTimerEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->timerEvent(event);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseTimerEvent(QsciLexerMarkdown* self, QTimerEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_TimerEvent_IsBase(true);
        vqscilexermarkdown->timerEvent(event);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnTimerEvent(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_ChildEvent(QsciLexerMarkdown* self, QChildEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->childEvent(event);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseChildEvent(QsciLexerMarkdown* self, QChildEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_ChildEvent_IsBase(true);
        vqscilexermarkdown->childEvent(event);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnChildEvent(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_CustomEvent(QsciLexerMarkdown* self, QEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->customEvent(event);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseCustomEvent(QsciLexerMarkdown* self, QEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_CustomEvent_IsBase(true);
        vqscilexermarkdown->customEvent(event);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnCustomEvent(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_ConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_ConnectNotify_IsBase(true);
        vqscilexermarkdown->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnConnectNotify(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMarkdown_DisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMarkdown_QBaseDisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DisconnectNotify_IsBase(true);
        vqscilexermarkdown->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerMarkdown*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDisconnectNotify(QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerMarkdown_Sender(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->sender();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerMarkdown_QBaseSender(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Sender_IsBase(true);
        return vqscilexermarkdown->sender();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSender(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Sender_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMarkdown_SenderSignalIndex(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerMarkdown_QBaseSenderSignalIndex(const QsciLexerMarkdown* self) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SenderSignalIndex_IsBase(true);
        return vqscilexermarkdown->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSenderSignalIndex(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMarkdown_Receivers(const QsciLexerMarkdown* self, const char* signal) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->receivers(signal);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerMarkdown_QBaseReceivers(const QsciLexerMarkdown* self, const char* signal) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Receivers_IsBase(true);
        return vqscilexermarkdown->receivers(signal);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnReceivers(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_Receivers_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMarkdown_IsSignalConnected(const QsciLexerMarkdown* self, const QMetaMethod* signal) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        return vqscilexermarkdown->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_QBaseIsSignalConnected(const QsciLexerMarkdown* self, const QMetaMethod* signal) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_IsSignalConnected_IsBase(true);
        return vqscilexermarkdown->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerMarkdown*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnIsSignalConnected(const QsciLexerMarkdown* self, intptr_t slot) {
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown && vqscilexermarkdown->isVirtualQsciLexerMarkdown) {
        vqscilexermarkdown->setQsciLexerMarkdown_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerMarkdown_Delete(QsciLexerMarkdown* self) {
    delete self;
}
