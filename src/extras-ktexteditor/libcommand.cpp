#include <KCompletion>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Command
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
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
#include <command.h>
#include "libcommand.h"
#include "libcommand.hxx"

KTextEditor__Command* KTextEditor__Command_new(const libqt_list /* of libqt_string */ cmds) {
    QList<QString> cmds_QList;
    cmds_QList.reserve(cmds.len);
    libqt_string* cmds_arr = static_cast<libqt_string*>(cmds.data);
    for (size_t i = 0; i < cmds.len; ++i) {
        QString cmds_arr_i_QString = QString::fromUtf8(cmds_arr[i].data, cmds_arr[i].len);
        cmds_QList.push_back(cmds_arr_i_QString);
    }
    return new VirtualKTextEditorCommand(cmds_QList);
}

KTextEditor__Command* KTextEditor__Command_new2(const libqt_list /* of libqt_string */ cmds, QObject* parent) {
    QList<QString> cmds_QList;
    cmds_QList.reserve(cmds.len);
    libqt_string* cmds_arr = static_cast<libqt_string*>(cmds.data);
    for (size_t i = 0; i < cmds.len; ++i) {
        QString cmds_arr_i_QString = QString::fromUtf8(cmds_arr[i].data, cmds_arr[i].len);
        cmds_QList.push_back(cmds_arr_i_QString);
    }
    return new VirtualKTextEditorCommand(cmds_QList, parent);
}

QMetaObject* KTextEditor__Command_MetaObject(const KTextEditor__Command* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__Command_Metacast(KTextEditor__Command* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__Command_Metacall(KTextEditor__Command* self, int param1, int param2, void** param3) {
    auto* vktexteditor__command = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditor__command && vktexteditor__command->isVirtualKTextEditorCommand) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEditorCommand*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEditor__Command_Tr(const char* s) {
    QString _ret = KTextEditor::Command::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KTextEditor__Command_Cmds(const KTextEditor__Command* self) {
    const QList<QString>& _ret = self->cmds();
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

bool KTextEditor__Command_SupportsRange(KTextEditor__Command* self, const libqt_string cmd) {
    QString cmd_QString = QString::fromUtf8(cmd.data, cmd.len);
    auto* vktexteditor__command = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditor__command && vktexteditor__command->isVirtualKTextEditorCommand) {
        return self->supportsRange(cmd_QString);
    } else {
        return ((VirtualKTextEditorCommand*)self)->supportsRange(cmd_QString);
    }
}

bool KTextEditor__Command_Exec(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmd, libqt_string msg, const KTextEditor__Range* range) {
    QString cmd_QString = QString::fromUtf8(cmd.data, cmd.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    auto* vktexteditor__command = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditor__command && vktexteditor__command->isVirtualKTextEditorCommand) {
        return vktexteditor__command->exec(view, cmd_QString, msg_QString, *range);
    } else {
        return ((VirtualKTextEditorCommand*)self)->exec(view, cmd_QString, msg_QString, *range);
    }
}

bool KTextEditor__Command_Help(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmd, libqt_string msg) {
    QString cmd_QString = QString::fromUtf8(cmd.data, cmd.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    auto* vktexteditor__command = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditor__command && vktexteditor__command->isVirtualKTextEditorCommand) {
        return vktexteditor__command->help(view, cmd_QString, msg_QString);
    } else {
        return ((VirtualKTextEditorCommand*)self)->help(view, cmd_QString, msg_QString);
    }
}

KCompletion* KTextEditor__Command_CompletionObject(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmdname) {
    QString cmdname_QString = QString::fromUtf8(cmdname.data, cmdname.len);
    auto* vktexteditor__command = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditor__command && vktexteditor__command->isVirtualKTextEditorCommand) {
        return self->completionObject(view, cmdname_QString);
    } else {
        return ((VirtualKTextEditorCommand*)self)->completionObject(view, cmdname_QString);
    }
}

bool KTextEditor__Command_WantsToProcessText(KTextEditor__Command* self, const libqt_string cmdname) {
    QString cmdname_QString = QString::fromUtf8(cmdname.data, cmdname.len);
    auto* vktexteditor__command = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditor__command && vktexteditor__command->isVirtualKTextEditorCommand) {
        return self->wantsToProcessText(cmdname_QString);
    } else {
        return ((VirtualKTextEditorCommand*)self)->wantsToProcessText(cmdname_QString);
    }
}

void KTextEditor__Command_ProcessText(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vktexteditor__command = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditor__command && vktexteditor__command->isVirtualKTextEditorCommand) {
        self->processText(view, text_QString);
    } else {
        ((VirtualKTextEditorCommand*)self)->processText(view, text_QString);
    }
}

libqt_string KTextEditor__Command_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::Command::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Command_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::Command::tr(s, c, static_cast<int>(n));
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
int KTextEditor__Command_QBaseMetacall(KTextEditor__Command* self, int param1, int param2, void** param3) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Metacall_IsBase(true);
        return vktexteditorcommand->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEditor::Command::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnMetacall(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Metacall_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEditor__Command_QBaseSupportsRange(KTextEditor__Command* self, const libqt_string cmd) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    QString cmd_QString = QString::fromUtf8(cmd.data, cmd.len);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_SupportsRange_IsBase(true);
        return vktexteditorcommand->supportsRange(cmd_QString);
    } else {
        return self->KTextEditor::Command::supportsRange(cmd_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnSupportsRange(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_SupportsRange_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_SupportsRange_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEditor__Command_QBaseExec(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmd, libqt_string msg, const KTextEditor__Range* range) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    QString cmd_QString = QString::fromUtf8(cmd.data, cmd.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Exec_IsBase(true);
        return vktexteditorcommand->exec(view, cmd_QString, msg_QString, *range);
    } else {
        return ((VirtualKTextEditorCommand*)self)->exec(view, cmd_QString, msg_QString, *range);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnExec(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Exec_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_Exec_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEditor__Command_QBaseHelp(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmd, libqt_string msg) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    QString cmd_QString = QString::fromUtf8(cmd.data, cmd.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Help_IsBase(true);
        return vktexteditorcommand->help(view, cmd_QString, msg_QString);
    } else {
        return ((VirtualKTextEditorCommand*)self)->help(view, cmd_QString, msg_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnHelp(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Help_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_Help_Callback>(slot));
    }
}

// Base class handler implementation
KCompletion* KTextEditor__Command_QBaseCompletionObject(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string cmdname) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    QString cmdname_QString = QString::fromUtf8(cmdname.data, cmdname.len);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_CompletionObject_IsBase(true);
        return vktexteditorcommand->completionObject(view, cmdname_QString);
    } else {
        return self->KTextEditor::Command::completionObject(view, cmdname_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnCompletionObject(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_CompletionObject_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_CompletionObject_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEditor__Command_QBaseWantsToProcessText(KTextEditor__Command* self, const libqt_string cmdname) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    QString cmdname_QString = QString::fromUtf8(cmdname.data, cmdname.len);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_WantsToProcessText_IsBase(true);
        return vktexteditorcommand->wantsToProcessText(cmdname_QString);
    } else {
        return self->KTextEditor::Command::wantsToProcessText(cmdname_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnWantsToProcessText(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_WantsToProcessText_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_WantsToProcessText_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__Command_QBaseProcessText(KTextEditor__Command* self, KTextEditor__View* view, const libqt_string text) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_ProcessText_IsBase(true);
        vktexteditorcommand->processText(view, text_QString);
    } else {
        self->KTextEditor::Command::processText(view, text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnProcessText(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_ProcessText_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_ProcessText_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Command_Event(KTextEditor__Command* self, QEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        return vktexteditorcommand->event(event);
    } else {
        return self->KTextEditor::Command::event(event);
    }
}

// Base class handler implementation
bool KTextEditor__Command_QBaseEvent(KTextEditor__Command* self, QEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Event_IsBase(true);
        return vktexteditorcommand->event(event);
    } else {
        return self->KTextEditor::Command::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnEvent(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Event_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Command_EventFilter(KTextEditor__Command* self, QObject* watched, QEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        return vktexteditorcommand->eventFilter(watched, event);
    } else {
        return self->KTextEditor::Command::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTextEditor__Command_QBaseEventFilter(KTextEditor__Command* self, QObject* watched, QEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_EventFilter_IsBase(true);
        return vktexteditorcommand->eventFilter(watched, event);
    } else {
        return self->KTextEditor::Command::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnEventFilter(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_EventFilter_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Command_TimerEvent(KTextEditor__Command* self, QTimerEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->timerEvent(event);
    } else {
        ((VirtualKTextEditorCommand*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Command_QBaseTimerEvent(KTextEditor__Command* self, QTimerEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_TimerEvent_IsBase(true);
        vktexteditorcommand->timerEvent(event);
    } else {
        ((VirtualKTextEditorCommand*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnTimerEvent(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_TimerEvent_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Command_ChildEvent(KTextEditor__Command* self, QChildEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->childEvent(event);
    } else {
        ((VirtualKTextEditorCommand*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Command_QBaseChildEvent(KTextEditor__Command* self, QChildEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_ChildEvent_IsBase(true);
        vktexteditorcommand->childEvent(event);
    } else {
        ((VirtualKTextEditorCommand*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnChildEvent(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_ChildEvent_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Command_CustomEvent(KTextEditor__Command* self, QEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->customEvent(event);
    } else {
        ((VirtualKTextEditorCommand*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Command_QBaseCustomEvent(KTextEditor__Command* self, QEvent* event) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_CustomEvent_IsBase(true);
        vktexteditorcommand->customEvent(event);
    } else {
        ((VirtualKTextEditorCommand*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnCustomEvent(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_CustomEvent_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Command_ConnectNotify(KTextEditor__Command* self, const QMetaMethod* signal) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorCommand*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__Command_QBaseConnectNotify(KTextEditor__Command* self, const QMetaMethod* signal) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_ConnectNotify_IsBase(true);
        vktexteditorcommand->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorCommand*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnConnectNotify(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Command_DisconnectNotify(KTextEditor__Command* self, const QMetaMethod* signal) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorCommand*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__Command_QBaseDisconnectNotify(KTextEditor__Command* self, const QMetaMethod* signal) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_DisconnectNotify_IsBase(true);
        vktexteditorcommand->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorCommand*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnDisconnectNotify(KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = dynamic_cast<VirtualKTextEditorCommand*>(self);
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEditor__Command_Sender(const KTextEditor__Command* self) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        return vktexteditorcommand->sender();
    } else {
        return ((VirtualKTextEditorCommand*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEditor__Command_QBaseSender(const KTextEditor__Command* self) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Sender_IsBase(true);
        return vktexteditorcommand->sender();
    } else {
        return ((VirtualKTextEditorCommand*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnSender(const KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Sender_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__Command_SenderSignalIndex(const KTextEditor__Command* self) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        return vktexteditorcommand->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorCommand*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEditor__Command_QBaseSenderSignalIndex(const KTextEditor__Command* self) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_SenderSignalIndex_IsBase(true);
        return vktexteditorcommand->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorCommand*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnSenderSignalIndex(const KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__Command_Receivers(const KTextEditor__Command* self, const char* signal) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        return vktexteditorcommand->receivers(signal);
    } else {
        return ((VirtualKTextEditorCommand*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEditor__Command_QBaseReceivers(const KTextEditor__Command* self, const char* signal) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Receivers_IsBase(true);
        return vktexteditorcommand->receivers(signal);
    } else {
        return ((VirtualKTextEditorCommand*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnReceivers(const KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_Receivers_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Command_IsSignalConnected(const KTextEditor__Command* self, const QMetaMethod* signal) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        return vktexteditorcommand->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorCommand*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEditor__Command_QBaseIsSignalConnected(const KTextEditor__Command* self, const QMetaMethod* signal) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_IsSignalConnected_IsBase(true);
        return vktexteditorcommand->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorCommand*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Command_OnIsSignalConnected(const KTextEditor__Command* self, intptr_t slot) {
    auto* vktexteditorcommand = const_cast<VirtualKTextEditorCommand*>(dynamic_cast<const VirtualKTextEditorCommand*>(self));
    if (vktexteditorcommand && vktexteditorcommand->isVirtualKTextEditorCommand) {
        vktexteditorcommand->setKTextEditor__Command_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEditorCommand::KTextEditor__Command_IsSignalConnected_Callback>(slot));
    }
}

void KTextEditor__Command_Delete(KTextEditor__Command* self) {
    delete self;
}
