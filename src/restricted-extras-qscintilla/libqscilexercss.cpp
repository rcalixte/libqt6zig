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
#include <qscilexercss.h>
#include "libqscilexercss.h"
#include "libqscilexercss.hxx"

QsciLexerCSS* QsciLexerCSS_new() {
    return new VirtualQsciLexerCSS();
}

QsciLexerCSS* QsciLexerCSS_new2(QObject* parent) {
    return new VirtualQsciLexerCSS(parent);
}

QMetaObject* QsciLexerCSS_MetaObject(const QsciLexerCSS* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCSS_Metacast(QsciLexerCSS* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCSS_Metacall(QsciLexerCSS* self, int param1, int param2, void** param3) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCSS*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCSS_OnMetacall(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCSS_QBaseMetacall(QsciLexerCSS* self, int param1, int param2, void** param3) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Metacall_IsBase(true);
        return vqscilexercss->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCSS*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCSS_Tr(const char* s) {
    QString _ret = QsciLexerCSS::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerCSS_DefaultColor(const QsciLexerCSS* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCSS_DefaultFont(const QsciLexerCSS* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

bool QsciLexerCSS_FoldComments(const QsciLexerCSS* self) {
    return self->foldComments();
}

bool QsciLexerCSS_FoldCompact(const QsciLexerCSS* self) {
    return self->foldCompact();
}

void QsciLexerCSS_SetHSSLanguage(QsciLexerCSS* self, bool enabled) {
    self->setHSSLanguage(enabled);
}

bool QsciLexerCSS_HSSLanguage(const QsciLexerCSS* self) {
    return self->HSSLanguage();
}

void QsciLexerCSS_SetLessLanguage(QsciLexerCSS* self, bool enabled) {
    self->setLessLanguage(enabled);
}

bool QsciLexerCSS_LessLanguage(const QsciLexerCSS* self) {
    return self->LessLanguage();
}

void QsciLexerCSS_SetSCSSLanguage(QsciLexerCSS* self, bool enabled) {
    self->setSCSSLanguage(enabled);
}

bool QsciLexerCSS_SCSSLanguage(const QsciLexerCSS* self) {
    return self->SCSSLanguage();
}

libqt_string QsciLexerCSS_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCSS::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCSS_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCSS::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCSS_BlockEnd1(const QsciLexerCSS* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCSS_BlockStart1(const QsciLexerCSS* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerCSS_SetFoldComments(QsciLexerCSS* self, bool fold) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerCSS*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetFoldComments(QsciLexerCSS* self, bool fold) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetFoldComments_IsBase(true);
        vqscilexercss->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerCSS*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFoldComments(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetFoldCompact(QsciLexerCSS* self, bool fold) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerCSS*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetFoldCompact(QsciLexerCSS* self, bool fold) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetFoldCompact_IsBase(true);
        vqscilexercss->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerCSS*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFoldCompact(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_Language(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return (const char*)vqscilexercss->language();
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseLanguage(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Language_IsBase(true);
        return (const char*)vqscilexercss->language();
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnLanguage(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Language_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_Lexer(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return (const char*)vqscilexercss->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseLexer(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Lexer_IsBase(true);
        return (const char*)vqscilexercss->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnLexer(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_LexerId(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->lexerId();
    } else {
        return ((VirtualQsciLexerCSS*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseLexerId(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_LexerId_IsBase(true);
        return vqscilexercss->lexerId();
    } else {
        return ((VirtualQsciLexerCSS*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnLexerId(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_AutoCompletionFillups(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return (const char*)vqscilexercss->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseAutoCompletionFillups(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercss->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnAutoCompletionFillups(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCSS_AutoCompletionWordSeparators(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        QList<QString> _ret = vqscilexercss->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerCSS*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerCSS_QBaseAutoCompletionWordSeparators(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexercss->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerCSS*)self)->autoCompletionWordSeparators();
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
void QsciLexerCSS_OnAutoCompletionWordSeparators(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_BlockEnd(const QsciLexerCSS* self, int* style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return (const char*)vqscilexercss->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseBlockEnd(const QsciLexerCSS* self, int* style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BlockEnd_IsBase(true);
        return (const char*)vqscilexercss->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockEnd(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_BlockLookback(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->blockLookback();
    } else {
        return ((VirtualQsciLexerCSS*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseBlockLookback(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BlockLookback_IsBase(true);
        return vqscilexercss->blockLookback();
    } else {
        return ((VirtualQsciLexerCSS*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockLookback(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_BlockStart(const QsciLexerCSS* self, int* style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return (const char*)vqscilexercss->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseBlockStart(const QsciLexerCSS* self, int* style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BlockStart_IsBase(true);
        return (const char*)vqscilexercss->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockStart(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_BlockStartKeyword(const QsciLexerCSS* self, int* style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return (const char*)vqscilexercss->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseBlockStartKeyword(const QsciLexerCSS* self, int* style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercss->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockStartKeyword(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_BraceStyle(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->braceStyle();
    } else {
        return ((VirtualQsciLexerCSS*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseBraceStyle(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BraceStyle_IsBase(true);
        return vqscilexercss->braceStyle();
    } else {
        return ((VirtualQsciLexerCSS*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBraceStyle(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_CaseSensitive(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->caseSensitive();
    } else {
        return ((VirtualQsciLexerCSS*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseCaseSensitive(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_CaseSensitive_IsBase(true);
        return vqscilexercss->caseSensitive();
    } else {
        return ((VirtualQsciLexerCSS*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnCaseSensitive(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSS_Color(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return new QColor(vqscilexercss->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSS*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSS_QBaseColor(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Color_IsBase(true);
        return new QColor(vqscilexercss->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSS*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnColor(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Color_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_EolFill(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCSS*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseEolFill(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_EolFill_IsBase(true);
        return vqscilexercss->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCSS*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEolFill(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCSS_Font(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return new QFont(vqscilexercss->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCSS*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCSS_QBaseFont(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Font_IsBase(true);
        return new QFont(vqscilexercss->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCSS*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnFont(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Font_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_IndentationGuideView(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCSS*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseIndentationGuideView(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_IndentationGuideView_IsBase(true);
        return vqscilexercss->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCSS*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnIndentationGuideView(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_Keywords(const QsciLexerCSS* self, int set) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return (const char*)vqscilexercss->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseKeywords(const QsciLexerCSS* self, int set) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Keywords_IsBase(true);
        return (const char*)vqscilexercss->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnKeywords(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Keywords_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_DefaultStyle(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->defaultStyle();
    } else {
        return ((VirtualQsciLexerCSS*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseDefaultStyle(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultStyle_IsBase(true);
        return vqscilexercss->defaultStyle();
    } else {
        return ((VirtualQsciLexerCSS*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultStyle(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCSS_Description(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        QString _ret = vqscilexercss->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCSS*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerCSS_QBaseDescription(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Description_IsBase(true);
        QString _ret = vqscilexercss->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCSS*)self)->description(static_cast<int>(style));
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
void QsciLexerCSS_OnDescription(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Description_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSS_Paper(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return new QColor(vqscilexercss->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSS*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSS_QBasePaper(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Paper_IsBase(true);
        return new QColor(vqscilexercss->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSS*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnPaper(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Paper_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSS_DefaultColor2(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return new QColor(vqscilexercss->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSS*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSS_QBaseDefaultColor2(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultColor2_IsBase(true);
        return new QColor(vqscilexercss->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSS*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultColor2(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_DefaultEolFill(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCSS*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseDefaultEolFill(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultEolFill_IsBase(true);
        return vqscilexercss->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCSS*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultEolFill(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCSS_DefaultFont2(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return new QFont(vqscilexercss->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCSS*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCSS_QBaseDefaultFont2(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultFont2_IsBase(true);
        return new QFont(vqscilexercss->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCSS*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultFont2(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSS_DefaultPaper2(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return new QColor(vqscilexercss->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSS*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSS_QBaseDefaultPaper2(const QsciLexerCSS* self, int style) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexercss->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCSS*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultPaper2(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetEditor(QsciLexerCSS* self, QsciScintilla* editor) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setEditor(editor);
    } else {
        ((VirtualQsciLexerCSS*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetEditor(QsciLexerCSS* self, QsciScintilla* editor) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetEditor_IsBase(true);
        vqscilexercss->setEditor(editor);
    } else {
        ((VirtualQsciLexerCSS*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetEditor(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_RefreshProperties(QsciLexerCSS* self) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->refreshProperties();
    } else {
        ((VirtualQsciLexerCSS*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseRefreshProperties(QsciLexerCSS* self) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_RefreshProperties_IsBase(true);
        vqscilexercss->refreshProperties();
    } else {
        ((VirtualQsciLexerCSS*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnRefreshProperties(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_StyleBitsNeeded(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCSS*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseStyleBitsNeeded(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_StyleBitsNeeded_IsBase(true);
        return vqscilexercss->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCSS*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnStyleBitsNeeded(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_WordCharacters(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return (const char*)vqscilexercss->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseWordCharacters(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_WordCharacters_IsBase(true);
        return (const char*)vqscilexercss->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCSS*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnWordCharacters(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetAutoIndentStyle(QsciLexerCSS* self, int autoindentstyle) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCSS*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetAutoIndentStyle(QsciLexerCSS* self, int autoindentstyle) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetAutoIndentStyle_IsBase(true);
        vqscilexercss->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCSS*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetAutoIndentStyle(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetColor(QsciLexerCSS* self, const QColor* c, int style) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSS*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetColor(QsciLexerCSS* self, const QColor* c, int style) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetColor_IsBase(true);
        vqscilexercss->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSS*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetColor(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetEolFill(QsciLexerCSS* self, bool eoffill, int style) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSS*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetEolFill(QsciLexerCSS* self, bool eoffill, int style) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetEolFill_IsBase(true);
        vqscilexercss->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSS*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetEolFill(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetFont(QsciLexerCSS* self, const QFont* f, int style) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSS*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetFont(QsciLexerCSS* self, const QFont* f, int style) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetFont_IsBase(true);
        vqscilexercss->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSS*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFont(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetPaper(QsciLexerCSS* self, const QColor* c, int style) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSS*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetPaper(QsciLexerCSS* self, const QColor* c, int style) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetPaper_IsBase(true);
        vqscilexercss->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCSS*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetPaper(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_ReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCSS*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_ReadProperties_IsBase(true);
        return vqscilexercss->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCSS*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnReadProperties(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_WriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCSS*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseWriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_WriteProperties_IsBase(true);
        return vqscilexercss->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCSS*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnWriteProperties(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_Event(QsciLexerCSS* self, QEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->event(event);
    } else {
        return ((VirtualQsciLexerCSS*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseEvent(QsciLexerCSS* self, QEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Event_IsBase(true);
        return vqscilexercss->event(event);
    } else {
        return ((VirtualQsciLexerCSS*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEvent(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Event_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_EventFilter(QsciLexerCSS* self, QObject* watched, QEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCSS*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseEventFilter(QsciLexerCSS* self, QObject* watched, QEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_EventFilter_IsBase(true);
        return vqscilexercss->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCSS*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEventFilter(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_TimerEvent(QsciLexerCSS* self, QTimerEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->timerEvent(event);
    } else {
        ((VirtualQsciLexerCSS*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseTimerEvent(QsciLexerCSS* self, QTimerEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_TimerEvent_IsBase(true);
        vqscilexercss->timerEvent(event);
    } else {
        ((VirtualQsciLexerCSS*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnTimerEvent(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_ChildEvent(QsciLexerCSS* self, QChildEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->childEvent(event);
    } else {
        ((VirtualQsciLexerCSS*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseChildEvent(QsciLexerCSS* self, QChildEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_ChildEvent_IsBase(true);
        vqscilexercss->childEvent(event);
    } else {
        ((VirtualQsciLexerCSS*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnChildEvent(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_CustomEvent(QsciLexerCSS* self, QEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->customEvent(event);
    } else {
        ((VirtualQsciLexerCSS*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseCustomEvent(QsciLexerCSS* self, QEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_CustomEvent_IsBase(true);
        vqscilexercss->customEvent(event);
    } else {
        ((VirtualQsciLexerCSS*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnCustomEvent(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_ConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCSS*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_ConnectNotify_IsBase(true);
        vqscilexercss->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCSS*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnConnectNotify(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_DisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCSS*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseDisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DisconnectNotify_IsBase(true);
        vqscilexercss->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCSS*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDisconnectNotify(QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCSS_TextAsBytes(const QsciLexerCSS* self, const libqt_string text) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        QByteArray _qb = vqscilexercss->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCSS*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerCSS_QBaseTextAsBytes(const QsciLexerCSS* self, const libqt_string text) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexercss->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCSS*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnTextAsBytes(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCSS_BytesAsText(const QsciLexerCSS* self, const char* bytes, int size) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        QString _ret = vqscilexercss->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCSS*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerCSS_QBaseBytesAsText(const QsciLexerCSS* self, const char* bytes, int size) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BytesAsText_IsBase(true);
        QString _ret = vqscilexercss->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCSS*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerCSS_OnBytesAsText(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCSS_Sender(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->sender();
    } else {
        return ((VirtualQsciLexerCSS*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCSS_QBaseSender(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Sender_IsBase(true);
        return vqscilexercss->sender();
    } else {
        return ((VirtualQsciLexerCSS*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSender(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Sender_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_SenderSignalIndex(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCSS*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseSenderSignalIndex(const QsciLexerCSS* self) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SenderSignalIndex_IsBase(true);
        return vqscilexercss->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCSS*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSenderSignalIndex(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_Receivers(const QsciLexerCSS* self, const char* signal) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->receivers(signal);
    } else {
        return ((VirtualQsciLexerCSS*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseReceivers(const QsciLexerCSS* self, const char* signal) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Receivers_IsBase(true);
        return vqscilexercss->receivers(signal);
    } else {
        return ((VirtualQsciLexerCSS*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnReceivers(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_IsSignalConnected(const QsciLexerCSS* self, const QMetaMethod* signal) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        return vqscilexercss->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCSS*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseIsSignalConnected(const QsciLexerCSS* self, const QMetaMethod* signal) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_IsSignalConnected_IsBase(true);
        return vqscilexercss->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCSS*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnIsSignalConnected(const QsciLexerCSS* self, intptr_t slot) {
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss && vqscilexercss->isVirtualQsciLexerCSS) {
        vqscilexercss->setQsciLexerCSS_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCSS_Delete(QsciLexerCSS* self) {
    delete self;
}
