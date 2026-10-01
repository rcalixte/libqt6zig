#include <KFind>
#include <KReplace>
#include <QChildEvent>
#include <QDialog>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <kreplace.h>
#include "libkreplace.h"
#include "libkreplace.hxx"

KReplace* KReplace_new(const libqt_string pattern, const libqt_string replacement, long options) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QString replacement_QString = QString::fromUtf8(replacement.data, replacement.len);
    return new VirtualKReplace(pattern_QString, replacement_QString, static_cast<long>(options));
}

KReplace* KReplace_new2(const libqt_string pattern, const libqt_string replacement, long options, QWidget* parent, QWidget* replaceDialog) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QString replacement_QString = QString::fromUtf8(replacement.data, replacement.len);
    return new VirtualKReplace(pattern_QString, replacement_QString, static_cast<long>(options), parent, replaceDialog);
}

KReplace* KReplace_new3(const libqt_string pattern, const libqt_string replacement, long options, QWidget* parent) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QString replacement_QString = QString::fromUtf8(replacement.data, replacement.len);
    return new VirtualKReplace(pattern_QString, replacement_QString, static_cast<long>(options), parent);
}

QMetaObject* KReplace_MetaObject(const KReplace* self) {
    return (QMetaObject*)self->metaObject();
}

void* KReplace_Metacast(KReplace* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KReplace_Metacall(KReplace* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KReplace_Tr(const char* s) {
    auto _ret = KReplace::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KReplace_NumReplacements(const KReplace* self) {
    return self->numReplacements();
}

void KReplace_ResetCounts(KReplace* self) {
    self->resetCounts();
}

int KReplace_Replace(KReplace* self) {
    return static_cast<int>(self->replace());
}

QDialog* KReplace_ReplaceNextDialog(KReplace* self) {
    return self->replaceNextDialog();
}

void KReplace_CloseReplaceNextDialog(KReplace* self) {
    self->closeReplaceNextDialog();
}

int KReplace_Replace2(libqt_string text, const libqt_string pattern, const libqt_string replacement, int index, long options, int* replacedLength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QString replacement_QString = QString::fromUtf8(replacement.data, replacement.len);
    return KReplace::replace(text_QString, pattern_QString, replacement_QString, static_cast<int>(index), static_cast<long>(options), static_cast<int*>(replacedLength));
}

bool KReplace_ShouldRestart(const KReplace* self, bool forceAsking, bool showNumMatches) {
    return self->shouldRestart(forceAsking, showNumMatches);
}

void KReplace_DisplayFinalDialog(const KReplace* self) {
    self->displayFinalDialog();
}

void KReplace_TextReplaced(KReplace* self, const libqt_string text, int replacementIndex, int replacedLength, int matchedLength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textReplaced(text_QString, static_cast<int>(replacementIndex), static_cast<int>(replacedLength), static_cast<int>(matchedLength));
}

void KReplace_Connect_TextReplaced(KReplace* self, intptr_t slot) {
    void (*slotFunc)(KReplace*, const char*, int, int, int) = reinterpret_cast<void (*)(KReplace*, const char*, int, int, int)>(slot);
    KReplace::connect(self,
                      static_cast<void (KReplace::*)(const QString&, int, int, int)>(&KReplace::textReplaced),
                      [self, slotFunc](const QString& text, int replacementIndex, int replacedLength, int matchedLength) {
                          const auto text_ret = text;
                          // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                          QByteArray text_b = text_ret.toUtf8();
                          auto text_str_len = text_b.length();
                          const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                          memcpy((void*)text_str, text_b.data(), text_str_len);
                          ((char*)text_str)[text_str_len] = '\0';
                          const char* sigval1 = text_str;
                          int sigval2 = replacementIndex;
                          int sigval3 = replacedLength;
                          int sigval4 = matchedLength;
                          slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                          libqt_free(text_str);
                      });
}

libqt_string KReplace_Tr2(const char* s, const char* c) {
    auto _ret = KReplace::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KReplace_Tr3(const char* s, const char* c, int n) {
    auto _ret = KReplace::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDialog* KReplace_ReplaceNextDialog1(KReplace* self, bool create) {
    return self->replaceNextDialog(create);
}

// Base class handler implementation
QMetaObject* KReplace_SuperMetaObject(const KReplace* self) {
    return (QMetaObject*)self->KReplace::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnMetaObject(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self)))
        vkreplace->kreplace_metaobject_callback = reinterpret_cast<VirtualKReplace::KReplace_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KReplace_SuperMetacast(KReplace* self, const char* param1) {
    return self->KReplace::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnMetacast(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_metacast_callback = reinterpret_cast<VirtualKReplace::KReplace_Metacast_Callback>(slot);
}

// Base class handler implementation
int KReplace_SuperMetacall(KReplace* self, int param1, int param2, void** param3) {
    return self->KReplace::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnMetacall(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_metacall_callback = reinterpret_cast<VirtualKReplace::KReplace_Metacall_Callback>(slot);
}

// Base class handler implementation
void KReplace_SuperResetCounts(KReplace* self) {
    self->KReplace::resetCounts();
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnResetCounts(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_resetcounts_callback = reinterpret_cast<VirtualKReplace::KReplace_ResetCounts_Callback>(slot);
}

// Base class handler implementation
bool KReplace_SuperShouldRestart(const KReplace* self, bool forceAsking, bool showNumMatches) {
    return self->KReplace::shouldRestart(forceAsking, showNumMatches);
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnShouldRestart(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self)))
        vkreplace->kreplace_shouldrestart_callback = reinterpret_cast<VirtualKReplace::KReplace_ShouldRestart_Callback>(slot);
}

// Base class handler implementation
void KReplace_SuperDisplayFinalDialog(const KReplace* self) {
    self->KReplace::displayFinalDialog();
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnDisplayFinalDialog(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self)))
        vkreplace->kreplace_displayfinaldialog_callback = reinterpret_cast<VirtualKReplace::KReplace_DisplayFinalDialog_Callback>(slot);
}

// Derived class handler implementation
void KReplace_SetOptions(KReplace* self, long options) {
    self->setOptions(static_cast<long>(options));
}

// Base class handler implementation
void KReplace_SuperSetOptions(KReplace* self, long options) {
    self->KReplace::setOptions(static_cast<long>(options));
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnSetOptions(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_setoptions_callback = reinterpret_cast<VirtualKReplace::KReplace_SetOptions_Callback>(slot);
}

// Derived class handler implementation
bool KReplace_ValidateMatch(KReplace* self, const libqt_string text, int index, int matchedlength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
}

// Base class handler implementation
bool KReplace_SuperValidateMatch(KReplace* self, const libqt_string text, int index, int matchedlength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->KReplace::validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnValidateMatch(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_validatematch_callback = reinterpret_cast<VirtualKReplace::KReplace_ValidateMatch_Callback>(slot);
}

// Derived class handler implementation
bool KReplace_Event(KReplace* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KReplace_SuperEvent(KReplace* self, QEvent* event) {
    return self->KReplace::event(event);
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnEvent(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_event_callback = reinterpret_cast<VirtualKReplace::KReplace_Event_Callback>(slot);
}

// Derived class handler implementation
bool KReplace_EventFilter(KReplace* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KReplace_SuperEventFilter(KReplace* self, QObject* watched, QEvent* event) {
    return self->KReplace::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnEventFilter(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_eventfilter_callback = reinterpret_cast<VirtualKReplace::KReplace_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KReplace_TimerEvent(KReplace* self, QTimerEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace) {
        vkreplace->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplace::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplace_SuperTimerEvent(KReplace* self, QTimerEvent* event) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self)) {
        vkreplace->KReplace::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplace::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnTimerEvent(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_timerevent_callback = reinterpret_cast<VirtualKReplace::KReplace_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplace_ChildEvent(KReplace* self, QChildEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace) {
        vkreplace->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplace::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplace_SuperChildEvent(KReplace* self, QChildEvent* event) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self)) {
        vkreplace->KReplace::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplace::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnChildEvent(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_childevent_callback = reinterpret_cast<VirtualKReplace::KReplace_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplace_CustomEvent(KReplace* self, QEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace) {
        vkreplace->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplace::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplace_SuperCustomEvent(KReplace* self, QEvent* event) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self)) {
        vkreplace->KReplace::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplace::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnCustomEvent(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_customevent_callback = reinterpret_cast<VirtualKReplace::KReplace_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplace_ConnectNotify(KReplace* self, const QMetaMethod* signal) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace) {
        vkreplace->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KReplace::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplace_SuperConnectNotify(KReplace* self, const QMetaMethod* signal) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self)) {
        vkreplace->KReplace::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KReplace::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnConnectNotify(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_connectnotify_callback = reinterpret_cast<VirtualKReplace::KReplace_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KReplace_DisconnectNotify(KReplace* self, const QMetaMethod* signal) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace) {
        vkreplace->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KReplace::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplace_SuperDisconnectNotify(KReplace* self, const QMetaMethod* signal) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self)) {
        vkreplace->KReplace::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KReplace::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnDisconnectNotify(KReplace* self, intptr_t slot) {
    if (auto* vkreplace = dynamic_cast<VirtualKReplace*>(self))
        vkreplace->kreplace_disconnectnotify_callback = reinterpret_cast<VirtualKReplace::KReplace_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QWidget* KReplace_ParentWidget(const KReplace* self) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self))) {
        return vkreplace->VirtualKReplace::parentWidget();
    } else
        qFatal("Error: Protected method KReplace::parentWidget called without a directly constructed type");
}

// Derived class protected handler implementation
QWidget* KReplace_DialogsParent(const KReplace* self) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self))) {
        return vkreplace->VirtualKReplace::dialogsParent();
    } else
        qFatal("Error: Protected method KReplace::dialogsParent called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KReplace_Sender(const KReplace* self) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self))) {
        return vkreplace->VirtualKReplace::sender();
    } else
        qFatal("Error: Protected method KReplace::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KReplace_SenderSignalIndex(const KReplace* self) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self))) {
        return vkreplace->VirtualKReplace::senderSignalIndex();
    } else
        qFatal("Error: Protected method KReplace::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KReplace_Receivers(const KReplace* self, const char* signal) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self))) {
        return vkreplace->VirtualKReplace::receivers(signal);
    } else
        qFatal("Error: Protected method KReplace::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KReplace_IsSignalConnected(const KReplace* self, const QMetaMethod* signal) {
    if (auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self))) {
        return vkreplace->VirtualKReplace::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KReplace::isSignalConnected called without a directly constructed type");
}

void KReplace_Delete(KReplace* self) {
    delete self;
}
