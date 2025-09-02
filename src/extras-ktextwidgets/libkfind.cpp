#include <KFind>
#include <QChildEvent>
#include <QDialog>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpressionMatch>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFind*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFind_Tr(const char* s) {
    QString _ret = KFind::tr(s);
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
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        self->setOptions(static_cast<long>(options));
    } else {
        ((VirtualKFind*)self)->setOptions(static_cast<long>(options));
    }
}

libqt_string KFind_Pattern(const KFind* self) {
    QString _ret = self->pattern();
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
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        self->resetCounts();
    } else {
        ((VirtualKFind*)self)->resetCounts();
    }
}

bool KFind_ValidateMatch(KFind* self, const libqt_string text, int index, int matchedlength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        return self->validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
    } else {
        return ((VirtualKFind*)self)->validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
    }
}

bool KFind_ShouldRestart(const KFind* self, bool forceAsking, bool showNumMatches) {
    auto* vkfind = dynamic_cast<const VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        return self->shouldRestart(forceAsking, showNumMatches);
    } else {
        return ((VirtualKFind*)self)->shouldRestart(forceAsking, showNumMatches);
    }
}

int KFind_Find2(const libqt_string text, const libqt_string pattern, int index, long options, int* matchedLength, QRegularExpressionMatch* rmatch) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    return KFind::find(text_QString, pattern_QString, static_cast<int>(index), static_cast<long>(options), static_cast<int*>(matchedLength), rmatch);
}

void KFind_DisplayFinalDialog(const KFind* self) {
    auto* vkfind = dynamic_cast<const VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        self->displayFinalDialog();
    } else {
        ((VirtualKFind*)self)->displayFinalDialog();
    }
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
    KFind::connect(self, &KFind::textFound, [self, slotFunc](const QString& text, int matchingIndex, int matchedLength) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
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
    KFind::connect(self, &KFind::textFoundAtId, [self, slotFunc](int id, int matchingIndex, int matchedLength) {
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
    KFind::connect(self, &KFind::findNext, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KFind_OptionsChanged(KFind* self) {
    self->optionsChanged();
}

void KFind_Connect_OptionsChanged(KFind* self, intptr_t slot) {
    void (*slotFunc)(KFind*) = reinterpret_cast<void (*)(KFind*)>(slot);
    KFind::connect(self, &KFind::optionsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KFind_DialogClosed(KFind* self) {
    self->dialogClosed();
}

void KFind_Connect_DialogClosed(KFind* self, intptr_t slot) {
    void (*slotFunc)(KFind*) = reinterpret_cast<void (*)(KFind*)>(slot);
    KFind::connect(self, &KFind::dialogClosed, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KFind_Tr2(const char* s, const char* c) {
    QString _ret = KFind::tr(s, c);
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
    QString _ret = KFind::tr(s, c, static_cast<int>(n));
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
int KFind_QBaseMetacall(KFind* self, int param1, int param2, void** param3) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_Metacall_IsBase(true);
        return vkfind->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFind::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnMetacall(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_Metacall_Callback(reinterpret_cast<VirtualKFind::KFind_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KFind_QBaseSetOptions(KFind* self, long options) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_SetOptions_IsBase(true);
        vkfind->setOptions(static_cast<long>(options));
    } else {
        self->KFind::setOptions(static_cast<long>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnSetOptions(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_SetOptions_Callback(reinterpret_cast<VirtualKFind::KFind_SetOptions_Callback>(slot));
    }
}

// Base class handler implementation
void KFind_QBaseResetCounts(KFind* self) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ResetCounts_IsBase(true);
        vkfind->resetCounts();
    } else {
        self->KFind::resetCounts();
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnResetCounts(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ResetCounts_Callback(reinterpret_cast<VirtualKFind::KFind_ResetCounts_Callback>(slot));
    }
}

// Base class handler implementation
bool KFind_QBaseValidateMatch(KFind* self, const libqt_string text, int index, int matchedlength) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ValidateMatch_IsBase(true);
        return vkfind->validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
    } else {
        return self->KFind::validateMatch(text_QString, static_cast<int>(index), static_cast<int>(matchedlength));
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnValidateMatch(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ValidateMatch_Callback(reinterpret_cast<VirtualKFind::KFind_ValidateMatch_Callback>(slot));
    }
}

// Base class handler implementation
bool KFind_QBaseShouldRestart(const KFind* self, bool forceAsking, bool showNumMatches) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ShouldRestart_IsBase(true);
        return vkfind->shouldRestart(forceAsking, showNumMatches);
    } else {
        return self->KFind::shouldRestart(forceAsking, showNumMatches);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnShouldRestart(const KFind* self, intptr_t slot) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ShouldRestart_Callback(reinterpret_cast<VirtualKFind::KFind_ShouldRestart_Callback>(slot));
    }
}

// Base class handler implementation
void KFind_QBaseDisplayFinalDialog(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_DisplayFinalDialog_IsBase(true);
        vkfind->displayFinalDialog();
    } else {
        self->KFind::displayFinalDialog();
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnDisplayFinalDialog(const KFind* self, intptr_t slot) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_DisplayFinalDialog_Callback(reinterpret_cast<VirtualKFind::KFind_DisplayFinalDialog_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFind_Event(KFind* self, QEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        return vkfind->event(event);
    } else {
        return self->KFind::event(event);
    }
}

// Base class handler implementation
bool KFind_QBaseEvent(KFind* self, QEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_Event_IsBase(true);
        return vkfind->event(event);
    } else {
        return self->KFind::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnEvent(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_Event_Callback(reinterpret_cast<VirtualKFind::KFind_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFind_EventFilter(KFind* self, QObject* watched, QEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        return vkfind->eventFilter(watched, event);
    } else {
        return self->KFind::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFind_QBaseEventFilter(KFind* self, QObject* watched, QEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_EventFilter_IsBase(true);
        return vkfind->eventFilter(watched, event);
    } else {
        return self->KFind::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnEventFilter(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_EventFilter_Callback(reinterpret_cast<VirtualKFind::KFind_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFind_TimerEvent(KFind* self, QTimerEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->timerEvent(event);
    } else {
        ((VirtualKFind*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFind_QBaseTimerEvent(KFind* self, QTimerEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_TimerEvent_IsBase(true);
        vkfind->timerEvent(event);
    } else {
        ((VirtualKFind*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnTimerEvent(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_TimerEvent_Callback(reinterpret_cast<VirtualKFind::KFind_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFind_ChildEvent(KFind* self, QChildEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->childEvent(event);
    } else {
        ((VirtualKFind*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFind_QBaseChildEvent(KFind* self, QChildEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ChildEvent_IsBase(true);
        vkfind->childEvent(event);
    } else {
        ((VirtualKFind*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnChildEvent(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ChildEvent_Callback(reinterpret_cast<VirtualKFind::KFind_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFind_CustomEvent(KFind* self, QEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->customEvent(event);
    } else {
        ((VirtualKFind*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFind_QBaseCustomEvent(KFind* self, QEvent* event) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_CustomEvent_IsBase(true);
        vkfind->customEvent(event);
    } else {
        ((VirtualKFind*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnCustomEvent(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_CustomEvent_Callback(reinterpret_cast<VirtualKFind::KFind_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFind_ConnectNotify(KFind* self, const QMetaMethod* signal) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->connectNotify(*signal);
    } else {
        ((VirtualKFind*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFind_QBaseConnectNotify(KFind* self, const QMetaMethod* signal) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ConnectNotify_IsBase(true);
        vkfind->connectNotify(*signal);
    } else {
        ((VirtualKFind*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnConnectNotify(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ConnectNotify_Callback(reinterpret_cast<VirtualKFind::KFind_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFind_DisconnectNotify(KFind* self, const QMetaMethod* signal) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->disconnectNotify(*signal);
    } else {
        ((VirtualKFind*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFind_QBaseDisconnectNotify(KFind* self, const QMetaMethod* signal) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_DisconnectNotify_IsBase(true);
        vkfind->disconnectNotify(*signal);
    } else {
        ((VirtualKFind*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnDisconnectNotify(KFind* self, intptr_t slot) {
    auto* vkfind = dynamic_cast<VirtualKFind*>(self);
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_DisconnectNotify_Callback(reinterpret_cast<VirtualKFind::KFind_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KFind_ParentWidget(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        return vkfind->parentWidget();
    } else {
        return ((VirtualKFind*)self)->parentWidget();
    }
}

// Base class handler implementation
QWidget* KFind_QBaseParentWidget(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ParentWidget_IsBase(true);
        return vkfind->parentWidget();
    } else {
        return ((VirtualKFind*)self)->parentWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnParentWidget(const KFind* self, intptr_t slot) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_ParentWidget_Callback(reinterpret_cast<VirtualKFind::KFind_ParentWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KFind_DialogsParent(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        return vkfind->dialogsParent();
    } else {
        return ((VirtualKFind*)self)->dialogsParent();
    }
}

// Base class handler implementation
QWidget* KFind_QBaseDialogsParent(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_DialogsParent_IsBase(true);
        return vkfind->dialogsParent();
    } else {
        return ((VirtualKFind*)self)->dialogsParent();
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnDialogsParent(const KFind* self, intptr_t slot) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_DialogsParent_Callback(reinterpret_cast<VirtualKFind::KFind_DialogsParent_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFind_Sender(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        return vkfind->sender();
    } else {
        return ((VirtualKFind*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFind_QBaseSender(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_Sender_IsBase(true);
        return vkfind->sender();
    } else {
        return ((VirtualKFind*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnSender(const KFind* self, intptr_t slot) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_Sender_Callback(reinterpret_cast<VirtualKFind::KFind_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFind_SenderSignalIndex(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        return vkfind->senderSignalIndex();
    } else {
        return ((VirtualKFind*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFind_QBaseSenderSignalIndex(const KFind* self) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_SenderSignalIndex_IsBase(true);
        return vkfind->senderSignalIndex();
    } else {
        return ((VirtualKFind*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnSenderSignalIndex(const KFind* self, intptr_t slot) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFind::KFind_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFind_Receivers(const KFind* self, const char* signal) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        return vkfind->receivers(signal);
    } else {
        return ((VirtualKFind*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFind_QBaseReceivers(const KFind* self, const char* signal) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_Receivers_IsBase(true);
        return vkfind->receivers(signal);
    } else {
        return ((VirtualKFind*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnReceivers(const KFind* self, intptr_t slot) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_Receivers_Callback(reinterpret_cast<VirtualKFind::KFind_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFind_IsSignalConnected(const KFind* self, const QMetaMethod* signal) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        return vkfind->isSignalConnected(*signal);
    } else {
        return ((VirtualKFind*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFind_QBaseIsSignalConnected(const KFind* self, const QMetaMethod* signal) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_IsSignalConnected_IsBase(true);
        return vkfind->isSignalConnected(*signal);
    } else {
        return ((VirtualKFind*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFind_OnIsSignalConnected(const KFind* self, intptr_t slot) {
    auto* vkfind = const_cast<VirtualKFind*>(dynamic_cast<const VirtualKFind*>(self));
    if (vkfind && vkfind->isVirtualKFind) {
        vkfind->setKFind_IsSignalConnected_Callback(reinterpret_cast<VirtualKFind::KFind_IsSignalConnected_Callback>(slot));
    }
}

void KFind_Delete(KFind* self) {
    delete self;
}
