#include <KSelectAction>
#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <kselectaction.h>
#include "libkselectaction.h"
#include "libkselectaction.hxx"

KSelectAction* KSelectAction_new(QObject* parent) {
    return new VirtualKSelectAction(parent);
}

KSelectAction* KSelectAction_new2(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKSelectAction(text_QString, parent);
}

KSelectAction* KSelectAction_new3(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKSelectAction(*icon, text_QString, parent);
}

QMetaObject* KSelectAction_MetaObject(const KSelectAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSelectAction_Metacast(KSelectAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSelectAction_Metacall(KSelectAction* self, int param1, int param2, void** param3) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSelectAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelectAction_OnMetacall(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_Metacall_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KSelectAction_QBaseMetacall(KSelectAction* self, int param1, int param2, void** param3) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_Metacall_IsBase(true);
        return vkselectaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSelectAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSelectAction_Tr(const char* s) {
    QString _ret = KSelectAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KSelectAction_ToolBarMode(const KSelectAction* self) {
    return static_cast<int>(self->toolBarMode());
}

void KSelectAction_SetToolBarMode(KSelectAction* self, int mode) {
    self->setToolBarMode(static_cast<KSelectAction::ToolBarMode>(mode));
}

int KSelectAction_ToolButtonPopupMode(const KSelectAction* self) {
    return static_cast<int>(self->toolButtonPopupMode());
}

void KSelectAction_SetToolButtonPopupMode(KSelectAction* self, int mode) {
    self->setToolButtonPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(mode));
}

QActionGroup* KSelectAction_SelectableActionGroup(const KSelectAction* self) {
    return self->selectableActionGroup();
}

QAction* KSelectAction_CurrentAction(const KSelectAction* self) {
    return self->currentAction();
}

int KSelectAction_CurrentItem(const KSelectAction* self) {
    return self->currentItem();
}

libqt_string KSelectAction_CurrentText(const KSelectAction* self) {
    QString _ret = self->currentText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAction* */ KSelectAction_Actions(const KSelectAction* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAction* KSelectAction_Action(const KSelectAction* self, int index) {
    return self->action(static_cast<int>(index));
}

QAction* KSelectAction_Action2(const KSelectAction* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->action(text_QString);
}

bool KSelectAction_SetCurrentAction(KSelectAction* self, QAction* action) {
    return self->setCurrentAction(action);
}

bool KSelectAction_SetCurrentItem(KSelectAction* self, int index) {
    return self->setCurrentItem(static_cast<int>(index));
}

bool KSelectAction_SetCurrentAction2(KSelectAction* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->setCurrentAction(text_QString);
}

void KSelectAction_AddAction(KSelectAction* self, QAction* action) {
    self->addAction(action);
}

QAction* KSelectAction_AddAction2(KSelectAction* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(text_QString);
}

QAction* KSelectAction_AddAction3(KSelectAction* self, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(*icon, text_QString);
}

QAction* KSelectAction_RemoveAction(KSelectAction* self, QAction* action) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return self->removeAction(action);
    } else {
        return ((VirtualKSelectAction*)self)->removeAction(action);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelectAction_OnRemoveAction(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_RemoveAction_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_RemoveAction_Callback>(slot));
    }
}

// Virtual base class handler implementation
QAction* KSelectAction_QBaseRemoveAction(KSelectAction* self, QAction* action) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_RemoveAction_IsBase(true);
        return vkselectaction->removeAction(action);
    } else {
        return ((VirtualKSelectAction*)self)->removeAction(action);
    }
}

void KSelectAction_InsertAction(KSelectAction* self, QAction* before, QAction* action) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        self->insertAction(before, action);
    } else {
        ((VirtualKSelectAction*)self)->insertAction(before, action);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelectAction_OnInsertAction(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_InsertAction_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_InsertAction_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelectAction_QBaseInsertAction(KSelectAction* self, QAction* before, QAction* action) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_InsertAction_IsBase(true);
        vkselectaction->insertAction(before, action);
    } else {
        ((VirtualKSelectAction*)self)->insertAction(before, action);
    }
}

void KSelectAction_SetItems(KSelectAction* self, const libqt_list /* of libqt_string */ lst) {
    QList<QString> lst_QList;
    lst_QList.reserve(lst.len);
    libqt_string* lst_arr = static_cast<libqt_string*>(lst.data);
    for (size_t i = 0; i < lst.len; ++i) {
        QString lst_arr_i_QString = QString::fromUtf8(lst_arr[i].data, lst_arr[i].len);
        lst_QList.push_back(lst_arr_i_QString);
    }
    self->setItems(lst_QList);
}

libqt_list /* of libqt_string */ KSelectAction_Items(const KSelectAction* self) {
    QList<QString> _ret = self->items();
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

bool KSelectAction_IsEditable(const KSelectAction* self) {
    return self->isEditable();
}

void KSelectAction_SetEditable(KSelectAction* self, bool editable) {
    self->setEditable(editable);
}

int KSelectAction_ComboWidth(const KSelectAction* self) {
    return self->comboWidth();
}

void KSelectAction_SetComboWidth(KSelectAction* self, int width) {
    self->setComboWidth(static_cast<int>(width));
}

void KSelectAction_SetMaxComboViewCount(KSelectAction* self, int n) {
    self->setMaxComboViewCount(static_cast<int>(n));
}

void KSelectAction_Clear(KSelectAction* self) {
    self->clear();
}

void KSelectAction_RemoveAllActions(KSelectAction* self) {
    self->removeAllActions();
}

void KSelectAction_SetMenuAccelsEnabled(KSelectAction* self, bool b) {
    self->setMenuAccelsEnabled(b);
}

bool KSelectAction_MenuAccelsEnabled(const KSelectAction* self) {
    return self->menuAccelsEnabled();
}

void KSelectAction_ChangeItem(KSelectAction* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->changeItem(static_cast<int>(index), text_QString);
}

void KSelectAction_ActionTriggered(KSelectAction* self, QAction* action) {
    self->actionTriggered(action);
}

void KSelectAction_Connect_ActionTriggered(KSelectAction* self, intptr_t slot) {
    void (*slotFunc)(KSelectAction*, QAction*) = reinterpret_cast<void (*)(KSelectAction*, QAction*)>(slot);
    KSelectAction::connect(self, &KSelectAction::actionTriggered, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

void KSelectAction_IndexTriggered(KSelectAction* self, int index) {
    self->indexTriggered(static_cast<int>(index));
}

void KSelectAction_Connect_IndexTriggered(KSelectAction* self, intptr_t slot) {
    void (*slotFunc)(KSelectAction*, int) = reinterpret_cast<void (*)(KSelectAction*, int)>(slot);
    KSelectAction::connect(self, &KSelectAction::indexTriggered, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void KSelectAction_TextTriggered(KSelectAction* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textTriggered(text_QString);
}

void KSelectAction_Connect_TextTriggered(KSelectAction* self, intptr_t slot) {
    void (*slotFunc)(KSelectAction*, const char*) = reinterpret_cast<void (*)(KSelectAction*, const char*)>(slot);
    KSelectAction::connect(self, &KSelectAction::textTriggered, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        slotFunc(self, sigval1);
        libqt_free(text_str);
    });
}

void KSelectAction_SlotActionTriggered(KSelectAction* self, QAction* action) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->slotActionTriggered(action);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelectAction_OnSlotActionTriggered(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_SlotActionTriggered_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_SlotActionTriggered_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelectAction_QBaseSlotActionTriggered(KSelectAction* self, QAction* action) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_SlotActionTriggered_IsBase(true);
        vkselectaction->slotActionTriggered(action);
    }
}

QWidget* KSelectAction_CreateWidget(KSelectAction* self, QWidget* parent) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return vkselectaction->createWidget(parent);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KSelectAction_OnCreateWidget(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_CreateWidget_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_CreateWidget_Callback>(slot));
    }
}

// Virtual base class handler implementation
QWidget* KSelectAction_QBaseCreateWidget(KSelectAction* self, QWidget* parent) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_CreateWidget_IsBase(true);
        return vkselectaction->createWidget(parent);
    }
    return {};
}

void KSelectAction_DeleteWidget(KSelectAction* self, QWidget* widget) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->deleteWidget(widget);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KSelectAction_OnDeleteWidget(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_DeleteWidget_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_DeleteWidget_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KSelectAction_QBaseDeleteWidget(KSelectAction* self, QWidget* widget) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_DeleteWidget_IsBase(true);
        vkselectaction->deleteWidget(widget);
    }
}

bool KSelectAction_Event(KSelectAction* self, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return vkselectaction->event(event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KSelectAction_OnEvent(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_Event_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KSelectAction_QBaseEvent(KSelectAction* self, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_Event_IsBase(true);
        return vkselectaction->event(event);
    }
    return {};
}

bool KSelectAction_EventFilter(KSelectAction* self, QObject* watched, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return vkselectaction->eventFilter(watched, event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KSelectAction_OnEventFilter(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_EventFilter_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_EventFilter_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KSelectAction_QBaseEventFilter(KSelectAction* self, QObject* watched, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_EventFilter_IsBase(true);
        return vkselectaction->eventFilter(watched, event);
    }
    return {};
}

libqt_string KSelectAction_Tr2(const char* s, const char* c) {
    QString _ret = KSelectAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSelectAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSelectAction::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* KSelectAction_Action22(const KSelectAction* self, const libqt_string text, int cs) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->action(text_QString, static_cast<Qt::CaseSensitivity>(cs));
}

bool KSelectAction_SetCurrentAction22(KSelectAction* self, const libqt_string text, int cs) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->setCurrentAction(text_QString, static_cast<Qt::CaseSensitivity>(cs));
}

// Derived class handler implementation
void KSelectAction_TimerEvent(KSelectAction* self, QTimerEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->timerEvent(event);
    } else {
        ((VirtualKSelectAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSelectAction_QBaseTimerEvent(KSelectAction* self, QTimerEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_TimerEvent_IsBase(true);
        vkselectaction->timerEvent(event);
    } else {
        ((VirtualKSelectAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnTimerEvent(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_TimerEvent_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectAction_ChildEvent(KSelectAction* self, QChildEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->childEvent(event);
    } else {
        ((VirtualKSelectAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSelectAction_QBaseChildEvent(KSelectAction* self, QChildEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_ChildEvent_IsBase(true);
        vkselectaction->childEvent(event);
    } else {
        ((VirtualKSelectAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnChildEvent(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_ChildEvent_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectAction_CustomEvent(KSelectAction* self, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->customEvent(event);
    } else {
        ((VirtualKSelectAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSelectAction_QBaseCustomEvent(KSelectAction* self, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_CustomEvent_IsBase(true);
        vkselectaction->customEvent(event);
    } else {
        ((VirtualKSelectAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnCustomEvent(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_CustomEvent_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectAction_ConnectNotify(KSelectAction* self, const QMetaMethod* signal) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->connectNotify(*signal);
    } else {
        ((VirtualKSelectAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSelectAction_QBaseConnectNotify(KSelectAction* self, const QMetaMethod* signal) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_ConnectNotify_IsBase(true);
        vkselectaction->connectNotify(*signal);
    } else {
        ((VirtualKSelectAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnConnectNotify(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_ConnectNotify_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectAction_DisconnectNotify(KSelectAction* self, const QMetaMethod* signal) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->disconnectNotify(*signal);
    } else {
        ((VirtualKSelectAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSelectAction_QBaseDisconnectNotify(KSelectAction* self, const QMetaMethod* signal) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_DisconnectNotify_IsBase(true);
        vkselectaction->disconnectNotify(*signal);
    } else {
        ((VirtualKSelectAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnDisconnectNotify(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSelectAction_SlotToggled(KSelectAction* self, bool param1) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->slotToggled(param1);
    } else {
        ((VirtualKSelectAction*)self)->slotToggled(param1);
    }
}

// Base class handler implementation
void KSelectAction_QBaseSlotToggled(KSelectAction* self, bool param1) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_SlotToggled_IsBase(true);
        vkselectaction->slotToggled(param1);
    } else {
        ((VirtualKSelectAction*)self)->slotToggled(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnSlotToggled(KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_SlotToggled_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_SlotToggled_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KSelectAction_CreatedWidgets(const KSelectAction* self) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        QList<QWidget*> _ret = vkselectaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKSelectAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ KSelectAction_QBaseCreatedWidgets(const KSelectAction* self) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vkselectaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKSelectAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnCreatedWidgets(const KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_CreatedWidgets_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSelectAction_Sender(const KSelectAction* self) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return vkselectaction->sender();
    } else {
        return ((VirtualKSelectAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSelectAction_QBaseSender(const KSelectAction* self) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_Sender_IsBase(true);
        return vkselectaction->sender();
    } else {
        return ((VirtualKSelectAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnSender(const KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_Sender_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectAction_SenderSignalIndex(const KSelectAction* self) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return vkselectaction->senderSignalIndex();
    } else {
        return ((VirtualKSelectAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSelectAction_QBaseSenderSignalIndex(const KSelectAction* self) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_SenderSignalIndex_IsBase(true);
        return vkselectaction->senderSignalIndex();
    } else {
        return ((VirtualKSelectAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnSenderSignalIndex(const KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSelectAction_Receivers(const KSelectAction* self, const char* signal) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return vkselectaction->receivers(signal);
    } else {
        return ((VirtualKSelectAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSelectAction_QBaseReceivers(const KSelectAction* self, const char* signal) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_Receivers_IsBase(true);
        return vkselectaction->receivers(signal);
    } else {
        return ((VirtualKSelectAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnReceivers(const KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_Receivers_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSelectAction_IsSignalConnected(const KSelectAction* self, const QMetaMethod* signal) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        return vkselectaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelectAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSelectAction_QBaseIsSignalConnected(const KSelectAction* self, const QMetaMethod* signal) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_IsSignalConnected_IsBase(true);
        return vkselectaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKSelectAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnIsSignalConnected(const KSelectAction* self, intptr_t slot) {
    auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self));
    if (vkselectaction && vkselectaction->isVirtualKSelectAction) {
        vkselectaction->setKSelectAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKSelectAction::KSelectAction_IsSignalConnected_Callback>(slot));
    }
}

void KSelectAction_Delete(KSelectAction* self) {
    delete self;
}
