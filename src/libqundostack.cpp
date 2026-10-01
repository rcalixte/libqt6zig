#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    self->undo();
}

void QUndoCommand_Redo(QUndoCommand* self) {
    self->redo();
}

libqt_string QUndoCommand_Text(const QUndoCommand* self) {
    auto _ret = self->text();
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
    auto _ret = self->actionText();
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
    return self->id();
}

bool QUndoCommand_MergeWith(QUndoCommand* self, const QUndoCommand* other) {
    return self->mergeWith(other);
}

int QUndoCommand_ChildCount(const QUndoCommand* self) {
    return self->childCount();
}

QUndoCommand* QUndoCommand_Child(const QUndoCommand* self, int index) {
    return (QUndoCommand*)self->child(static_cast<int>(index));
}

// Base class handler implementation
void QUndoCommand_SuperUndo(QUndoCommand* self) {
    self->QUndoCommand::undo();
}

// Auxiliary method to allow providing re-implementation
void QUndoCommand_OnUndo(QUndoCommand* self, intptr_t slot) {
    if (auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self))
        vqundocommand->qundocommand_undo_callback = reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Undo_Callback>(slot);
}

// Base class handler implementation
void QUndoCommand_SuperRedo(QUndoCommand* self) {
    self->QUndoCommand::redo();
}

// Auxiliary method to allow providing re-implementation
void QUndoCommand_OnRedo(QUndoCommand* self, intptr_t slot) {
    if (auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self))
        vqundocommand->qundocommand_redo_callback = reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Redo_Callback>(slot);
}

// Base class handler implementation
int QUndoCommand_SuperId(const QUndoCommand* self) {
    return self->QUndoCommand::id();
}

// Auxiliary method to allow providing re-implementation
void QUndoCommand_OnId(QUndoCommand* self, intptr_t slot) {
    if (auto* vqundocommand = const_cast<VirtualQUndoCommand*>(dynamic_cast<const VirtualQUndoCommand*>(self)))
        vqundocommand->qundocommand_id_callback = reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Id_Callback>(slot);
}

// Base class handler implementation
bool QUndoCommand_SuperMergeWith(QUndoCommand* self, const QUndoCommand* other) {
    return self->QUndoCommand::mergeWith(other);
}

// Auxiliary method to allow providing re-implementation
void QUndoCommand_OnMergeWith(QUndoCommand* self, intptr_t slot) {
    if (auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self))
        vqundocommand->qundocommand_mergewith_callback = reinterpret_cast<VirtualQUndoCommand::QUndoCommand_MergeWith_Callback>(slot);
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QUndoStack_Tr(const char* s) {
    auto _ret = QUndoStack::tr(s);
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
    auto _ret = self->undoText();
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
    auto _ret = self->redoText();
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
    auto _ret = self->text(static_cast<int>(idx));
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
    QUndoStack::connect(self,
                        static_cast<void (QUndoStack::*)(int)>(&QUndoStack::indexChanged),
                        [self, slotFunc](int idx) {
                            int sigval1 = idx;
                            slotFunc(self, sigval1);
                        });
}

void QUndoStack_CleanChanged(QUndoStack* self, bool clean) {
    self->cleanChanged(clean);
}

void QUndoStack_Connect_CleanChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self,
                        static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::cleanChanged),
                        [self, slotFunc](bool clean) {
                            bool sigval1 = clean;
                            slotFunc(self, sigval1);
                        });
}

void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo) {
    self->canUndoChanged(canUndo);
}

void QUndoStack_Connect_CanUndoChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self,
                        static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canUndoChanged),
                        [self, slotFunc](bool canUndo) {
                            bool sigval1 = canUndo;
                            slotFunc(self, sigval1);
                        });
}

void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo) {
    self->canRedoChanged(canRedo);
}

void QUndoStack_Connect_CanRedoChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self,
                        static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canRedoChanged),
                        [self, slotFunc](bool canRedo) {
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
    QUndoStack::connect(self,
                        static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::undoTextChanged),
                        [self, slotFunc](const QString& undoText) {
                            const auto undoText_ret = undoText;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray undoText_b = undoText_ret.toUtf8();
                            auto undoText_str_len = undoText_b.length();
                            const char* undoText_str = static_cast<const char*>(malloc(undoText_str_len + 1));
                            memcpy((void*)undoText_str, undoText_b.data(), undoText_str_len);
                            ((char*)undoText_str)[undoText_str_len] = '\0';
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
    QUndoStack::connect(self,
                        static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::redoTextChanged),
                        [self, slotFunc](const QString& redoText) {
                            const auto redoText_ret = redoText;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray redoText_b = redoText_ret.toUtf8();
                            auto redoText_str_len = redoText_b.length();
                            const char* redoText_str = static_cast<const char*>(malloc(redoText_str_len + 1));
                            memcpy((void*)redoText_str, redoText_b.data(), redoText_str_len);
                            ((char*)redoText_str)[redoText_str_len] = '\0';
                            const char* sigval1 = redoText_str;
                            slotFunc(self, sigval1);
                            libqt_free(redoText_str);
                        });
}

libqt_string QUndoStack_Tr2(const char* s, const char* c) {
    auto _ret = QUndoStack::tr(s, c);
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
    auto _ret = QUndoStack::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* QUndoStack_SuperMetaObject(const QUndoStack* self) {
    return (QMetaObject*)self->QUndoStack::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnMetaObject(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self)))
        vqundostack->qundostack_metaobject_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QUndoStack_SuperMetacast(QUndoStack* self, const char* param1) {
    return self->QUndoStack::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnMetacast(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_metacast_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_Metacast_Callback>(slot);
}

// Base class handler implementation
int QUndoStack_SuperMetacall(QUndoStack* self, int param1, int param2, void** param3) {
    return self->QUndoStack::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnMetacall(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_metacall_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QUndoStack_Event(QUndoStack* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QUndoStack_SuperEvent(QUndoStack* self, QEvent* event) {
    return self->QUndoStack::event(event);
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnEvent(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_event_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_Event_Callback>(slot);
}

// Derived class handler implementation
bool QUndoStack_EventFilter(QUndoStack* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QUndoStack_SuperEventFilter(QUndoStack* self, QObject* watched, QEvent* event) {
    return self->QUndoStack::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnEventFilter(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_eventfilter_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QUndoStack_TimerEvent(QUndoStack* self, QTimerEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack) {
        vqundostack->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoStack::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoStack_SuperTimerEvent(QUndoStack* self, QTimerEvent* event) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self)) {
        vqundostack->QUndoStack::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoStack::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnTimerEvent(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_timerevent_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoStack_ChildEvent(QUndoStack* self, QChildEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack) {
        vqundostack->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoStack::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoStack_SuperChildEvent(QUndoStack* self, QChildEvent* event) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self)) {
        vqundostack->QUndoStack::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoStack::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnChildEvent(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_childevent_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoStack_CustomEvent(QUndoStack* self, QEvent* event) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack) {
        vqundostack->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoStack::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoStack_SuperCustomEvent(QUndoStack* self, QEvent* event) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self)) {
        vqundostack->QUndoStack::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoStack::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnCustomEvent(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_customevent_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoStack_ConnectNotify(QUndoStack* self, const QMetaMethod* signal) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack) {
        vqundostack->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QUndoStack::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoStack_SuperConnectNotify(QUndoStack* self, const QMetaMethod* signal) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self)) {
        vqundostack->QUndoStack::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QUndoStack::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnConnectNotify(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_connectnotify_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QUndoStack_DisconnectNotify(QUndoStack* self, const QMetaMethod* signal) {
    auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self);
    if (vqundostack) {
        vqundostack->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QUndoStack::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoStack_SuperDisconnectNotify(QUndoStack* self, const QMetaMethod* signal) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self)) {
        vqundostack->QUndoStack::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QUndoStack::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoStack_OnDisconnectNotify(QUndoStack* self, intptr_t slot) {
    if (auto* vqundostack = dynamic_cast<VirtualQUndoStack*>(self))
        vqundostack->qundostack_disconnectnotify_callback = reinterpret_cast<VirtualQUndoStack::QUndoStack_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QUndoStack_Sender(const QUndoStack* self) {
    if (auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self))) {
        return vqundostack->VirtualQUndoStack::sender();
    } else
        qFatal("Error: Protected method QUndoStack::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QUndoStack_SenderSignalIndex(const QUndoStack* self) {
    if (auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self))) {
        return vqundostack->VirtualQUndoStack::senderSignalIndex();
    } else
        qFatal("Error: Protected method QUndoStack::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QUndoStack_Receivers(const QUndoStack* self, const char* signal) {
    if (auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self))) {
        return vqundostack->VirtualQUndoStack::receivers(signal);
    } else
        qFatal("Error: Protected method QUndoStack::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QUndoStack_IsSignalConnected(const QUndoStack* self, const QMetaMethod* signal) {
    if (auto* vqundostack = const_cast<VirtualQUndoStack*>(dynamic_cast<const VirtualQUndoStack*>(self))) {
        return vqundostack->VirtualQUndoStack::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QUndoStack::isSignalConnected called without a directly constructed type");
}

void QUndoStack_Delete(QUndoStack* self) {
    delete self;
}
