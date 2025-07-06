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
#include <qscilexerhtml.h>
#include "libqscilexerhtml.h"
#include "libqscilexerhtml.hxx"

QsciLexerHTML* QsciLexerHTML_new() {
    return new VirtualQsciLexerHTML();
}

QsciLexerHTML* QsciLexerHTML_new2(QObject* parent) {
    return new VirtualQsciLexerHTML(parent);
}

QMetaObject* QsciLexerHTML_MetaObject(const QsciLexerHTML* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerHTML_Metacast(QsciLexerHTML* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerHTML_Metacall(QsciLexerHTML* self, int param1, int param2, void** param3) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerHTML*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerHTML_OnMetacall(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Metacall_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerHTML_QBaseMetacall(QsciLexerHTML* self, int param1, int param2, void** param3) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Metacall_IsBase(true);
        return vqscilexerhtml->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerHTML*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerHTML_Tr(const char* s) {
    QString _ret = QsciLexerHTML::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerHTML_DefaultColor(const QsciLexerHTML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerHTML_DefaultFont(const QsciLexerHTML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerHTML_DefaultPaper(const QsciLexerHTML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerHTML_CaseSensitiveTags(const QsciLexerHTML* self) {
    return self->caseSensitiveTags();
}

void QsciLexerHTML_SetDjangoTemplates(QsciLexerHTML* self, bool enabled) {
    self->setDjangoTemplates(enabled);
}

bool QsciLexerHTML_DjangoTemplates(const QsciLexerHTML* self) {
    return self->djangoTemplates();
}

bool QsciLexerHTML_FoldCompact(const QsciLexerHTML* self) {
    return self->foldCompact();
}

bool QsciLexerHTML_FoldPreprocessor(const QsciLexerHTML* self) {
    return self->foldPreprocessor();
}

void QsciLexerHTML_SetFoldScriptComments(QsciLexerHTML* self, bool fold) {
    self->setFoldScriptComments(fold);
}

bool QsciLexerHTML_FoldScriptComments(const QsciLexerHTML* self) {
    return self->foldScriptComments();
}

void QsciLexerHTML_SetFoldScriptHeredocs(QsciLexerHTML* self, bool fold) {
    self->setFoldScriptHeredocs(fold);
}

bool QsciLexerHTML_FoldScriptHeredocs(const QsciLexerHTML* self) {
    return self->foldScriptHeredocs();
}

void QsciLexerHTML_SetMakoTemplates(QsciLexerHTML* self, bool enabled) {
    self->setMakoTemplates(enabled);
}

bool QsciLexerHTML_MakoTemplates(const QsciLexerHTML* self) {
    return self->makoTemplates();
}

libqt_string QsciLexerHTML_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerHTML::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerHTML_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerHTML::tr(s, c, static_cast<int>(n));
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
void QsciLexerHTML_SetFoldCompact(QsciLexerHTML* self, bool fold) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerHTML*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetFoldCompact(QsciLexerHTML* self, bool fold) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetFoldCompact_IsBase(true);
        vqscilexerhtml->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerHTML*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFoldCompact(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetFoldPreprocessor(QsciLexerHTML* self, bool fold) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerHTML*)self)->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetFoldPreprocessor(QsciLexerHTML* self, bool fold) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetFoldPreprocessor_IsBase(true);
        vqscilexerhtml->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerHTML*)self)->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFoldPreprocessor(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetCaseSensitiveTags(QsciLexerHTML* self, bool sens) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setCaseSensitiveTags(sens);
    } else {
        ((VirtualQsciLexerHTML*)self)->setCaseSensitiveTags(sens);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetCaseSensitiveTags(QsciLexerHTML* self, bool sens) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetCaseSensitiveTags_IsBase(true);
        vqscilexerhtml->setCaseSensitiveTags(sens);
    } else {
        ((VirtualQsciLexerHTML*)self)->setCaseSensitiveTags(sens);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetCaseSensitiveTags(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetCaseSensitiveTags_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetCaseSensitiveTags_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_Language(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return (const char*)vqscilexerhtml->language();
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseLanguage(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Language_IsBase(true);
        return (const char*)vqscilexerhtml->language();
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnLanguage(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Language_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_Lexer(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return (const char*)vqscilexerhtml->lexer();
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseLexer(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Lexer_IsBase(true);
        return (const char*)vqscilexerhtml->lexer();
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnLexer(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Lexer_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_LexerId(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->lexerId();
    } else {
        return ((VirtualQsciLexerHTML*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseLexerId(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_LexerId_IsBase(true);
        return vqscilexerhtml->lexerId();
    } else {
        return ((VirtualQsciLexerHTML*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnLexerId(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_LexerId_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_AutoCompletionFillups(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return (const char*)vqscilexerhtml->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseAutoCompletionFillups(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerhtml->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnAutoCompletionFillups(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerHTML_AutoCompletionWordSeparators(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        QList<QString> _ret = vqscilexerhtml->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerHTML*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerHTML_QBaseAutoCompletionWordSeparators(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerhtml->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerHTML*)self)->autoCompletionWordSeparators();
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
void QsciLexerHTML_OnAutoCompletionWordSeparators(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockEnd(const QsciLexerHTML* self, int* style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return (const char*)vqscilexerhtml->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseBlockEnd(const QsciLexerHTML* self, int* style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BlockEnd_IsBase(true);
        return (const char*)vqscilexerhtml->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockEnd(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_BlockLookback(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->blockLookback();
    } else {
        return ((VirtualQsciLexerHTML*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseBlockLookback(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BlockLookback_IsBase(true);
        return vqscilexerhtml->blockLookback();
    } else {
        return ((VirtualQsciLexerHTML*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockLookback(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockStart(const QsciLexerHTML* self, int* style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return (const char*)vqscilexerhtml->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseBlockStart(const QsciLexerHTML* self, int* style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BlockStart_IsBase(true);
        return (const char*)vqscilexerhtml->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockStart(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockStartKeyword(const QsciLexerHTML* self, int* style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return (const char*)vqscilexerhtml->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseBlockStartKeyword(const QsciLexerHTML* self, int* style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerhtml->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockStartKeyword(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_BraceStyle(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->braceStyle();
    } else {
        return ((VirtualQsciLexerHTML*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseBraceStyle(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BraceStyle_IsBase(true);
        return vqscilexerhtml->braceStyle();
    } else {
        return ((VirtualQsciLexerHTML*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBraceStyle(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_CaseSensitive(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->caseSensitive();
    } else {
        return ((VirtualQsciLexerHTML*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseCaseSensitive(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_CaseSensitive_IsBase(true);
        return vqscilexerhtml->caseSensitive();
    } else {
        return ((VirtualQsciLexerHTML*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnCaseSensitive(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHTML_Color(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return new QColor(vqscilexerhtml->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHTML*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHTML_QBaseColor(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Color_IsBase(true);
        return new QColor(vqscilexerhtml->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHTML*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnColor(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Color_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_EolFill(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerHTML*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseEolFill(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_EolFill_IsBase(true);
        return vqscilexerhtml->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerHTML*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEolFill(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_EolFill_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerHTML_Font(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return new QFont(vqscilexerhtml->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerHTML*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerHTML_QBaseFont(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Font_IsBase(true);
        return new QFont(vqscilexerhtml->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerHTML*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnFont(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Font_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_IndentationGuideView(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->indentationGuideView();
    } else {
        return ((VirtualQsciLexerHTML*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseIndentationGuideView(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_IndentationGuideView_IsBase(true);
        return vqscilexerhtml->indentationGuideView();
    } else {
        return ((VirtualQsciLexerHTML*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnIndentationGuideView(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_Keywords(const QsciLexerHTML* self, int set) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return (const char*)vqscilexerhtml->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseKeywords(const QsciLexerHTML* self, int set) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Keywords_IsBase(true);
        return (const char*)vqscilexerhtml->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnKeywords(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Keywords_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_DefaultStyle(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->defaultStyle();
    } else {
        return ((VirtualQsciLexerHTML*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseDefaultStyle(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultStyle_IsBase(true);
        return vqscilexerhtml->defaultStyle();
    } else {
        return ((VirtualQsciLexerHTML*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultStyle(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerHTML_Description(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        QString _ret = vqscilexerhtml->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerHTML*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerHTML_QBaseDescription(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Description_IsBase(true);
        QString _ret = vqscilexerhtml->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerHTML*)self)->description(static_cast<int>(style));
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
void QsciLexerHTML_OnDescription(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Description_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHTML_Paper(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return new QColor(vqscilexerhtml->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHTML*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHTML_QBasePaper(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Paper_IsBase(true);
        return new QColor(vqscilexerhtml->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHTML*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnPaper(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Paper_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHTML_DefaultColorWithStyle(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return new QColor(vqscilexerhtml->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHTML*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHTML_QBaseDefaultColorWithStyle(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerhtml->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHTML*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultColorWithStyle(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_DefaultEolFill(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerHTML*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseDefaultEolFill(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultEolFill_IsBase(true);
        return vqscilexerhtml->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerHTML*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultEolFill(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerHTML_DefaultFontWithStyle(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return new QFont(vqscilexerhtml->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerHTML*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerHTML_QBaseDefaultFontWithStyle(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerhtml->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerHTML*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultFontWithStyle(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHTML_DefaultPaperWithStyle(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return new QColor(vqscilexerhtml->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHTML*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHTML_QBaseDefaultPaperWithStyle(const QsciLexerHTML* self, int style) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerhtml->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerHTML*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultPaperWithStyle(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetEditor(QsciLexerHTML* self, QsciScintilla* editor) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setEditor(editor);
    } else {
        ((VirtualQsciLexerHTML*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetEditor(QsciLexerHTML* self, QsciScintilla* editor) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetEditor_IsBase(true);
        vqscilexerhtml->setEditor(editor);
    } else {
        ((VirtualQsciLexerHTML*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetEditor(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_RefreshProperties(QsciLexerHTML* self) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->refreshProperties();
    } else {
        ((VirtualQsciLexerHTML*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseRefreshProperties(QsciLexerHTML* self) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_RefreshProperties_IsBase(true);
        vqscilexerhtml->refreshProperties();
    } else {
        ((VirtualQsciLexerHTML*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnRefreshProperties(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_StyleBitsNeeded(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerHTML*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseStyleBitsNeeded(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_StyleBitsNeeded_IsBase(true);
        return vqscilexerhtml->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerHTML*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnStyleBitsNeeded(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_WordCharacters(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return (const char*)vqscilexerhtml->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseWordCharacters(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_WordCharacters_IsBase(true);
        return (const char*)vqscilexerhtml->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerHTML*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnWordCharacters(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetAutoIndentStyle(QsciLexerHTML* self, int autoindentstyle) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerHTML*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetAutoIndentStyle(QsciLexerHTML* self, int autoindentstyle) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetAutoIndentStyle_IsBase(true);
        vqscilexerhtml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerHTML*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetAutoIndentStyle(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetColor(QsciLexerHTML* self, const QColor* c, int style) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHTML*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetColor(QsciLexerHTML* self, const QColor* c, int style) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetColor_IsBase(true);
        vqscilexerhtml->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHTML*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetColor(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetColor_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetEolFill(QsciLexerHTML* self, bool eoffill, int style) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHTML*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetEolFill(QsciLexerHTML* self, bool eoffill, int style) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetEolFill_IsBase(true);
        vqscilexerhtml->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHTML*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetEolFill(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetFont(QsciLexerHTML* self, const QFont* f, int style) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHTML*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetFont(QsciLexerHTML* self, const QFont* f, int style) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetFont_IsBase(true);
        vqscilexerhtml->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHTML*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFont(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetFont_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetPaper(QsciLexerHTML* self, const QColor* c, int style) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHTML*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetPaper(QsciLexerHTML* self, const QColor* c, int style) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetPaper_IsBase(true);
        vqscilexerhtml->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerHTML*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetPaper(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_ReadProperties(QsciLexerHTML* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerHTML*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseReadProperties(QsciLexerHTML* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_ReadProperties_IsBase(true);
        return vqscilexerhtml->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerHTML*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnReadProperties(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_WriteProperties(const QsciLexerHTML* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerHTML*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseWriteProperties(const QsciLexerHTML* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_WriteProperties_IsBase(true);
        return vqscilexerhtml->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerHTML*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnWriteProperties(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_Event(QsciLexerHTML* self, QEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->event(event);
    } else {
        return ((VirtualQsciLexerHTML*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseEvent(QsciLexerHTML* self, QEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Event_IsBase(true);
        return vqscilexerhtml->event(event);
    } else {
        return ((VirtualQsciLexerHTML*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEvent(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Event_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_EventFilter(QsciLexerHTML* self, QObject* watched, QEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerHTML*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseEventFilter(QsciLexerHTML* self, QObject* watched, QEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_EventFilter_IsBase(true);
        return vqscilexerhtml->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerHTML*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEventFilter(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_TimerEvent(QsciLexerHTML* self, QTimerEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->timerEvent(event);
    } else {
        ((VirtualQsciLexerHTML*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseTimerEvent(QsciLexerHTML* self, QTimerEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_TimerEvent_IsBase(true);
        vqscilexerhtml->timerEvent(event);
    } else {
        ((VirtualQsciLexerHTML*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnTimerEvent(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_ChildEvent(QsciLexerHTML* self, QChildEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->childEvent(event);
    } else {
        ((VirtualQsciLexerHTML*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseChildEvent(QsciLexerHTML* self, QChildEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_ChildEvent_IsBase(true);
        vqscilexerhtml->childEvent(event);
    } else {
        ((VirtualQsciLexerHTML*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnChildEvent(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_CustomEvent(QsciLexerHTML* self, QEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->customEvent(event);
    } else {
        ((VirtualQsciLexerHTML*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseCustomEvent(QsciLexerHTML* self, QEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_CustomEvent_IsBase(true);
        vqscilexerhtml->customEvent(event);
    } else {
        ((VirtualQsciLexerHTML*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnCustomEvent(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_ConnectNotify(QsciLexerHTML* self, const QMetaMethod* signal) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerHTML*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseConnectNotify(QsciLexerHTML* self, const QMetaMethod* signal) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_ConnectNotify_IsBase(true);
        vqscilexerhtml->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerHTML*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnConnectNotify(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_DisconnectNotify(QsciLexerHTML* self, const QMetaMethod* signal) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerHTML*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseDisconnectNotify(QsciLexerHTML* self, const QMetaMethod* signal) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DisconnectNotify_IsBase(true);
        vqscilexerhtml->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerHTML*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDisconnectNotify(QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerHTML_TextAsBytes(const QsciLexerHTML* self, const libqt_string text) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        QByteArray _qb = vqscilexerhtml->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerHTML*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerHTML_QBaseTextAsBytes(const QsciLexerHTML* self, const libqt_string text) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerhtml->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerHTML*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnTextAsBytes(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerHTML_BytesAsText(const QsciLexerHTML* self, const char* bytes, int size) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        QString _ret = vqscilexerhtml->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerHTML*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerHTML_QBaseBytesAsText(const QsciLexerHTML* self, const char* bytes, int size) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BytesAsText_IsBase(true);
        QString _ret = vqscilexerhtml->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerHTML*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerHTML_OnBytesAsText(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerHTML_Sender(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->sender();
    } else {
        return ((VirtualQsciLexerHTML*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerHTML_QBaseSender(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Sender_IsBase(true);
        return vqscilexerhtml->sender();
    } else {
        return ((VirtualQsciLexerHTML*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSender(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Sender_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_SenderSignalIndex(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerHTML*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseSenderSignalIndex(const QsciLexerHTML* self) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SenderSignalIndex_IsBase(true);
        return vqscilexerhtml->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerHTML*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSenderSignalIndex(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_Receivers(const QsciLexerHTML* self, const char* signal) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->receivers(signal);
    } else {
        return ((VirtualQsciLexerHTML*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseReceivers(const QsciLexerHTML* self, const char* signal) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Receivers_IsBase(true);
        return vqscilexerhtml->receivers(signal);
    } else {
        return ((VirtualQsciLexerHTML*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnReceivers(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_Receivers_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_IsSignalConnected(const QsciLexerHTML* self, const QMetaMethod* signal) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        return vqscilexerhtml->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerHTML*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseIsSignalConnected(const QsciLexerHTML* self, const QMetaMethod* signal) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_IsSignalConnected_IsBase(true);
        return vqscilexerhtml->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerHTML*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnIsSignalConnected(const QsciLexerHTML* self, intptr_t slot) {
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml && vqscilexerhtml->isVirtualQsciLexerHTML) {
        vqscilexerhtml->setQsciLexerHTML_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerHTML_Delete(QsciLexerHTML* self) {
    delete self;
}
