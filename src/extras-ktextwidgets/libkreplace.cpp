#include <KFind>
#include <KReplace>
#include <QChildEvent>
#include <QDialog>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKReplace*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KReplace_Tr(const char* s) {
    QString _ret = KReplace::tr(s);
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
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        self->resetCounts();
    } else {
        ((VirtualKReplace*)self)->resetCounts();
    }
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
    auto* vkreplace = dynamic_cast<const VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return self->shouldRestart(forceAsking, showNumMatches);
    } else {
        return ((VirtualKReplace*)self)->shouldRestart(forceAsking, showNumMatches);
    }
}

void KReplace_DisplayFinalDialog(const KReplace* self) {
    auto* vkreplace = dynamic_cast<const VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        self->displayFinalDialog();
    } else {
        ((VirtualKReplace*)self)->displayFinalDialog();
    }
}

void KReplace_TextReplaced(KReplace* self, const libqt_string text, int replacementIndex, int replacedLength, int matchedLength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textReplaced(text_QString, static_cast<int>(replacementIndex), static_cast<int>(replacedLength), static_cast<int>(matchedLength));
}

void KReplace_Connect_TextReplaced(KReplace* self, intptr_t slot) {
    void (*slotFunc)(KReplace*, const char*, int, int, int) = reinterpret_cast<void (*)(KReplace*, const char*, int, int, int)>(slot);
    KReplace::connect(self, &KReplace::textReplaced, [self, slotFunc](const QString& text, int replacementIndex, int replacedLength, int matchedLength) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        int sigval2 = replacementIndex;
        int sigval3 = replacedLength;
        int sigval4 = matchedLength;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
        libqt_free(text_str);
    });
}

libqt_string KReplace_Tr2(const char* s, const char* c) {
    QString _ret = KReplace::tr(s, c);
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
    QString _ret = KReplace::tr(s, c, static_cast<int>(n));
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
int KReplace_QBaseMetacall(KReplace* self, int param1, int param2, void** param3) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_Metacall_IsBase(true);
        return vkreplace->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KReplace::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnMetacall(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_Metacall_Callback(reinterpret_cast<VirtualKReplace::KReplace_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KReplace_QBaseResetCounts(KReplace* self) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ResetCounts_IsBase(true);
        vkreplace->resetCounts();
    } else {
        self->KReplace::resetCounts();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnResetCounts(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ResetCounts_Callback(reinterpret_cast<VirtualKReplace::KReplace_ResetCounts_Callback>(slot));
    }
}

// Base class handler implementation
bool KReplace_QBaseShouldRestart(const KReplace* self, bool forceAsking, bool showNumMatches) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ShouldRestart_IsBase(true);
        return vkreplace->shouldRestart(forceAsking, showNumMatches);
    } else {
        return self->KReplace::shouldRestart(forceAsking, showNumMatches);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnShouldRestart(const KReplace* self, intptr_t slot) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ShouldRestart_Callback(reinterpret_cast<VirtualKReplace::KReplace_ShouldRestart_Callback>(slot));
    }
}

// Base class handler implementation
void KReplace_QBaseDisplayFinalDialog(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_DisplayFinalDialog_IsBase(true);
        vkreplace->displayFinalDialog();
    } else {
        self->KReplace::displayFinalDialog();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnDisplayFinalDialog(const KReplace* self, intptr_t slot) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_DisplayFinalDialog_Callback(reinterpret_cast<VirtualKReplace::KReplace_DisplayFinalDialog_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplace_SetOptions(KReplace* self, long options) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setOptions(static_cast<long>(options));
    } else {
        self->KReplace::setOptions(static_cast<long>(options));
    }
}

// Base class handler implementation
void KReplace_QBaseSetOptions(KReplace* self, long options) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_SetOptions_IsBase(true);
        vkreplace->setOptions(static_cast<long>(options));
    } else {
        self->KReplace::setOptions(static_cast<long>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnSetOptions(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_SetOptions_Callback(reinterpret_cast<VirtualKReplace::KReplace_SetOptions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplace_ValidateMatch(KReplace* self, const libqt_string text, int index, int matchedlength) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
    } else {
        return self->KReplace::validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
    }
}

// Base class handler implementation
bool KReplace_QBaseValidateMatch(KReplace* self, const libqt_string text, int index, int matchedlength) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ValidateMatch_IsBase(true);
        return vkreplace->validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
    } else {
        return self->KReplace::validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnValidateMatch(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ValidateMatch_Callback(reinterpret_cast<VirtualKReplace::KReplace_ValidateMatch_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplace_Event(KReplace* self, QEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->event(event);
    } else {
        return self->KReplace::event(event);
    }
}

// Base class handler implementation
bool KReplace_QBaseEvent(KReplace* self, QEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_Event_IsBase(true);
        return vkreplace->event(event);
    } else {
        return self->KReplace::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnEvent(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_Event_Callback(reinterpret_cast<VirtualKReplace::KReplace_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplace_EventFilter(KReplace* self, QObject* watched, QEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->eventFilter(watched, event);
    } else {
        return self->KReplace::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KReplace_QBaseEventFilter(KReplace* self, QObject* watched, QEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_EventFilter_IsBase(true);
        return vkreplace->eventFilter(watched, event);
    } else {
        return self->KReplace::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnEventFilter(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_EventFilter_Callback(reinterpret_cast<VirtualKReplace::KReplace_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplace_TimerEvent(KReplace* self, QTimerEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->timerEvent(event);
    } else {
        ((VirtualKReplace*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KReplace_QBaseTimerEvent(KReplace* self, QTimerEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_TimerEvent_IsBase(true);
        vkreplace->timerEvent(event);
    } else {
        ((VirtualKReplace*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnTimerEvent(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_TimerEvent_Callback(reinterpret_cast<VirtualKReplace::KReplace_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplace_ChildEvent(KReplace* self, QChildEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->childEvent(event);
    } else {
        ((VirtualKReplace*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KReplace_QBaseChildEvent(KReplace* self, QChildEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ChildEvent_IsBase(true);
        vkreplace->childEvent(event);
    } else {
        ((VirtualKReplace*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnChildEvent(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ChildEvent_Callback(reinterpret_cast<VirtualKReplace::KReplace_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplace_CustomEvent(KReplace* self, QEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->customEvent(event);
    } else {
        ((VirtualKReplace*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KReplace_QBaseCustomEvent(KReplace* self, QEvent* event) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_CustomEvent_IsBase(true);
        vkreplace->customEvent(event);
    } else {
        ((VirtualKReplace*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnCustomEvent(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_CustomEvent_Callback(reinterpret_cast<VirtualKReplace::KReplace_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplace_ConnectNotify(KReplace* self, const QMetaMethod* signal) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->connectNotify(*signal);
    } else {
        ((VirtualKReplace*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KReplace_QBaseConnectNotify(KReplace* self, const QMetaMethod* signal) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ConnectNotify_IsBase(true);
        vkreplace->connectNotify(*signal);
    } else {
        ((VirtualKReplace*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnConnectNotify(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ConnectNotify_Callback(reinterpret_cast<VirtualKReplace::KReplace_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplace_DisconnectNotify(KReplace* self, const QMetaMethod* signal) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->disconnectNotify(*signal);
    } else {
        ((VirtualKReplace*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KReplace_QBaseDisconnectNotify(KReplace* self, const QMetaMethod* signal) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_DisconnectNotify_IsBase(true);
        vkreplace->disconnectNotify(*signal);
    } else {
        ((VirtualKReplace*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnDisconnectNotify(KReplace* self, intptr_t slot) {
    auto* vkreplace = dynamic_cast<VirtualKReplace*>(self);
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_DisconnectNotify_Callback(reinterpret_cast<VirtualKReplace::KReplace_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KReplace_ParentWidget(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->parentWidget();
    } else {
        return ((VirtualKReplace*)self)->parentWidget();
    }
}

// Base class handler implementation
QWidget* KReplace_QBaseParentWidget(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ParentWidget_IsBase(true);
        return vkreplace->parentWidget();
    } else {
        return ((VirtualKReplace*)self)->parentWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnParentWidget(const KReplace* self, intptr_t slot) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_ParentWidget_Callback(reinterpret_cast<VirtualKReplace::KReplace_ParentWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KReplace_DialogsParent(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->dialogsParent();
    } else {
        return ((VirtualKReplace*)self)->dialogsParent();
    }
}

// Base class handler implementation
QWidget* KReplace_QBaseDialogsParent(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_DialogsParent_IsBase(true);
        return vkreplace->dialogsParent();
    } else {
        return ((VirtualKReplace*)self)->dialogsParent();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnDialogsParent(const KReplace* self, intptr_t slot) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_DialogsParent_Callback(reinterpret_cast<VirtualKReplace::KReplace_DialogsParent_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KReplace_Sender(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->sender();
    } else {
        return ((VirtualKReplace*)self)->sender();
    }
}

// Base class handler implementation
QObject* KReplace_QBaseSender(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_Sender_IsBase(true);
        return vkreplace->sender();
    } else {
        return ((VirtualKReplace*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnSender(const KReplace* self, intptr_t slot) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_Sender_Callback(reinterpret_cast<VirtualKReplace::KReplace_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KReplace_SenderSignalIndex(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->senderSignalIndex();
    } else {
        return ((VirtualKReplace*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KReplace_QBaseSenderSignalIndex(const KReplace* self) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_SenderSignalIndex_IsBase(true);
        return vkreplace->senderSignalIndex();
    } else {
        return ((VirtualKReplace*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnSenderSignalIndex(const KReplace* self, intptr_t slot) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_SenderSignalIndex_Callback(reinterpret_cast<VirtualKReplace::KReplace_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KReplace_Receivers(const KReplace* self, const char* signal) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->receivers(signal);
    } else {
        return ((VirtualKReplace*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KReplace_QBaseReceivers(const KReplace* self, const char* signal) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_Receivers_IsBase(true);
        return vkreplace->receivers(signal);
    } else {
        return ((VirtualKReplace*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnReceivers(const KReplace* self, intptr_t slot) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_Receivers_Callback(reinterpret_cast<VirtualKReplace::KReplace_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplace_IsSignalConnected(const KReplace* self, const QMetaMethod* signal) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        return vkreplace->isSignalConnected(*signal);
    } else {
        return ((VirtualKReplace*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KReplace_QBaseIsSignalConnected(const KReplace* self, const QMetaMethod* signal) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_IsSignalConnected_IsBase(true);
        return vkreplace->isSignalConnected(*signal);
    } else {
        return ((VirtualKReplace*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplace_OnIsSignalConnected(const KReplace* self, intptr_t slot) {
    auto* vkreplace = const_cast<VirtualKReplace*>(dynamic_cast<const VirtualKReplace*>(self));
    if (vkreplace && vkreplace->isVirtualKReplace) {
        vkreplace->setKReplace_IsSignalConnected_Callback(reinterpret_cast<VirtualKReplace::KReplace_IsSignalConnected_Callback>(slot));
    }
}

void KReplace_Delete(KReplace* self) {
    delete self;
}
