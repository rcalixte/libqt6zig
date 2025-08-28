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
#include <qscilexerasm.h>
#include "libqscilexerasm.h"
#include "libqscilexerasm.hxx"

QsciLexerAsm* QsciLexerAsm_new() {
    return new VirtualQsciLexerAsm();
}

QsciLexerAsm* QsciLexerAsm_new2(QObject* parent) {
    return new VirtualQsciLexerAsm(parent);
}

QMetaObject* QsciLexerAsm_MetaObject(const QsciLexerAsm* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerAsm_Metacast(QsciLexerAsm* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerAsm_Metacall(QsciLexerAsm* self, int param1, int param2, void** param3) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerAsm*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerAsm_Tr(const char* s) {
    QString _ret = QsciLexerAsm::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerAsm_DefaultColor(const QsciLexerAsm* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerAsm_DefaultEolFill(const QsciLexerAsm* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerAsm_DefaultFont(const QsciLexerAsm* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerAsm_DefaultPaper(const QsciLexerAsm* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerAsm_Keywords(const QsciLexerAsm* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerAsm_Description(const QsciLexerAsm* self, int style) {
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

void QsciLexerAsm_RefreshProperties(QsciLexerAsm* self) {
    self->refreshProperties();
}

bool QsciLexerAsm_FoldComments(const QsciLexerAsm* self) {
    return self->foldComments();
}

bool QsciLexerAsm_FoldCompact(const QsciLexerAsm* self) {
    return self->foldCompact();
}

QChar* QsciLexerAsm_CommentDelimiter(const QsciLexerAsm* self) {
    return new QChar(self->commentDelimiter());
}

bool QsciLexerAsm_FoldSyntaxBased(const QsciLexerAsm* self) {
    return self->foldSyntaxBased();
}

void QsciLexerAsm_SetFoldComments(QsciLexerAsm* self, bool fold) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        self->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerAsm*)self)->setFoldComments(fold);
    }
}

void QsciLexerAsm_SetFoldCompact(QsciLexerAsm* self, bool fold) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        self->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerAsm*)self)->setFoldCompact(fold);
    }
}

void QsciLexerAsm_SetCommentDelimiter(QsciLexerAsm* self, QChar* delimeter) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        self->setCommentDelimiter(*delimeter);
    } else {
        ((VirtualQsciLexerAsm*)self)->setCommentDelimiter(*delimeter);
    }
}

void QsciLexerAsm_SetFoldSyntaxBased(QsciLexerAsm* self, bool syntax_based) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        self->setFoldSyntaxBased(syntax_based);
    } else {
        ((VirtualQsciLexerAsm*)self)->setFoldSyntaxBased(syntax_based);
    }
}

libqt_string QsciLexerAsm_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerAsm::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerAsm_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerAsm::tr(s, c, static_cast<int>(n));
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
int QsciLexerAsm_QBaseMetacall(QsciLexerAsm* self, int param1, int param2, void** param3) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Metacall_IsBase(true);
        return vqscilexerasm->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciLexerAsm*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnMetacall(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Metacall_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetFoldComments(QsciLexerAsm* self, bool fold) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetFoldComments_IsBase(true);
        vqscilexerasm->setFoldComments(fold);
    } else {
        ((VirtualQsciLexerAsm*)self)->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetFoldComments(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetFoldComments_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetFoldCompact(QsciLexerAsm* self, bool fold) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetFoldCompact_IsBase(true);
        vqscilexerasm->setFoldCompact(fold);
    } else {
        ((VirtualQsciLexerAsm*)self)->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetFoldCompact(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetFoldCompact_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetCommentDelimiter(QsciLexerAsm* self, QChar* delimeter) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetCommentDelimiter_IsBase(true);
        vqscilexerasm->setCommentDelimiter(*delimeter);
    } else {
        ((VirtualQsciLexerAsm*)self)->setCommentDelimiter(*delimeter);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetCommentDelimiter(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetCommentDelimiter_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetCommentDelimiter_Callback>(slot));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetFoldSyntaxBased(QsciLexerAsm* self, bool syntax_based) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetFoldSyntaxBased_IsBase(true);
        vqscilexerasm->setFoldSyntaxBased(syntax_based);
    } else {
        ((VirtualQsciLexerAsm*)self)->setFoldSyntaxBased(syntax_based);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetFoldSyntaxBased(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetFoldSyntaxBased_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetFoldSyntaxBased_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAsm_Language(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return (const char*)vqscilexerasm->language();
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->language();
    }
}

// Base class handler implementation
const char* QsciLexerAsm_QBaseLanguage(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Language_IsBase(true);
        return (const char*)vqscilexerasm->language();
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnLanguage(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Language_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAsm_Lexer(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return (const char*)vqscilexerasm->lexer();
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerAsm_QBaseLexer(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Lexer_IsBase(true);
        return (const char*)vqscilexerasm->lexer();
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnLexer(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Lexer_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAsm_LexerId(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->lexerId();
    } else {
        return ((VirtualQsciLexerAsm*)self)->lexerId();
    }
}

// Base class handler implementation
int QsciLexerAsm_QBaseLexerId(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_LexerId_IsBase(true);
        return vqscilexerasm->lexerId();
    } else {
        return ((VirtualQsciLexerAsm*)self)->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnLexerId(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_LexerId_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAsm_AutoCompletionFillups(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return (const char*)vqscilexerasm->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerAsm_QBaseAutoCompletionFillups(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerasm->autoCompletionFillups();
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnAutoCompletionFillups(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerAsm_AutoCompletionWordSeparators(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        QList<QString> _ret = vqscilexerasm->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerAsm*)self)->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerAsm_QBaseAutoCompletionWordSeparators(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_AutoCompletionWordSeparators_IsBase(true);
        QList<QString> _ret = vqscilexerasm->autoCompletionWordSeparators();
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
        QList<QString> _ret = ((VirtualQsciLexerAsm*)self)->autoCompletionWordSeparators();
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
void QsciLexerAsm_OnAutoCompletionWordSeparators(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAsm_BlockEnd(const QsciLexerAsm* self, int* style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return (const char*)vqscilexerasm->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerAsm_QBaseBlockEnd(const QsciLexerAsm* self, int* style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BlockEnd_IsBase(true);
        return (const char*)vqscilexerasm->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBlockEnd(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAsm_BlockLookback(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->blockLookback();
    } else {
        return ((VirtualQsciLexerAsm*)self)->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerAsm_QBaseBlockLookback(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BlockLookback_IsBase(true);
        return vqscilexerasm->blockLookback();
    } else {
        return ((VirtualQsciLexerAsm*)self)->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBlockLookback(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAsm_BlockStart(const QsciLexerAsm* self, int* style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return (const char*)vqscilexerasm->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerAsm_QBaseBlockStart(const QsciLexerAsm* self, int* style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BlockStart_IsBase(true);
        return (const char*)vqscilexerasm->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBlockStart(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAsm_BlockStartKeyword(const QsciLexerAsm* self, int* style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return (const char*)vqscilexerasm->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerAsm_QBaseBlockStartKeyword(const QsciLexerAsm* self, int* style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerasm->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBlockStartKeyword(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAsm_BraceStyle(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->braceStyle();
    } else {
        return ((VirtualQsciLexerAsm*)self)->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerAsm_QBaseBraceStyle(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BraceStyle_IsBase(true);
        return vqscilexerasm->braceStyle();
    } else {
        return ((VirtualQsciLexerAsm*)self)->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnBraceStyle(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAsm_CaseSensitive(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->caseSensitive();
    } else {
        return ((VirtualQsciLexerAsm*)self)->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerAsm_QBaseCaseSensitive(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_CaseSensitive_IsBase(true);
        return vqscilexerasm->caseSensitive();
    } else {
        return ((VirtualQsciLexerAsm*)self)->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnCaseSensitive(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerAsm_Color(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return new QColor(vqscilexerasm->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAsm*)self)->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerAsm_QBaseColor(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Color_IsBase(true);
        return new QColor(vqscilexerasm->color(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAsm*)self)->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnColor(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Color_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAsm_EolFill(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerAsm*)self)->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerAsm_QBaseEolFill(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_EolFill_IsBase(true);
        return vqscilexerasm->eolFill(static_cast<int>(style));
    } else {
        return ((VirtualQsciLexerAsm*)self)->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnEolFill(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_EolFill_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerAsm_Font(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return new QFont(vqscilexerasm->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerAsm*)self)->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerAsm_QBaseFont(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Font_IsBase(true);
        return new QFont(vqscilexerasm->font(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerAsm*)self)->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnFont(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Font_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAsm_IndentationGuideView(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->indentationGuideView();
    } else {
        return ((VirtualQsciLexerAsm*)self)->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerAsm_QBaseIndentationGuideView(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_IndentationGuideView_IsBase(true);
        return vqscilexerasm->indentationGuideView();
    } else {
        return ((VirtualQsciLexerAsm*)self)->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnIndentationGuideView(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAsm_DefaultStyle(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->defaultStyle();
    } else {
        return ((VirtualQsciLexerAsm*)self)->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerAsm_QBaseDefaultStyle(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DefaultStyle_IsBase(true);
        return vqscilexerasm->defaultStyle();
    } else {
        return ((VirtualQsciLexerAsm*)self)->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDefaultStyle(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerAsm_Paper(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return new QColor(vqscilexerasm->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAsm*)self)->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerAsm_QBasePaper(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Paper_IsBase(true);
        return new QColor(vqscilexerasm->paper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAsm*)self)->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnPaper(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Paper_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerAsm_DefaultColor2(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return new QColor(vqscilexerasm->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAsm*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerAsm_QBaseDefaultColor2(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DefaultColor2_IsBase(true);
        return new QColor(vqscilexerasm->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAsm*)self)->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDefaultColor2(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DefaultColor2_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DefaultColor2_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerAsm_DefaultFont2(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return new QFont(vqscilexerasm->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerAsm*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerAsm_QBaseDefaultFont2(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DefaultFont2_IsBase(true);
        return new QFont(vqscilexerasm->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(((VirtualQsciLexerAsm*)self)->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDefaultFont2(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DefaultFont2_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DefaultFont2_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerAsm_DefaultPaper2(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return new QColor(vqscilexerasm->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAsm*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerAsm_QBaseDefaultPaper2(const QsciLexerAsm* self, int style) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DefaultPaper2_IsBase(true);
        return new QColor(vqscilexerasm->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(((VirtualQsciLexerAsm*)self)->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDefaultPaper2(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DefaultPaper2_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DefaultPaper2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_SetEditor(QsciLexerAsm* self, QsciScintilla* editor) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setEditor(editor);
    } else {
        ((VirtualQsciLexerAsm*)self)->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetEditor(QsciLexerAsm* self, QsciScintilla* editor) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetEditor_IsBase(true);
        vqscilexerasm->setEditor(editor);
    } else {
        ((VirtualQsciLexerAsm*)self)->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetEditor(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAsm_StyleBitsNeeded(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerAsm*)self)->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerAsm_QBaseStyleBitsNeeded(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_StyleBitsNeeded_IsBase(true);
        return vqscilexerasm->styleBitsNeeded();
    } else {
        return ((VirtualQsciLexerAsm*)self)->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnStyleBitsNeeded(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerAsm_WordCharacters(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return (const char*)vqscilexerasm->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerAsm_QBaseWordCharacters(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_WordCharacters_IsBase(true);
        return (const char*)vqscilexerasm->wordCharacters();
    } else {
        return (const char*)((VirtualQsciLexerAsm*)self)->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnWordCharacters(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_SetAutoIndentStyle(QsciLexerAsm* self, int autoindentstyle) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerAsm*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetAutoIndentStyle(QsciLexerAsm* self, int autoindentstyle) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetAutoIndentStyle_IsBase(true);
        vqscilexerasm->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        ((VirtualQsciLexerAsm*)self)->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetAutoIndentStyle(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_SetColor(QsciLexerAsm* self, const QColor* c, int style) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAsm*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetColor(QsciLexerAsm* self, const QColor* c, int style) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetColor_IsBase(true);
        vqscilexerasm->setColor(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAsm*)self)->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetColor(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetColor_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_SetEolFill(QsciLexerAsm* self, bool eoffill, int style) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAsm*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetEolFill(QsciLexerAsm* self, bool eoffill, int style) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetEolFill_IsBase(true);
        vqscilexerasm->setEolFill(eoffill, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAsm*)self)->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetEolFill(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_SetFont(QsciLexerAsm* self, const QFont* f, int style) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAsm*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetFont(QsciLexerAsm* self, const QFont* f, int style) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetFont_IsBase(true);
        vqscilexerasm->setFont(*f, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAsm*)self)->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetFont(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetFont_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_SetPaper(QsciLexerAsm* self, const QColor* c, int style) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAsm*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseSetPaper(QsciLexerAsm* self, const QColor* c, int style) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetPaper_IsBase(true);
        vqscilexerasm->setPaper(*c, static_cast<int>(style));
    } else {
        ((VirtualQsciLexerAsm*)self)->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSetPaper(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAsm_ReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerAsm*)self)->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerAsm_QBaseReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_ReadProperties_IsBase(true);
        return vqscilexerasm->readProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerAsm*)self)->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnReadProperties(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAsm_WriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerAsm*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerAsm_QBaseWriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_WriteProperties_IsBase(true);
        return vqscilexerasm->writeProperties(*qs, prefix_QString);
    } else {
        return ((VirtualQsciLexerAsm*)self)->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnWriteProperties(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAsm_Event(QsciLexerAsm* self, QEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->event(event);
    } else {
        return ((VirtualQsciLexerAsm*)self)->event(event);
    }
}

// Base class handler implementation
bool QsciLexerAsm_QBaseEvent(QsciLexerAsm* self, QEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Event_IsBase(true);
        return vqscilexerasm->event(event);
    } else {
        return ((VirtualQsciLexerAsm*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnEvent(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Event_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAsm_EventFilter(QsciLexerAsm* self, QObject* watched, QEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerAsm*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerAsm_QBaseEventFilter(QsciLexerAsm* self, QObject* watched, QEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_EventFilter_IsBase(true);
        return vqscilexerasm->eventFilter(watched, event);
    } else {
        return ((VirtualQsciLexerAsm*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnEventFilter(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_TimerEvent(QsciLexerAsm* self, QTimerEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->timerEvent(event);
    } else {
        ((VirtualQsciLexerAsm*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseTimerEvent(QsciLexerAsm* self, QTimerEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_TimerEvent_IsBase(true);
        vqscilexerasm->timerEvent(event);
    } else {
        ((VirtualQsciLexerAsm*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnTimerEvent(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_ChildEvent(QsciLexerAsm* self, QChildEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->childEvent(event);
    } else {
        ((VirtualQsciLexerAsm*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseChildEvent(QsciLexerAsm* self, QChildEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_ChildEvent_IsBase(true);
        vqscilexerasm->childEvent(event);
    } else {
        ((VirtualQsciLexerAsm*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnChildEvent(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_CustomEvent(QsciLexerAsm* self, QEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->customEvent(event);
    } else {
        ((VirtualQsciLexerAsm*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseCustomEvent(QsciLexerAsm* self, QEvent* event) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_CustomEvent_IsBase(true);
        vqscilexerasm->customEvent(event);
    } else {
        ((VirtualQsciLexerAsm*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnCustomEvent(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_ConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerAsm*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_ConnectNotify_IsBase(true);
        vqscilexerasm->connectNotify(*signal);
    } else {
        ((VirtualQsciLexerAsm*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnConnectNotify(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerAsm_DisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerAsm*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerAsm_QBaseDisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DisconnectNotify_IsBase(true);
        vqscilexerasm->disconnectNotify(*signal);
    } else {
        ((VirtualQsciLexerAsm*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnDisconnectNotify(QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = dynamic_cast<VirtualQsciLexerAsm*>(self);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerAsm_TextAsBytes(const QsciLexerAsm* self, const libqt_string text) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        QByteArray _qb = vqscilexerasm->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerAsm*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerAsm_QBaseTextAsBytes(const QsciLexerAsm* self, const libqt_string text) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_TextAsBytes_IsBase(true);
        QByteArray _qb = vqscilexerasm->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = ((VirtualQsciLexerAsm*)self)->textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnTextAsBytes(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_TextAsBytes_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_TextAsBytes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerAsm_BytesAsText(const QsciLexerAsm* self, const char* bytes, int size) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        QString _ret = vqscilexerasm->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerAsm*)self)->bytesAsText(bytes, static_cast<int>(size));
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
libqt_string QsciLexerAsm_QBaseBytesAsText(const QsciLexerAsm* self, const char* bytes, int size) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BytesAsText_IsBase(true);
        QString _ret = vqscilexerasm->bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQsciLexerAsm*)self)->bytesAsText(bytes, static_cast<int>(size));
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
void QsciLexerAsm_OnBytesAsText(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_BytesAsText_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_BytesAsText_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerAsm_Sender(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->sender();
    } else {
        return ((VirtualQsciLexerAsm*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerAsm_QBaseSender(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Sender_IsBase(true);
        return vqscilexerasm->sender();
    } else {
        return ((VirtualQsciLexerAsm*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSender(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Sender_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAsm_SenderSignalIndex(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerAsm*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerAsm_QBaseSenderSignalIndex(const QsciLexerAsm* self) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SenderSignalIndex_IsBase(true);
        return vqscilexerasm->senderSignalIndex();
    } else {
        return ((VirtualQsciLexerAsm*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnSenderSignalIndex(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerAsm_Receivers(const QsciLexerAsm* self, const char* signal) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->receivers(signal);
    } else {
        return ((VirtualQsciLexerAsm*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerAsm_QBaseReceivers(const QsciLexerAsm* self, const char* signal) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Receivers_IsBase(true);
        return vqscilexerasm->receivers(signal);
    } else {
        return ((VirtualQsciLexerAsm*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnReceivers(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_Receivers_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerAsm_IsSignalConnected(const QsciLexerAsm* self, const QMetaMethod* signal) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        return vqscilexerasm->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerAsm*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerAsm_QBaseIsSignalConnected(const QsciLexerAsm* self, const QMetaMethod* signal) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_IsSignalConnected_IsBase(true);
        return vqscilexerasm->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciLexerAsm*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerAsm_OnIsSignalConnected(const QsciLexerAsm* self, intptr_t slot) {
    auto* vqscilexerasm = const_cast<VirtualQsciLexerAsm*>(dynamic_cast<const VirtualQsciLexerAsm*>(self));
    if (vqscilexerasm && vqscilexerasm->isVirtualQsciLexerAsm) {
        vqscilexerasm->setQsciLexerAsm_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerAsm::QsciLexerAsm_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerAsm_Delete(QsciLexerAsm* self) {
    delete self;
}
