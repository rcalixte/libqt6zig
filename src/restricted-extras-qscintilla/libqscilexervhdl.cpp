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
#include <qscilexervhdl.h>
#include "libqscilexervhdl.h"
#include "libqscilexervhdl.hxx"

QsciLexerVHDL* QsciLexerVHDL_new() {
    return new VirtualQsciLexerVHDL();
}

QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent) {
    return new VirtualQsciLexerVHDL(parent);
}

QMetaObject* QsciLexerVHDL_MetaObject(const QsciLexerVHDL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerVHDL_Metacast(QsciLexerVHDL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerVHDL_Metacall(QsciLexerVHDL* self, int param1, int param2, void** param3) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerVHDL_Tr(const char* s) {
    QString _ret = QsciLexerVHDL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerVHDL_Language(const QsciLexerVHDL* self) {
    return (const char*)self->language();
}

const char* QsciLexerVHDL_Lexer(const QsciLexerVHDL* self) {
    return (const char*)self->lexer();
}

int QsciLexerVHDL_BraceStyle(const QsciLexerVHDL* self) {
    return self->braceStyle();
}

QColor* QsciLexerVHDL_DefaultColor(const QsciLexerVHDL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerVHDL_DefaultEolFill(const QsciLexerVHDL* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerVHDL_DefaultFont(const QsciLexerVHDL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVHDL_DefaultPaper(const QsciLexerVHDL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerVHDL_Keywords(const QsciLexerVHDL* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerVHDL_Description(const QsciLexerVHDL* self, int style) {
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

void QsciLexerVHDL_RefreshProperties(QsciLexerVHDL* self) {
    self->refreshProperties();
}

bool QsciLexerVHDL_FoldComments(const QsciLexerVHDL* self) {
    return self->foldComments();
}

bool QsciLexerVHDL_FoldCompact(const QsciLexerVHDL* self) {
    return self->foldCompact();
}

bool QsciLexerVHDL_FoldAtElse(const QsciLexerVHDL* self) {
    return self->foldAtElse();
}

bool QsciLexerVHDL_FoldAtBegin(const QsciLexerVHDL* self) {
    return self->foldAtBegin();
}

bool QsciLexerVHDL_FoldAtParenthesis(const QsciLexerVHDL* self) {
    return self->foldAtParenthesis();
}

void QsciLexerVHDL_SetFoldComments(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        self->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldComments(fold);
    }
}

void QsciLexerVHDL_SetFoldCompact(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        self->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldCompact(fold);
    }
}

void QsciLexerVHDL_SetFoldAtElse(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        self->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldAtElse(fold);
    }
}

void QsciLexerVHDL_SetFoldAtBegin(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        self->setFoldAtBegin(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldAtBegin(fold);
    }
}

void QsciLexerVHDL_SetFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        self->setFoldAtParenthesis(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldAtParenthesis(fold);
    }
}

libqt_string QsciLexerVHDL_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerVHDL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerVHDL_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerVHDL::tr(s, c, static_cast<int>(n));
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
int QsciLexerVHDL_QBaseMetacall(QsciLexerVHDL* self, int param1, int param2, void** param3) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Metacall_IsBase(true);
        return vqscilexervhdl->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnMetacall(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Metacall_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldComments(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldComments_IsBase(true);
        vqscilexervhdl->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldComments(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldComments_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldCompact(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldCompact_IsBase(true);
        vqscilexervhdl->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldCompact(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldCompact_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldAtElse(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtElse_IsBase(true);
        vqscilexervhdl->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtElse(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtElse_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldAtBegin(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtBegin_IsBase(true);
        vqscilexervhdl->setFoldAtBegin(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldAtBegin(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtBegin(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtBegin_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtBegin_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtParenthesis_IsBase(true);
        vqscilexervhdl->setFoldAtParenthesis(fold);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFoldAtParenthesis(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtParenthesis(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtParenthesis_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtParenthesis_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_LexerId(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->lexerId();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseLexerId(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_LexerId_IsBase(true);
        return vqscilexervhdl->lexerId();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnLexerId(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_LexerId_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_AutoCompletionFillups(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return (const char*)vqscilexervhdl->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseAutoCompletionFillups(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexervhdl->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnAutoCompletionFillups(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerVHDL_AutoCompletionWordSeparators(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        QList<QString> _ret = vqscilexervhdl->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerVHDL*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerVHDL_QBaseAutoCompletionWordSeparators(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexervhdl->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerVHDL*)self)->autoCompletionWordSeparators();
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
void QsciLexerVHDL_OnAutoCompletionWordSeparators(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockEnd(const QsciLexerVHDL* self, int* style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return (const char*)vqscilexervhdl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseBlockEnd(const QsciLexerVHDL* self, int* style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BlockEnd_IsBase(true);
        return (const char*)vqscilexervhdl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockEnd(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_BlockLookback(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->blockLookback();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseBlockLookback(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BlockLookback_IsBase(true);
        return vqscilexervhdl->blockLookback();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockLookback(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockStart(const QsciLexerVHDL* self, int* style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return (const char*)vqscilexervhdl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseBlockStart(const QsciLexerVHDL* self, int* style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BlockStart_IsBase(true);
        return (const char*)vqscilexervhdl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockStart(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockStartKeyword(const QsciLexerVHDL* self, int* style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return (const char*)vqscilexervhdl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseBlockStartKeyword(const QsciLexerVHDL* self, int* style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexervhdl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockStartKeyword(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_CaseSensitive(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->caseSensitive();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseCaseSensitive(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_CaseSensitive_IsBase(true);
        return vqscilexervhdl->caseSensitive();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnCaseSensitive(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVHDL_Color(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return new QColor(vqscilexervhdl->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVHDL*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVHDL_QBaseColor(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Color_IsBase(true);
        return new QColor(vqscilexervhdl->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVHDL*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnColor(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Color_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_EolFill(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerVHDL*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseEolFill(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_EolFill_IsBase(true);
        return vqscilexervhdl->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerVHDL*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEolFill(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_EolFill_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerVHDL_Font(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return new QFont(vqscilexervhdl->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerVHDL*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerVHDL_QBaseFont(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Font_IsBase(true);
        return new QFont(vqscilexervhdl->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerVHDL*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnFont(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Font_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_IndentationGuideView(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->indentationGuideView();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseIndentationGuideView(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_IndentationGuideView_IsBase(true);
        return vqscilexervhdl->indentationGuideView();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnIndentationGuideView(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_DefaultStyle(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->defaultStyle();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseDefaultStyle(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultStyle_IsBase(true);
        return vqscilexervhdl->defaultStyle();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultStyle(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVHDL_Paper(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return new QColor(vqscilexervhdl->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVHDL*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVHDL_QBasePaper(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Paper_IsBase(true);
        return new QColor(vqscilexervhdl->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVHDL*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnPaper(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Paper_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVHDL_DefaultColor2(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return new QColor(vqscilexervhdl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVHDL*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVHDL_QBaseDefaultColor2(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultColor2_IsBase(true);
        return new QColor(vqscilexervhdl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVHDL*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultColor2(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerVHDL_DefaultFont2(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return new QFont(vqscilexervhdl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerVHDL*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerVHDL_QBaseDefaultFont2(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultFont2_IsBase(true);
        return new QFont(vqscilexervhdl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerVHDL*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultFont2(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVHDL_DefaultPaper2(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return new QColor(vqscilexervhdl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVHDL*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVHDL_QBaseDefaultPaper2(const QsciLexerVHDL* self, int style) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexervhdl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerVHDL*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultPaper2(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetEditor(QsciLexerVHDL* self, QsciScintilla* editor) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setEditor(editor);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetEditor(QsciLexerVHDL* self, QsciScintilla* editor) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetEditor_IsBase(true);
        vqscilexervhdl->setEditor(editor);
    } else {
        ((VirtualQsciLexerVHDL*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetEditor(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_StyleBitsNeeded(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseStyleBitsNeeded(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_StyleBitsNeeded_IsBase(true);
        return vqscilexervhdl->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnStyleBitsNeeded(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_WordCharacters(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return (const char*)vqscilexervhdl->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseWordCharacters(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_WordCharacters_IsBase(true);
        return (const char*)vqscilexervhdl->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerVHDL*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnWordCharacters(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetAutoIndentStyle_IsBase(true);
        vqscilexervhdl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetAutoIndentStyle(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetColor(QsciLexerVHDL* self, const QColor* c, int style) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetColor(QsciLexerVHDL* self, const QColor* c, int style) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetColor_IsBase(true);
        vqscilexervhdl->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetColor(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetColor_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetEolFill(QsciLexerVHDL* self, bool eoffill, int style) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetEolFill(QsciLexerVHDL* self, bool eoffill, int style) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetEolFill_IsBase(true);
        vqscilexervhdl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetEolFill(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetFont(QsciLexerVHDL* self, const QFont* f, int style) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFont(QsciLexerVHDL* self, const QFont* f, int style) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFont_IsBase(true);
        vqscilexervhdl->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFont(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetFont_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetPaper(QsciLexerVHDL* self, const QColor* c, int style) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetPaper(QsciLexerVHDL* self, const QColor* c, int style) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetPaper_IsBase(true);
        vqscilexervhdl->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerVHDL*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetPaper(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_ReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_ReadProperties_IsBase(true);
        return vqscilexervhdl->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnReadProperties(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_WriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseWriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_WriteProperties_IsBase(true);
        return vqscilexervhdl->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnWriteProperties(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_Event(QsciLexerVHDL* self, QEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->event(event);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseEvent(QsciLexerVHDL* self, QEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Event_IsBase(true);
        return vqscilexervhdl->event(event);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEvent(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Event_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_EventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseEventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_EventFilter_IsBase(true);
        return vqscilexervhdl->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEventFilter(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_TimerEvent(QsciLexerVHDL* self, QTimerEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->timerEvent(event);
    } else {
        ((VirtualQsciLexerVHDL*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseTimerEvent(QsciLexerVHDL* self, QTimerEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_TimerEvent_IsBase(true);
        vqscilexervhdl->timerEvent(event);
    } else {
        ((VirtualQsciLexerVHDL*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnTimerEvent(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_ChildEvent(QsciLexerVHDL* self, QChildEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->childEvent(event);
    } else {
        ((VirtualQsciLexerVHDL*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseChildEvent(QsciLexerVHDL* self, QChildEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_ChildEvent_IsBase(true);
        vqscilexervhdl->childEvent(event);
    } else {
        ((VirtualQsciLexerVHDL*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnChildEvent(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_CustomEvent(QsciLexerVHDL* self, QEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->customEvent(event);
    } else {
        ((VirtualQsciLexerVHDL*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseCustomEvent(QsciLexerVHDL* self, QEvent* event) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_CustomEvent_IsBase(true);
        vqscilexervhdl->customEvent(event);
    } else {
        ((VirtualQsciLexerVHDL*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnCustomEvent(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_ConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerVHDL*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_ConnectNotify_IsBase(true);
        vqscilexervhdl->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerVHDL*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnConnectNotify(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_DisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerVHDL*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseDisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DisconnectNotify_IsBase(true);
        vqscilexervhdl->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerVHDL*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDisconnectNotify(QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerVHDL_TextAsBytes(const QsciLexerVHDL* self, const libqt_string text) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        QByteArray _qb = vqscilexervhdl->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerVHDL*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerVHDL_QBaseTextAsBytes(const QsciLexerVHDL* self, const libqt_string text) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexervhdl->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerVHDL*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnTextAsBytes(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerVHDL_BytesAsText(const QsciLexerVHDL* self, const char* bytes, int size) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        QString _ret = vqscilexervhdl->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerVHDL*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerVHDL_QBaseBytesAsText(const QsciLexerVHDL* self, const char* bytes, int size) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BytesAsText_IsBase(true);
        QString _ret = vqscilexervhdl->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerVHDL*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerVHDL_OnBytesAsText(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerVHDL_Sender(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->sender();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerVHDL_QBaseSender(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Sender_IsBase(true);
        return vqscilexervhdl->sender();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSender(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Sender_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_SenderSignalIndex(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseSenderSignalIndex(const QsciLexerVHDL* self) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SenderSignalIndex_IsBase(true);
        return vqscilexervhdl->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerVHDL*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSenderSignalIndex(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_Receivers(const QsciLexerVHDL* self, const char* signal) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->receivers(signal);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseReceivers(const QsciLexerVHDL* self, const char* signal) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Receivers_IsBase(true);
        return vqscilexervhdl->receivers(signal);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnReceivers(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_Receivers_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_IsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        return vqscilexervhdl->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseIsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_IsSignalConnected_IsBase(true);
        return vqscilexervhdl->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerVHDL*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnIsSignalConnected(const QsciLexerVHDL* self, intptr_t slot) {
    auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self));
    if (vqscilexervhdl && vqscilexervhdl->isVirtualQsciLexerVHDL) {
        vqscilexervhdl->setQsciLexerVHDL_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerVHDL_Delete(QsciLexerVHDL* self) {
    delete self;
}
