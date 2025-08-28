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
#include <qscilexertcl.h>
#include "libqscilexertcl.h"
#include "libqscilexertcl.hxx"

QsciLexerTCL* QsciLexerTCL_new() {
    return new VirtualQsciLexerTCL();
}

QsciLexerTCL* QsciLexerTCL_new2(QObject* parent) {
    return new VirtualQsciLexerTCL(parent);
}

QMetaObject* QsciLexerTCL_MetaObject(const QsciLexerTCL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerTCL_Metacast(QsciLexerTCL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerTCL_Metacall(QsciLexerTCL* self, int param1, int param2, void** param3) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerTCL*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerTCL_OnMetacall(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Metacall_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerTCL_QBaseMetacall(QsciLexerTCL* self, int param1, int param2, void** param3) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Metacall_IsBase(true);
        return vqscilexertcl->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerTCL*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerTCL_Tr(const char* s) {
    QString _ret = QsciLexerTCL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerTCL_Language(const QsciLexerTCL* self) {
    return (const char*)self->language();
}

const char* QsciLexerTCL_Lexer(const QsciLexerTCL* self) {
    return (const char*)self->lexer();
}

int QsciLexerTCL_BraceStyle(const QsciLexerTCL* self) {
    return self->braceStyle();
}

QColor* QsciLexerTCL_DefaultColor(const QsciLexerTCL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerTCL_DefaultEolFill(const QsciLexerTCL* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerTCL_DefaultFont(const QsciLexerTCL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerTCL_DefaultPaper(const QsciLexerTCL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerTCL_Keywords(const QsciLexerTCL* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerTCL_Description(const QsciLexerTCL* self, int style) {
    QString _ret = self->description(static_cast<int>(style));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciLexerTCL_RefreshProperties(QsciLexerTCL* self) {
    self->refreshProperties();
}

void QsciLexerTCL_SetFoldComments(QsciLexerTCL* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerTCL_FoldComments(const QsciLexerTCL* self) {
    return self->foldComments();
}

libqt_string QsciLexerTCL_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerTCL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerTCL_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerTCL::tr(s, c, static_cast<int>(n));
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
int QsciLexerTCL_LexerId(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->lexerId();
    } else {
        return ((VirtualQsciLexerTCL*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseLexerId(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_LexerId_IsBase(true);
        return vqscilexertcl->lexerId();
    } else {
        return ((VirtualQsciLexerTCL*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnLexerId(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_LexerId_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_AutoCompletionFillups(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return (const char*)vqscilexertcl->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseAutoCompletionFillups(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexertcl->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnAutoCompletionFillups(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerTCL_AutoCompletionWordSeparators(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        QList<QString> _ret = vqscilexertcl->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerTCL*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerTCL_QBaseAutoCompletionWordSeparators(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexertcl->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerTCL*)self)->autoCompletionWordSeparators();
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
void QsciLexerTCL_OnAutoCompletionWordSeparators(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockEnd(const QsciLexerTCL* self, int* style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return (const char*)vqscilexertcl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseBlockEnd(const QsciLexerTCL* self, int* style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BlockEnd_IsBase(true);
        return (const char*)vqscilexertcl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockEnd(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_BlockLookback(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->blockLookback();
    } else {
        return ((VirtualQsciLexerTCL*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseBlockLookback(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BlockLookback_IsBase(true);
        return vqscilexertcl->blockLookback();
    } else {
        return ((VirtualQsciLexerTCL*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockLookback(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockStart(const QsciLexerTCL* self, int* style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return (const char*)vqscilexertcl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseBlockStart(const QsciLexerTCL* self, int* style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BlockStart_IsBase(true);
        return (const char*)vqscilexertcl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockStart(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockStartKeyword(const QsciLexerTCL* self, int* style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return (const char*)vqscilexertcl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseBlockStartKeyword(const QsciLexerTCL* self, int* style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexertcl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockStartKeyword(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_CaseSensitive(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->caseSensitive();
    } else {
        return ((VirtualQsciLexerTCL*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseCaseSensitive(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_CaseSensitive_IsBase(true);
        return vqscilexertcl->caseSensitive();
    } else {
        return ((VirtualQsciLexerTCL*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnCaseSensitive(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTCL_Color(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return new QColor(vqscilexertcl->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTCL*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTCL_QBaseColor(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Color_IsBase(true);
        return new QColor(vqscilexertcl->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTCL*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnColor(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Color_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_EolFill(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTCL*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseEolFill(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_EolFill_IsBase(true);
        return vqscilexertcl->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerTCL*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEolFill(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_EolFill_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerTCL_Font(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return new QFont(vqscilexertcl->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTCL*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerTCL_QBaseFont(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Font_IsBase(true);
        return new QFont(vqscilexertcl->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTCL*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnFont(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Font_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_IndentationGuideView(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->indentationGuideView();
    } else {
        return ((VirtualQsciLexerTCL*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseIndentationGuideView(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_IndentationGuideView_IsBase(true);
        return vqscilexertcl->indentationGuideView();
    } else {
        return ((VirtualQsciLexerTCL*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnIndentationGuideView(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_DefaultStyle(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->defaultStyle();
    } else {
        return ((VirtualQsciLexerTCL*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseDefaultStyle(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DefaultStyle_IsBase(true);
        return vqscilexertcl->defaultStyle();
    } else {
        return ((VirtualQsciLexerTCL*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultStyle(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTCL_Paper(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return new QColor(vqscilexertcl->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTCL*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTCL_QBasePaper(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Paper_IsBase(true);
        return new QColor(vqscilexertcl->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTCL*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnPaper(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Paper_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTCL_DefaultColor2(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return new QColor(vqscilexertcl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTCL*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTCL_QBaseDefaultColor2(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DefaultColor2_IsBase(true);
        return new QColor(vqscilexertcl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTCL*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultColor2(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerTCL_DefaultFont2(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return new QFont(vqscilexertcl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTCL*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerTCL_QBaseDefaultFont2(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DefaultFont2_IsBase(true);
        return new QFont(vqscilexertcl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerTCL*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultFont2(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTCL_DefaultPaper2(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return new QColor(vqscilexertcl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTCL*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTCL_QBaseDefaultPaper2(const QsciLexerTCL* self, int style) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexertcl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerTCL*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultPaper2(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetEditor(QsciLexerTCL* self, QsciScintilla* editor) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setEditor(editor);
    } else {
        ((VirtualQsciLexerTCL*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetEditor(QsciLexerTCL* self, QsciScintilla* editor) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetEditor_IsBase(true);
        vqscilexertcl->setEditor(editor);
    } else {
        ((VirtualQsciLexerTCL*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetEditor(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_StyleBitsNeeded(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerTCL*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseStyleBitsNeeded(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_StyleBitsNeeded_IsBase(true);
        return vqscilexertcl->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerTCL*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnStyleBitsNeeded(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_WordCharacters(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return (const char*)vqscilexertcl->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseWordCharacters(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_WordCharacters_IsBase(true);
        return (const char*)vqscilexertcl->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerTCL*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnWordCharacters(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerTCL*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetAutoIndentStyle_IsBase(true);
        vqscilexertcl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerTCL*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetAutoIndentStyle(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetColor(QsciLexerTCL* self, const QColor* c, int style) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTCL*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetColor(QsciLexerTCL* self, const QColor* c, int style) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetColor_IsBase(true);
        vqscilexertcl->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTCL*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetColor(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetColor_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetEolFill(QsciLexerTCL* self, bool eoffill, int style) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTCL*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetEolFill(QsciLexerTCL* self, bool eoffill, int style) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetEolFill_IsBase(true);
        vqscilexertcl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTCL*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetEolFill(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetFont(QsciLexerTCL* self, const QFont* f, int style) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTCL*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetFont(QsciLexerTCL* self, const QFont* f, int style) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetFont_IsBase(true);
        vqscilexertcl->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTCL*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetFont(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetFont_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetPaper(QsciLexerTCL* self, const QColor* c, int style) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTCL*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetPaper(QsciLexerTCL* self, const QColor* c, int style) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetPaper_IsBase(true);
        vqscilexertcl->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerTCL*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetPaper(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_ReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTCL*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_ReadProperties_IsBase(true);
        return vqscilexertcl->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTCL*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnReadProperties(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_WriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTCL*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseWriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_WriteProperties_IsBase(true);
        return vqscilexertcl->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerTCL*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnWriteProperties(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_Event(QsciLexerTCL* self, QEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->event(event);
    } else {
        return ((VirtualQsciLexerTCL*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseEvent(QsciLexerTCL* self, QEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Event_IsBase(true);
        return vqscilexertcl->event(event);
    } else {
        return ((VirtualQsciLexerTCL*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEvent(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Event_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_EventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerTCL*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseEventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_EventFilter_IsBase(true);
        return vqscilexertcl->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerTCL*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEventFilter(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_TimerEvent(QsciLexerTCL* self, QTimerEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->timerEvent(event);
    } else {
        ((VirtualQsciLexerTCL*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseTimerEvent(QsciLexerTCL* self, QTimerEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_TimerEvent_IsBase(true);
        vqscilexertcl->timerEvent(event);
    } else {
        ((VirtualQsciLexerTCL*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnTimerEvent(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_ChildEvent(QsciLexerTCL* self, QChildEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->childEvent(event);
    } else {
        ((VirtualQsciLexerTCL*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseChildEvent(QsciLexerTCL* self, QChildEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_ChildEvent_IsBase(true);
        vqscilexertcl->childEvent(event);
    } else {
        ((VirtualQsciLexerTCL*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnChildEvent(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_CustomEvent(QsciLexerTCL* self, QEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->customEvent(event);
    } else {
        ((VirtualQsciLexerTCL*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseCustomEvent(QsciLexerTCL* self, QEvent* event) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_CustomEvent_IsBase(true);
        vqscilexertcl->customEvent(event);
    } else {
        ((VirtualQsciLexerTCL*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnCustomEvent(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_ConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerTCL*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_ConnectNotify_IsBase(true);
        vqscilexertcl->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerTCL*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnConnectNotify(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_DisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerTCL*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseDisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DisconnectNotify_IsBase(true);
        vqscilexertcl->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerTCL*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDisconnectNotify(QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerTCL_TextAsBytes(const QsciLexerTCL* self, const libqt_string text) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        QByteArray _qb = vqscilexertcl->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerTCL*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerTCL_QBaseTextAsBytes(const QsciLexerTCL* self, const libqt_string text) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexertcl->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerTCL*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnTextAsBytes(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerTCL_BytesAsText(const QsciLexerTCL* self, const char* bytes, int size) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        QString _ret = vqscilexertcl->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerTCL*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerTCL_QBaseBytesAsText(const QsciLexerTCL* self, const char* bytes, int size) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BytesAsText_IsBase(true);
        QString _ret = vqscilexertcl->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerTCL*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerTCL_OnBytesAsText(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerTCL_Sender(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->sender();
    } else {
        return ((VirtualQsciLexerTCL*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerTCL_QBaseSender(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Sender_IsBase(true);
        return vqscilexertcl->sender();
    } else {
        return ((VirtualQsciLexerTCL*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSender(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Sender_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_SenderSignalIndex(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerTCL*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseSenderSignalIndex(const QsciLexerTCL* self) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SenderSignalIndex_IsBase(true);
        return vqscilexertcl->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerTCL*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSenderSignalIndex(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_Receivers(const QsciLexerTCL* self, const char* signal) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->receivers(signal);
    } else {
        return ((VirtualQsciLexerTCL*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseReceivers(const QsciLexerTCL* self, const char* signal) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Receivers_IsBase(true);
        return vqscilexertcl->receivers(signal);
    } else {
        return ((VirtualQsciLexerTCL*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnReceivers(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_Receivers_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_IsSignalConnected(const QsciLexerTCL* self, const QMetaMethod* signal) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        return vqscilexertcl->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerTCL*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseIsSignalConnected(const QsciLexerTCL* self, const QMetaMethod* signal) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_IsSignalConnected_IsBase(true);
        return vqscilexertcl->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerTCL*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnIsSignalConnected(const QsciLexerTCL* self, intptr_t slot) {
    auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self));
    if (vqscilexertcl && vqscilexertcl->isVirtualQsciLexerTCL) {
        vqscilexertcl->setQsciLexerTCL_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerTCL_Delete(QsciLexerTCL* self) {
    delete self;
}
