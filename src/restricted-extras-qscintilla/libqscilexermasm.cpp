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
#include <qscilexermasm.h>
#include "libqscilexermasm.h"
#include "libqscilexermasm.hxx"

QsciLexerMASM* QsciLexerMASM_new() {
    return new VirtualQsciLexerMASM();
}

QsciLexerMASM* QsciLexerMASM_new2(QObject* parent) {
    return new VirtualQsciLexerMASM(parent);
}

QMetaObject* QsciLexerMASM_MetaObject(const QsciLexerMASM* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMASM_Metacast(QsciLexerMASM* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMASM_Metacall(QsciLexerMASM* self, int param1, int param2, void** param3) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerMASM*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerMASM_Tr(const char* s) {
    QString _ret = QsciLexerMASM::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerMASM_Language(const QsciLexerMASM* self) {
    return (const char*)self->language();
}

const char* QsciLexerMASM_Lexer(const QsciLexerMASM* self) {
    return (const char*)self->lexer();
}

libqt_string QsciLexerMASM_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerMASM::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMASM_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerMASM::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int QsciLexerMASM_QBaseMetacall(QsciLexerMASM* self, int param1, int param2, void** param3) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Metacall_IsBase(true);
        return vqscilexermasm->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerMASM*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnMetacall(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Metacall_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetFoldComments(QsciLexerMASM* self, bool fold) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerMASM*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetFoldComments(QsciLexerMASM* self, bool fold) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetFoldComments_IsBase(true);
        vqscilexermasm->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerMASM*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetFoldComments(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetFoldCompact(QsciLexerMASM* self, bool fold) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerMASM*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetFoldCompact(QsciLexerMASM* self, bool fold) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetFoldCompact_IsBase(true);
        vqscilexermasm->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerMASM*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetFoldCompact(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetCommentDelimiter(QsciLexerMASM* self, QChar* delimeter) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setCommentDelimiter(*delimeter);
    } else {
        ((VirtualQsciLexerMASM*)self)->setCommentDelimiter(*delimeter);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetCommentDelimiter(QsciLexerMASM* self, QChar* delimeter) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetCommentDelimiter_IsBase(true);
        vqscilexermasm->setCommentDelimiter(*delimeter);
    } else {
        ((VirtualQsciLexerMASM*)self)->setCommentDelimiter(*delimeter);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetCommentDelimiter(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetCommentDelimiter_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetCommentDelimiter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetFoldSyntaxBased(QsciLexerMASM* self, bool syntax_based) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setFoldSyntaxBased(syntax_based);
    } else {
        ((VirtualQsciLexerMASM*)self)->setFoldSyntaxBased(syntax_based);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetFoldSyntaxBased(QsciLexerMASM* self, bool syntax_based) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetFoldSyntaxBased_IsBase(true);
        vqscilexermasm->setFoldSyntaxBased(syntax_based);
    } else {
        ((VirtualQsciLexerMASM*)self)->setFoldSyntaxBased(syntax_based);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetFoldSyntaxBased(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetFoldSyntaxBased_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetFoldSyntaxBased_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMASM_LexerId(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->lexerId();
    } else {
        return ((VirtualQsciLexerMASM*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerMASM_QBaseLexerId(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_LexerId_IsBase(true);
        return vqscilexermasm->lexerId();
    } else {
        return ((VirtualQsciLexerMASM*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnLexerId(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_LexerId_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMASM_AutoCompletionFillups(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return (const char*)vqscilexermasm->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerMASM_QBaseAutoCompletionFillups(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexermasm->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnAutoCompletionFillups(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMASM_AutoCompletionWordSeparators(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        QList<QString> _ret = vqscilexermasm->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerMASM*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerMASM_QBaseAutoCompletionWordSeparators(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexermasm->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerMASM*)self)->autoCompletionWordSeparators();
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
void QsciLexerMASM_OnAutoCompletionWordSeparators(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMASM_BlockEnd(const QsciLexerMASM* self, int* style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return (const char*)vqscilexermasm->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMASM_QBaseBlockEnd(const QsciLexerMASM* self, int* style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BlockEnd_IsBase(true);
        return (const char*)vqscilexermasm->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBlockEnd(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMASM_BlockLookback(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->blockLookback();
    } else {
        return ((VirtualQsciLexerMASM*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerMASM_QBaseBlockLookback(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BlockLookback_IsBase(true);
        return vqscilexermasm->blockLookback();
    } else {
        return ((VirtualQsciLexerMASM*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBlockLookback(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMASM_BlockStart(const QsciLexerMASM* self, int* style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return (const char*)vqscilexermasm->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMASM_QBaseBlockStart(const QsciLexerMASM* self, int* style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BlockStart_IsBase(true);
        return (const char*)vqscilexermasm->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBlockStart(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMASM_BlockStartKeyword(const QsciLexerMASM* self, int* style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return (const char*)vqscilexermasm->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMASM_QBaseBlockStartKeyword(const QsciLexerMASM* self, int* style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexermasm->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBlockStartKeyword(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMASM_BraceStyle(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->braceStyle();
    } else {
        return ((VirtualQsciLexerMASM*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerMASM_QBaseBraceStyle(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BraceStyle_IsBase(true);
        return vqscilexermasm->braceStyle();
    } else {
        return ((VirtualQsciLexerMASM*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnBraceStyle(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMASM_CaseSensitive(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->caseSensitive();
    } else {
        return ((VirtualQsciLexerMASM*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerMASM_QBaseCaseSensitive(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_CaseSensitive_IsBase(true);
        return vqscilexermasm->caseSensitive();
    } else {
        return ((VirtualQsciLexerMASM*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnCaseSensitive(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMASM_Color(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return new QColor(vqscilexermasm->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMASM*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMASM_QBaseColor(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Color_IsBase(true);
        return new QColor(vqscilexermasm->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMASM*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnColor(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Color_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMASM_EolFill(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMASM*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMASM_QBaseEolFill(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_EolFill_IsBase(true);
        return vqscilexermasm->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMASM*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnEolFill(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_EolFill_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMASM_Font(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return new QFont(vqscilexermasm->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMASM*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMASM_QBaseFont(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Font_IsBase(true);
        return new QFont(vqscilexermasm->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMASM*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnFont(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Font_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMASM_IndentationGuideView(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->indentationGuideView();
    } else {
        return ((VirtualQsciLexerMASM*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerMASM_QBaseIndentationGuideView(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_IndentationGuideView_IsBase(true);
        return vqscilexermasm->indentationGuideView();
    } else {
        return ((VirtualQsciLexerMASM*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnIndentationGuideView(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMASM_Keywords(const QsciLexerMASM* self, int set) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return (const char*)vqscilexermasm->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerMASM_QBaseKeywords(const QsciLexerMASM* self, int set) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Keywords_IsBase(true);
        return (const char*)vqscilexermasm->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnKeywords(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Keywords_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMASM_DefaultStyle(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->defaultStyle();
    } else {
        return ((VirtualQsciLexerMASM*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerMASM_QBaseDefaultStyle(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultStyle_IsBase(true);
        return vqscilexermasm->defaultStyle();
    } else {
        return ((VirtualQsciLexerMASM*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultStyle(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerMASM_Description(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        QString _ret = vqscilexermasm->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerMASM*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerMASM_QBaseDescription(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Description_IsBase(true);
        QString _ret = vqscilexermasm->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerMASM*)self)->description(static_cast<int>(style));
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
void QsciLexerMASM_OnDescription(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Description_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMASM_Paper(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return new QColor(vqscilexermasm->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMASM*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMASM_QBasePaper(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Paper_IsBase(true);
        return new QColor(vqscilexermasm->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMASM*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnPaper(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Paper_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMASM_DefaultColor2(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return new QColor(vqscilexermasm->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMASM*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMASM_QBaseDefaultColor2(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultColor2_IsBase(true);
        return new QColor(vqscilexermasm->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMASM*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultColor2(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMASM_DefaultEolFill(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMASM*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMASM_QBaseDefaultEolFill(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultEolFill_IsBase(true);
        return vqscilexermasm->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerMASM*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultEolFill(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMASM_DefaultFont2(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return new QFont(vqscilexermasm->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMASM*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMASM_QBaseDefaultFont2(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultFont2_IsBase(true);
        return new QFont(vqscilexermasm->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerMASM*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultFont2(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMASM_DefaultPaper2(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return new QColor(vqscilexermasm->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMASM*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMASM_QBaseDefaultPaper2(const QsciLexerMASM* self, int style) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexermasm->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerMASM*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDefaultPaper2(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetEditor(QsciLexerMASM* self, QsciScintilla* editor) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setEditor(editor);
    } else {
        ((VirtualQsciLexerMASM*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetEditor(QsciLexerMASM* self, QsciScintilla* editor) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetEditor_IsBase(true);
        vqscilexermasm->setEditor(editor);
    } else {
        ((VirtualQsciLexerMASM*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetEditor(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_RefreshProperties(QsciLexerMASM* self) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->refreshProperties();
    } else {
        ((VirtualQsciLexerMASM*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseRefreshProperties(QsciLexerMASM* self) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_RefreshProperties_IsBase(true);
        vqscilexermasm->refreshProperties();
    } else {
        ((VirtualQsciLexerMASM*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnRefreshProperties(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMASM_StyleBitsNeeded(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerMASM*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerMASM_QBaseStyleBitsNeeded(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_StyleBitsNeeded_IsBase(true);
        return vqscilexermasm->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerMASM*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnStyleBitsNeeded(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMASM_WordCharacters(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return (const char*)vqscilexermasm->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerMASM_QBaseWordCharacters(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_WordCharacters_IsBase(true);
        return (const char*)vqscilexermasm->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerMASM*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnWordCharacters(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetAutoIndentStyle(QsciLexerMASM* self, int autoindentstyle) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerMASM*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetAutoIndentStyle(QsciLexerMASM* self, int autoindentstyle) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetAutoIndentStyle_IsBase(true);
        vqscilexermasm->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerMASM*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetAutoIndentStyle(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetColor(QsciLexerMASM* self, const QColor* c, int style) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMASM*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetColor(QsciLexerMASM* self, const QColor* c, int style) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetColor_IsBase(true);
        vqscilexermasm->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMASM*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetColor(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetColor_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetEolFill(QsciLexerMASM* self, bool eoffill, int style) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMASM*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetEolFill(QsciLexerMASM* self, bool eoffill, int style) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetEolFill_IsBase(true);
        vqscilexermasm->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMASM*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetEolFill(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetFont(QsciLexerMASM* self, const QFont* f, int style) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMASM*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetFont(QsciLexerMASM* self, const QFont* f, int style) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetFont_IsBase(true);
        vqscilexermasm->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMASM*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetFont(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetFont_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_SetPaper(QsciLexerMASM* self, const QColor* c, int style) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMASM*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseSetPaper(QsciLexerMASM* self, const QColor* c, int style) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetPaper_IsBase(true);
        vqscilexermasm->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerMASM*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSetPaper(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMASM_ReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMASM*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMASM_QBaseReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_ReadProperties_IsBase(true);
        return vqscilexermasm->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMASM*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnReadProperties(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMASM_WriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMASM*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMASM_QBaseWriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_WriteProperties_IsBase(true);
        return vqscilexermasm->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerMASM*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnWriteProperties(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMASM_Event(QsciLexerMASM* self, QEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->event(event);
    } else {
        return ((VirtualQsciLexerMASM*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerMASM_QBaseEvent(QsciLexerMASM* self, QEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Event_IsBase(true);
        return vqscilexermasm->event(event);
    } else {
        return ((VirtualQsciLexerMASM*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnEvent(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Event_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMASM_EventFilter(QsciLexerMASM* self, QObject* watched, QEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerMASM*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerMASM_QBaseEventFilter(QsciLexerMASM* self, QObject* watched, QEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_EventFilter_IsBase(true);
        return vqscilexermasm->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerMASM*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnEventFilter(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_TimerEvent(QsciLexerMASM* self, QTimerEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->timerEvent(event);
    } else {
        ((VirtualQsciLexerMASM*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseTimerEvent(QsciLexerMASM* self, QTimerEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_TimerEvent_IsBase(true);
        vqscilexermasm->timerEvent(event);
    } else {
        ((VirtualQsciLexerMASM*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnTimerEvent(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_ChildEvent(QsciLexerMASM* self, QChildEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->childEvent(event);
    } else {
        ((VirtualQsciLexerMASM*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseChildEvent(QsciLexerMASM* self, QChildEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_ChildEvent_IsBase(true);
        vqscilexermasm->childEvent(event);
    } else {
        ((VirtualQsciLexerMASM*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnChildEvent(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_CustomEvent(QsciLexerMASM* self, QEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->customEvent(event);
    } else {
        ((VirtualQsciLexerMASM*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseCustomEvent(QsciLexerMASM* self, QEvent* event) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_CustomEvent_IsBase(true);
        vqscilexermasm->customEvent(event);
    } else {
        ((VirtualQsciLexerMASM*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnCustomEvent(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_ConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerMASM*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_ConnectNotify_IsBase(true);
        vqscilexermasm->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerMASM*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnConnectNotify(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMASM_DisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerMASM*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMASM_QBaseDisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DisconnectNotify_IsBase(true);
        vqscilexermasm->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerMASM*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnDisconnectNotify(QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = dynamic_cast<VirtualQsciLexerMASM*>(self);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerMASM_TextAsBytes(const QsciLexerMASM* self, const libqt_string text) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        QByteArray _qb = vqscilexermasm->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerMASM*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerMASM_QBaseTextAsBytes(const QsciLexerMASM* self, const libqt_string text) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexermasm->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerMASM*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnTextAsBytes(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerMASM_BytesAsText(const QsciLexerMASM* self, const char* bytes, int size) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        QString _ret = vqscilexermasm->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerMASM*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerMASM_QBaseBytesAsText(const QsciLexerMASM* self, const char* bytes, int size) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BytesAsText_IsBase(true);
        QString _ret = vqscilexermasm->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerMASM*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerMASM_OnBytesAsText(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerMASM_Sender(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->sender();
    } else {
        return ((VirtualQsciLexerMASM*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerMASM_QBaseSender(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Sender_IsBase(true);
        return vqscilexermasm->sender();
    } else {
        return ((VirtualQsciLexerMASM*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSender(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Sender_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMASM_SenderSignalIndex(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerMASM*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerMASM_QBaseSenderSignalIndex(const QsciLexerMASM* self) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SenderSignalIndex_IsBase(true);
        return vqscilexermasm->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerMASM*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnSenderSignalIndex(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMASM_Receivers(const QsciLexerMASM* self, const char* signal) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->receivers(signal);
    } else {
        return ((VirtualQsciLexerMASM*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerMASM_QBaseReceivers(const QsciLexerMASM* self, const char* signal) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Receivers_IsBase(true);
        return vqscilexermasm->receivers(signal);
    } else {
        return ((VirtualQsciLexerMASM*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnReceivers(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_Receivers_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMASM_IsSignalConnected(const QsciLexerMASM* self, const QMetaMethod* signal) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        return vqscilexermasm->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerMASM*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerMASM_QBaseIsSignalConnected(const QsciLexerMASM* self, const QMetaMethod* signal) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_IsSignalConnected_IsBase(true);
        return vqscilexermasm->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerMASM*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMASM_OnIsSignalConnected(const QsciLexerMASM* self, intptr_t slot) {
    auto* vqscilexermasm = const_cast<VirtualQsciLexerMASM*>(dynamic_cast<const VirtualQsciLexerMASM*>(self));
    if (vqscilexermasm && vqscilexermasm->isVirtualQsciLexerMASM) {
        vqscilexermasm->setQsciLexerMASM_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerMASM::QsciLexerMASM_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerMASM_Delete(QsciLexerMASM* self) {
    delete self;
}
