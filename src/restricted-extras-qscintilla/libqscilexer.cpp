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
#include <qscilexer.h>
#include "libqscilexer.h"
#include "libqscilexer.hxx"

QsciLexer* QsciLexer_new() {
    return new VirtualQsciLexer();
}

QsciLexer* QsciLexer_new2(QObject* parent) {
    return new VirtualQsciLexer(parent);
}

QMetaObject* QsciLexer_MetaObject(const QsciLexer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexer_Metacast(QsciLexer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexer_Metacall(QsciLexer* self, int param1, int param2, void** param3) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexer_OnMetacall(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Metacall_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexer_QBaseMetacall(QsciLexer* self, int param1, int param2, void** param3) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Metacall_IsBase(true);
        return vqscilexer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexer_Tr(const char* s) {
    QString _ret = QsciLexer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QsciAbstractAPIs* QsciLexer_Apis(const QsciLexer* self) {
    return self->apis();
}

int QsciLexer_AutoIndentStyle(QsciLexer* self) {
    return self->autoIndentStyle();
}

QColor* QsciLexer_DefaultColor(const QsciLexer* self) {
    return new QColor(self->defaultColor());
}

QFont* QsciLexer_DefaultFont(const QsciLexer* self) {
    return new QFont(self->defaultFont());
}

QColor* QsciLexer_DefaultPaper(const QsciLexer* self) {
    return new QColor(self->defaultPaper());
}

QsciScintilla* QsciLexer_Editor(const QsciLexer* self) {
    return self->editor();
}

void QsciLexer_SetAPIs(QsciLexer* self, QsciAbstractAPIs* apis) {
    self->setAPIs(apis);
}

void QsciLexer_SetDefaultColor(QsciLexer* self, const QColor* c) {
    self->setDefaultColor(*c);
}

void QsciLexer_SetDefaultFont(QsciLexer* self, const QFont* f) {
    self->setDefaultFont(*f);
}

void QsciLexer_SetDefaultPaper(QsciLexer* self, const QColor* c) {
    self->setDefaultPaper(*c);
}

bool QsciLexer_ReadSettings(QsciLexer* self, QSettings* qs) {
    return self->readSettings(*qs);
}

bool QsciLexer_WriteSettings(const QsciLexer* self, QSettings* qs) {
    return self->writeSettings(*qs);
}

void QsciLexer_ColorChanged(QsciLexer* self, const QColor* c, int style) {
    self->colorChanged(*c, static_cast<int>(style));
}

void QsciLexer_Connect_ColorChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, QColor*, int) = reinterpret_cast<void (*)(QsciLexer*, QColor*, int)>(slot);
    QsciLexer::connect(self, &QsciLexer::colorChanged, [self, slotFunc](const QColor& c, int style) {
        const QColor& c_ret = c;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&c_ret);
        int sigval2 = style;
        slotFunc(self, sigval1, sigval2);
    });
}

void QsciLexer_EolFillChanged(QsciLexer* self, bool eolfilled, int style) {
    self->eolFillChanged(eolfilled, static_cast<int>(style));
}

void QsciLexer_Connect_EolFillChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, bool, int) = reinterpret_cast<void (*)(QsciLexer*, bool, int)>(slot);
    QsciLexer::connect(self, &QsciLexer::eolFillChanged, [self, slotFunc](bool eolfilled, int style) {
        bool sigval1 = eolfilled;
        int sigval2 = style;
        slotFunc(self, sigval1, sigval2);
    });
}

void QsciLexer_FontChanged(QsciLexer* self, const QFont* f, int style) {
    self->fontChanged(*f, static_cast<int>(style));
}

void QsciLexer_Connect_FontChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, QFont*, int) = reinterpret_cast<void (*)(QsciLexer*, QFont*, int)>(slot);
    QsciLexer::connect(self, &QsciLexer::fontChanged, [self, slotFunc](const QFont& f, int style) {
        const QFont& f_ret = f;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&f_ret);
        int sigval2 = style;
        slotFunc(self, sigval1, sigval2);
    });
}

void QsciLexer_PaperChanged(QsciLexer* self, const QColor* c, int style) {
    self->paperChanged(*c, static_cast<int>(style));
}

void QsciLexer_Connect_PaperChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, QColor*, int) = reinterpret_cast<void (*)(QsciLexer*, QColor*, int)>(slot);
    QsciLexer::connect(self, &QsciLexer::paperChanged, [self, slotFunc](const QColor& c, int style) {
        const QColor& c_ret = c;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&c_ret);
        int sigval2 = style;
        slotFunc(self, sigval1, sigval2);
    });
}

void QsciLexer_PropertyChanged(QsciLexer* self, const char* prop, const char* val) {
    self->propertyChanged(prop, val);
}

void QsciLexer_Connect_PropertyChanged(QsciLexer* self, intptr_t slot) {
    void (*slotFunc)(QsciLexer*, const char*, const char*) = reinterpret_cast<void (*)(QsciLexer*, const char*, const char*)>(slot);
    QsciLexer::connect(self, &QsciLexer::propertyChanged, [self, slotFunc](const char* prop, const char* val) {
        const char* sigval1 = (const char*)prop;
        const char* sigval2 = (const char*)val;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QsciLexer_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QsciLexer_ReadSettings2(QsciLexer* self, QSettings* qs, const char* prefix) {
    return self->readSettings(*qs, prefix);
}

bool QsciLexer_WriteSettings2(const QsciLexer* self, QSettings* qs, const char* prefix) {
    return self->writeSettings(*qs, prefix);
}

// Derived class handler implementation
const char* QsciLexer_Language(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return (const char*)vqscilexer->language();
    } else {
        return (const char*)((VirtualQsciLexer*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexer_QBaseLanguage(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Language_IsBase(true);
        return (const char*)vqscilexer->language();
    } else {
        return (const char*)((VirtualQsciLexer*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnLanguage(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Language_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexer_Lexer(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return (const char*)vqscilexer->lexer();
    } else {
        return (const char*)((VirtualQsciLexer*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexer_QBaseLexer(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Lexer_IsBase(true);
        return (const char*)vqscilexer->lexer();
    } else {
        return (const char*)((VirtualQsciLexer*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnLexer(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Lexer_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexer_LexerId(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->lexerId();
    } else {
        return ((VirtualQsciLexer*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexer_QBaseLexerId(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_LexerId_IsBase(true);
        return vqscilexer->lexerId();
    } else {
        return ((VirtualQsciLexer*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnLexerId(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_LexerId_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexer_AutoCompletionFillups(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return (const char*)vqscilexer->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexer*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexer_QBaseAutoCompletionFillups(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexer->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexer*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnAutoCompletionFillups(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexer_AutoCompletionWordSeparators(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        QList<QString> _ret = vqscilexer->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexer*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexer_QBaseAutoCompletionWordSeparators(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexer->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexer*)self)->autoCompletionWordSeparators();
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
void QsciLexer_OnAutoCompletionWordSeparators(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexer_BlockEnd(const QsciLexer* self, int* style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return (const char*)vqscilexer->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexer*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexer_QBaseBlockEnd(const QsciLexer* self, int* style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BlockEnd_IsBase(true);
        return (const char*)vqscilexer->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexer*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBlockEnd(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexer_BlockLookback(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->blockLookback();
    } else {
        return ((VirtualQsciLexer*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexer_QBaseBlockLookback(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BlockLookback_IsBase(true);
        return vqscilexer->blockLookback();
    } else {
        return ((VirtualQsciLexer*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBlockLookback(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexer_BlockStart(const QsciLexer* self, int* style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return (const char*)vqscilexer->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexer*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexer_QBaseBlockStart(const QsciLexer* self, int* style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BlockStart_IsBase(true);
        return (const char*)vqscilexer->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexer*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBlockStart(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BlockStart_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexer_BlockStartKeyword(const QsciLexer* self, int* style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return (const char*)vqscilexer->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexer*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexer_QBaseBlockStartKeyword(const QsciLexer* self, int* style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexer->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexer*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBlockStartKeyword(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexer_BraceStyle(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->braceStyle();
    } else {
        return ((VirtualQsciLexer*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexer_QBaseBraceStyle(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BraceStyle_IsBase(true);
        return vqscilexer->braceStyle();
    } else {
        return ((VirtualQsciLexer*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnBraceStyle(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexer_CaseSensitive(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->caseSensitive();
    } else {
        return ((VirtualQsciLexer*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexer_QBaseCaseSensitive(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_CaseSensitive_IsBase(true);
        return vqscilexer->caseSensitive();
    } else {
        return ((VirtualQsciLexer*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnCaseSensitive(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexer_Color(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return new QColor(vqscilexer->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexer*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexer_QBaseColor(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Color_IsBase(true);
        return new QColor(vqscilexer->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexer*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnColor(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Color_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexer_EolFill(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexer*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexer_QBaseEolFill(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_EolFill_IsBase(true);
        return vqscilexer->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexer*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnEolFill(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_EolFill_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexer_Font(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return new QFont(vqscilexer->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexer*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexer_QBaseFont(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Font_IsBase(true);
        return new QFont(vqscilexer->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexer*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnFont(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Font_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexer_IndentationGuideView(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->indentationGuideView();
    } else {
        return ((VirtualQsciLexer*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexer_QBaseIndentationGuideView(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_IndentationGuideView_IsBase(true);
        return vqscilexer->indentationGuideView();
    } else {
        return ((VirtualQsciLexer*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnIndentationGuideView(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexer_Keywords(const QsciLexer* self, int set) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return (const char*)vqscilexer->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexer*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexer_QBaseKeywords(const QsciLexer* self, int set) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Keywords_IsBase(true);
        return (const char*)vqscilexer->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexer*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnKeywords(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Keywords_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexer_DefaultStyle(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->defaultStyle();
    } else {
        return ((VirtualQsciLexer*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexer_QBaseDefaultStyle(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultStyle_IsBase(true);
        return vqscilexer->defaultStyle();
    } else {
        return ((VirtualQsciLexer*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultStyle(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexer_Description(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        QString _ret = vqscilexer->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexer*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexer_QBaseDescription(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Description_IsBase(true);
        QString _ret = vqscilexer->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexer*)self)->description(static_cast<int>(style));
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
void QsciLexer_OnDescription(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Description_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexer_Paper(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return new QColor(vqscilexer->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexer*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexer_QBasePaper(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Paper_IsBase(true);
        return new QColor(vqscilexer->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexer*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnPaper(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Paper_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexer_DefaultColor2(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return new QColor(vqscilexer->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexer*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexer_QBaseDefaultColor2(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultColor2_IsBase(true);
        return new QColor(vqscilexer->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexer*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultColor2(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexer_DefaultEolFill(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexer*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexer_QBaseDefaultEolFill(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultEolFill_IsBase(true);
        return vqscilexer->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexer*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultEolFill(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexer_DefaultFont2(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return new QFont(vqscilexer->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexer*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexer_QBaseDefaultFont2(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultFont2_IsBase(true);
        return new QFont(vqscilexer->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexer*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultFont2(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexer_DefaultPaper2(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return new QColor(vqscilexer->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexer*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexer_QBaseDefaultPaper2(const QsciLexer* self, int style) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexer->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexer*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDefaultPaper2(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_SetEditor(QsciLexer* self, QsciScintilla* editor) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setEditor(editor);
    } else {
        ((VirtualQsciLexer*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexer_QBaseSetEditor(QsciLexer* self, QsciScintilla* editor) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetEditor_IsBase(true);
        vqscilexer->setEditor(editor);
    } else {
        ((VirtualQsciLexer*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetEditor(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetEditor_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_RefreshProperties(QsciLexer* self) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->refreshProperties();
    } else {
        ((VirtualQsciLexer*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexer_QBaseRefreshProperties(QsciLexer* self) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_RefreshProperties_IsBase(true);
        vqscilexer->refreshProperties();
    } else {
        ((VirtualQsciLexer*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnRefreshProperties(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexer_StyleBitsNeeded(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexer*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexer_QBaseStyleBitsNeeded(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_StyleBitsNeeded_IsBase(true);
        return vqscilexer->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexer*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnStyleBitsNeeded(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexer_WordCharacters(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return (const char*)vqscilexer->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexer*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexer_QBaseWordCharacters(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_WordCharacters_IsBase(true);
        return (const char*)vqscilexer->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexer*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnWordCharacters(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_SetAutoIndentStyle(QsciLexer* self, int autoindentstyle) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexer*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexer_QBaseSetAutoIndentStyle(QsciLexer* self, int autoindentstyle) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetAutoIndentStyle_IsBase(true);
        vqscilexer->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexer*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetAutoIndentStyle(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_SetColor(QsciLexer* self, const QColor* c, int style) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexer*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexer_QBaseSetColor(QsciLexer* self, const QColor* c, int style) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetColor_IsBase(true);
        vqscilexer->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexer*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetColor(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetColor_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_SetEolFill(QsciLexer* self, bool eoffill, int style) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexer*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexer_QBaseSetEolFill(QsciLexer* self, bool eoffill, int style) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetEolFill_IsBase(true);
        vqscilexer->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexer*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetEolFill(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_SetFont(QsciLexer* self, const QFont* f, int style) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexer*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexer_QBaseSetFont(QsciLexer* self, const QFont* f, int style) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetFont_IsBase(true);
        vqscilexer->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexer*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetFont(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetFont_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_SetPaper(QsciLexer* self, const QColor* c, int style) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexer*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexer_QBaseSetPaper(QsciLexer* self, const QColor* c, int style) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetPaper_IsBase(true);
        vqscilexer->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexer*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSetPaper(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SetPaper_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexer_ReadProperties(QsciLexer* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexer*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexer_QBaseReadProperties(QsciLexer* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_ReadProperties_IsBase(true);
        return vqscilexer->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexer*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnReadProperties(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexer_WriteProperties(const QsciLexer* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexer*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexer_QBaseWriteProperties(const QsciLexer* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_WriteProperties_IsBase(true);
        return vqscilexer->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexer*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnWriteProperties(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexer_Event(QsciLexer* self, QEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->event(event);
    } else {
        return ((VirtualQsciLexer*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexer_QBaseEvent(QsciLexer* self, QEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Event_IsBase(true);
        return vqscilexer->event(event);
    } else {
        return ((VirtualQsciLexer*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnEvent(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Event_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexer_EventFilter(QsciLexer* self, QObject* watched, QEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexer*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexer_QBaseEventFilter(QsciLexer* self, QObject* watched, QEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_EventFilter_IsBase(true);
        return vqscilexer->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexer*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnEventFilter(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_EventFilter_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_TimerEvent(QsciLexer* self, QTimerEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->timerEvent(event);
    } else {
        ((VirtualQsciLexer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexer_QBaseTimerEvent(QsciLexer* self, QTimerEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_TimerEvent_IsBase(true);
        vqscilexer->timerEvent(event);
    } else {
        ((VirtualQsciLexer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnTimerEvent(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_ChildEvent(QsciLexer* self, QChildEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->childEvent(event);
    } else {
        ((VirtualQsciLexer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexer_QBaseChildEvent(QsciLexer* self, QChildEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_ChildEvent_IsBase(true);
        vqscilexer->childEvent(event);
    } else {
        ((VirtualQsciLexer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnChildEvent(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_CustomEvent(QsciLexer* self, QEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->customEvent(event);
    } else {
        ((VirtualQsciLexer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexer_QBaseCustomEvent(QsciLexer* self, QEvent* event) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_CustomEvent_IsBase(true);
        vqscilexer->customEvent(event);
    } else {
        ((VirtualQsciLexer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnCustomEvent(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_ConnectNotify(QsciLexer* self, const QMetaMethod* signal) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->connectNotify(*signal);
    } else {
        ((VirtualQsciLexer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexer_QBaseConnectNotify(QsciLexer* self, const QMetaMethod* signal) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_ConnectNotify_IsBase(true);
        vqscilexer->connectNotify(*signal);
    } else {
        ((VirtualQsciLexer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnConnectNotify(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexer_DisconnectNotify(QsciLexer* self, const QMetaMethod* signal) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexer_QBaseDisconnectNotify(QsciLexer* self, const QMetaMethod* signal) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DisconnectNotify_IsBase(true);
        vqscilexer->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnDisconnectNotify(QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = dynamic_cast<VirtualQsciLexer*>(self);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexer_TextAsBytes(const QsciLexer* self, const libqt_string text) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        QByteArray _qb = vqscilexer->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexer*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexer_QBaseTextAsBytes(const QsciLexer* self, const libqt_string text) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexer->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexer*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnTextAsBytes(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexer_BytesAsText(const QsciLexer* self, const char* bytes, int size) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        QString _ret = vqscilexer->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexer*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexer_QBaseBytesAsText(const QsciLexer* self, const char* bytes, int size) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BytesAsText_IsBase(true);
        QString _ret = vqscilexer->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexer*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexer_OnBytesAsText(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexer_Sender(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->sender();
    } else {
        return ((VirtualQsciLexer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexer_QBaseSender(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Sender_IsBase(true);
        return vqscilexer->sender();
    } else {
        return ((VirtualQsciLexer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSender(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Sender_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexer_SenderSignalIndex(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->senderSignalIndex();
    } else {
        return ((VirtualQsciLexer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexer_QBaseSenderSignalIndex(const QsciLexer* self) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SenderSignalIndex_IsBase(true);
        return vqscilexer->senderSignalIndex();
    } else {
        return ((VirtualQsciLexer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnSenderSignalIndex(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexer_Receivers(const QsciLexer* self, const char* signal) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->receivers(signal);
    } else {
        return ((VirtualQsciLexer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexer_QBaseReceivers(const QsciLexer* self, const char* signal) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Receivers_IsBase(true);
        return vqscilexer->receivers(signal);
    } else {
        return ((VirtualQsciLexer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnReceivers(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_Receivers_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexer_IsSignalConnected(const QsciLexer* self, const QMetaMethod* signal) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        return vqscilexer->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexer_QBaseIsSignalConnected(const QsciLexer* self, const QMetaMethod* signal) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_IsSignalConnected_IsBase(true);
        return vqscilexer->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexer_OnIsSignalConnected(const QsciLexer* self, intptr_t slot) {
    auto* vqscilexer = const_cast<VirtualQsciLexer*>(dynamic_cast<const VirtualQsciLexer*>(self));
    if (vqscilexer && vqscilexer->isVirtualQsciLexer) {
        vqscilexer->setQsciLexer_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexer::QsciLexer_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexer_Delete(QsciLexer* self) {
    delete self;
}
