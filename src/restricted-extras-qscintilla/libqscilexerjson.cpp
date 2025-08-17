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
#include <qscilexerjson.h>
#include "libqscilexerjson.h"
#include "libqscilexerjson.hxx"

QsciLexerJSON* QsciLexerJSON_new() {
    return new VirtualQsciLexerJSON();
}

QsciLexerJSON* QsciLexerJSON_new2(QObject* parent) {
    return new VirtualQsciLexerJSON(parent);
}

QMetaObject* QsciLexerJSON_MetaObject(const QsciLexerJSON* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerJSON_Metacast(QsciLexerJSON* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerJSON_Metacall(QsciLexerJSON* self, int param1, int param2, void** param3) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerJSON*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerJSON_OnMetacall(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Metacall_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerJSON_QBaseMetacall(QsciLexerJSON* self, int param1, int param2, void** param3) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Metacall_IsBase(true);
        return vqscilexerjson->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerJSON*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerJSON_Tr(const char* s) {
    QString _ret = QsciLexerJSON::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerJSON_DefaultColor(const QsciLexerJSON* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerJSON_DefaultFont(const QsciLexerJSON* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerJSON_DefaultPaper(const QsciLexerJSON* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

void QsciLexerJSON_SetHighlightComments(QsciLexerJSON* self, bool highlight) {
    self->setHighlightComments(highlight);
}

bool QsciLexerJSON_HighlightComments(const QsciLexerJSON* self) {
    return self->highlightComments();
}

void QsciLexerJSON_SetHighlightEscapeSequences(QsciLexerJSON* self, bool highlight) {
    self->setHighlightEscapeSequences(highlight);
}

bool QsciLexerJSON_HighlightEscapeSequences(const QsciLexerJSON* self) {
    return self->highlightEscapeSequences();
}

void QsciLexerJSON_SetFoldCompact(QsciLexerJSON* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerJSON_FoldCompact(const QsciLexerJSON* self) {
    return self->foldCompact();
}

libqt_string QsciLexerJSON_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerJSON::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJSON_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerJSON::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerJSON_Language(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return (const char*)vqscilexerjson->language();
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerJSON_QBaseLanguage(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Language_IsBase(true);
        return (const char*)vqscilexerjson->language();
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnLanguage(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Language_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJSON_Lexer(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return (const char*)vqscilexerjson->lexer();
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerJSON_QBaseLexer(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Lexer_IsBase(true);
        return (const char*)vqscilexerjson->lexer();
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnLexer(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Lexer_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJSON_LexerId(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->lexerId();
    } else {
        return ((VirtualQsciLexerJSON*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerJSON_QBaseLexerId(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_LexerId_IsBase(true);
        return vqscilexerjson->lexerId();
    } else {
        return ((VirtualQsciLexerJSON*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnLexerId(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_LexerId_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJSON_AutoCompletionFillups(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return (const char*)vqscilexerjson->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerJSON_QBaseAutoCompletionFillups(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerjson->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnAutoCompletionFillups(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerJSON_AutoCompletionWordSeparators(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        QList<QString> _ret = vqscilexerjson->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerJSON*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerJSON_QBaseAutoCompletionWordSeparators(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerjson->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerJSON*)self)->autoCompletionWordSeparators();
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
void QsciLexerJSON_OnAutoCompletionWordSeparators(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJSON_BlockEnd(const QsciLexerJSON* self, int* style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return (const char*)vqscilexerjson->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJSON_QBaseBlockEnd(const QsciLexerJSON* self, int* style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BlockEnd_IsBase(true);
        return (const char*)vqscilexerjson->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBlockEnd(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJSON_BlockLookback(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->blockLookback();
    } else {
        return ((VirtualQsciLexerJSON*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerJSON_QBaseBlockLookback(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BlockLookback_IsBase(true);
        return vqscilexerjson->blockLookback();
    } else {
        return ((VirtualQsciLexerJSON*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBlockLookback(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJSON_BlockStart(const QsciLexerJSON* self, int* style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return (const char*)vqscilexerjson->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJSON_QBaseBlockStart(const QsciLexerJSON* self, int* style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BlockStart_IsBase(true);
        return (const char*)vqscilexerjson->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBlockStart(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJSON_BlockStartKeyword(const QsciLexerJSON* self, int* style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return (const char*)vqscilexerjson->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJSON_QBaseBlockStartKeyword(const QsciLexerJSON* self, int* style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerjson->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBlockStartKeyword(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJSON_BraceStyle(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->braceStyle();
    } else {
        return ((VirtualQsciLexerJSON*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerJSON_QBaseBraceStyle(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BraceStyle_IsBase(true);
        return vqscilexerjson->braceStyle();
    } else {
        return ((VirtualQsciLexerJSON*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBraceStyle(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJSON_CaseSensitive(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->caseSensitive();
    } else {
        return ((VirtualQsciLexerJSON*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerJSON_QBaseCaseSensitive(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_CaseSensitive_IsBase(true);
        return vqscilexerjson->caseSensitive();
    } else {
        return ((VirtualQsciLexerJSON*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnCaseSensitive(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJSON_Color(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return new QColor(vqscilexerjson->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJSON*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJSON_QBaseColor(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Color_IsBase(true);
        return new QColor(vqscilexerjson->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJSON*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnColor(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Color_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJSON_EolFill(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJSON*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJSON_QBaseEolFill(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_EolFill_IsBase(true);
        return vqscilexerjson->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJSON*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnEolFill(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_EolFill_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJSON_Font(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return new QFont(vqscilexerjson->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJSON*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJSON_QBaseFont(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Font_IsBase(true);
        return new QFont(vqscilexerjson->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJSON*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnFont(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Font_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJSON_IndentationGuideView(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->indentationGuideView();
    } else {
        return ((VirtualQsciLexerJSON*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerJSON_QBaseIndentationGuideView(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_IndentationGuideView_IsBase(true);
        return vqscilexerjson->indentationGuideView();
    } else {
        return ((VirtualQsciLexerJSON*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnIndentationGuideView(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJSON_Keywords(const QsciLexerJSON* self, int set) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return (const char*)vqscilexerjson->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerJSON_QBaseKeywords(const QsciLexerJSON* self, int set) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Keywords_IsBase(true);
        return (const char*)vqscilexerjson->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnKeywords(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Keywords_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJSON_DefaultStyle(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->defaultStyle();
    } else {
        return ((VirtualQsciLexerJSON*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerJSON_QBaseDefaultStyle(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultStyle_IsBase(true);
        return vqscilexerjson->defaultStyle();
    } else {
        return ((VirtualQsciLexerJSON*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultStyle(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJSON_Description(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        QString _ret = vqscilexerjson->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJSON*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerJSON_QBaseDescription(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Description_IsBase(true);
        QString _ret = vqscilexerjson->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJSON*)self)->description(static_cast<int>(style));
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
void QsciLexerJSON_OnDescription(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Description_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJSON_Paper(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return new QColor(vqscilexerjson->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJSON*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJSON_QBasePaper(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Paper_IsBase(true);
        return new QColor(vqscilexerjson->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJSON*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnPaper(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Paper_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJSON_DefaultColor2(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return new QColor(vqscilexerjson->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJSON*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJSON_QBaseDefaultColor2(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerjson->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJSON*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultColor2(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJSON_DefaultEolFill(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJSON*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJSON_QBaseDefaultEolFill(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultEolFill_IsBase(true);
        return vqscilexerjson->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerJSON*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultEolFill(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJSON_DefaultFont2(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return new QFont(vqscilexerjson->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJSON*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJSON_QBaseDefaultFont2(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerjson->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerJSON*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultFont2(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJSON_DefaultPaper2(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return new QColor(vqscilexerjson->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJSON*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJSON_QBaseDefaultPaper2(const QsciLexerJSON* self, int style) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerjson->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerJSON*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultPaper2(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_SetEditor(QsciLexerJSON* self, QsciScintilla* editor) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setEditor(editor);
    } else {
        ((VirtualQsciLexerJSON*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseSetEditor(QsciLexerJSON* self, QsciScintilla* editor) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetEditor_IsBase(true);
        vqscilexerjson->setEditor(editor);
    } else {
        ((VirtualQsciLexerJSON*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetEditor(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_RefreshProperties(QsciLexerJSON* self) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->refreshProperties();
    } else {
        ((VirtualQsciLexerJSON*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseRefreshProperties(QsciLexerJSON* self) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_RefreshProperties_IsBase(true);
        vqscilexerjson->refreshProperties();
    } else {
        ((VirtualQsciLexerJSON*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnRefreshProperties(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJSON_StyleBitsNeeded(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerJSON*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerJSON_QBaseStyleBitsNeeded(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_StyleBitsNeeded_IsBase(true);
        return vqscilexerjson->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerJSON*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnStyleBitsNeeded(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJSON_WordCharacters(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return (const char*)vqscilexerjson->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerJSON_QBaseWordCharacters(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_WordCharacters_IsBase(true);
        return (const char*)vqscilexerjson->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerJSON*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnWordCharacters(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_SetAutoIndentStyle(QsciLexerJSON* self, int autoindentstyle) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerJSON*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseSetAutoIndentStyle(QsciLexerJSON* self, int autoindentstyle) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetAutoIndentStyle_IsBase(true);
        vqscilexerjson->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerJSON*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetAutoIndentStyle(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_SetColor(QsciLexerJSON* self, const QColor* c, int style) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJSON*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseSetColor(QsciLexerJSON* self, const QColor* c, int style) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetColor_IsBase(true);
        vqscilexerjson->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJSON*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetColor(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetColor_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_SetEolFill(QsciLexerJSON* self, bool eoffill, int style) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJSON*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseSetEolFill(QsciLexerJSON* self, bool eoffill, int style) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetEolFill_IsBase(true);
        vqscilexerjson->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJSON*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetEolFill(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_SetFont(QsciLexerJSON* self, const QFont* f, int style) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJSON*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseSetFont(QsciLexerJSON* self, const QFont* f, int style) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetFont_IsBase(true);
        vqscilexerjson->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJSON*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetFont(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetFont_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_SetPaper(QsciLexerJSON* self, const QColor* c, int style) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJSON*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseSetPaper(QsciLexerJSON* self, const QColor* c, int style) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetPaper_IsBase(true);
        vqscilexerjson->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerJSON*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetPaper(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJSON_ReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJSON*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJSON_QBaseReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_ReadProperties_IsBase(true);
        return vqscilexerjson->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJSON*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnReadProperties(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJSON_WriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJSON*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJSON_QBaseWriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_WriteProperties_IsBase(true);
        return vqscilexerjson->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerJSON*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnWriteProperties(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJSON_Event(QsciLexerJSON* self, QEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->event(event);
    } else {
        return ((VirtualQsciLexerJSON*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerJSON_QBaseEvent(QsciLexerJSON* self, QEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Event_IsBase(true);
        return vqscilexerjson->event(event);
    } else {
        return ((VirtualQsciLexerJSON*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnEvent(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Event_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJSON_EventFilter(QsciLexerJSON* self, QObject* watched, QEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerJSON*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerJSON_QBaseEventFilter(QsciLexerJSON* self, QObject* watched, QEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_EventFilter_IsBase(true);
        return vqscilexerjson->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerJSON*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnEventFilter(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_TimerEvent(QsciLexerJSON* self, QTimerEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->timerEvent(event);
    } else {
        ((VirtualQsciLexerJSON*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseTimerEvent(QsciLexerJSON* self, QTimerEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_TimerEvent_IsBase(true);
        vqscilexerjson->timerEvent(event);
    } else {
        ((VirtualQsciLexerJSON*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnTimerEvent(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_ChildEvent(QsciLexerJSON* self, QChildEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->childEvent(event);
    } else {
        ((VirtualQsciLexerJSON*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseChildEvent(QsciLexerJSON* self, QChildEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_ChildEvent_IsBase(true);
        vqscilexerjson->childEvent(event);
    } else {
        ((VirtualQsciLexerJSON*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnChildEvent(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_CustomEvent(QsciLexerJSON* self, QEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->customEvent(event);
    } else {
        ((VirtualQsciLexerJSON*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseCustomEvent(QsciLexerJSON* self, QEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_CustomEvent_IsBase(true);
        vqscilexerjson->customEvent(event);
    } else {
        ((VirtualQsciLexerJSON*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnCustomEvent(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_ConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerJSON*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_ConnectNotify_IsBase(true);
        vqscilexerjson->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerJSON*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnConnectNotify(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJSON_DisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerJSON*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJSON_QBaseDisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DisconnectNotify_IsBase(true);
        vqscilexerjson->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerJSON*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDisconnectNotify(QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJSON_TextAsBytes(const QsciLexerJSON* self, const libqt_string text) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        QByteArray _qb = vqscilexerjson->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerJSON*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerJSON_QBaseTextAsBytes(const QsciLexerJSON* self, const libqt_string text) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerjson->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerJSON*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnTextAsBytes(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJSON_BytesAsText(const QsciLexerJSON* self, const char* bytes, int size) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        QString _ret = vqscilexerjson->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJSON*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerJSON_QBaseBytesAsText(const QsciLexerJSON* self, const char* bytes, int size) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BytesAsText_IsBase(true);
        QString _ret = vqscilexerjson->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerJSON*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerJSON_OnBytesAsText(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerJSON_Sender(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->sender();
    } else {
        return ((VirtualQsciLexerJSON*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerJSON_QBaseSender(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Sender_IsBase(true);
        return vqscilexerjson->sender();
    } else {
        return ((VirtualQsciLexerJSON*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSender(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Sender_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJSON_SenderSignalIndex(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerJSON*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerJSON_QBaseSenderSignalIndex(const QsciLexerJSON* self) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SenderSignalIndex_IsBase(true);
        return vqscilexerjson->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerJSON*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSenderSignalIndex(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJSON_Receivers(const QsciLexerJSON* self, const char* signal) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->receivers(signal);
    } else {
        return ((VirtualQsciLexerJSON*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerJSON_QBaseReceivers(const QsciLexerJSON* self, const char* signal) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Receivers_IsBase(true);
        return vqscilexerjson->receivers(signal);
    } else {
        return ((VirtualQsciLexerJSON*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnReceivers(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_Receivers_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJSON_IsSignalConnected(const QsciLexerJSON* self, const QMetaMethod* signal) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        return vqscilexerjson->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerJSON*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerJSON_QBaseIsSignalConnected(const QsciLexerJSON* self, const QMetaMethod* signal) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_IsSignalConnected_IsBase(true);
        return vqscilexerjson->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerJSON*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnIsSignalConnected(const QsciLexerJSON* self, intptr_t slot) {
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson && vqscilexerjson->isVirtualQsciLexerJSON) {
        vqscilexerjson->setQsciLexerJSON_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerJSON_Delete(QsciLexerJSON* self) {
    delete self;
}
