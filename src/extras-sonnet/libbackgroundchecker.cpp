#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <Sonnet/BackgroundChecker>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Speller
#include <backgroundchecker.h>
#include "libbackgroundchecker.h"
#include "libbackgroundchecker.hxx"

Sonnet__BackgroundChecker* Sonnet__BackgroundChecker_new() {
    return new VirtualSonnetBackgroundChecker();
}

Sonnet__BackgroundChecker* Sonnet__BackgroundChecker_new2(const Sonnet__Speller* speller) {
    return new VirtualSonnetBackgroundChecker(*speller);
}

Sonnet__BackgroundChecker* Sonnet__BackgroundChecker_new3(QObject* parent) {
    return new VirtualSonnetBackgroundChecker(parent);
}

Sonnet__BackgroundChecker* Sonnet__BackgroundChecker_new4(const Sonnet__Speller* speller, QObject* parent) {
    return new VirtualSonnetBackgroundChecker(*speller, parent);
}

QMetaObject* Sonnet__BackgroundChecker_MetaObject(const Sonnet__BackgroundChecker* self) {
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__BackgroundChecker_Metacast(Sonnet__BackgroundChecker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__BackgroundChecker_Metacall(Sonnet__BackgroundChecker* self, int param1, int param2, void** param3) {
    auto* vsonnet__backgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnet__backgroundchecker && vsonnet__backgroundchecker->isVirtualSonnetBackgroundChecker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__BackgroundChecker_Tr(const char* s) {
    QString _ret = Sonnet::BackgroundChecker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__BackgroundChecker_SetText(Sonnet__BackgroundChecker* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string Sonnet__BackgroundChecker_Text(const Sonnet__BackgroundChecker* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__BackgroundChecker_CurrentContext(const Sonnet__BackgroundChecker* self) {
    QString _ret = self->currentContext();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Sonnet__Speller* Sonnet__BackgroundChecker_Speller(const Sonnet__BackgroundChecker* self) {
    return new Sonnet::Speller(self->speller());
}

void Sonnet__BackgroundChecker_SetSpeller(Sonnet__BackgroundChecker* self, const Sonnet__Speller* speller) {
    self->setSpeller(*speller);
}

bool Sonnet__BackgroundChecker_CheckWord(Sonnet__BackgroundChecker* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    return self->checkWord(word_QString);
}

libqt_list /* of libqt_string */ Sonnet__BackgroundChecker_Suggest(const Sonnet__BackgroundChecker* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    QList<QString> _ret = self->suggest(word_QString);
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

bool Sonnet__BackgroundChecker_AddWordToPersonal(Sonnet__BackgroundChecker* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    return self->addWordToPersonal(word_QString);
}

bool Sonnet__BackgroundChecker_AddWordToSession(Sonnet__BackgroundChecker* self, const libqt_string word) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    return self->addWordToSession(word_QString);
}

bool Sonnet__BackgroundChecker_AutoDetectLanguageDisabled(const Sonnet__BackgroundChecker* self) {
    return self->autoDetectLanguageDisabled();
}

void Sonnet__BackgroundChecker_SetAutoDetectLanguageDisabled(Sonnet__BackgroundChecker* self, bool autoDetectDisabled) {
    self->setAutoDetectLanguageDisabled(autoDetectDisabled);
}

void Sonnet__BackgroundChecker_Start(Sonnet__BackgroundChecker* self) {
    auto* vsonnet__backgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnet__backgroundchecker && vsonnet__backgroundchecker->isVirtualSonnetBackgroundChecker) {
        self->start();
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->start();
    }
}

void Sonnet__BackgroundChecker_Stop(Sonnet__BackgroundChecker* self) {
    auto* vsonnet__backgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnet__backgroundchecker && vsonnet__backgroundchecker->isVirtualSonnetBackgroundChecker) {
        self->stop();
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->stop();
    }
}

void Sonnet__BackgroundChecker_Replace(Sonnet__BackgroundChecker* self, int start, const libqt_string oldText, const libqt_string newText) {
    QString oldText_QString = QString::fromUtf8(oldText.data, oldText.len);
    QString newText_QString = QString::fromUtf8(newText.data, newText.len);
    self->replace(static_cast<int>(start), oldText_QString, newText_QString);
}

void Sonnet__BackgroundChecker_ChangeLanguage(Sonnet__BackgroundChecker* self, const libqt_string lang) {
    QString lang_QString = QString::fromUtf8(lang.data, lang.len);
    self->changeLanguage(lang_QString);
}

void Sonnet__BackgroundChecker_ContinueChecking(Sonnet__BackgroundChecker* self) {
    auto* vsonnet__backgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnet__backgroundchecker && vsonnet__backgroundchecker->isVirtualSonnetBackgroundChecker) {
        self->continueChecking();
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->continueChecking();
    }
}

void Sonnet__BackgroundChecker_Misspelling(Sonnet__BackgroundChecker* self, const libqt_string word, int start) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    self->misspelling(word_QString, static_cast<int>(start));
}

void Sonnet__BackgroundChecker_Connect_Misspelling(Sonnet__BackgroundChecker* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__BackgroundChecker*, const char*, int) = reinterpret_cast<void (*)(Sonnet__BackgroundChecker*, const char*, int)>(slot);
    Sonnet::BackgroundChecker::connect(self, &Sonnet::BackgroundChecker::misspelling, [self, slotFunc](const QString& word, int start) {
        const QString word_ret = word;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray word_b = word_ret.toUtf8();
        const char* word_str = static_cast<const char*>(malloc(word_b.length() + 1));
        memcpy((void*)word_str, word_b.data(), word_b.length());
        ((char*)word_str)[word_b.length()] = '\0';
        const char* sigval1 = word_str;
        int sigval2 = start;
        slotFunc(self, sigval1, sigval2);
        libqt_free(word_str);
    });
}

void Sonnet__BackgroundChecker_Done(Sonnet__BackgroundChecker* self) {
    self->done();
}

void Sonnet__BackgroundChecker_Connect_Done(Sonnet__BackgroundChecker* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__BackgroundChecker*) = reinterpret_cast<void (*)(Sonnet__BackgroundChecker*)>(slot);
    Sonnet::BackgroundChecker::connect(self, &Sonnet::BackgroundChecker::done, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string Sonnet__BackgroundChecker_FetchMoreText(Sonnet__BackgroundChecker* self) {
    auto* vsonnet__backgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnet__backgroundchecker && vsonnet__backgroundchecker->isVirtualSonnetBackgroundChecker) {
        QString _ret = vsonnet__backgroundchecker->fetchMoreText();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

void Sonnet__BackgroundChecker_FinishedCurrentFeed(Sonnet__BackgroundChecker* self) {
    auto* vsonnet__backgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnet__backgroundchecker && vsonnet__backgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnet__backgroundchecker->finishedCurrentFeed();
    }
}

libqt_string Sonnet__BackgroundChecker_Tr2(const char* s, const char* c) {
    QString _ret = Sonnet::BackgroundChecker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__BackgroundChecker_Tr3(const char* s, const char* c, int n) {
    QString _ret = Sonnet::BackgroundChecker::tr(s, c, static_cast<int>(n));
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
int Sonnet__BackgroundChecker_QBaseMetacall(Sonnet__BackgroundChecker* self, int param1, int param2, void** param3) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Metacall_IsBase(true);
        return vsonnetbackgroundchecker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::BackgroundChecker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnMetacall(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Metacall_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseStart(Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Start_IsBase(true);
        vsonnetbackgroundchecker->start();
    } else {
        self->Sonnet::BackgroundChecker::start();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnStart(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Start_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_Start_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseStop(Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Stop_IsBase(true);
        vsonnetbackgroundchecker->stop();
    } else {
        self->Sonnet::BackgroundChecker::stop();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnStop(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Stop_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_Stop_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseContinueChecking(Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_ContinueChecking_IsBase(true);
        vsonnetbackgroundchecker->continueChecking();
    } else {
        self->Sonnet::BackgroundChecker::continueChecking();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnContinueChecking(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_ContinueChecking_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_ContinueChecking_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string Sonnet__BackgroundChecker_QBaseFetchMoreText(Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_FetchMoreText_IsBase(true);
        QString _ret = vsonnetbackgroundchecker->fetchMoreText();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualSonnetBackgroundChecker*)self)->fetchMoreText();
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
void Sonnet__BackgroundChecker_OnFetchMoreText(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_FetchMoreText_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_FetchMoreText_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseFinishedCurrentFeed(Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_FinishedCurrentFeed_IsBase(true);
        vsonnetbackgroundchecker->finishedCurrentFeed();
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->finishedCurrentFeed();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnFinishedCurrentFeed(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_FinishedCurrentFeed_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_FinishedCurrentFeed_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__BackgroundChecker_Event(Sonnet__BackgroundChecker* self, QEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        return vsonnetbackgroundchecker->event(event);
    } else {
        return self->Sonnet::BackgroundChecker::event(event);
    }
}

// Base class handler implementation
bool Sonnet__BackgroundChecker_QBaseEvent(Sonnet__BackgroundChecker* self, QEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Event_IsBase(true);
        return vsonnetbackgroundchecker->event(event);
    } else {
        return self->Sonnet::BackgroundChecker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnEvent(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Event_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__BackgroundChecker_EventFilter(Sonnet__BackgroundChecker* self, QObject* watched, QEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        return vsonnetbackgroundchecker->eventFilter(watched, event);
    } else {
        return self->Sonnet::BackgroundChecker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Sonnet__BackgroundChecker_QBaseEventFilter(Sonnet__BackgroundChecker* self, QObject* watched, QEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_EventFilter_IsBase(true);
        return vsonnetbackgroundchecker->eventFilter(watched, event);
    } else {
        return self->Sonnet::BackgroundChecker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnEventFilter(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_EventFilter_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__BackgroundChecker_TimerEvent(Sonnet__BackgroundChecker* self, QTimerEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->timerEvent(event);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseTimerEvent(Sonnet__BackgroundChecker* self, QTimerEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_TimerEvent_IsBase(true);
        vsonnetbackgroundchecker->timerEvent(event);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnTimerEvent(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_TimerEvent_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__BackgroundChecker_ChildEvent(Sonnet__BackgroundChecker* self, QChildEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->childEvent(event);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseChildEvent(Sonnet__BackgroundChecker* self, QChildEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_ChildEvent_IsBase(true);
        vsonnetbackgroundchecker->childEvent(event);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnChildEvent(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_ChildEvent_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__BackgroundChecker_CustomEvent(Sonnet__BackgroundChecker* self, QEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->customEvent(event);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseCustomEvent(Sonnet__BackgroundChecker* self, QEvent* event) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_CustomEvent_IsBase(true);
        vsonnetbackgroundchecker->customEvent(event);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnCustomEvent(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_CustomEvent_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__BackgroundChecker_ConnectNotify(Sonnet__BackgroundChecker* self, const QMetaMethod* signal) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->connectNotify(*signal);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseConnectNotify(Sonnet__BackgroundChecker* self, const QMetaMethod* signal) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_ConnectNotify_IsBase(true);
        vsonnetbackgroundchecker->connectNotify(*signal);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnConnectNotify(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__BackgroundChecker_DisconnectNotify(Sonnet__BackgroundChecker* self, const QMetaMethod* signal) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseDisconnectNotify(Sonnet__BackgroundChecker* self, const QMetaMethod* signal) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_DisconnectNotify_IsBase(true);
        vsonnetbackgroundchecker->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnDisconnectNotify(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__BackgroundChecker_SlotEngineDone(Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->slotEngineDone();
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->slotEngineDone();
    }
}

// Base class handler implementation
void Sonnet__BackgroundChecker_QBaseSlotEngineDone(Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_SlotEngineDone_IsBase(true);
        vsonnetbackgroundchecker->slotEngineDone();
    } else {
        ((VirtualSonnetBackgroundChecker*)self)->slotEngineDone();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnSlotEngineDone(Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = dynamic_cast<VirtualSonnetBackgroundChecker*>(self);
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_SlotEngineDone_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_SlotEngineDone_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__BackgroundChecker_Sender(const Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        return vsonnetbackgroundchecker->sender();
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__BackgroundChecker_QBaseSender(const Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Sender_IsBase(true);
        return vsonnetbackgroundchecker->sender();
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnSender(const Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Sender_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__BackgroundChecker_SenderSignalIndex(const Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        return vsonnetbackgroundchecker->senderSignalIndex();
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__BackgroundChecker_QBaseSenderSignalIndex(const Sonnet__BackgroundChecker* self) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_SenderSignalIndex_IsBase(true);
        return vsonnetbackgroundchecker->senderSignalIndex();
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnSenderSignalIndex(const Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__BackgroundChecker_Receivers(const Sonnet__BackgroundChecker* self, const char* signal) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        return vsonnetbackgroundchecker->receivers(signal);
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__BackgroundChecker_QBaseReceivers(const Sonnet__BackgroundChecker* self, const char* signal) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Receivers_IsBase(true);
        return vsonnetbackgroundchecker->receivers(signal);
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnReceivers(const Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_Receivers_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__BackgroundChecker_IsSignalConnected(const Sonnet__BackgroundChecker* self, const QMetaMethod* signal) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        return vsonnetbackgroundchecker->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__BackgroundChecker_QBaseIsSignalConnected(const Sonnet__BackgroundChecker* self, const QMetaMethod* signal) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_IsSignalConnected_IsBase(true);
        return vsonnetbackgroundchecker->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetBackgroundChecker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__BackgroundChecker_OnIsSignalConnected(const Sonnet__BackgroundChecker* self, intptr_t slot) {
    auto* vsonnetbackgroundchecker = const_cast<VirtualSonnetBackgroundChecker*>(dynamic_cast<const VirtualSonnetBackgroundChecker*>(self));
    if (vsonnetbackgroundchecker && vsonnetbackgroundchecker->isVirtualSonnetBackgroundChecker) {
        vsonnetbackgroundchecker->setSonnet__BackgroundChecker_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetBackgroundChecker::Sonnet__BackgroundChecker_IsSignalConnected_Callback>(slot));
    }
}

void Sonnet__BackgroundChecker_Delete(Sonnet__BackgroundChecker* self) {
    delete self;
}
