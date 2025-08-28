#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlainTextEdit>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextEdit>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Highlighter
#include <highlighter.h>
#include "libhighlighter.h"
#include "libhighlighter.hxx"

Sonnet__Highlighter* Sonnet__Highlighter_new(QTextEdit* textEdit) {
    return new VirtualSonnetHighlighter(textEdit);
}

Sonnet__Highlighter* Sonnet__Highlighter_new2(QPlainTextEdit* textEdit) {
    return new VirtualSonnetHighlighter(textEdit);
}

Sonnet__Highlighter* Sonnet__Highlighter_new3(QTextEdit* textEdit, const QColor* col) {
    return new VirtualSonnetHighlighter(textEdit, *col);
}

Sonnet__Highlighter* Sonnet__Highlighter_new4(QPlainTextEdit* textEdit, const QColor* col) {
    return new VirtualSonnetHighlighter(textEdit, *col);
}

QMetaObject* Sonnet__Highlighter_MetaObject(const Sonnet__Highlighter* self) {
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__Highlighter_Metacast(Sonnet__Highlighter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__Highlighter_Metacall(Sonnet__Highlighter* self, int param1, int param2, void** param3) {
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter && vsonnet__highlighter->isVirtualSonnetHighlighter) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetHighlighter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__Highlighter_Tr(const char* s) {
    QString _ret = Sonnet::Highlighter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Sonnet__Highlighter_SpellCheckerFound(const Sonnet__Highlighter* self) {
    return self->spellCheckerFound();
}

libqt_string Sonnet__Highlighter_CurrentLanguage(const Sonnet__Highlighter* self) {
    QString _ret = self->currentLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__Highlighter_SetActive(Sonnet__Highlighter* self, bool active) {
    self->setActive(active);
}

bool Sonnet__Highlighter_IsActive(const Sonnet__Highlighter* self) {
    return self->isActive();
}

bool Sonnet__Highlighter_Automatic(const Sonnet__Highlighter* self) {
    return self->automatic();
}

void Sonnet__Highlighter_SetAutomatic(Sonnet__Highlighter* self, bool automatic) {
    self->setAutomatic(automatic);
}

bool Sonnet__Highlighter_AutoDetectLanguageDisabled(const Sonnet__Highlighter* self) {
    return self->autoDetectLanguageDisabled();
}

void Sonnet__Highlighter_SetAutoDetectLanguageDisabled(Sonnet__Highlighter* self, bool autoDetectDisabled) {
    self->setAutoDetectLanguageDisabled(autoDetectDisabled);
}

void Sonnet__Highlighter_AddWordToDictionary(Sonnet__Highlighter* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    self->addWordToDictionary(word_QString);
}

void Sonnet__Highlighter_IgnoreWord(Sonnet__Highlighter* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    self->ignoreWord(word_QString);
}

libqt_list /* of libqt_string */ Sonnet__Highlighter_SuggestionsForWord(Sonnet__Highlighter* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    QList<QString> _ret = self->suggestionsForWord(word_QString);
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

libqt_list /* of libqt_string */ Sonnet__Highlighter_SuggestionsForWord2(Sonnet__Highlighter* self, const libqt_string word, const QTextCursor* cursor) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    QList<QString> _ret = self->suggestionsForWord(word_QString, *cursor);
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

bool Sonnet__Highlighter_IsWordMisspelled(Sonnet__Highlighter* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    return self->isWordMisspelled(word_QString);
}

void Sonnet__Highlighter_SetMisspelledColor(Sonnet__Highlighter* self, const QColor* color) {
    self->setMisspelledColor(*color);
}

bool Sonnet__Highlighter_CheckerEnabledByDefault(const Sonnet__Highlighter* self) {
    return self->checkerEnabledByDefault();
}

void Sonnet__Highlighter_SetDocument(Sonnet__Highlighter* self, QTextDocument* document) {
    self->setDocument(document);
}

void Sonnet__Highlighter_ActiveChanged(Sonnet__Highlighter* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->activeChanged(description_QString);
}

void Sonnet__Highlighter_Connect_ActiveChanged(Sonnet__Highlighter* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Highlighter*, const char*) = reinterpret_cast<void (*)(Sonnet__Highlighter*, const char*)>(slot);
    Sonnet::Highlighter::connect(self, &Sonnet::Highlighter::activeChanged, [self, slotFunc](const QString& description) {
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        const char* description_str = static_cast<const char*>(malloc(description_b.length() + 1));
        memcpy((void*)description_str, description_b.data(), description_b.length());
        ((char*)description_str)[description_b.length()] = '\0';
        const char* sigval1 = description_str;
        slotFunc(self, sigval1);
        libqt_free(description_str);
    });
}

void Sonnet__Highlighter_HighlightBlock(Sonnet__Highlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter && vsonnet__highlighter->isVirtualSonnetHighlighter) {
        vsonnet__highlighter->highlightBlock(text_QString);
    }
}

void Sonnet__Highlighter_SetMisspelled(Sonnet__Highlighter* self, int start, int count) {
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter && vsonnet__highlighter->isVirtualSonnetHighlighter) {
        vsonnet__highlighter->setMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

void Sonnet__Highlighter_UnsetMisspelled(Sonnet__Highlighter* self, int start, int count) {
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter && vsonnet__highlighter->isVirtualSonnetHighlighter) {
        vsonnet__highlighter->unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

bool Sonnet__Highlighter_EventFilter(Sonnet__Highlighter* self, QObject* o, QEvent* e) {
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter && vsonnet__highlighter->isVirtualSonnetHighlighter) {
        return vsonnet__highlighter->eventFilter(o, e);
    }
    return {};
}

void Sonnet__Highlighter_SetCurrentLanguage(Sonnet__Highlighter* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setCurrentLanguage(language_QString);
}

void Sonnet__Highlighter_SlotAutoDetection(Sonnet__Highlighter* self) {
    self->slotAutoDetection();
}

void Sonnet__Highlighter_SlotRehighlight(Sonnet__Highlighter* self) {
    self->slotRehighlight();
}

libqt_string Sonnet__Highlighter_Tr2(const char* s, const char* c) {
    QString _ret = Sonnet::Highlighter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__Highlighter_Tr3(const char* s, const char* c, int n) {
    QString _ret = Sonnet::Highlighter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ Sonnet__Highlighter_SuggestionsForWord22(Sonnet__Highlighter* self, const libqt_string word, int max) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    QList<QString> _ret = self->suggestionsForWord(word_QString, static_cast<int>(max));
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

libqt_list /* of libqt_string */ Sonnet__Highlighter_SuggestionsForWord3(Sonnet__Highlighter* self, const libqt_string word, const QTextCursor* cursor, int max) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    QList<QString> _ret = self->suggestionsForWord(word_QString, *cursor, static_cast<int>(max));
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

// Base class handler implementation
int Sonnet__Highlighter_QBaseMetacall(Sonnet__Highlighter* self, int param1, int param2, void** param3) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Metacall_IsBase(true);
        return vsonnethighlighter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::Highlighter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnMetacall(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Metacall_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseHighlightBlock(Sonnet__Highlighter* self, const libqt_string text) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_HighlightBlock_IsBase(true);
        vsonnethighlighter->highlightBlock(text_QString);
    } else {
        ((VirtualSonnetHighlighter*)self)->highlightBlock(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnHighlightBlock(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_HighlightBlock_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_HighlightBlock_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseSetMisspelled(Sonnet__Highlighter* self, int start, int count) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetMisspelled_IsBase(true);
        vsonnethighlighter->setMisspelled(static_cast<int>(start), static_cast<int>(count));
    } else {
        ((VirtualSonnetHighlighter*)self)->setMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnSetMisspelled(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetMisspelled_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_SetMisspelled_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseUnsetMisspelled(Sonnet__Highlighter* self, int start, int count) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_UnsetMisspelled_IsBase(true);
        vsonnethighlighter->unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    } else {
        ((VirtualSonnetHighlighter*)self)->unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnUnsetMisspelled(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_UnsetMisspelled_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_UnsetMisspelled_Callback>(slot));
    }
}

// Base class handler implementation
bool Sonnet__Highlighter_QBaseEventFilter(Sonnet__Highlighter* self, QObject* o, QEvent* e) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_EventFilter_IsBase(true);
        return vsonnethighlighter->eventFilter(o, e);
    } else {
        return ((VirtualSonnetHighlighter*)self)->eventFilter(o, e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnEventFilter(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_EventFilter_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Highlighter_Event(Sonnet__Highlighter* self, QEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->event(event);
    } else {
        return self->Sonnet::Highlighter::event(event);
    }
}

// Base class handler implementation
bool Sonnet__Highlighter_QBaseEvent(Sonnet__Highlighter* self, QEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Event_IsBase(true);
        return vsonnethighlighter->event(event);
    } else {
        return self->Sonnet::Highlighter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnEvent(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Event_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_TimerEvent(Sonnet__Highlighter* self, QTimerEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->timerEvent(event);
    } else {
        ((VirtualSonnetHighlighter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseTimerEvent(Sonnet__Highlighter* self, QTimerEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_TimerEvent_IsBase(true);
        vsonnethighlighter->timerEvent(event);
    } else {
        ((VirtualSonnetHighlighter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnTimerEvent(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_TimerEvent_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_ChildEvent(Sonnet__Highlighter* self, QChildEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->childEvent(event);
    } else {
        ((VirtualSonnetHighlighter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseChildEvent(Sonnet__Highlighter* self, QChildEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_ChildEvent_IsBase(true);
        vsonnethighlighter->childEvent(event);
    } else {
        ((VirtualSonnetHighlighter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnChildEvent(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_ChildEvent_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_CustomEvent(Sonnet__Highlighter* self, QEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->customEvent(event);
    } else {
        ((VirtualSonnetHighlighter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseCustomEvent(Sonnet__Highlighter* self, QEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_CustomEvent_IsBase(true);
        vsonnethighlighter->customEvent(event);
    } else {
        ((VirtualSonnetHighlighter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnCustomEvent(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_CustomEvent_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_ConnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->connectNotify(*signal);
    } else {
        ((VirtualSonnetHighlighter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseConnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_ConnectNotify_IsBase(true);
        vsonnethighlighter->connectNotify(*signal);
    } else {
        ((VirtualSonnetHighlighter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnConnectNotify(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_DisconnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetHighlighter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseDisconnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_DisconnectNotify_IsBase(true);
        vsonnethighlighter->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetHighlighter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnDisconnectNotify(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Highlighter_IntraWordEditing(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->intraWordEditing();
    } else {
        return ((VirtualSonnetHighlighter*)self)->intraWordEditing();
    }
}

// Base class handler implementation
bool Sonnet__Highlighter_QBaseIntraWordEditing(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_IntraWordEditing_IsBase(true);
        return vsonnethighlighter->intraWordEditing();
    } else {
        return ((VirtualSonnetHighlighter*)self)->intraWordEditing();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnIntraWordEditing(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_IntraWordEditing_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_IntraWordEditing_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_SetIntraWordEditing(Sonnet__Highlighter* self, bool editing) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setIntraWordEditing(editing);
    } else {
        ((VirtualSonnetHighlighter*)self)->setIntraWordEditing(editing);
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseSetIntraWordEditing(Sonnet__Highlighter* self, bool editing) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetIntraWordEditing_IsBase(true);
        vsonnethighlighter->setIntraWordEditing(editing);
    } else {
        ((VirtualSonnetHighlighter*)self)->setIntraWordEditing(editing);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnSetIntraWordEditing(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetIntraWordEditing_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_SetIntraWordEditing_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_SetFormat(Sonnet__Highlighter* self, int start, int count, const QTextCharFormat* format) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else {
        ((VirtualSonnetHighlighter*)self)->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseSetFormat(Sonnet__Highlighter* self, int start, int count, const QTextCharFormat* format) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetFormat_IsBase(true);
        vsonnethighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else {
        ((VirtualSonnetHighlighter*)self)->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnSetFormat(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetFormat_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_SetFormat_Callback>(slot));
    }
}

// Derived class handler implementation
QTextCharFormat* Sonnet__Highlighter_Format(const Sonnet__Highlighter* self, int pos) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return new QTextCharFormat(vsonnethighlighter->format(static_cast<int>(pos)));
    }
    return {};
}

// Base class handler implementation
QTextCharFormat* Sonnet__Highlighter_QBaseFormat(const Sonnet__Highlighter* self, int pos) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Format_IsBase(true);
        return new QTextCharFormat(vsonnethighlighter->format(static_cast<int>(pos)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnFormat(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Format_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_Format_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Highlighter_PreviousBlockState(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->previousBlockState();
    } else {
        return ((VirtualSonnetHighlighter*)self)->previousBlockState();
    }
}

// Base class handler implementation
int Sonnet__Highlighter_QBasePreviousBlockState(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_PreviousBlockState_IsBase(true);
        return vsonnethighlighter->previousBlockState();
    } else {
        return ((VirtualSonnetHighlighter*)self)->previousBlockState();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnPreviousBlockState(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_PreviousBlockState_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_PreviousBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Highlighter_CurrentBlockState(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->currentBlockState();
    } else {
        return ((VirtualSonnetHighlighter*)self)->currentBlockState();
    }
}

// Base class handler implementation
int Sonnet__Highlighter_QBaseCurrentBlockState(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_CurrentBlockState_IsBase(true);
        return vsonnethighlighter->currentBlockState();
    } else {
        return ((VirtualSonnetHighlighter*)self)->currentBlockState();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnCurrentBlockState(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_CurrentBlockState_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_CurrentBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_SetCurrentBlockState(Sonnet__Highlighter* self, int newState) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setCurrentBlockState(static_cast<int>(newState));
    } else {
        ((VirtualSonnetHighlighter*)self)->setCurrentBlockState(static_cast<int>(newState));
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseSetCurrentBlockState(Sonnet__Highlighter* self, int newState) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetCurrentBlockState_IsBase(true);
        vsonnethighlighter->setCurrentBlockState(static_cast<int>(newState));
    } else {
        ((VirtualSonnetHighlighter*)self)->setCurrentBlockState(static_cast<int>(newState));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnSetCurrentBlockState(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetCurrentBlockState_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_SetCurrentBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Highlighter_SetCurrentBlockUserData(Sonnet__Highlighter* self, QTextBlockUserData* data) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setCurrentBlockUserData(data);
    } else {
        ((VirtualSonnetHighlighter*)self)->setCurrentBlockUserData(data);
    }
}

// Base class handler implementation
void Sonnet__Highlighter_QBaseSetCurrentBlockUserData(Sonnet__Highlighter* self, QTextBlockUserData* data) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetCurrentBlockUserData_IsBase(true);
        vsonnethighlighter->setCurrentBlockUserData(data);
    } else {
        ((VirtualSonnetHighlighter*)self)->setCurrentBlockUserData(data);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnSetCurrentBlockUserData(Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SetCurrentBlockUserData_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_SetCurrentBlockUserData_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlockUserData* Sonnet__Highlighter_CurrentBlockUserData(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->currentBlockUserData();
    } else {
        return ((VirtualSonnetHighlighter*)self)->currentBlockUserData();
    }
}

// Base class handler implementation
QTextBlockUserData* Sonnet__Highlighter_QBaseCurrentBlockUserData(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_CurrentBlockUserData_IsBase(true);
        return vsonnethighlighter->currentBlockUserData();
    } else {
        return ((VirtualSonnetHighlighter*)self)->currentBlockUserData();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnCurrentBlockUserData(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_CurrentBlockUserData_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_CurrentBlockUserData_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlock* Sonnet__Highlighter_CurrentBlock(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return new QTextBlock(vsonnethighlighter->currentBlock());
    }
    return {};
}

// Base class handler implementation
QTextBlock* Sonnet__Highlighter_QBaseCurrentBlock(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_CurrentBlock_IsBase(true);
        return new QTextBlock(vsonnethighlighter->currentBlock());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnCurrentBlock(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_CurrentBlock_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_CurrentBlock_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__Highlighter_Sender(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->sender();
    } else {
        return ((VirtualSonnetHighlighter*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__Highlighter_QBaseSender(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Sender_IsBase(true);
        return vsonnethighlighter->sender();
    } else {
        return ((VirtualSonnetHighlighter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnSender(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Sender_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Highlighter_SenderSignalIndex(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->senderSignalIndex();
    } else {
        return ((VirtualSonnetHighlighter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__Highlighter_QBaseSenderSignalIndex(const Sonnet__Highlighter* self) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SenderSignalIndex_IsBase(true);
        return vsonnethighlighter->senderSignalIndex();
    } else {
        return ((VirtualSonnetHighlighter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnSenderSignalIndex(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Highlighter_Receivers(const Sonnet__Highlighter* self, const char* signal) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->receivers(signal);
    } else {
        return ((VirtualSonnetHighlighter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__Highlighter_QBaseReceivers(const Sonnet__Highlighter* self, const char* signal) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Receivers_IsBase(true);
        return vsonnethighlighter->receivers(signal);
    } else {
        return ((VirtualSonnetHighlighter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnReceivers(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_Receivers_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Highlighter_IsSignalConnected(const Sonnet__Highlighter* self, const QMetaMethod* signal) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        return vsonnethighlighter->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetHighlighter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__Highlighter_QBaseIsSignalConnected(const Sonnet__Highlighter* self, const QMetaMethod* signal) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_IsSignalConnected_IsBase(true);
        return vsonnethighlighter->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetHighlighter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnIsSignalConnected(const Sonnet__Highlighter* self, intptr_t slot) {
    auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self));
    if (vsonnethighlighter && vsonnethighlighter->isVirtualSonnetHighlighter) {
        vsonnethighlighter->setSonnet__Highlighter_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_IsSignalConnected_Callback>(slot));
    }
}

void Sonnet__Highlighter_Delete(Sonnet__Highlighter* self) {
    delete self;
}
