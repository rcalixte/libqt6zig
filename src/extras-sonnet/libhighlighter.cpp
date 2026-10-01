#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlainTextEdit>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Sonnet__Highlighter_Tr(const char* s) {
    auto _ret = Sonnet::Highlighter::tr(s);
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
    auto _ret = self->currentLanguage();
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    Sonnet::Highlighter::connect(self,
                                 static_cast<void (Sonnet::Highlighter::*)(const QString&)>(&Sonnet::Highlighter::activeChanged),
                                 [self, slotFunc](const QString& description) {
                                     const auto description_ret = description;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray description_b = description_ret.toUtf8();
                                     auto description_str_len = description_b.length();
                                     const char* description_str = static_cast<const char*>(malloc(description_str_len + 1));
                                     memcpy((void*)description_str, description_b.data(), description_str_len);
                                     ((char*)description_str)[description_str_len] = '\0';
                                     const char* sigval1 = description_str;
                                     slotFunc(self, sigval1);
                                     libqt_free(description_str);
                                 });
}

void Sonnet__Highlighter_HighlightBlock(Sonnet__Highlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter) {
        vsonnet__highlighter->highlightBlock(text_QString);
    }
}

void Sonnet__Highlighter_SetMisspelled(Sonnet__Highlighter* self, int start, int count) {
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter) {
        vsonnet__highlighter->setMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

void Sonnet__Highlighter_UnsetMisspelled(Sonnet__Highlighter* self, int start, int count) {
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter) {
        vsonnet__highlighter->unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

bool Sonnet__Highlighter_EventFilter(Sonnet__Highlighter* self, QObject* o, QEvent* e) {
    auto* vsonnet__highlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnet__highlighter) {
        return vsonnet__highlighter->eventFilter(o, e);
    }
    qFatal("Error: Protected method Sonnet::Highlighter::eventFilter called without a directly constructed type");
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
    auto _ret = Sonnet::Highlighter::tr(s, c);
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
    auto _ret = Sonnet::Highlighter::tr(s, c, static_cast<int>(n));
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
QMetaObject* Sonnet__Highlighter_SuperMetaObject(const Sonnet__Highlighter* self) {
    return (QMetaObject*)self->Sonnet::Highlighter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnMetaObject(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self)))
        vsonnethighlighter->sonnet__highlighter_metaobject_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Sonnet__Highlighter_SuperMetacast(Sonnet__Highlighter* self, const char* param1) {
    return self->Sonnet::Highlighter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnMetacast(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_metacast_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_Metacast_Callback>(slot);
}

// Base class handler implementation
int Sonnet__Highlighter_SuperMetacall(Sonnet__Highlighter* self, int param1, int param2, void** param3) {
    return self->Sonnet::Highlighter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnMetacall(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_metacall_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_Metacall_Callback>(slot);
}

// Base class handler implementation
void Sonnet__Highlighter_SuperHighlightBlock(Sonnet__Highlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->Sonnet::Highlighter::highlightBlock(text_QString);
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::highlightBlock called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnHighlightBlock(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_highlightblock_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_HighlightBlock_Callback>(slot);
}

// Base class handler implementation
void Sonnet__Highlighter_SuperSetMisspelled(Sonnet__Highlighter* self, int start, int count) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->Sonnet::Highlighter::setMisspelled(static_cast<int>(start), static_cast<int>(count));
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::setMisspelled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnSetMisspelled(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_setmisspelled_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_SetMisspelled_Callback>(slot);
}

// Base class handler implementation
void Sonnet__Highlighter_SuperUnsetMisspelled(Sonnet__Highlighter* self, int start, int count) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->Sonnet::Highlighter::unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::unsetMisspelled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnUnsetMisspelled(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_unsetmisspelled_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_UnsetMisspelled_Callback>(slot);
}

// Base class handler implementation
bool Sonnet__Highlighter_SuperEventFilter(Sonnet__Highlighter* self, QObject* o, QEvent* e) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        return vsonnethighlighter->Sonnet::Highlighter::eventFilter(o, e);
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnEventFilter(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_eventfilter_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__Highlighter_Event(Sonnet__Highlighter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Sonnet__Highlighter_SuperEvent(Sonnet__Highlighter* self, QEvent* event) {
    return self->Sonnet::Highlighter::event(event);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnEvent(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_event_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_Event_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Highlighter_TimerEvent(Sonnet__Highlighter* self, QTimerEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter) {
        vsonnethighlighter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Highlighter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Highlighter_SuperTimerEvent(Sonnet__Highlighter* self, QTimerEvent* event) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->Sonnet::Highlighter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnTimerEvent(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_timerevent_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Highlighter_ChildEvent(Sonnet__Highlighter* self, QChildEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter) {
        vsonnethighlighter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Highlighter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Highlighter_SuperChildEvent(Sonnet__Highlighter* self, QChildEvent* event) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->Sonnet::Highlighter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnChildEvent(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_childevent_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Highlighter_CustomEvent(Sonnet__Highlighter* self, QEvent* event) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter) {
        vsonnethighlighter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Highlighter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Highlighter_SuperCustomEvent(Sonnet__Highlighter* self, QEvent* event) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->Sonnet::Highlighter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnCustomEvent(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_customevent_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Highlighter_ConnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter) {
        vsonnethighlighter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Highlighter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Highlighter_SuperConnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->Sonnet::Highlighter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnConnectNotify(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_connectnotify_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Highlighter_DisconnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal) {
    auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self);
    if (vsonnethighlighter) {
        vsonnethighlighter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Highlighter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Highlighter_SuperDisconnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->Sonnet::Highlighter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::Highlighter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Highlighter_OnDisconnectNotify(Sonnet__Highlighter* self, intptr_t slot) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self))
        vsonnethighlighter->sonnet__highlighter_disconnectnotify_callback = reinterpret_cast<VirtualSonnetHighlighter::Sonnet__Highlighter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool Sonnet__Highlighter_IntraWordEditing(const Sonnet__Highlighter* self) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self))) {
        return vsonnethighlighter->VirtualSonnetHighlighter::intraWordEditing();
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::intraWordEditing called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__Highlighter_SetIntraWordEditing(Sonnet__Highlighter* self, bool editing) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->VirtualSonnetHighlighter::setIntraWordEditing(editing);
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::setIntraWordEditing called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__Highlighter_SetFormat(Sonnet__Highlighter* self, int start, int count, const QTextCharFormat* format) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->VirtualSonnetHighlighter::setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::setFormat called without a directly constructed type");
}

// Derived class handler implementation
QTextCharFormat* Sonnet__Highlighter_Format(const Sonnet__Highlighter* self, int pos) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self)))
        return new QTextCharFormat(vsonnethighlighter->format(static_cast<int>(pos)));
    qFatal("Error: Protected method Sonnet::Highlighter::format called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__Highlighter_PreviousBlockState(const Sonnet__Highlighter* self) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self))) {
        return vsonnethighlighter->VirtualSonnetHighlighter::previousBlockState();
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::previousBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__Highlighter_CurrentBlockState(const Sonnet__Highlighter* self) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self))) {
        return vsonnethighlighter->VirtualSonnetHighlighter::currentBlockState();
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::currentBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__Highlighter_SetCurrentBlockState(Sonnet__Highlighter* self, int newState) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->VirtualSonnetHighlighter::setCurrentBlockState(static_cast<int>(newState));
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::setCurrentBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__Highlighter_SetCurrentBlockUserData(Sonnet__Highlighter* self, QTextBlockUserData* data) {
    if (auto* vsonnethighlighter = dynamic_cast<VirtualSonnetHighlighter*>(self)) {
        vsonnethighlighter->VirtualSonnetHighlighter::setCurrentBlockUserData(data);
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::setCurrentBlockUserData called without a directly constructed type");
}

// Derived class protected handler implementation
QTextBlockUserData* Sonnet__Highlighter_CurrentBlockUserData(const Sonnet__Highlighter* self) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self))) {
        return vsonnethighlighter->VirtualSonnetHighlighter::currentBlockUserData();
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::currentBlockUserData called without a directly constructed type");
}

// Derived class handler implementation
QTextBlock* Sonnet__Highlighter_CurrentBlock(const Sonnet__Highlighter* self) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self)))
        return new QTextBlock(vsonnethighlighter->currentBlock());
    qFatal("Error: Protected method Sonnet::Highlighter::currentBlock called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Sonnet__Highlighter_Sender(const Sonnet__Highlighter* self) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self))) {
        return vsonnethighlighter->VirtualSonnetHighlighter::sender();
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__Highlighter_SenderSignalIndex(const Sonnet__Highlighter* self) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self))) {
        return vsonnethighlighter->VirtualSonnetHighlighter::senderSignalIndex();
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__Highlighter_Receivers(const Sonnet__Highlighter* self, const char* signal) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self))) {
        return vsonnethighlighter->VirtualSonnetHighlighter::receivers(signal);
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__Highlighter_IsSignalConnected(const Sonnet__Highlighter* self, const QMetaMethod* signal) {
    if (auto* vsonnethighlighter = const_cast<VirtualSonnetHighlighter*>(dynamic_cast<const VirtualSonnetHighlighter*>(self))) {
        return vsonnethighlighter->VirtualSonnetHighlighter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Sonnet::Highlighter::isSignalConnected called without a directly constructed type");
}

void Sonnet__Highlighter_Delete(Sonnet__Highlighter* self) {
    delete self;
}
