#include <QByteArray>
#include <QChar>
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
#include <qscilexernasm.h>
#include "libqscilexernasm.h"
#include "libqscilexernasm.hxx"

QsciLexerNASM* QsciLexerNASM_new() {
    return new VirtualQsciLexerNASM();
}

QsciLexerNASM* QsciLexerNASM_new2(QObject* parent) {
    return new VirtualQsciLexerNASM(parent);
}

QMetaObject* QsciLexerNASM_MetaObject(const QsciLexerNASM* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerNASM_Metacast(QsciLexerNASM* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerNASM_Metacall(QsciLexerNASM* self, int param1, int param2, void** param3) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerNASM*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerNASM_OnMetacall(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Metacall_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerNASM_QBaseMetacall(QsciLexerNASM* self, int param1, int param2, void** param3) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Metacall_IsBase(true);
        return vqscilexernasm->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerNASM*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerNASM_Tr(const char* s) {
    QString _ret = QsciLexerNASM::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerNASM_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerNASM::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerNASM_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerNASM::tr(s, c, static_cast<int>(n));
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
void QsciLexerNASM_SetFoldComments(QsciLexerNASM* self, bool fold) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerNASM*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetFoldComments(QsciLexerNASM* self, bool fold) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetFoldComments_IsBase(true);
        vqscilexernasm->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerNASM*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetFoldComments(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetFoldCompact(QsciLexerNASM* self, bool fold) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerNASM*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetFoldCompact(QsciLexerNASM* self, bool fold) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetFoldCompact_IsBase(true);
        vqscilexernasm->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerNASM*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetFoldCompact(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetCommentDelimiter(QsciLexerNASM* self, QChar* delimeter) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setCommentDelimiter(*delimeter);
    } else {
        ((VirtualQsciLexerNASM*)self)->setCommentDelimiter(*delimeter);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetCommentDelimiter(QsciLexerNASM* self, QChar* delimeter) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetCommentDelimiter_IsBase(true);
        vqscilexernasm->setCommentDelimiter(*delimeter);
    } else {
        ((VirtualQsciLexerNASM*)self)->setCommentDelimiter(*delimeter);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetCommentDelimiter(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetCommentDelimiter_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetCommentDelimiter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetFoldSyntaxBased(QsciLexerNASM* self, bool syntax_based) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setFoldSyntaxBased(syntax_based);
    } else {
        ((VirtualQsciLexerNASM*)self)->setFoldSyntaxBased(syntax_based);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetFoldSyntaxBased(QsciLexerNASM* self, bool syntax_based) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetFoldSyntaxBased_IsBase(true);
        vqscilexernasm->setFoldSyntaxBased(syntax_based);
    } else {
        ((VirtualQsciLexerNASM*)self)->setFoldSyntaxBased(syntax_based);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetFoldSyntaxBased(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetFoldSyntaxBased_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetFoldSyntaxBased_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerNASM_Language(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return (const char*)vqscilexernasm->language();
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerNASM_QBaseLanguage(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Language_IsBase(true);
        return (const char*)vqscilexernasm->language();
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnLanguage(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Language_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerNASM_Lexer(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return (const char*)vqscilexernasm->lexer();
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerNASM_QBaseLexer(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Lexer_IsBase(true);
        return (const char*)vqscilexernasm->lexer();
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnLexer(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Lexer_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerNASM_LexerId(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->lexerId();
    } else {
        return ((VirtualQsciLexerNASM*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerNASM_QBaseLexerId(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_LexerId_IsBase(true);
        return vqscilexernasm->lexerId();
    } else {
        return ((VirtualQsciLexerNASM*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnLexerId(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_LexerId_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerNASM_AutoCompletionFillups(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return (const char*)vqscilexernasm->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerNASM_QBaseAutoCompletionFillups(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexernasm->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnAutoCompletionFillups(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerNASM_AutoCompletionWordSeparators(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        QList<QString> _ret = vqscilexernasm->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
        QList<QString> _ret = ((VirtualQsciLexerNASM*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
libqt_list /* of libqt_string */ QsciLexerNASM_QBaseAutoCompletionWordSeparators(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexernasm->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
        QList<QString> _ret = ((VirtualQsciLexerNASM*)self)->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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
void QsciLexerNASM_OnAutoCompletionWordSeparators(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerNASM_BlockEnd(const QsciLexerNASM* self, int* style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return (const char*)vqscilexernasm->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerNASM_QBaseBlockEnd(const QsciLexerNASM* self, int* style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BlockEnd_IsBase(true);
        return (const char*)vqscilexernasm->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBlockEnd(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerNASM_BlockLookback(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->blockLookback();
    } else {
        return ((VirtualQsciLexerNASM*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerNASM_QBaseBlockLookback(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BlockLookback_IsBase(true);
        return vqscilexernasm->blockLookback();
    } else {
        return ((VirtualQsciLexerNASM*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBlockLookback(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerNASM_BlockStart(const QsciLexerNASM* self, int* style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return (const char*)vqscilexernasm->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerNASM_QBaseBlockStart(const QsciLexerNASM* self, int* style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BlockStart_IsBase(true);
        return (const char*)vqscilexernasm->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBlockStart(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerNASM_BlockStartKeyword(const QsciLexerNASM* self, int* style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return (const char*)vqscilexernasm->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerNASM_QBaseBlockStartKeyword(const QsciLexerNASM* self, int* style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexernasm->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBlockStartKeyword(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerNASM_BraceStyle(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->braceStyle();
    } else {
        return ((VirtualQsciLexerNASM*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerNASM_QBaseBraceStyle(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BraceStyle_IsBase(true);
        return vqscilexernasm->braceStyle();
    } else {
        return ((VirtualQsciLexerNASM*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnBraceStyle(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerNASM_CaseSensitive(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->caseSensitive();
    } else {
        return ((VirtualQsciLexerNASM*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerNASM_QBaseCaseSensitive(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_CaseSensitive_IsBase(true);
        return vqscilexernasm->caseSensitive();
    } else {
        return ((VirtualQsciLexerNASM*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnCaseSensitive(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerNASM_Color(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return new QColor(vqscilexernasm->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerNASM*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerNASM_QBaseColor(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Color_IsBase(true);
        return new QColor(vqscilexernasm->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerNASM*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnColor(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Color_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerNASM_EolFill(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerNASM*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerNASM_QBaseEolFill(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_EolFill_IsBase(true);
        return vqscilexernasm->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerNASM*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnEolFill(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_EolFill_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerNASM_Font(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return new QFont(vqscilexernasm->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerNASM*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerNASM_QBaseFont(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Font_IsBase(true);
        return new QFont(vqscilexernasm->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerNASM*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnFont(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Font_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerNASM_IndentationGuideView(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->indentationGuideView();
    } else {
        return ((VirtualQsciLexerNASM*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerNASM_QBaseIndentationGuideView(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_IndentationGuideView_IsBase(true);
        return vqscilexernasm->indentationGuideView();
    } else {
        return ((VirtualQsciLexerNASM*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnIndentationGuideView(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerNASM_Keywords(const QsciLexerNASM* self, int set) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return (const char*)vqscilexernasm->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerNASM_QBaseKeywords(const QsciLexerNASM* self, int set) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Keywords_IsBase(true);
        return (const char*)vqscilexernasm->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnKeywords(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Keywords_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerNASM_DefaultStyle(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->defaultStyle();
    } else {
        return ((VirtualQsciLexerNASM*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerNASM_QBaseDefaultStyle(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultStyle_IsBase(true);
        return vqscilexernasm->defaultStyle();
    } else {
        return ((VirtualQsciLexerNASM*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultStyle(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerNASM_Description(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        QString _ret = vqscilexernasm->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerNASM*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerNASM_QBaseDescription(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Description_IsBase(true);
        QString _ret = vqscilexernasm->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerNASM*)self)->description(static_cast<int>(style));
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
void QsciLexerNASM_OnDescription(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Description_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerNASM_Paper(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return new QColor(vqscilexernasm->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerNASM*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerNASM_QBasePaper(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Paper_IsBase(true);
        return new QColor(vqscilexernasm->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerNASM*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnPaper(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Paper_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerNASM_DefaultColor2(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return new QColor(vqscilexernasm->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerNASM*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerNASM_QBaseDefaultColor2(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultColor2_IsBase(true);
        return new QColor(vqscilexernasm->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerNASM*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultColor2(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerNASM_DefaultEolFill(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerNASM*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerNASM_QBaseDefaultEolFill(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultEolFill_IsBase(true);
        return vqscilexernasm->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerNASM*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultEolFill(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerNASM_DefaultFont2(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return new QFont(vqscilexernasm->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerNASM*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerNASM_QBaseDefaultFont2(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultFont2_IsBase(true);
        return new QFont(vqscilexernasm->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerNASM*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultFont2(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerNASM_DefaultPaper2(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return new QColor(vqscilexernasm->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerNASM*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerNASM_QBaseDefaultPaper2(const QsciLexerNASM* self, int style) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexernasm->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerNASM*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDefaultPaper2(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetEditor(QsciLexerNASM* self, QsciScintilla* editor) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setEditor(editor);
    } else {
        ((VirtualQsciLexerNASM*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetEditor(QsciLexerNASM* self, QsciScintilla* editor) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetEditor_IsBase(true);
        vqscilexernasm->setEditor(editor);
    } else {
        ((VirtualQsciLexerNASM*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetEditor(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_RefreshProperties(QsciLexerNASM* self) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->refreshProperties();
    } else {
        ((VirtualQsciLexerNASM*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseRefreshProperties(QsciLexerNASM* self) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_RefreshProperties_IsBase(true);
        vqscilexernasm->refreshProperties();
    } else {
        ((VirtualQsciLexerNASM*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnRefreshProperties(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerNASM_StyleBitsNeeded(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerNASM*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerNASM_QBaseStyleBitsNeeded(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_StyleBitsNeeded_IsBase(true);
        return vqscilexernasm->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerNASM*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnStyleBitsNeeded(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerNASM_WordCharacters(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return (const char*)vqscilexernasm->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerNASM_QBaseWordCharacters(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_WordCharacters_IsBase(true);
        return (const char*)vqscilexernasm->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerNASM*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnWordCharacters(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetAutoIndentStyle(QsciLexerNASM* self, int autoindentstyle) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerNASM*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetAutoIndentStyle(QsciLexerNASM* self, int autoindentstyle) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetAutoIndentStyle_IsBase(true);
        vqscilexernasm->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerNASM*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetAutoIndentStyle(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetColor(QsciLexerNASM* self, const QColor* c, int style) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerNASM*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetColor(QsciLexerNASM* self, const QColor* c, int style) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetColor_IsBase(true);
        vqscilexernasm->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerNASM*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetColor(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetColor_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetEolFill(QsciLexerNASM* self, bool eoffill, int style) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerNASM*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetEolFill(QsciLexerNASM* self, bool eoffill, int style) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetEolFill_IsBase(true);
        vqscilexernasm->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerNASM*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetEolFill(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetFont(QsciLexerNASM* self, const QFont* f, int style) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerNASM*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetFont(QsciLexerNASM* self, const QFont* f, int style) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetFont_IsBase(true);
        vqscilexernasm->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerNASM*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetFont(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetFont_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_SetPaper(QsciLexerNASM* self, const QColor* c, int style) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerNASM*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseSetPaper(QsciLexerNASM* self, const QColor* c, int style) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetPaper_IsBase(true);
        vqscilexernasm->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerNASM*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSetPaper(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerNASM_ReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerNASM*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerNASM_QBaseReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_ReadProperties_IsBase(true);
        return vqscilexernasm->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerNASM*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnReadProperties(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerNASM_WriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerNASM*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerNASM_QBaseWriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_WriteProperties_IsBase(true);
        return vqscilexernasm->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerNASM*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnWriteProperties(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerNASM_Event(QsciLexerNASM* self, QEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->event(event);
    } else {
        return ((VirtualQsciLexerNASM*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerNASM_QBaseEvent(QsciLexerNASM* self, QEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Event_IsBase(true);
        return vqscilexernasm->event(event);
    } else {
        return ((VirtualQsciLexerNASM*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnEvent(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Event_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerNASM_EventFilter(QsciLexerNASM* self, QObject* watched, QEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerNASM*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerNASM_QBaseEventFilter(QsciLexerNASM* self, QObject* watched, QEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_EventFilter_IsBase(true);
        return vqscilexernasm->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerNASM*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnEventFilter(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_TimerEvent(QsciLexerNASM* self, QTimerEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->timerEvent(event);
    } else {
        ((VirtualQsciLexerNASM*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseTimerEvent(QsciLexerNASM* self, QTimerEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_TimerEvent_IsBase(true);
        vqscilexernasm->timerEvent(event);
    } else {
        ((VirtualQsciLexerNASM*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnTimerEvent(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_ChildEvent(QsciLexerNASM* self, QChildEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->childEvent(event);
    } else {
        ((VirtualQsciLexerNASM*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseChildEvent(QsciLexerNASM* self, QChildEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_ChildEvent_IsBase(true);
        vqscilexernasm->childEvent(event);
    } else {
        ((VirtualQsciLexerNASM*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnChildEvent(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_CustomEvent(QsciLexerNASM* self, QEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->customEvent(event);
    } else {
        ((VirtualQsciLexerNASM*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseCustomEvent(QsciLexerNASM* self, QEvent* event) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_CustomEvent_IsBase(true);
        vqscilexernasm->customEvent(event);
    } else {
        ((VirtualQsciLexerNASM*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnCustomEvent(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_ConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerNASM*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_ConnectNotify_IsBase(true);
        vqscilexernasm->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerNASM*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnConnectNotify(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerNASM_DisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerNASM*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerNASM_QBaseDisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DisconnectNotify_IsBase(true);
        vqscilexernasm->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerNASM*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnDisconnectNotify(QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = dynamic_cast<VirtualQsciLexerNASM*>(self);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerNASM_TextAsBytes(const QsciLexerNASM* self, const libqt_string text) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        QByteArray _qb = vqscilexernasm->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerNASM*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerNASM_QBaseTextAsBytes(const QsciLexerNASM* self, const libqt_string text) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexernasm->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerNASM*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnTextAsBytes(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerNASM_BytesAsText(const QsciLexerNASM* self, const char* bytes, int size) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        QString _ret = vqscilexernasm->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerNASM*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerNASM_QBaseBytesAsText(const QsciLexerNASM* self, const char* bytes, int size) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BytesAsText_IsBase(true);
        QString _ret = vqscilexernasm->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerNASM*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerNASM_OnBytesAsText(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerNASM_Sender(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->sender();
    } else {
        return ((VirtualQsciLexerNASM*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerNASM_QBaseSender(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Sender_IsBase(true);
        return vqscilexernasm->sender();
    } else {
        return ((VirtualQsciLexerNASM*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSender(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Sender_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerNASM_SenderSignalIndex(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerNASM*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerNASM_QBaseSenderSignalIndex(const QsciLexerNASM* self) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SenderSignalIndex_IsBase(true);
        return vqscilexernasm->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerNASM*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnSenderSignalIndex(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerNASM_Receivers(const QsciLexerNASM* self, const char* signal) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->receivers(signal);
    } else {
        return ((VirtualQsciLexerNASM*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerNASM_QBaseReceivers(const QsciLexerNASM* self, const char* signal) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Receivers_IsBase(true);
        return vqscilexernasm->receivers(signal);
    } else {
        return ((VirtualQsciLexerNASM*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnReceivers(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_Receivers_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerNASM_IsSignalConnected(const QsciLexerNASM* self, const QMetaMethod* signal) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        return vqscilexernasm->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerNASM*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerNASM_QBaseIsSignalConnected(const QsciLexerNASM* self, const QMetaMethod* signal) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_IsSignalConnected_IsBase(true);
        return vqscilexernasm->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerNASM*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerNASM_OnIsSignalConnected(const QsciLexerNASM* self, intptr_t slot) {
    auto* vqscilexernasm = const_cast<VirtualQsciLexerNASM*>(dynamic_cast<const VirtualQsciLexerNASM*>(self));
    if (vqscilexernasm && vqscilexernasm->isVirtualQsciLexerNASM) {
        vqscilexernasm->setQsciLexerNASM_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerNASM::QsciLexerNASM_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerNASM_Delete(QsciLexerNASM* self) {
    delete self;
}
