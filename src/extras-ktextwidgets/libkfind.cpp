#include <KFind>
#include <QChildEvent>
#include <QDialog>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpressionMatch>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <kfind.h>
#include "libkfind.h"
#include "libkfind.hxx"

KFind* KFind_new(const libqt_string pattern, long options, QWidget* parent) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    return new VirtualKFind(pattern_QString, static_cast<long>(options), parent);
}

KFind* KFind_new2(const libqt_string pattern, long options, QWidget* parent, QWidget* findDialog) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    return new VirtualKFind(pattern_QString, static_cast<long>(options), parent, findDialog);
}

QMetaObject* KFind_MetaObject(const KFind* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFind_Metacast(KFind* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFind_Metacall(KFind* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFind_Tr(const char* s) {
    auto _ret = KFind::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFind_NeedData(const KFind* self) {
    return self->needData();
}

void KFind_SetData(KFind* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setData(data_QString);
}

void KFind_SetData2(KFind* self, int id, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setData(static_cast<int>(id), data_QString);
}

int KFind_Find(KFind* self) {
    return static_cast<int>(self->find());
}

long KFind_Options(const KFind* self) {
    return self->options();
}

void KFind_SetOptions(KFind* self, long options) {
    self->setOptions(static_cast<long>(options));
}

libqt_string KFind_Pattern(const KFind* self) {
    auto _ret = self->pattern();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFind_SetPattern(KFind* self, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    self->setPattern(pattern_QString);
}

int KFind_NumMatches(const KFind* self) {
    return self->numMatches();
}

void KFind_ResetCounts(KFind* self) {
    self->resetCounts();
}

bool KFind_ValidateMatch(KFind* self, const libqt_string text, int index, int matchedlength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
}

bool KFind_ShouldRestart(const KFind* self, bool forceAsking, bool showNumMatches) {
    return self->shouldRestart(forceAsking, showNumMatches);
}

int KFind_Find2(const libqt_string text, const libqt_string pattern, int index, long options, int* matchedLength, QRegularExpressionMatch* rmatch) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    return KFind::find(text_QString, pattern_QString, static_cast<int>(index), static_cast<long>(options), static_cast<int*>(matchedLength), rmatch);
}

void KFind_DisplayFinalDialog(const KFind* self) {
    self->displayFinalDialog();
}

QDialog* KFind_FindNextDialog(KFind* self) {
    return self->findNextDialog();
}

void KFind_CloseFindNextDialog(KFind* self) {
    self->closeFindNextDialog();
}

int KFind_Index(const KFind* self) {
    return self->index();
}

void KFind_TextFound(KFind* self, const libqt_string text, int matchingIndex, int matchedLength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textFound(text_QString, static_cast<int>(matchingIndex), static_cast<int>(matchedLength));
}

void KFind_Connect_TextFound(KFind* self, intptr_t slot) {
    void (*slotFunc)(KFind*, const char*, int, int) = reinterpret_cast<void (*)(KFind*, const char*, int, int)>(slot);
    KFind::connect(self,
                   static_cast<void (KFind::*)(const QString&, int, int)>(&KFind::textFound),
                   [self, slotFunc](const QString& text, int matchingIndex, int matchedLength) {
                       const auto text_ret = text;
                       // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                       QByteArray text_b = text_ret.toUtf8();
                       auto text_str_len = text_b.length();
                       const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                       memcpy((void*)text_str, text_b.data(), text_str_len);
                       ((char*)text_str)[text_str_len] = '\0';
                       const char* sigval1 = text_str;
                       int sigval2 = matchingIndex;
                       int sigval3 = matchedLength;
                       slotFunc(self, sigval1, sigval2, sigval3);
                       libqt_free(text_str);
                   });
}

void KFind_TextFoundAtId(KFind* self, int id, int matchingIndex, int matchedLength) {
    self->textFoundAtId(static_cast<int>(id), static_cast<int>(matchingIndex), static_cast<int>(matchedLength));
}

void KFind_Connect_TextFoundAtId(KFind* self, intptr_t slot) {
    void (*slotFunc)(KFind*, int, int, int) = reinterpret_cast<void (*)(KFind*, int, int, int)>(slot);
    KFind::connect(self,
                   static_cast<void (KFind::*)(int, int, int)>(&KFind::textFoundAtId),
                   [self, slotFunc](int id, int matchingIndex, int matchedLength) {
                       int sigval1 = id;
                       int sigval2 = matchingIndex;
                       int sigval3 = matchedLength;
                       slotFunc(self, sigval1, sigval2, sigval3);
                   });
}

void KFind_FindNext(KFind* self) {
    self->findNext();
}

void KFind_Connect_FindNext(KFind* self, intptr_t slot) {
    void (*slotFunc)(KFind*) = reinterpret_cast<void (*)(KFind*)>(slot);
    KFind::connect(self,
                   static_cast<void (KFind::*)()>(&KFind::findNext),
                   [self, slotFunc]() {
                       slotFunc(self);
                   });
}

void KFind_OptionsChanged(KFind* self) {
    self->optionsChanged();
}

void KFind_Connect_OptionsChanged(KFind* self, intptr_t slot) {
    void (*slotFunc)(KFind*) = reinterpret_cast<void (*)(KFind*)>(slot);
    KFind::connect(self,
                   static_cast<void (KFind::*)()>(&KFind::optionsChanged),
                   [self, slotFunc]() {
                       slotFunc(self);
                   });
}

void KFind_DialogClosed(KFind* self) {
    self->dialogClosed();
}

void KFind_Connect_DialogClosed(KFind* self, intptr_t slot) {
    void (*slotFunc)(KFind*) = reinterpret_cast<void (*)(KFind*)>(slot);
    KFind::connect(self,
                   static_cast<void (KFind::*)()>(&KFind::dialogClosed),
                   [self, slotFunc]() {
                       slotFunc(self);
                   });
}

libqt_string KFind_Tr2(const char* s, const char* c) {
    auto _ret = KFind::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFind_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFind::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFind_SetData22(KFind* self, const libqt_string data, int startPos) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setData(data_QString, static_cast<int>(startPos));
}

void KFind_SetData3(KFind* self, int id, const libqt_string data, int startPos) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setData(static_cast<int>(id), data_QString, static_cast<int>(startPos));
}

QDialog* KFind_FindNextDialog1(KFind* self, bool create) {
    return self->findNextDialog(create);
}

// Base class handler implementation
QMetaObject* KFind_SuperMetaObject(const KFind* self) {
    return (QMetaObject*)self->KFind::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFind_OnMetaObject(KFind* self, intptr_t slot) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self)))
        vkfind->kfind_metaobject_callback = reinterpret_cast<VirtualKFind::KFind_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFind_SuperMetacast(KFind* self, const char* param1) {
    return self->KFind::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFind_OnMetacast(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_metacast_callback = reinterpret_cast<VirtualKFind::KFind_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFind_SuperMetacall(KFind* self, int param1, int param2, void** param3) {
    return self->KFind::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFind_OnMetacall(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_metacall_callback = reinterpret_cast<VirtualKFind::KFind_Metacall_Callback>(slot);
}

// Base class handler implementation
void KFind_SuperSetOptions(KFind* self, long options) {
    self->KFind::setOptions(static_cast<long>(options));
}

// Auxiliary method to allow providing re-implementation
void KFind_OnSetOptions(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_setoptions_callback = reinterpret_cast<VirtualKFind::KFind_SetOptions_Callback>(slot);
}

// Base class handler implementation
void KFind_SuperResetCounts(KFind* self) {
    self->KFind::resetCounts();
}

// Auxiliary method to allow providing re-implementation
void KFind_OnResetCounts(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_resetcounts_callback = reinterpret_cast<VirtualKFind::KFind_ResetCounts_Callback>(slot);
}

// Base class handler implementation
bool KFind_SuperValidateMatch(KFind* self, const libqt_string text, int index, int matchedlength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->KFind::validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
}

// Auxiliary method to allow providing re-implementation
void KFind_OnValidateMatch(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_validatematch_callback = reinterpret_cast<VirtualKFind::KFind_ValidateMatch_Callback>(slot);
}

// Base class handler implementation
bool KFind_SuperShouldRestart(const KFind* self, bool forceAsking, bool showNumMatches) {
    return self->KFind::shouldRestart(forceAsking, showNumMatches);
}

// Auxiliary method to allow providing re-implementation
void KFind_OnShouldRestart(KFind* self, intptr_t slot) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self)))
        vkfind->kfind_shouldrestart_callback = reinterpret_cast<VirtualKFind::KFind_ShouldRestart_Callback>(slot);
}

// Base class handler implementation
void KFind_SuperDisplayFinalDialog(const KFind* self) {
    self->KFind::displayFinalDialog();
}

// Auxiliary method to allow providing re-implementation
void KFind_OnDisplayFinalDialog(KFind* self, intptr_t slot) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self)))
        vkfind->kfind_displayfinaldialog_callback = reinterpret_cast<VirtualKFind::KFind_DisplayFinalDialog_Callback>(slot);
}

// Derived class handler implementation
bool KFind_Event(KFind* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFind_SuperEvent(KFind* self, QEvent* event) {
    return self->KFind::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFind_OnEvent(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_event_callback = reinterpret_cast<VirtualKFind::KFind_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFind_EventFilter(KFind* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KFind_SuperEventFilter(KFind* self, QObject* watched, QEvent* event) {
    return self->KFind::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KFind_OnEventFilter(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_eventfilter_callback = reinterpret_cast<VirtualKFind::KFind_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFind_TimerEvent(KFind* self, QTimerEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind) {
        vkfind->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFind::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFind_SuperTimerEvent(KFind* self, QTimerEvent* event) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self)) {
        vkfind->KFind::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFind::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFind_OnTimerEvent(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_timerevent_callback = reinterpret_cast<VirtualKFind::KFind_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFind_ChildEvent(KFind* self, QChildEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind) {
        vkfind->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFind::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFind_SuperChildEvent(KFind* self, QChildEvent* event) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self)) {
        vkfind->KFind::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFind::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFind_OnChildEvent(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_childevent_callback = reinterpret_cast<VirtualKFind::KFind_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFind_CustomEvent(KFind* self, QEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind) {
        vkfind->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFind::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFind_SuperCustomEvent(KFind* self, QEvent* event) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self)) {
        vkfind->KFind::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFind::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFind_OnCustomEvent(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_customevent_callback = reinterpret_cast<VirtualKFind::KFind_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFind_ConnectNotify(KFind* self, const QMetaMethod* signal) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind) {
        vkfind->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFind::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFind_SuperConnectNotify(KFind* self, const QMetaMethod* signal) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self)) {
        vkfind->KFind::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFind::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFind_OnConnectNotify(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_connectnotify_callback = reinterpret_cast<VirtualKFind::KFind_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFind_DisconnectNotify(KFind* self, const QMetaMethod* signal) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind) {
        vkfind->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFind::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFind_SuperDisconnectNotify(KFind* self, const QMetaMethod* signal) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self)) {
        vkfind->KFind::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFind::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFind_OnDisconnectNotify(KFind* self, intptr_t slot) {
    if (auto* vkfind = dynamic_cast<VirtualKFind*>(self))
        vkfind->kfind_disconnectnotify_callback = reinterpret_cast<VirtualKFind::KFind_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QWidget* KFind_ParentWidget(const KFind* self) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self))) {
        return vkfind->VirtualKFind::parentWidget();
    } else
        qFatal("Error: Protected method KFind::parentWidget called without a directly constructed type");
}

// Derived class protected handler implementation
QWidget* KFind_DialogsParent(const KFind* self) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self))) {
        return vkfind->VirtualKFind::dialogsParent();
    } else
        qFatal("Error: Protected method KFind::dialogsParent called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFind_Sender(const KFind* self) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self))) {
        return vkfind->VirtualKFind::sender();
    } else
        qFatal("Error: Protected method KFind::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFind_SenderSignalIndex(const KFind* self) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self))) {
        return vkfind->VirtualKFind::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFind::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFind_Receivers(const KFind* self, const char* signal) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self))) {
        return vkfind->VirtualKFind::receivers(signal);
    } else
        qFatal("Error: Protected method KFind::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFind_IsSignalConnected(const KFind* self, const QMetaMethod* signal) {
    if (auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self))) {
        return vkfind->VirtualKFind::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFind::isSignalConnected called without a directly constructed type");
}

void KFind_Delete(KFind* self) {
    delete self;
}
