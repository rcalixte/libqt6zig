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
    auto* vtextgrammarcheck__languagetoolgetlistoflanguagejob = dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarcheck__languagetoolgetlistoflanguagejob && vtextgrammarcheck__languagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->metaObject();
    }
}

void* TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const char* param1) {
    auto* vtextgrammarcheck__languagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarcheck__languagetoolgetlistoflanguagejob && vtextgrammarcheck__languagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__languagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarcheck__languagetoolgetlistoflanguagejob && vtextgrammarcheck__languagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    TextGrammarCheck::LanguageToolGetListOfLanguageJob::connect(self, &TextGrammarCheck::LanguageToolGetListOfLanguageJob::finished, [self, slotFunc](const QString& result) {
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
    TextGrammarCheck::LanguageToolGetListOfLanguageJob::connect(self, &TextGrammarCheck::LanguageToolGetListOfLanguageJob::error, [self, slotFunc](const QString& errorStr) {
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

// Base class handler implementation
QMetaObject* TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetaObject(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarchecklanguagetoolgetlistoflanguagejob->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetaObject(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetacast(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const char* param1) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast_IsBase(true);
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetacast(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetacall(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, int param1, int param2, void** param3) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall_IsBase(true);
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetacall(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_Event(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->event(event);
    } else {
        return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Event_IsBase(true);
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->event(event);
    } else {
        return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperEventFilter(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter_IsBase(true);
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolGetListOfLanguageJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnEventFilter(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperTimerEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent_IsBase(true);
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnTimerEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperChildEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent_IsBase(true);
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnChildEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperCustomEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent_IsBase(true);
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnCustomEvent(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperConnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnConnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperDisconnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnDisconnectNotify(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = dynamic_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self);
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__LanguageToolGetListOfLanguageJob_Sender(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperSender(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Sender_IsBase(true);
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnSender(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolGetListOfLanguageJob_SenderSignalIndex(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperSenderSignalIndex(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_SenderSignalIndex_IsBase(true);
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnSenderSignalIndex(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolGetListOfLanguageJob_Receivers(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperReceivers(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Receivers_IsBase(true);
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnReceivers(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_IsSignalConnected(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperIsSignalConnected(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_IsSignalConnected_IsBase(true);
        return vtextgrammarchecklanguagetoolgetlistoflanguagejob->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnIsSignalConnected(const TextGrammarCheck__LanguageToolGetListOfLanguageJob* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolgetlistoflanguagejob = const_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob*>(self));
    if (vtextgrammarchecklanguagetoolgetlistoflanguagejob && vtextgrammarchecklanguagetoolgetlistoflanguagejob->isVirtualTextGrammarCheckLanguageToolGetListOfLanguageJob) {
        vtextgrammarchecklanguagetoolgetlistoflanguagejob->setTextGrammarCheck__LanguageToolGetListOfLanguageJob_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob::TextGrammarCheck__LanguageToolGetListOfLanguageJob_IsSignalConnected_Callback>(slot));
    }
}

void TextGrammarCheck__LanguageToolGetListOfLanguageJob_Delete(TextGrammarCheck__LanguageToolGetListOfLanguageJob* self) {
    delete self;
}
