#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUndoCommand>
#include <QUndoStack>
#include <qundostack.h>
#include "libqundostack.h"
#include "libqundostack.hxx"

QUndoCommand* QUndoCommand_new() {
    return new VirtualQUndoCommand();
}

QUndoCommand* QUndoCommand_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQUndoCommand(text_QString);
}

QUndoCommand* QUndoCommand_new3(QUndoCommand* parent) {
    return new VirtualQUndoCommand(parent);
}

QUndoCommand* QUndoCommand_new4(const libqt_string text, QUndoCommand* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQUndoCommand(text_QString, parent);
}

void QUndoCommand_Undo(QUndoCommand* self) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        self->undo();
    } else {
        ((VirtualQUndoCommand*)self)->undo();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QUndoCommand_OnUndo(QUndoCommand* self, intptr_t slot) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        vqundocommand->setQUndoCommand_Undo_Callback(reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Undo_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QUndoCommand_QBaseUndo(QUndoCommand* self) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        vqundocommand->setQUndoCommand_Undo_IsBase(true);
        vqundocommand->undo();
    } else {
        ((VirtualQUndoCommand*)self)->undo();
    }
}

void QUndoCommand_Redo(QUndoCommand* self) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        self->redo();
    } else {
        ((VirtualQUndoCommand*)self)->redo();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QUndoCommand_OnRedo(QUndoCommand* self, intptr_t slot) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        vqundocommand->setQUndoCommand_Redo_Callback(reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Redo_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QUndoCommand_QBaseRedo(QUndoCommand* self) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        vqundocommand->setQUndoCommand_Redo_IsBase(true);
        vqundocommand->redo();
    } else {
        ((VirtualQUndoCommand*)self)->redo();
    }
}

libqt_string QUndoCommand_Text(const QUndoCommand* self) {
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

libqt_string QUndoCommand_ActionText(const QUndoCommand* self) {
    QString _ret = self->actionText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QUndoCommand_SetText(QUndoCommand* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

bool QUndoCommand_IsObsolete(const QUndoCommand* self) {
    return self->isObsolete();
}

void QUndoCommand_SetObsolete(QUndoCommand* self, bool obsolete) {
    self->setObsolete(obsolete);
}

int QUndoCommand_Id(const QUndoCommand* self) {
    auto* vqundocommand = dynamic_cast<const VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        return self->id();
    } else {
        return ((VirtualQUndoCommand*)self)->id();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QUndoCommand_OnId(const QUndoCommand* self, intptr_t slot) {
    auto* vqundocommand = const_cast<VirtualQUndoCommand*>(dynamic_cast<const VirtualQUndoCommand*>(self));
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        vqundocommand->setQUndoCommand_Id_Callback(reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Id_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QUndoCommand_QBaseId(const QUndoCommand* self) {
    auto* vqundocommand = dynamic_cast<const VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        vqundocommand->setQUndoCommand_Id_IsBase(true);
        return vqundocommand->id();
    } else {
        return ((VirtualQUndoCommand*)self)->id();
    }
}

bool QUndoCommand_MergeWith(QUndoCommand* self, const QUndoCommand* other) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        return self->mergeWith(other);
    } else {
        return ((VirtualQUndoCommand*)self)->mergeWith(other);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QUndoCommand_OnMergeWith(QUndoCommand* self, intptr_t slot) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        vqundocommand->setQUndoCommand_MergeWith_Callback(reinterpret_cast<VirtualQUndoCommand::QUndoCommand_MergeWith_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QUndoCommand_QBaseMergeWith(QUndoCommand* self, const QUndoCommand* other) {
    auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
    if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
        vqundocommand->setQUndoCommand_MergeWith_IsBase(true);
        return vqundocommand->mergeWith(other);
    } else {
        return ((VirtualQUndoCommand*)self)->mergeWith(other);
    }
}

int QUndoCommand_ChildCount(const QUndoCommand* self) {
    return self->childCount();
}

QUndoCommand* QUndoCommand_Child(const QUndoCommand* self, int index) {
    return (QUndoCommand*)self->child(static_cast<int>(index));
}

void QUndoCommand_Delete(QUndoCommand* self) {
    delete self;
}

QUndoStack* QUndoStack_new() {
    return new VirtualQUndoStack();
}

QUndoStack* QUndoStack_new2(QObject* parent) {
    return new VirtualQUndoStack(parent);
}

QMetaObject* QUndoStack_MetaObject(const QUndoStack* self) {
    return (QMetaObject*)self->metaObject();
}

void* QUndoStack_Metacast(QUndoStack* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QUndoStack_Metacall(QUndoStack* self, int param1, int param2, void** param3) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQUndoStack*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QUndoStack_OnMetacall(QUndoStack* self, intptr_t slot) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_Metacall_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QUndoStack_QBaseMetacall(QUndoStack* self, int param1, int param2, void** param3) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_Metacall_IsBase(true);
        return vqundostack->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQUndoStack*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QUndoStack_Tr(const char* s) {
    QString _ret = QUndoStack::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QUndoStack_Clear(QUndoStack* self) {
    self->clear();
}

void QUndoStack_Push(QUndoStack* self, QUndoCommand* cmd) {
    self->push(cmd);
}

bool QUndoStack_CanUndo(const QUndoStack* self) {
    return self->canUndo();
}

bool QUndoStack_CanRedo(const QUndoStack* self) {
    return self->canRedo();
}

libqt_string QUndoStack_UndoText(const QUndoStack* self) {
    QString _ret = self->undoText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUndoStack_RedoText(const QUndoStack* self) {
    QString _ret = self->redoText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QUndoStack_Count(const QUndoStack* self) {
    return self->count();
}

int QUndoStack_Index(const QUndoStack* self) {
    return self->index();
}

libqt_string QUndoStack_Text(const QUndoStack* self, int idx) {
    QString _ret = self->text(static_cast<int>(idx));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* QUndoStack_CreateUndoAction(const QUndoStack* self, QObject* parent) {
    return self->createUndoAction(parent);
}

QAction* QUndoStack_CreateRedoAction(const QUndoStack* self, QObject* parent) {
    return self->createRedoAction(parent);
}

bool QUndoStack_IsActive(const QUndoStack* self) {
    return self->isActive();
}

bool QUndoStack_IsClean(const QUndoStack* self) {
    return self->isClean();
}

int QUndoStack_CleanIndex(const QUndoStack* self) {
    return self->cleanIndex();
}

void QUndoStack_BeginMacro(QUndoStack* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->beginMacro(text_QString);
}

void QUndoStack_EndMacro(QUndoStack* self) {
    self->endMacro();
}

void QUndoStack_SetUndoLimit(QUndoStack* self, int limit) {
    self->setUndoLimit(static_cast<int>(limit));
}

int QUndoStack_UndoLimit(const QUndoStack* self) {
    return self->undoLimit();
}

QUndoCommand* QUndoStack_Command(const QUndoStack* self, int index) {
    return (QUndoCommand*)self->command(static_cast<int>(index));
}

void QUndoStack_SetClean(QUndoStack* self) {
    self->setClean();
}

void QUndoStack_ResetClean(QUndoStack* self) {
    self->resetClean();
}

void QUndoStack_SetIndex(QUndoStack* self, int idx) {
    self->setIndex(static_cast<int>(idx));
}

void QUndoStack_Undo(QUndoStack* self) {
    self->undo();
}

void QUndoStack_Redo(QUndoStack* self) {
    self->redo();
}

void QUndoStack_SetActive(QUndoStack* self) {
    self->setActive();
}

void QUndoStack_IndexChanged(QUndoStack* self, int idx) {
    self->indexChanged(static_cast<int>(idx));
}

void QUndoStack_Connect_IndexChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, int) = reinterpret_cast<void (*)(QUndoStack*, int)>(slot);
    QUndoStack::connect(self, &QUndoStack::indexChanged, [self, slotFunc](int idx) {
        int sigval1 = idx;
        slotFunc(self, sigval1);
    });
}

void QUndoStack_CleanChanged(QUndoStack* self, bool clean) {
    self->cleanChanged(clean);
}

void QUndoStack_Connect_CleanChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self, &QUndoStack::cleanChanged, [self, slotFunc](bool clean) {
        bool sigval1 = clean;
        slotFunc(self, sigval1);
    });
}

void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo) {
    self->canUndoChanged(canUndo);
}

void QUndoStack_Connect_CanUndoChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self, &QUndoStack::canUndoChanged, [self, slotFunc](bool canUndo) {
        bool sigval1 = canUndo;
        slotFunc(self, sigval1);
    });
}

void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo) {
    self->canRedoChanged(canRedo);
}

void QUndoStack_Connect_CanRedoChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self, &QUndoStack::canRedoChanged, [self, slotFunc](bool canRedo) {
        bool sigval1 = canRedo;
        slotFunc(self, sigval1);
    });
}

void QUndoStack_UndoTextChanged(QUndoStack* self, const libqt_string undoText) {
    QString undoText_QString = QString::fromUtf8(undoText.data, undoText.len);
    self->undoTextChanged(undoText_QString);
}

void QUndoStack_Connect_UndoTextChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, const char*) = reinterpret_cast<void (*)(QUndoStack*, const char*)>(slot);
    QUndoStack::connect(self, &QUndoStack::undoTextChanged, [self, slotFunc](const QString& undoText) {
        const QString undoText_ret = undoText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray undoText_b = undoText_ret.toUtf8();
        const char* undoText_str = static_cast<const char*>(malloc(undoText_b.length() + 1));
        memcpy((void*)undoText_str, undoText_b.data(), undoText_b.length());
        ((char*)undoText_str)[undoText_b.length()] = '\0';
        const char* sigval1 = undoText_str;
        slotFunc(self, sigval1);
        libqt_free(undoText_str);
    });
}

void QUndoStack_RedoTextChanged(QUndoStack* self, const libqt_string redoText) {
    QString redoText_QString = QString::fromUtf8(redoText.data, redoText.len);
    self->redoTextChanged(redoText_QString);
}

void QUndoStack_Connect_RedoTextChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, const char*) = reinterpret_cast<void (*)(QUndoStack*, const char*)>(slot);
    QUndoStack::connect(self, &QUndoStack::redoTextChanged, [self, slotFunc](const QString& redoText) {
        const QString redoText_ret = redoText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray redoText_b = redoText_ret.toUtf8();
        const char* redoText_str = static_cast<const char*>(malloc(redoText_b.length() + 1));
        memcpy((void*)redoText_str, redoText_b.data(), redoText_b.length());
        ((char*)redoText_str)[redoText_b.length()] = '\0';
        const char* sigval1 = redoText_str;
        slotFunc(self, sigval1);
        libqt_free(redoText_str);
    });
}

libqt_string QUndoStack_Tr2(const char* s, const char* c) {
    QString _ret = QUndoStack::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUndoStack_Tr3(const char* s, const char* c, int n) {
    QString _ret = QUndoStack::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* QUndoStack_CreateUndoAction2(const QUndoStack* self, QObject* parent, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoStack_CreateRedoAction2(const QUndoStack* self, QObject* parent, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    return self->createRedoAction(parent, prefix_QString);
}

void QUndoStack_SetActive1(QUndoStack* self, bool active) {
    self->setActive(active);
}

// Derived class handler implementation
bool QUndoStack_Event(QUndoStack* self, QEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        return vqundostack->event(event);
    } else {
        return self->QUndoStack::event(event);
    }
}

// Base class handler implementation
bool QUndoStack_QBaseEvent(QUndoStack* self, QEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_Event_IsBase(true);
        return vqundostack->event(event);
    } else {
        return self->QUndoStack::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnEvent(QUndoStack* self, intptr_t slot) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_Event_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoStack_EventFilter(QUndoStack* self, QObject* watched, QEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        return vqundostack->eventFilter(watched, event);
    } else {
        return self->QUndoStack::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QUndoStack_QBaseEventFilter(QUndoStack* self, QObject* watched, QEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_EventFilter_IsBase(true);
        return vqundostack->eventFilter(watched, event);
    } else {
        return self->QUndoStack::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnEventFilter(QUndoStack* self, intptr_t slot) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_EventFilter_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoStack_TimerEvent(QUndoStack* self, QTimerEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->timerEvent(event);
    } else {
        ((VirtualQUndoStack*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QUndoStack_QBaseTimerEvent(QUndoStack* self, QTimerEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_TimerEvent_IsBase(true);
        vqundostack->timerEvent(event);
    } else {
        ((VirtualQUndoStack*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnTimerEvent(QUndoStack* self, intptr_t slot) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_TimerEvent_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoStack_ChildEvent(QUndoStack* self, QChildEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->childEvent(event);
    } else {
        ((VirtualQUndoStack*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QUndoStack_QBaseChildEvent(QUndoStack* self, QChildEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_ChildEvent_IsBase(true);
        vqundostack->childEvent(event);
    } else {
        ((VirtualQUndoStack*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnChildEvent(QUndoStack* self, intptr_t slot) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_ChildEvent_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoStack_CustomEvent(QUndoStack* self, QEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->customEvent(event);
    } else {
        ((VirtualQUndoStack*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QUndoStack_QBaseCustomEvent(QUndoStack* self, QEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_CustomEvent_IsBase(true);
        vqundostack->customEvent(event);
    } else {
        ((VirtualQUndoStack*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnCustomEvent(QUndoStack* self, intptr_t slot) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_CustomEvent_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoStack_ConnectNotify(QUndoStack* self, const QMetaMethod* signal) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->connectNotify(*signal);
    } else {
        ((VirtualQUndoStack*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QUndoStack_QBaseConnectNotify(QUndoStack* self, const QMetaMethod* signal) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_ConnectNotify_IsBase(true);
        vqundostack->connectNotify(*signal);
    } else {
        ((VirtualQUndoStack*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnConnectNotify(QUndoStack* self, intptr_t slot) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_ConnectNotify_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoStack_DisconnectNotify(QUndoStack* self, const QMetaMethod* signal) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->disconnectNotify(*signal);
    } else {
        ((VirtualQUndoStack*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QUndoStack_QBaseDisconnectNotify(QUndoStack* self, const QMetaMethod* signal) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_DisconnectNotify_IsBase(true);
        vqundostack->disconnectNotify(*signal);
    } else {
        ((VirtualQUndoStack*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnDisconnectNotify(QUndoStack* self, intptr_t slot) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_DisconnectNotify_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QUndoStack_Sender(const QUndoStack* self) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        return vqundostack->sender();
    } else {
        return ((VirtualQUndoStack*)self)->sender();
    }
}

// Base class handler implementation
QObject* QUndoStack_QBaseSender(const QUndoStack* self) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_Sender_IsBase(true);
        return vqundostack->sender();
    } else {
        return ((VirtualQUndoStack*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnSender(const QUndoStack* self, intptr_t slot) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_Sender_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoStack_SenderSignalIndex(const QUndoStack* self) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        return vqundostack->senderSignalIndex();
    } else {
        return ((VirtualQUndoStack*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QUndoStack_QBaseSenderSignalIndex(const QUndoStack* self) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_SenderSignalIndex_IsBase(true);
        return vqundostack->senderSignalIndex();
    } else {
        return ((VirtualQUndoStack*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnSenderSignalIndex(const QUndoStack* self, intptr_t slot) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_SenderSignalIndex_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoStack_Receivers(const QUndoStack* self, const char* signal) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        return vqundostack->receivers(signal);
    } else {
        return ((VirtualQUndoStack*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QUndoStack_QBaseReceivers(const QUndoStack* self, const char* signal) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_Receivers_IsBase(true);
        return vqundostack->receivers(signal);
    } else {
        return ((VirtualQUndoStack*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnReceivers(const QUndoStack* self, intptr_t slot) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_Receivers_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoStack_IsSignalConnected(const QUndoStack* self, const QMetaMethod* signal) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        return vqundostack->isSignalConnected(*signal);
    } else {
        return ((VirtualQUndoStack*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QUndoStack_QBaseIsSignalConnected(const QUndoStack* self, const QMetaMethod* signal) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_IsSignalConnected_IsBase(true);
        return vqundostack->isSignalConnected(*signal);
    } else {
        return ((VirtualQUndoStack*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnIsSignalConnected(const QUndoStack* self, intptr_t slot) {
    auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self));
    if (vqundostack && vqundostack->isVirtualQUndoStack) {
        vqundostack->setQUndoStack_IsSignalConnected_Callback(reinterpret_cast<VirtualQUndoStack::QUndoStack_IsSignalConnected_Callback>(slot));
    }
}

void QUndoStack_Delete(QUndoStack* self) {
    delete self;
}
