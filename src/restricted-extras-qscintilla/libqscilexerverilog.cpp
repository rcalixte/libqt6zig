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
#include <qscilexerverilog.h>
#include "libqscilexerverilog.h"
#include "libqscilexerverilog.hxx"

QsciLexerVerilog* QsciLexerVerilog_new() {
    return new VirtualQsciLexerVerilog();
}

QsciLexerVerilog* QsciLexerVerilog_new2(QObject* parent) {
    return new VirtualQsciLexerVerilog(parent);
}

QMetaObject* QsciLexerVerilog_MetaObject(const QsciLexerVerilog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerVerilog_Metacast(QsciLexerVerilog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerVerilog_Metacall(QsciLexerVerilog* self, int param1, int param2, void** param3) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerVerilog_OnMetacall(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Metacall_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerVerilog_QBaseMetacall(QsciLexerVerilog* self, int param1, int param2, void** param3) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Metacall_IsBase(true);
        return vqscilexerverilog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerVerilog_Tr(const char* s) {
    QString _ret = QsciLexerVerilog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerVerilog_DefaultColor(const QsciLexerVerilog* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerVerilog_DefaultFont(const QsciLexerVerilog* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVerilog_DefaultPaper(const QsciLexerVerilog* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

void QsciLexerVerilog_SetFoldAtElse(QsciLexerVerilog* self, bool fold) {
    self->setFoldAtElse(fold);
}

bool QsciLexerVerilog_FoldAtElse(const QsciLexerVerilog* self) {
    return self->foldAtElse();
}

void QsciLexerVerilog_SetFoldComments(QsciLexerVerilog* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerVerilog_FoldComments(const QsciLexerVerilog* self) {
    return self->foldComments();
}

void QsciLexerVerilog_SetFoldCompact(QsciLexerVerilog* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerVerilog_FoldCompact(const QsciLexerVerilog* self) {
    return self->foldCompact();
}

void QsciLexerVerilog_SetFoldPreprocessor(QsciLexerVerilog* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

bool QsciLexerVerilog_FoldPreprocessor(const QsciLexerVerilog* self) {
    return self->foldPreprocessor();
}

void QsciLexerVerilog_SetFoldAtModule(QsciLexerVerilog* self, bool fold) {
    self->setFoldAtModule(fold);
}

bool QsciLexerVerilog_FoldAtModule(const QsciLexerVerilog* self) {
    return self->foldAtModule();
}

libqt_string QsciLexerVerilog_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerVerilog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerVerilog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerVerilog::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerVerilog_Language(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return (const char*)vqscilexerverilog->language();
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerVerilog_QBaseLanguage(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Language_IsBase(true);
        return (const char*)vqscilexerverilog->language();
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnLanguage(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Language_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVerilog_Lexer(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return (const char*)vqscilexerverilog->lexer();
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerVerilog_QBaseLexer(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Lexer_IsBase(true);
        return (const char*)vqscilexerverilog->lexer();
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnLexer(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Lexer_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVerilog_LexerId(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->lexerId();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerVerilog_QBaseLexerId(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_LexerId_IsBase(true);
        return vqscilexerverilog->lexerId();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnLexerId(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_LexerId_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVerilog_AutoCompletionFillups(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return (const char*)vqscilexerverilog->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerVerilog_QBaseAutoCompletionFillups(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerverilog->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnAutoCompletionFillups(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerVerilog_AutoCompletionWordSeparators(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        QList<QString> _ret = vqscilexerverilog->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerVerilog*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerVerilog_QBaseAutoCompletionWordSeparators(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerverilog->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerVerilog*)self)->autoCompletionWordSeparators();
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
void QsciLexerVerilog_OnAutoCompletionWordSeparators(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVerilog_BlockEnd(const QsciLexerVerilog* self, int* style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return (const char*)vqscilexerverilog->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVerilog_QBaseBlockEnd(const QsciLexerVerilog* self, int* style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BlockEnd_IsBase(true);
        return (const char*)vqscilexerverilog->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBlockEnd(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVerilog_BlockLookback(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->blockLookback();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerVerilog_QBaseBlockLookback(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BlockLookback_IsBase(true);
        return vqscilexerverilog->blockLookback();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBlockLookback(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVerilog_BlockStart(const QsciLexerVerilog* self, int* style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return (const char*)vqscilexerverilog->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVerilog_QBaseBlockStart(const QsciLexerVerilog* self, int* style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BlockStart_IsBase(true);
        return (const char*)vqscilexerverilog->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBlockStart(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVerilog_BlockStartKeyword(const QsciLexerVerilog* self, int* style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return (const char*)vqscilexerverilog->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVerilog_QBaseBlockStartKeyword(const QsciLexerVerilog* self, int* style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerverilog->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBlockStartKeyword(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVerilog_BraceStyle(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->braceStyle();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerVerilog_QBaseBraceStyle(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BraceStyle_IsBase(true);
        return vqscilexerverilog->braceStyle();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBraceStyle(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVerilog_CaseSensitive(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->caseSensitive();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerVerilog_QBaseCaseSensitive(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_CaseSensitive_IsBase(true);
        return vqscilexerverilog->caseSensitive();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnCaseSensitive(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVerilog_Color(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return new QColor(vqscilexerverilog->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVerilog*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVerilog_QBaseColor(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Color_IsBase(true);
        return new QColor(vqscilexerverilog->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVerilog*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnColor(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Color_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVerilog_EolFill(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerVerilog*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerVerilog_QBaseEolFill(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_EolFill_IsBase(true);
        return vqscilexerverilog->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerVerilog*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnEolFill(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_EolFill_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerVerilog_Font(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return new QFont(vqscilexerverilog->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerVerilog*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerVerilog_QBaseFont(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Font_IsBase(true);
        return new QFont(vqscilexerverilog->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerVerilog*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnFont(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Font_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVerilog_IndentationGuideView(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->indentationGuideView();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerVerilog_QBaseIndentationGuideView(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_IndentationGuideView_IsBase(true);
        return vqscilexerverilog->indentationGuideView();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnIndentationGuideView(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVerilog_Keywords(const QsciLexerVerilog* self, int set) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return (const char*)vqscilexerverilog->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerVerilog_QBaseKeywords(const QsciLexerVerilog* self, int set) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Keywords_IsBase(true);
        return (const char*)vqscilexerverilog->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnKeywords(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Keywords_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVerilog_DefaultStyle(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->defaultStyle();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerVerilog_QBaseDefaultStyle(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultStyle_IsBase(true);
        return vqscilexerverilog->defaultStyle();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultStyle(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerVerilog_Description(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        QString _ret = vqscilexerverilog->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerVerilog*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerVerilog_QBaseDescription(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Description_IsBase(true);
        QString _ret = vqscilexerverilog->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerVerilog*)self)->description(static_cast<int>(style));
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
void QsciLexerVerilog_OnDescription(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Description_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVerilog_Paper(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return new QColor(vqscilexerverilog->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVerilog*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVerilog_QBasePaper(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Paper_IsBase(true);
        return new QColor(vqscilexerverilog->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVerilog*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnPaper(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Paper_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVerilog_DefaultColor2(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return new QColor(vqscilexerverilog->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVerilog*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVerilog_QBaseDefaultColor2(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerverilog->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVerilog*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultColor2(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVerilog_DefaultEolFill(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerVerilog*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerVerilog_QBaseDefaultEolFill(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultEolFill_IsBase(true);
        return vqscilexerverilog->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerVerilog*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultEolFill(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerVerilog_DefaultFont2(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return new QFont(vqscilexerverilog->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerVerilog*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerVerilog_QBaseDefaultFont2(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerverilog->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerVerilog*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultFont2(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVerilog_DefaultPaper2(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return new QColor(vqscilexerverilog->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVerilog*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVerilog_QBaseDefaultPaper2(const QsciLexerVerilog* self, int style) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerverilog->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVerilog*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultPaper2(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_SetEditor(QsciLexerVerilog* self, QsciScintilla* editor) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setEditor(editor);
    } else {
        ((VirtualQsciLexerVerilog*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseSetEditor(QsciLexerVerilog* self, QsciScintilla* editor) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetEditor_IsBase(true);
        vqscilexerverilog->setEditor(editor);
    } else {
        ((VirtualQsciLexerVerilog*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetEditor(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_RefreshProperties(QsciLexerVerilog* self) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->refreshProperties();
    } else {
        ((VirtualQsciLexerVerilog*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseRefreshProperties(QsciLexerVerilog* self) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_RefreshProperties_IsBase(true);
        vqscilexerverilog->refreshProperties();
    } else {
        ((VirtualQsciLexerVerilog*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnRefreshProperties(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVerilog_StyleBitsNeeded(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerVerilog_QBaseStyleBitsNeeded(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_StyleBitsNeeded_IsBase(true);
        return vqscilexerverilog->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnStyleBitsNeeded(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVerilog_WordCharacters(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return (const char*)vqscilexerverilog->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerVerilog_QBaseWordCharacters(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_WordCharacters_IsBase(true);
        return (const char*)vqscilexerverilog->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerVerilog*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnWordCharacters(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_SetAutoIndentStyle(QsciLexerVerilog* self, int autoindentstyle) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseSetAutoIndentStyle(QsciLexerVerilog* self, int autoindentstyle) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetAutoIndentStyle_IsBase(true);
        vqscilexerverilog->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetAutoIndentStyle(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_SetColor(QsciLexerVerilog* self, const QColor* c, int style) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseSetColor(QsciLexerVerilog* self, const QColor* c, int style) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetColor_IsBase(true);
        vqscilexerverilog->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetColor(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetColor_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_SetEolFill(QsciLexerVerilog* self, bool eoffill, int style) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseSetEolFill(QsciLexerVerilog* self, bool eoffill, int style) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetEolFill_IsBase(true);
        vqscilexerverilog->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetEolFill(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_SetFont(QsciLexerVerilog* self, const QFont* f, int style) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseSetFont(QsciLexerVerilog* self, const QFont* f, int style) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetFont_IsBase(true);
        vqscilexerverilog->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetFont(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetFont_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_SetPaper(QsciLexerVerilog* self, const QColor* c, int style) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseSetPaper(QsciLexerVerilog* self, const QColor* c, int style) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetPaper_IsBase(true);
        vqscilexerverilog->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVerilog*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetPaper(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVerilog_ReadProperties(QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerVerilog_QBaseReadProperties(QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_ReadProperties_IsBase(true);
        return vqscilexerverilog->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnReadProperties(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVerilog_WriteProperties(const QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerVerilog_QBaseWriteProperties(const QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_WriteProperties_IsBase(true);
        return vqscilexerverilog->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnWriteProperties(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVerilog_Event(QsciLexerVerilog* self, QEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->event(event);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerVerilog_QBaseEvent(QsciLexerVerilog* self, QEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Event_IsBase(true);
        return vqscilexerverilog->event(event);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnEvent(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Event_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVerilog_EventFilter(QsciLexerVerilog* self, QObject* watched, QEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerVerilog_QBaseEventFilter(QsciLexerVerilog* self, QObject* watched, QEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_EventFilter_IsBase(true);
        return vqscilexerverilog->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnEventFilter(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_TimerEvent(QsciLexerVerilog* self, QTimerEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->timerEvent(event);
    } else {
        ((VirtualQsciLexerVerilog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseTimerEvent(QsciLexerVerilog* self, QTimerEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_TimerEvent_IsBase(true);
        vqscilexerverilog->timerEvent(event);
    } else {
        ((VirtualQsciLexerVerilog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnTimerEvent(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_ChildEvent(QsciLexerVerilog* self, QChildEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->childEvent(event);
    } else {
        ((VirtualQsciLexerVerilog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseChildEvent(QsciLexerVerilog* self, QChildEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_ChildEvent_IsBase(true);
        vqscilexerverilog->childEvent(event);
    } else {
        ((VirtualQsciLexerVerilog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnChildEvent(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_CustomEvent(QsciLexerVerilog* self, QEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->customEvent(event);
    } else {
        ((VirtualQsciLexerVerilog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseCustomEvent(QsciLexerVerilog* self, QEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_CustomEvent_IsBase(true);
        vqscilexerverilog->customEvent(event);
    } else {
        ((VirtualQsciLexerVerilog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnCustomEvent(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_ConnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerVerilog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseConnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_ConnectNotify_IsBase(true);
        vqscilexerverilog->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerVerilog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnConnectNotify(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVerilog_DisconnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerVerilog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerVerilog_QBaseDisconnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DisconnectNotify_IsBase(true);
        vqscilexerverilog->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerVerilog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDisconnectNotify(QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerVerilog_TextAsBytes(const QsciLexerVerilog* self, const libqt_string text) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        QByteArray _qb = vqscilexerverilog->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerVerilog*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerVerilog_QBaseTextAsBytes(const QsciLexerVerilog* self, const libqt_string text) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerverilog->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerVerilog*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnTextAsBytes(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerVerilog_BytesAsText(const QsciLexerVerilog* self, const char* bytes, int size) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        QString _ret = vqscilexerverilog->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerVerilog*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerVerilog_QBaseBytesAsText(const QsciLexerVerilog* self, const char* bytes, int size) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BytesAsText_IsBase(true);
        QString _ret = vqscilexerverilog->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerVerilog*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerVerilog_OnBytesAsText(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerVerilog_Sender(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->sender();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerVerilog_QBaseSender(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Sender_IsBase(true);
        return vqscilexerverilog->sender();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSender(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Sender_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVerilog_SenderSignalIndex(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerVerilog_QBaseSenderSignalIndex(const QsciLexerVerilog* self) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SenderSignalIndex_IsBase(true);
        return vqscilexerverilog->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerVerilog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSenderSignalIndex(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVerilog_Receivers(const QsciLexerVerilog* self, const char* signal) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->receivers(signal);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerVerilog_QBaseReceivers(const QsciLexerVerilog* self, const char* signal) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Receivers_IsBase(true);
        return vqscilexerverilog->receivers(signal);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnReceivers(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_Receivers_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVerilog_IsSignalConnected(const QsciLexerVerilog* self, const QMetaMethod* signal) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        return vqscilexerverilog->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerVerilog_QBaseIsSignalConnected(const QsciLexerVerilog* self, const QMetaMethod* signal) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_IsSignalConnected_IsBase(true);
        return vqscilexerverilog->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerVerilog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnIsSignalConnected(const QsciLexerVerilog* self, intptr_t slot) {
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog && vqscilexerverilog->isVirtualQsciLexerVerilog) {
        vqscilexerverilog->setQsciLexerVerilog_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerVerilog_Delete(QsciLexerVerilog* self) {
    delete self;
}
