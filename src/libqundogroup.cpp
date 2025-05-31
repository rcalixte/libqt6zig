#include <QAction>
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
#include <QUndoGroup>
#include <QUndoStack>
#include <qundogroup.h>
#include "libqundogroup.h"
#include "libqundogroup.hxx"

QUndoGroup* QUndoGroup_new() {
    return new VirtualQUndoGroup();
}

QUndoGroup* QUndoGroup_new2(QObject* parent) {
    return new VirtualQUndoGroup(parent);
}

QMetaObject* QUndoGroup_MetaObject(const QUndoGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QUndoGroup_Metacast(QUndoGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QUndoGroup_Metacall(QUndoGroup* self, int param1, int param2, void** param3) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQUndoGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QUndoGroup_OnMetacall(QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_Metacall_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QUndoGroup_QBaseMetacall(QUndoGroup* self, int param1, int param2, void** param3) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_Metacall_IsBase(true);
        return vqundogroup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQUndoGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QUndoGroup_Tr(const char* s) {
    QString _ret = QUndoGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QUndoGroup_AddStack(QUndoGroup* self, QUndoStack* stack) {
    self->addStack(stack);
}

void QUndoGroup_RemoveStack(QUndoGroup* self, QUndoStack* stack) {
    self->removeStack(stack);
}

libqt_list /* of QUndoStack* */ QUndoGroup_Stacks(const QUndoGroup* self) {
    QList<QUndoStack*> _ret = self->stacks();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUndoStack** _arr = static_cast<QUndoStack**>(malloc(sizeof(QUndoStack*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QUndoStack* QUndoGroup_ActiveStack(const QUndoGroup* self) {
    return self->activeStack();
}

QAction* QUndoGroup_CreateUndoAction(const QUndoGroup* self, QObject* parent) {
    return self->createUndoAction(parent);
}

QAction* QUndoGroup_CreateRedoAction(const QUndoGroup* self, QObject* parent) {
    return self->createRedoAction(parent);
}

bool QUndoGroup_CanUndo(const QUndoGroup* self) {
    return self->canUndo();
}

bool QUndoGroup_CanRedo(const QUndoGroup* self) {
    return self->canRedo();
}

libqt_string QUndoGroup_UndoText(const QUndoGroup* self) {
    QString _ret = self->undoText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QUndoGroup_RedoText(const QUndoGroup* self) {
    QString _ret = self->redoText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QUndoGroup_IsClean(const QUndoGroup* self) {
    return self->isClean();
}

void QUndoGroup_Undo(QUndoGroup* self) {
    self->undo();
}

void QUndoGroup_Redo(QUndoGroup* self) {
    self->redo();
}

void QUndoGroup_SetActiveStack(QUndoGroup* self, QUndoStack* stack) {
    self->setActiveStack(stack);
}

void QUndoGroup_ActiveStackChanged(QUndoGroup* self, QUndoStack* stack) {
    self->activeStackChanged(stack);
}

void QUndoGroup_Connect_ActiveStackChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, QUndoStack*) = reinterpret_cast<void (*)(QUndoGroup*, QUndoStack*)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::activeStackChanged, [self, slotFunc](QUndoStack* stack) {
        QUndoStack* sigval1 = stack;
        slotFunc(self, sigval1);
    });
}

void QUndoGroup_IndexChanged(QUndoGroup* self, int idx) {
    self->indexChanged(static_cast<int>(idx));
}

void QUndoGroup_Connect_IndexChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, int) = reinterpret_cast<void (*)(QUndoGroup*, int)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::indexChanged, [self, slotFunc](int idx) {
        int sigval1 = idx;
        slotFunc(self, sigval1);
    });
}

void QUndoGroup_CleanChanged(QUndoGroup* self, bool clean) {
    self->cleanChanged(clean);
}

void QUndoGroup_Connect_CleanChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, bool) = reinterpret_cast<void (*)(QUndoGroup*, bool)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::cleanChanged, [self, slotFunc](bool clean) {
        bool sigval1 = clean;
        slotFunc(self, sigval1);
    });
}

void QUndoGroup_CanUndoChanged(QUndoGroup* self, bool canUndo) {
    self->canUndoChanged(canUndo);
}

void QUndoGroup_Connect_CanUndoChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, bool) = reinterpret_cast<void (*)(QUndoGroup*, bool)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::canUndoChanged, [self, slotFunc](bool canUndo) {
        bool sigval1 = canUndo;
        slotFunc(self, sigval1);
    });
}

void QUndoGroup_CanRedoChanged(QUndoGroup* self, bool canRedo) {
    self->canRedoChanged(canRedo);
}

void QUndoGroup_Connect_CanRedoChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, bool) = reinterpret_cast<void (*)(QUndoGroup*, bool)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::canRedoChanged, [self, slotFunc](bool canRedo) {
        bool sigval1 = canRedo;
        slotFunc(self, sigval1);
    });
}

void QUndoGroup_UndoTextChanged(QUndoGroup* self, const libqt_string undoText) {
    QString undoText_QString = QString::fromUtf8(undoText.data, undoText.len);
    self->undoTextChanged(undoText_QString);
}

void QUndoGroup_Connect_UndoTextChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, libqt_string) = reinterpret_cast<void (*)(QUndoGroup*, libqt_string)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::undoTextChanged, [self, slotFunc](const QString& undoText) {
        const QString undoText_ret = undoText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray undoText_b = undoText_ret.toUtf8();
        libqt_string undoText_str;
        undoText_str.len = undoText_b.length();
        undoText_str.data = static_cast<char*>(malloc((undoText_str.len + 1) * sizeof(char)));
        memcpy(undoText_str.data, undoText_b.data(), undoText_str.len);
        undoText_str.data[undoText_str.len] = '\0';
        libqt_string sigval1 = undoText_str;
        slotFunc(self, sigval1);
    });
}

void QUndoGroup_RedoTextChanged(QUndoGroup* self, const libqt_string redoText) {
    QString redoText_QString = QString::fromUtf8(redoText.data, redoText.len);
    self->redoTextChanged(redoText_QString);
}

void QUndoGroup_Connect_RedoTextChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, libqt_string) = reinterpret_cast<void (*)(QUndoGroup*, libqt_string)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::redoTextChanged, [self, slotFunc](const QString& redoText) {
        const QString redoText_ret = redoText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray redoText_b = redoText_ret.toUtf8();
        libqt_string redoText_str;
        redoText_str.len = redoText_b.length();
        redoText_str.data = static_cast<char*>(malloc((redoText_str.len + 1) * sizeof(char)));
        memcpy(redoText_str.data, redoText_b.data(), redoText_str.len);
        redoText_str.data[redoText_str.len] = '\0';
        libqt_string sigval1 = redoText_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QUndoGroup_Tr2(const char* s, const char* c) {
    QString _ret = QUndoGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QUndoGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QUndoGroup::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAction* QUndoGroup_CreateUndoAction2(const QUndoGroup* self, QObject* parent, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoGroup_CreateRedoAction2(const QUndoGroup* self, QObject* parent, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    return self->createRedoAction(parent, prefix_QString);
}

// Derived class handler implementation
bool QUndoGroup_Event(QUndoGroup* self, QEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        return vqundogroup->event(event);
    } else {
        return self->QUndoGroup::event(event);
    }
}

// Base class handler implementation
bool QUndoGroup_QBaseEvent(QUndoGroup* self, QEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_Event_IsBase(true);
        return vqundogroup->event(event);
    } else {
        return self->QUndoGroup::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnEvent(QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_Event_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoGroup_EventFilter(QUndoGroup* self, QObject* watched, QEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        return vqundogroup->eventFilter(watched, event);
    } else {
        return self->QUndoGroup::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QUndoGroup_QBaseEventFilter(QUndoGroup* self, QObject* watched, QEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_EventFilter_IsBase(true);
        return vqundogroup->eventFilter(watched, event);
    } else {
        return self->QUndoGroup::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnEventFilter(QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_EventFilter_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoGroup_TimerEvent(QUndoGroup* self, QTimerEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->timerEvent(event);
    } else {
        ((VirtualQUndoGroup*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QUndoGroup_QBaseTimerEvent(QUndoGroup* self, QTimerEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_TimerEvent_IsBase(true);
        vqundogroup->timerEvent(event);
    } else {
        ((VirtualQUndoGroup*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnTimerEvent(QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_TimerEvent_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoGroup_ChildEvent(QUndoGroup* self, QChildEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->childEvent(event);
    } else {
        ((VirtualQUndoGroup*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QUndoGroup_QBaseChildEvent(QUndoGroup* self, QChildEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_ChildEvent_IsBase(true);
        vqundogroup->childEvent(event);
    } else {
        ((VirtualQUndoGroup*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnChildEvent(QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_ChildEvent_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoGroup_CustomEvent(QUndoGroup* self, QEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->customEvent(event);
    } else {
        ((VirtualQUndoGroup*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QUndoGroup_QBaseCustomEvent(QUndoGroup* self, QEvent* event) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_CustomEvent_IsBase(true);
        vqundogroup->customEvent(event);
    } else {
        ((VirtualQUndoGroup*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnCustomEvent(QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_CustomEvent_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoGroup_ConnectNotify(QUndoGroup* self, const QMetaMethod* signal) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->connectNotify(*signal);
    } else {
        ((VirtualQUndoGroup*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QUndoGroup_QBaseConnectNotify(QUndoGroup* self, const QMetaMethod* signal) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_ConnectNotify_IsBase(true);
        vqundogroup->connectNotify(*signal);
    } else {
        ((VirtualQUndoGroup*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnConnectNotify(QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_ConnectNotify_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoGroup_DisconnectNotify(QUndoGroup* self, const QMetaMethod* signal) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->disconnectNotify(*signal);
    } else {
        ((VirtualQUndoGroup*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QUndoGroup_QBaseDisconnectNotify(QUndoGroup* self, const QMetaMethod* signal) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_DisconnectNotify_IsBase(true);
        vqundogroup->disconnectNotify(*signal);
    } else {
        ((VirtualQUndoGroup*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnDisconnectNotify(QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = dynamic_cast<VirtualQUndoGroup*>(self);
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_DisconnectNotify_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QUndoGroup_Sender(const QUndoGroup* self) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        return vqundogroup->sender();
    } else {
        return ((VirtualQUndoGroup*)self)->sender();
    }
}

// Base class handler implementation
QObject* QUndoGroup_QBaseSender(const QUndoGroup* self) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_Sender_IsBase(true);
        return vqundogroup->sender();
    } else {
        return ((VirtualQUndoGroup*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnSender(const QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_Sender_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoGroup_SenderSignalIndex(const QUndoGroup* self) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        return vqundogroup->senderSignalIndex();
    } else {
        return ((VirtualQUndoGroup*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QUndoGroup_QBaseSenderSignalIndex(const QUndoGroup* self) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_SenderSignalIndex_IsBase(true);
        return vqundogroup->senderSignalIndex();
    } else {
        return ((VirtualQUndoGroup*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnSenderSignalIndex(const QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoGroup_Receivers(const QUndoGroup* self, const char* signal) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        return vqundogroup->receivers(signal);
    } else {
        return ((VirtualQUndoGroup*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QUndoGroup_QBaseReceivers(const QUndoGroup* self, const char* signal) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_Receivers_IsBase(true);
        return vqundogroup->receivers(signal);
    } else {
        return ((VirtualQUndoGroup*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnReceivers(const QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_Receivers_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoGroup_IsSignalConnected(const QUndoGroup* self, const QMetaMethod* signal) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        return vqundogroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQUndoGroup*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QUndoGroup_QBaseIsSignalConnected(const QUndoGroup* self, const QMetaMethod* signal) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_IsSignalConnected_IsBase(true);
        return vqundogroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQUndoGroup*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoGroup_OnIsSignalConnected(const QUndoGroup* self, intptr_t slot) {
    auto* vqundogroup = const_cast<VirtualQUndoGroup*>(dynamic_cast<const VirtualQUndoGroup*>(self));
    if (vqundogroup && vqundogroup->isVirtualQUndoGroup) {
        vqundogroup->setQUndoGroup_IsSignalConnected_Callback(reinterpret_cast<VirtualQUndoGroup::QUndoGroup_IsSignalConnected_Callback>(slot));
    }
}

void QUndoGroup_Delete(QUndoGroup* self) {
    delete self;
}
