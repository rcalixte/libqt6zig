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
#include <qscilexercpp.h>
#include "libqscilexercpp.h"
#include "libqscilexercpp.hxx"

QsciLexerCPP* QsciLexerCPP_new() {
    return new VirtualQsciLexerCPP();
}

QsciLexerCPP* QsciLexerCPP_new2(QObject* parent) {
    return new VirtualQsciLexerCPP(parent);
}

QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords) {
    return new VirtualQsciLexerCPP(parent, caseInsensitiveKeywords);
}

QMetaObject* QsciLexerCPP_MetaObject(const QsciLexerCPP* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCPP_Metacast(QsciLexerCPP* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCPP_Metacall(QsciLexerCPP* self, int param1, int param2, void** param3) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCPP*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCPP_OnMetacall(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCPP_QBaseMetacall(QsciLexerCPP* self, int param1, int param2, void** param3) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Metacall_IsBase(true);
        return vqscilexercpp->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerCPP*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCPP_Tr(const char* s) {
    QString _ret = QsciLexerCPP::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerCPP_DefaultColor(const QsciLexerCPP* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCPP_DefaultFont(const QsciLexerCPP* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCPP_DefaultPaper(const QsciLexerCPP* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerCPP_FoldAtElse(const QsciLexerCPP* self) {
    return self->foldAtElse();
}

bool QsciLexerCPP_FoldComments(const QsciLexerCPP* self) {
    return self->foldComments();
}

bool QsciLexerCPP_FoldCompact(const QsciLexerCPP* self) {
    return self->foldCompact();
}

bool QsciLexerCPP_FoldPreprocessor(const QsciLexerCPP* self) {
    return self->foldPreprocessor();
}

bool QsciLexerCPP_StylePreprocessor(const QsciLexerCPP* self) {
    return self->stylePreprocessor();
}

void QsciLexerCPP_SetDollarsAllowed(QsciLexerCPP* self, bool allowed) {
    self->setDollarsAllowed(allowed);
}

bool QsciLexerCPP_DollarsAllowed(const QsciLexerCPP* self) {
    return self->dollarsAllowed();
}

void QsciLexerCPP_SetHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightTripleQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightTripleQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightTripleQuotedStrings();
}

void QsciLexerCPP_SetHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightHashQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightHashQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightHashQuotedStrings();
}

void QsciLexerCPP_SetHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightBackQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightBackQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightBackQuotedStrings();
}

void QsciLexerCPP_SetHighlightEscapeSequences(QsciLexerCPP* self, bool enabled) {
    self->setHighlightEscapeSequences(enabled);
}

bool QsciLexerCPP_HighlightEscapeSequences(const QsciLexerCPP* self) {
    return self->highlightEscapeSequences();
}

void QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed) {
    self->setVerbatimStringEscapeSequencesAllowed(allowed);
}

bool QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self) {
    return self->verbatimStringEscapeSequencesAllowed();
}

libqt_string QsciLexerCPP_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCPP::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCPP_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCPP::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCPP_BlockEnd1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStart1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStartKeyword1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerCPP_SetFoldAtElse(QsciLexerCPP* self, bool fold) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerCPP*)self)->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFoldAtElse(QsciLexerCPP* self, bool fold) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFoldAtElse_IsBase(true);
        vqscilexercpp->setFoldAtElse(fold);
    } else {
        ((VirtualQsciLexerCPP*)self)->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldAtElse(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetFoldComments(QsciLexerCPP* self, bool fold) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerCPP*)self)->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFoldComments(QsciLexerCPP* self, bool fold) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFoldComments_IsBase(true);
        vqscilexercpp->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerCPP*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldComments(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetFoldCompact(QsciLexerCPP* self, bool fold) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerCPP*)self)->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFoldCompact(QsciLexerCPP* self, bool fold) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFoldCompact_IsBase(true);
        vqscilexercpp->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerCPP*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldCompact(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP* self, bool fold) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerCPP*)self)->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFoldPreprocessor(QsciLexerCPP* self, bool fold) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFoldPreprocessor_IsBase(true);
        vqscilexercpp->setFoldPreprocessor(fold);
    } else {
        ((VirtualQsciLexerCPP*)self)->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldPreprocessor(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP* self, bool style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerCPP*)self)->setStylePreprocessor(style);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetStylePreprocessor(QsciLexerCPP* self, bool style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetStylePreprocessor_IsBase(true);
        vqscilexercpp->setStylePreprocessor(style);
    } else {
        ((VirtualQsciLexerCPP*)self)->setStylePreprocessor(style);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetStylePreprocessor(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetStylePreprocessor_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetStylePreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_Language(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return (const char*)vqscilexercpp->language();
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseLanguage(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Language_IsBase(true);
        return (const char*)vqscilexercpp->language();
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnLanguage(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Language_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_Lexer(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return (const char*)vqscilexercpp->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseLexer(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Lexer_IsBase(true);
        return (const char*)vqscilexercpp->lexer();
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnLexer(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_LexerId(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->lexerId();
    } else {
        return ((VirtualQsciLexerCPP*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseLexerId(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_LexerId_IsBase(true);
        return vqscilexercpp->lexerId();
    } else {
        return ((VirtualQsciLexerCPP*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnLexerId(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_AutoCompletionFillups(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return (const char*)vqscilexercpp->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseAutoCompletionFillups(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercpp->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnAutoCompletionFillups(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        QList<QString> _ret = vqscilexercpp->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerCPP*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerCPP_QBaseAutoCompletionWordSeparators(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexercpp->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerCPP*)self)->autoCompletionWordSeparators();
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
void QsciLexerCPP_OnAutoCompletionWordSeparators(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_BlockEnd(const QsciLexerCPP* self, int* style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return (const char*)vqscilexercpp->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseBlockEnd(const QsciLexerCPP* self, int* style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BlockEnd_IsBase(true);
        return (const char*)vqscilexercpp->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockEnd(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_BlockLookback(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->blockLookback();
    } else {
        return ((VirtualQsciLexerCPP*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseBlockLookback(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BlockLookback_IsBase(true);
        return vqscilexercpp->blockLookback();
    } else {
        return ((VirtualQsciLexerCPP*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockLookback(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_BlockStart(const QsciLexerCPP* self, int* style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return (const char*)vqscilexercpp->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseBlockStart(const QsciLexerCPP* self, int* style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BlockStart_IsBase(true);
        return (const char*)vqscilexercpp->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockStart(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP* self, int* style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return (const char*)vqscilexercpp->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseBlockStartKeyword(const QsciLexerCPP* self, int* style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercpp->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockStartKeyword(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_BraceStyle(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->braceStyle();
    } else {
        return ((VirtualQsciLexerCPP*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseBraceStyle(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BraceStyle_IsBase(true);
        return vqscilexercpp->braceStyle();
    } else {
        return ((VirtualQsciLexerCPP*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBraceStyle(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_CaseSensitive(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->caseSensitive();
    } else {
        return ((VirtualQsciLexerCPP*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseCaseSensitive(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_CaseSensitive_IsBase(true);
        return vqscilexercpp->caseSensitive();
    } else {
        return ((VirtualQsciLexerCPP*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnCaseSensitive(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCPP_Color(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return new QColor(vqscilexercpp->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCPP*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCPP_QBaseColor(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Color_IsBase(true);
        return new QColor(vqscilexercpp->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCPP*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnColor(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Color_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_EolFill(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCPP*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseEolFill(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_EolFill_IsBase(true);
        return vqscilexercpp->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCPP*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEolFill(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCPP_Font(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return new QFont(vqscilexercpp->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCPP*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCPP_QBaseFont(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Font_IsBase(true);
        return new QFont(vqscilexercpp->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCPP*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnFont(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Font_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_IndentationGuideView(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCPP*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseIndentationGuideView(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_IndentationGuideView_IsBase(true);
        return vqscilexercpp->indentationGuideView();
    } else {
        return ((VirtualQsciLexerCPP*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnIndentationGuideView(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_Keywords(const QsciLexerCPP* self, int set) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return (const char*)vqscilexercpp->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseKeywords(const QsciLexerCPP* self, int set) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Keywords_IsBase(true);
        return (const char*)vqscilexercpp->keywords(static_cast<int>(set));
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnKeywords(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Keywords_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_DefaultStyle(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->defaultStyle();
    } else {
        return ((VirtualQsciLexerCPP*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseDefaultStyle(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultStyle_IsBase(true);
        return vqscilexercpp->defaultStyle();
    } else {
        return ((VirtualQsciLexerCPP*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultStyle(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCPP_Description(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        QString _ret = vqscilexercpp->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCPP*)self)->description(static_cast<int>(style));
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
libqt_string QsciLexerCPP_QBaseDescription(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Description_IsBase(true);
        QString _ret = vqscilexercpp->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCPP*)self)->description(static_cast<int>(style));
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
void QsciLexerCPP_OnDescription(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Description_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCPP_Paper(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return new QColor(vqscilexercpp->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCPP*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCPP_QBasePaper(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Paper_IsBase(true);
        return new QColor(vqscilexercpp->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCPP*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnPaper(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Paper_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCPP_DefaultColor2(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return new QColor(vqscilexercpp->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCPP*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCPP_QBaseDefaultColor2(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultColor2_IsBase(true);
        return new QColor(vqscilexercpp->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCPP*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultColor2(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_DefaultEolFill(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCPP*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseDefaultEolFill(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultEolFill_IsBase(true);
        return vqscilexercpp->defaultEolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerCPP*)self)->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultEolFill(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCPP_DefaultFont2(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return new QFont(vqscilexercpp->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCPP*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCPP_QBaseDefaultFont2(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultFont2_IsBase(true);
        return new QFont(vqscilexercpp->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerCPP*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultFont2(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCPP_DefaultPaper2(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return new QColor(vqscilexercpp->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCPP*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCPP_QBaseDefaultPaper2(const QsciLexerCPP* self, int style) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexercpp->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerCPP*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultPaper2(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetEditor(QsciLexerCPP* self, QsciScintilla* editor) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setEditor(editor);
    } else {
        ((VirtualQsciLexerCPP*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetEditor(QsciLexerCPP* self, QsciScintilla* editor) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetEditor_IsBase(true);
        vqscilexercpp->setEditor(editor);
    } else {
        ((VirtualQsciLexerCPP*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetEditor(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_RefreshProperties(QsciLexerCPP* self) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->refreshProperties();
    } else {
        ((VirtualQsciLexerCPP*)self)->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseRefreshProperties(QsciLexerCPP* self) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_RefreshProperties_IsBase(true);
        vqscilexercpp->refreshProperties();
    } else {
        ((VirtualQsciLexerCPP*)self)->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnRefreshProperties(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_StyleBitsNeeded(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCPP*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseStyleBitsNeeded(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_StyleBitsNeeded_IsBase(true);
        return vqscilexercpp->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerCPP*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnStyleBitsNeeded(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_WordCharacters(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return (const char*)vqscilexercpp->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseWordCharacters(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_WordCharacters_IsBase(true);
        return (const char*)vqscilexercpp->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerCPP*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnWordCharacters(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetAutoIndentStyle(QsciLexerCPP* self, int autoindentstyle) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCPP*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetAutoIndentStyle(QsciLexerCPP* self, int autoindentstyle) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetAutoIndentStyle_IsBase(true);
        vqscilexercpp->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerCPP*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetAutoIndentStyle(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetColor(QsciLexerCPP* self, const QColor* c, int style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCPP*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetColor(QsciLexerCPP* self, const QColor* c, int style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetColor_IsBase(true);
        vqscilexercpp->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCPP*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetColor(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetEolFill(QsciLexerCPP* self, bool eoffill, int style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCPP*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetEolFill(QsciLexerCPP* self, bool eoffill, int style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetEolFill_IsBase(true);
        vqscilexercpp->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCPP*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetEolFill(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetFont(QsciLexerCPP* self, const QFont* f, int style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCPP*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFont(QsciLexerCPP* self, const QFont* f, int style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFont_IsBase(true);
        vqscilexercpp->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCPP*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFont(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetPaper(QsciLexerCPP* self, const QColor* c, int style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCPP*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetPaper(QsciLexerCPP* self, const QColor* c, int style) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetPaper_IsBase(true);
        vqscilexercpp->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerCPP*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetPaper(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_ReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCPP*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_ReadProperties_IsBase(true);
        return vqscilexercpp->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCPP*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnReadProperties(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_WriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCPP*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseWriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_WriteProperties_IsBase(true);
        return vqscilexercpp->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerCPP*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnWriteProperties(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_Event(QsciLexerCPP* self, QEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->event(event);
    } else {
        return ((VirtualQsciLexerCPP*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseEvent(QsciLexerCPP* self, QEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Event_IsBase(true);
        return vqscilexercpp->event(event);
    } else {
        return ((VirtualQsciLexerCPP*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEvent(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Event_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_EventFilter(QsciLexerCPP* self, QObject* watched, QEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCPP*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseEventFilter(QsciLexerCPP* self, QObject* watched, QEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_EventFilter_IsBase(true);
        return vqscilexercpp->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerCPP*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEventFilter(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_TimerEvent(QsciLexerCPP* self, QTimerEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->timerEvent(event);
    } else {
        ((VirtualQsciLexerCPP*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseTimerEvent(QsciLexerCPP* self, QTimerEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_TimerEvent_IsBase(true);
        vqscilexercpp->timerEvent(event);
    } else {
        ((VirtualQsciLexerCPP*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnTimerEvent(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_ChildEvent(QsciLexerCPP* self, QChildEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->childEvent(event);
    } else {
        ((VirtualQsciLexerCPP*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseChildEvent(QsciLexerCPP* self, QChildEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_ChildEvent_IsBase(true);
        vqscilexercpp->childEvent(event);
    } else {
        ((VirtualQsciLexerCPP*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnChildEvent(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_CustomEvent(QsciLexerCPP* self, QEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->customEvent(event);
    } else {
        ((VirtualQsciLexerCPP*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseCustomEvent(QsciLexerCPP* self, QEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_CustomEvent_IsBase(true);
        vqscilexercpp->customEvent(event);
    } else {
        ((VirtualQsciLexerCPP*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnCustomEvent(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_ConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCPP*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_ConnectNotify_IsBase(true);
        vqscilexercpp->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerCPP*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnConnectNotify(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_DisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCPP*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseDisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DisconnectNotify_IsBase(true);
        vqscilexercpp->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerCPP*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDisconnectNotify(QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCPP_TextAsBytes(const QsciLexerCPP* self, const libqt_string text) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        QByteArray _qb = vqscilexercpp->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCPP*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerCPP_QBaseTextAsBytes(const QsciLexerCPP* self, const libqt_string text) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexercpp->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerCPP*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnTextAsBytes(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCPP_BytesAsText(const QsciLexerCPP* self, const char* bytes, int size) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        QString _ret = vqscilexercpp->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCPP*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerCPP_QBaseBytesAsText(const QsciLexerCPP* self, const char* bytes, int size) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BytesAsText_IsBase(true);
        QString _ret = vqscilexercpp->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerCPP*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerCPP_OnBytesAsText(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCPP_Sender(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->sender();
    } else {
        return ((VirtualQsciLexerCPP*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCPP_QBaseSender(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Sender_IsBase(true);
        return vqscilexercpp->sender();
    } else {
        return ((VirtualQsciLexerCPP*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSender(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Sender_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_SenderSignalIndex(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCPP*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseSenderSignalIndex(const QsciLexerCPP* self) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SenderSignalIndex_IsBase(true);
        return vqscilexercpp->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerCPP*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSenderSignalIndex(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_Receivers(const QsciLexerCPP* self, const char* signal) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->receivers(signal);
    } else {
        return ((VirtualQsciLexerCPP*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseReceivers(const QsciLexerCPP* self, const char* signal) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Receivers_IsBase(true);
        return vqscilexercpp->receivers(signal);
    } else {
        return ((VirtualQsciLexerCPP*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnReceivers(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_IsSignalConnected(const QsciLexerCPP* self, const QMetaMethod* signal) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        return vqscilexercpp->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCPP*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseIsSignalConnected(const QsciLexerCPP* self, const QMetaMethod* signal) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_IsSignalConnected_IsBase(true);
        return vqscilexercpp->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerCPP*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnIsSignalConnected(const QsciLexerCPP* self, intptr_t slot) {
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp && vqscilexercpp->isVirtualQsciLexerCPP) {
        vqscilexercpp->setQsciLexerCPP_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCPP_Delete(QsciLexerCPP* self) {
    delete self;
}
