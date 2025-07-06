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
#include <qscilexersql.h>
#include "libqscilexersql.h"
#include "libqscilexersql.hxx"

QsciLexerSQL* QsciLexerSQL_new() {
    return new VirtualQsciLexerSQL();
}

QsciLexerSQL* QsciLexerSQL_new2(QObject* parent) {
    return new VirtualQsciLexerSQL(parent);
}

QMetaObject* QsciLexerSQL_MetaObject(const QsciLexerSQL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerSQL_Metacast(QsciLexerSQL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerSQL_Metacall(QsciLexerSQL* self, int param1, int param2, void** param3) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerSQL*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerSQL_OnMetacall(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Metacall_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerSQL_QBaseMetacall(QsciLexerSQL* self, int param1, int param2, void** param3) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Metacall_IsBase(true);
        return vqscilexersql->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerSQL*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerSQL_Tr(const char* s) {
    QString _ret = QsciLexerSQL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerSQL_DefaultColor(const QsciLexerSQL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerSQL_DefaultFont(const QsciLexerSQL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerSQL_DefaultPaper(const QsciLexerSQL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerSQL_BackslashEscapes(const QsciLexerSQL* self) {
    return self->backslashEscapes();
}

void QsciLexerSQL_SetDottedWords(QsciLexerSQL* self, bool enable) {
    self->setDottedWords(enable);
}

bool QsciLexerSQL_DottedWords(const QsciLexerSQL* self) {
    return self->dottedWords();
}

void QsciLexerSQL_SetFoldAtElse(QsciLexerSQL* self, bool fold) {
    self->setFoldAtElse(fold);
}

bool QsciLexerSQL_FoldAtElse(const QsciLexerSQL* self) {
    return self->foldAtElse();
}

bool QsciLexerSQL_FoldComments(const QsciLexerSQL* self) {
    return self->foldComments();
}

bool QsciLexerSQL_FoldCompact(const QsciLexerSQL* self) {
    return self->foldCompact();
}

void QsciLexerSQL_SetFoldOnlyBegin(QsciLexerSQL* self, bool fold) {
    self->setFoldOnlyBegin(fold);
}

bool QsciLexerSQL_FoldOnlyBegin(const QsciLexerSQL* self) {
    return self->foldOnlyBegin();
}

void QsciLexerSQL_SetHashComments(QsciLexerSQL* self, bool enable) {
    self->setHashComments(enable);
}

bool QsciLexerSQL_HashComments(const QsciLexerSQL* self) {
    return self->hashComments();
}

void QsciLexerSQL_SetQuotedIdentifiers(QsciLexerSQL* self, bool enable) {
    self->setQuotedIdentifiers(enable);
}

bool QsciLexerSQL_QuotedIdentifiers(const QsciLexerSQL* self) {
    return self->quotedIdentifiers();
}

libqt_string QsciLexerSQL_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerSQL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerSQL_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerSQL::tr(s, c, static_cast<int>(n));
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
void QsciLexerSQL_SetBackslashEscapes(QsciLexerSQL* self, bool enable) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setBackslashEscapes(enable);
    } else {
        ((VirtualQsciLexerSQL*)self)->setBackslashEscapes(enable);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetBackslashEscapes(QsciLexerSQL* self, bool enable) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetBackslashEscapes_IsBase(true);
        vqscilexersql->setBackslashEscapes(enable);
    } else {
        ((VirtualQsciLexerSQL*)self)->setBackslashEscapes(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetBackslashEscapes(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetBackslashEscapes_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetBackslashEscapes_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_SetFoldComments(QsciLexerSQL* self, bool fold) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerSQL*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetFoldComments(QsciLexerSQL* self, bool fold) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetFoldComments_IsBase(true);
        vqscilexersql->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerSQL*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetFoldComments(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_SetFoldCompact(QsciLexerSQL* self, bool fold) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerSQL*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetFoldCompact(QsciLexerSQL* self, bool fold) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetFoldCompact_IsBase(true);
        vqscilexersql->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerSQL*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetFoldCompact(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSQL_Language(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return (const char*)vqscilexersql->language();
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerSQL_QBaseLanguage(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Language_IsBase(true);
        return (const char*)vqscilexersql->language();
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnLanguage(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Language_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSQL_Lexer(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return (const char*)vqscilexersql->lexer();
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerSQL_QBaseLexer(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Lexer_IsBase(true);
        return (const char*)vqscilexersql->lexer();
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnLexer(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Lexer_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSQL_LexerId(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->lexerId();
    } else {
        return ((VirtualQsciLexerSQL*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerSQL_QBaseLexerId(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_LexerId_IsBase(true);
        return vqscilexersql->lexerId();
    } else {
        return ((VirtualQsciLexerSQL*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnLexerId(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_LexerId_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSQL_AutoCompletionFillups(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return (const char*)vqscilexersql->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerSQL_QBaseAutoCompletionFillups(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexersql->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnAutoCompletionFillups(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerSQL_AutoCompletionWordSeparators(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        QList<QString> _ret = vqscilexersql->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerSQL*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerSQL_QBaseAutoCompletionWordSeparators(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexersql->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerSQL*)self)->autoCompletionWordSeparators();
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
void QsciLexerSQL_OnAutoCompletionWordSeparators(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSQL_BlockEnd(const QsciLexerSQL* self, int* style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return (const char*)vqscilexersql->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSQL_QBaseBlockEnd(const QsciLexerSQL* self, int* style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BlockEnd_IsBase(true);
        return (const char*)vqscilexersql->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBlockEnd(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSQL_BlockLookback(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->blockLookback();
    } else {
        return ((VirtualQsciLexerSQL*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerSQL_QBaseBlockLookback(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BlockLookback_IsBase(true);
        return vqscilexersql->blockLookback();
    } else {
        return ((VirtualQsciLexerSQL*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBlockLookback(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSQL_BlockStart(const QsciLexerSQL* self, int* style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return (const char*)vqscilexersql->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSQL_QBaseBlockStart(const QsciLexerSQL* self, int* style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BlockStart_IsBase(true);
        return (const char*)vqscilexersql->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBlockStart(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSQL_BlockStartKeyword(const QsciLexerSQL* self, int* style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return (const char*)vqscilexersql->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSQL_QBaseBlockStartKeyword(const QsciLexerSQL* self, int* style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexersql->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBlockStartKeyword(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSQL_BraceStyle(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->braceStyle();
    } else {
        return ((VirtualQsciLexerSQL*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerSQL_QBaseBraceStyle(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BraceStyle_IsBase(true);
        return vqscilexersql->braceStyle();
    } else {
        return ((VirtualQsciLexerSQL*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBraceStyle(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSQL_CaseSensitive(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->caseSensitive();
    } else {
        return ((VirtualQsciLexerSQL*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerSQL_QBaseCaseSensitive(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_CaseSensitive_IsBase(true);
        return vqscilexersql->caseSensitive();
    } else {
        return ((VirtualQsciLexerSQL*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnCaseSensitive(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSQL_Color(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return new QColor(vqscilexersql->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSQL*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSQL_QBaseColor(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Color_IsBase(true);
        return new QColor(vqscilexersql->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSQL*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnColor(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Color_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSQL_EolFill(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSQL*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerSQL_QBaseEolFill(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_EolFill_IsBase(true);
        return vqscilexersql->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSQL*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnEolFill(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_EolFill_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerSQL_Font(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return new QFont(vqscilexersql->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSQL*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerSQL_QBaseFont(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Font_IsBase(true);
        return new QFont(vqscilexersql->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSQL*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnFont(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Font_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSQL_IndentationGuideView(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->indentationGuideView();
    } else {
        return ((VirtualQsciLexerSQL*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerSQL_QBaseIndentationGuideView(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_IndentationGuideView_IsBase(true);
        return vqscilexersql->indentationGuideView();
    } else {
        return ((VirtualQsciLexerSQL*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnIndentationGuideView(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSQL_Keywords(const QsciLexerSQL* self, int set) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return (const char*)vqscilexersql->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerSQL_QBaseKeywords(const QsciLexerSQL* self, int set) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Keywords_IsBase(true);
        return (const char*)vqscilexersql->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnKeywords(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Keywords_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSQL_DefaultStyle(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->defaultStyle();
    } else {
        return ((VirtualQsciLexerSQL*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerSQL_QBaseDefaultStyle(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultStyle_IsBase(true);
        return vqscilexersql->defaultStyle();
    } else {
        return ((VirtualQsciLexerSQL*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultStyle(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSQL_Description(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        QString _ret = vqscilexersql->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSQL*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerSQL_QBaseDescription(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Description_IsBase(true);
        QString _ret = vqscilexersql->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSQL*)self)->description(static_cast<int>(style));
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
void QsciLexerSQL_OnDescription(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Description_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSQL_Paper(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return new QColor(vqscilexersql->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSQL*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSQL_QBasePaper(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Paper_IsBase(true);
        return new QColor(vqscilexersql->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSQL*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnPaper(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Paper_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSQL_DefaultColorWithStyle(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return new QColor(vqscilexersql->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSQL*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSQL_QBaseDefaultColorWithStyle(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexersql->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSQL*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultColorWithStyle(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSQL_DefaultEolFill(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSQL*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerSQL_QBaseDefaultEolFill(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultEolFill_IsBase(true);
        return vqscilexersql->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerSQL*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultEolFill(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerSQL_DefaultFontWithStyle(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return new QFont(vqscilexersql->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSQL*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerSQL_QBaseDefaultFontWithStyle(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexersql->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerSQL*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultFontWithStyle(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSQL_DefaultPaperWithStyle(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return new QColor(vqscilexersql->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSQL*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSQL_QBaseDefaultPaperWithStyle(const QsciLexerSQL* self, int style) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexersql->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerSQL*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultPaperWithStyle(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_SetEditor(QsciLexerSQL* self, QsciScintilla* editor) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setEditor(editor);
    } else {
        ((VirtualQsciLexerSQL*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetEditor(QsciLexerSQL* self, QsciScintilla* editor) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetEditor_IsBase(true);
        vqscilexersql->setEditor(editor);
    } else {
        ((VirtualQsciLexerSQL*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetEditor(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_RefreshProperties(QsciLexerSQL* self) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->refreshProperties();
    } else {
        ((VirtualQsciLexerSQL*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseRefreshProperties(QsciLexerSQL* self) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_RefreshProperties_IsBase(true);
        vqscilexersql->refreshProperties();
    } else {
        ((VirtualQsciLexerSQL*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnRefreshProperties(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSQL_StyleBitsNeeded(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerSQL*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerSQL_QBaseStyleBitsNeeded(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_StyleBitsNeeded_IsBase(true);
        return vqscilexersql->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerSQL*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnStyleBitsNeeded(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSQL_WordCharacters(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return (const char*)vqscilexersql->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerSQL_QBaseWordCharacters(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_WordCharacters_IsBase(true);
        return (const char*)vqscilexersql->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerSQL*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnWordCharacters(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_SetAutoIndentStyle(QsciLexerSQL* self, int autoindentstyle) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerSQL*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetAutoIndentStyle(QsciLexerSQL* self, int autoindentstyle) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetAutoIndentStyle_IsBase(true);
        vqscilexersql->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerSQL*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetAutoIndentStyle(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_SetColor(QsciLexerSQL* self, const QColor* c, int style) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSQL*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetColor(QsciLexerSQL* self, const QColor* c, int style) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetColor_IsBase(true);
        vqscilexersql->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSQL*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetColor(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetColor_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_SetEolFill(QsciLexerSQL* self, bool eoffill, int style) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSQL*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetEolFill(QsciLexerSQL* self, bool eoffill, int style) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetEolFill_IsBase(true);
        vqscilexersql->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSQL*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetEolFill(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_SetFont(QsciLexerSQL* self, const QFont* f, int style) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSQL*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetFont(QsciLexerSQL* self, const QFont* f, int style) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetFont_IsBase(true);
        vqscilexersql->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSQL*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetFont(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetFont_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_SetPaper(QsciLexerSQL* self, const QColor* c, int style) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSQL*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseSetPaper(QsciLexerSQL* self, const QColor* c, int style) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetPaper_IsBase(true);
        vqscilexersql->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerSQL*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetPaper(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSQL_ReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSQL*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerSQL_QBaseReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_ReadProperties_IsBase(true);
        return vqscilexersql->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSQL*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnReadProperties(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSQL_WriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSQL*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerSQL_QBaseWriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_WriteProperties_IsBase(true);
        return vqscilexersql->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerSQL*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnWriteProperties(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSQL_Event(QsciLexerSQL* self, QEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->event(event);
    } else {
        return ((VirtualQsciLexerSQL*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerSQL_QBaseEvent(QsciLexerSQL* self, QEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Event_IsBase(true);
        return vqscilexersql->event(event);
    } else {
        return ((VirtualQsciLexerSQL*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnEvent(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Event_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSQL_EventFilter(QsciLexerSQL* self, QObject* watched, QEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerSQL*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerSQL_QBaseEventFilter(QsciLexerSQL* self, QObject* watched, QEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_EventFilter_IsBase(true);
        return vqscilexersql->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerSQL*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnEventFilter(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_TimerEvent(QsciLexerSQL* self, QTimerEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->timerEvent(event);
    } else {
        ((VirtualQsciLexerSQL*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseTimerEvent(QsciLexerSQL* self, QTimerEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_TimerEvent_IsBase(true);
        vqscilexersql->timerEvent(event);
    } else {
        ((VirtualQsciLexerSQL*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnTimerEvent(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_ChildEvent(QsciLexerSQL* self, QChildEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->childEvent(event);
    } else {
        ((VirtualQsciLexerSQL*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseChildEvent(QsciLexerSQL* self, QChildEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_ChildEvent_IsBase(true);
        vqscilexersql->childEvent(event);
    } else {
        ((VirtualQsciLexerSQL*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnChildEvent(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_CustomEvent(QsciLexerSQL* self, QEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->customEvent(event);
    } else {
        ((VirtualQsciLexerSQL*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseCustomEvent(QsciLexerSQL* self, QEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_CustomEvent_IsBase(true);
        vqscilexersql->customEvent(event);
    } else {
        ((VirtualQsciLexerSQL*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnCustomEvent(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_ConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerSQL*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_ConnectNotify_IsBase(true);
        vqscilexersql->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerSQL*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnConnectNotify(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSQL_DisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerSQL*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerSQL_QBaseDisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DisconnectNotify_IsBase(true);
        vqscilexersql->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerSQL*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDisconnectNotify(QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSQL_TextAsBytes(const QsciLexerSQL* self, const libqt_string text) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        QByteArray _qb = vqscilexersql->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerSQL*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerSQL_QBaseTextAsBytes(const QsciLexerSQL* self, const libqt_string text) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexersql->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerSQL*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnTextAsBytes(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSQL_BytesAsText(const QsciLexerSQL* self, const char* bytes, int size) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        QString _ret = vqscilexersql->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSQL*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerSQL_QBaseBytesAsText(const QsciLexerSQL* self, const char* bytes, int size) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BytesAsText_IsBase(true);
        QString _ret = vqscilexersql->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerSQL*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerSQL_OnBytesAsText(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerSQL_Sender(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->sender();
    } else {
        return ((VirtualQsciLexerSQL*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerSQL_QBaseSender(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Sender_IsBase(true);
        return vqscilexersql->sender();
    } else {
        return ((VirtualQsciLexerSQL*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSender(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Sender_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSQL_SenderSignalIndex(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerSQL*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerSQL_QBaseSenderSignalIndex(const QsciLexerSQL* self) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SenderSignalIndex_IsBase(true);
        return vqscilexersql->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerSQL*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSenderSignalIndex(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSQL_Receivers(const QsciLexerSQL* self, const char* signal) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->receivers(signal);
    } else {
        return ((VirtualQsciLexerSQL*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerSQL_QBaseReceivers(const QsciLexerSQL* self, const char* signal) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Receivers_IsBase(true);
        return vqscilexersql->receivers(signal);
    } else {
        return ((VirtualQsciLexerSQL*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnReceivers(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_Receivers_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSQL_IsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        return vqscilexersql->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerSQL*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerSQL_QBaseIsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_IsSignalConnected_IsBase(true);
        return vqscilexersql->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerSQL*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnIsSignalConnected(const QsciLexerSQL* self, intptr_t slot) {
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql && vqscilexersql->isVirtualQsciLexerSQL) {
        vqscilexersql->setQsciLexerSQL_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerSQL_Delete(QsciLexerSQL* self) {
    delete self;
}
