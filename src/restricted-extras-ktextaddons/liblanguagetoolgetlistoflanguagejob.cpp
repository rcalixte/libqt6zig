#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__LanguageToolGetListOfLanguageJob
#include <languagetoolgetlistoflanguagejob.h>
#include "liblanguagetoolgetlistoflanguagejob.h"
#include "liblanguagetoolgetlistoflanguagejob.hxx"

TextGrammarCheck__LanguageToolGetListOfLanguageJob* TextGrammarCheck__LanguageToolGetListOfLanguageJob_new() {
    return new VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob();
}

TextGrammarCheck__LanguageToolGetListOfLanguageJob* TextGrammarCheck__LanguageToolGetListOfLanguageJob_new2(QObject* parent) {
    return new VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob(parent);
}

QMetaObject* TextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__LanguageToolGetListOfLanguageJob_Tr(const char* s) {
    auto _ret = TextGrammarCheck::LanguageToolGetListOfLanguageJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_CanStart(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    return self->canStart();
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_Start(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    self->start();
}

libqt_string TextGrammarCheck__LanguageToolGetListOfLanguageJob_ListOfLanguagePath(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    auto _ret = self->listOfLanguagePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetListOfLanguagePath(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const libqt_string listOfLanguagePath) {
    QString listOfLanguagePath_QString = QString::fromUtf8(listOfLanguagePath.data, listOfLanguagePath.len);
    self->setListOfLanguagePath(listOfLanguagePath_QString);
}

QNetworkAccessManager* TextGrammarCheck__LanguageToolGetListOfLanguageJob_NetworkAccessManager(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    return self->networkAccessManager();
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetNetworkAccessManager(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QNetworkAccessManager* networkAccessManager) {
    self->setNetworkAccessManager(networkAccessManager);
}

libqt_string TextGrammarCheck__LanguageToolGetListOfLanguageJob_Url(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    auto _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetUrl(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setUrl(url_QString);
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_Finished(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const libqt_string result) {
    QString result_QString = QString::fromUtf8(result.data, result.len);
    self->finished(result_QString);
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_Connect_Finished(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, const char*) = reinterpret_cast<void (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, const char*)>(slot);
    TextGrammarCheck::LanguageToolGetListOfLanguageJob::connect(self,
                                                                static_cast<void (TextGrammarCheck::LanguageToolGetListOfLanguageJob::*)(const QString&)>(&TextGrammarCheck::LanguageToolGetListOfLanguageJob::finished),
                                                                [self, slotFunc](const QString& result) {
                                                                    const auto result_ret = result;
                                                                    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                                    QByteArray result_b = result_ret.toUtf8();
                                                                    auto result_str_len = result_b.length();
                                                                    const char* result_str = static_cast<const char*>(malloc(result_str_len + 1));
                                                                    memcpy((void*)result_str, result_b.data(), result_str_len);
                                                                    ((char*)result_str)[result_str_len] = '\0';
                                                                    const char* sigval1 = result_str;
                                                                    slotFunc(self, sigval1);
                                                                    libqt_free(result_str);
                                                                });
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_Error(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const libqt_string errorStr) {
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    self->error(errorStr_QString);
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_Connect_Error(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, const char*) = reinterpret_cast<void (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, const char*)>(slot);
    TextGrammarCheck::LanguageToolGetListOfLanguageJob::connect(self,
                                                                static_cast<void (TextGrammarCheck::LanguageToolGetListOfLanguageJob::*)(const QString&)>(&TextGrammarCheck::LanguageToolGetListOfLanguageJob::error),
                                                                [self, slotFunc](const QString& errorStr) {
                                                                    const auto errorStr_ret = errorStr;
                                                                    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                                    QByteArray errorStr_b = errorStr_ret.toUtf8();
                                                                    auto errorStr_str_len = errorStr_b.length();
                                                                    const char* errorStr_str = static_cast<const char*>(malloc(errorStr_str_len + 1));
                                                                    memcpy((void*)errorStr_str, errorStr_b.data(), errorStr_str_len);
                                                                    ((char*)errorStr_str)[errorStr_str_len] = '\0';
                                                                    const char* sigval1 = errorStr_str;
                                                                    slotFunc(self, sigval1);
                                                                    libqt_free(errorStr_str);
                                                                });
}

libqt_string TextGrammarCheck__LanguageToolGetListOfLanguageJob_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::LanguageToolGetListOfLanguageJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolGetListOfLanguageJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::LanguageToolGetListOfLanguageJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetaObject(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    return (QMetaObject*)self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetaObject(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self)))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetacast(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const char* param1) {
    return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetacast(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetacall(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetacall(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_Event(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QEvent* event) {
    return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_event_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperEventFilter(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnEventFilter(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperTimerEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QTimerEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self)) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->TextGrammarCheck::LanguageToolGetListOfLanguageJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnTimerEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperChildEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QChildEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self)) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->TextGrammarCheck::LanguageToolGetListOfLanguageJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnChildEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperCustomEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self)) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->TextGrammarCheck::LanguageToolGetListOfLanguageJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnCustomEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperConnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self)) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->TextGrammarCheck::LanguageToolGetListOfLanguageJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnConnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperDisconnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self)) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->TextGrammarCheck::LanguageToolGetListOfLanguageJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolGetListOfLanguageJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnDisconnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->textgrammarcheck__languagetoolgetlistoflanguagejob_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__LanguageToolGetListOfLanguageJob_Sender(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolGetListOfLanguageJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolGetListOfLanguageJob_SenderSignalIndex(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolGetListOfLanguageJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolGetListOfLanguageJob_Receivers(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const char* signal) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolGetListOfLanguageJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_IsSignalConnected(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self))) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolGetListOfLanguageJob::isSignalConnected called without a directly constructed type");
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_Delete(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    delete self;
}
