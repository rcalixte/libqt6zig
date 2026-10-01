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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSelectAction_Tr(const char* s) {
    auto _ret = KSelectAction::tr(s);
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
    auto _ret = self->currentText();
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
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
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
    return self->removeAction(action);
}

void KSelectAction_InsertAction(KSelectAction* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    KSelectAction::connect(self,
                           static_cast<void (KSelectAction::*)(QAction*)>(&KSelectAction::actionTriggered),
                           [self, slotFunc](QAction* action) {
                               QAction* sigval1 = action;
                               slotFunc(self, sigval1);
                           });
}

void KSelectAction_IndexTriggered(KSelectAction* self, int index) {
    self->indexTriggered(static_cast<int>(index));
}

void KSelectAction_Connect_IndexTriggered(KSelectAction* self, intptr_t slot) {
    void (*slotFunc)(KSelectAction*, int) = reinterpret_cast<void (*)(KSelectAction*, int)>(slot);
    KSelectAction::connect(self,
                           static_cast<void (KSelectAction::*)(int)>(&KSelectAction::indexTriggered),
                           [self, slotFunc](int index) {
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
    KSelectAction::connect(self,
                           static_cast<void (KSelectAction::*)(const QString&)>(&KSelectAction::textTriggered),
                           [self, slotFunc](const QString& text) {
                               const auto text_ret = text;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray text_b = text_ret.toUtf8();
                               auto text_str_len = text_b.length();
                               const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                               memcpy((void*)text_str, text_b.data(), text_str_len);
                               ((char*)text_str)[text_str_len] = '\0';
                               const char* sigval1 = text_str;
                               slotFunc(self, sigval1);
                               libqt_free(text_str);
                           });
}

void KSelectAction_SlotActionTriggered(KSelectAction* self, QAction* action) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        vkselectaction->slotActionTriggered(action);
    }
}

QWidget* KSelectAction_CreateWidget(KSelectAction* self, QWidget* parent) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        return vkselectaction->createWidget(parent);
    }
    qFatal("Error: Protected method KSelectAction::createWidget called without a directly constructed type");
}

void KSelectAction_DeleteWidget(KSelectAction* self, QWidget* widget) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        vkselectaction->deleteWidget(widget);
    }
}

bool KSelectAction_Event(KSelectAction* self, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        return vkselectaction->event(event);
    }
    qFatal("Error: Protected method KSelectAction::event called without a directly constructed type");
}

bool KSelectAction_EventFilter(KSelectAction* self, QObject* watched, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        return vkselectaction->eventFilter(watched, event);
    }
    qFatal("Error: Protected method KSelectAction::eventFilter called without a directly constructed type");
}

libqt_string KSelectAction_Tr2(const char* s, const char* c) {
    auto _ret = KSelectAction::tr(s, c);
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
    auto _ret = KSelectAction::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* KSelectAction_SuperMetaObject(const KSelectAction* self) {
    return (QMetaObject*)self->KSelectAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnMetaObject(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self)))
        vkselectaction->kselectaction_metaobject_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSelectAction_SuperMetacast(KSelectAction* self, const char* param1) {
    return self->KSelectAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnMetacast(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_metacast_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSelectAction_SuperMetacall(KSelectAction* self, int param1, int param2, void** param3) {
    return self->KSelectAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnMetacall(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_metacall_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_Metacall_Callback>(slot);
}

// Base class handler implementation
QAction* KSelectAction_SuperRemoveAction(KSelectAction* self, QAction* action) {
    return self->KSelectAction::removeAction(action);
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnRemoveAction(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_removeaction_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_RemoveAction_Callback>(slot);
}

// Base class handler implementation
void KSelectAction_SuperInsertAction(KSelectAction* self, QAction* before, QAction* action) {
    self->KSelectAction::insertAction(before, action);
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnInsertAction(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_insertaction_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_InsertAction_Callback>(slot);
}

// Base class handler implementation
void KSelectAction_SuperSlotActionTriggered(KSelectAction* self, QAction* action) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        vkselectaction->KSelectAction::slotActionTriggered(action);
    } else
        qFatal("Error: Protected virtual method KSelectAction::slotActionTriggered called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnSlotActionTriggered(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_slotactiontriggered_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_SlotActionTriggered_Callback>(slot);
}

// Base class handler implementation
QWidget* KSelectAction_SuperCreateWidget(KSelectAction* self, QWidget* parent) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        return vkselectaction->KSelectAction::createWidget(parent);
    } else
        qFatal("Error: Protected virtual method KSelectAction::createWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnCreateWidget(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_createwidget_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_CreateWidget_Callback>(slot);
}

// Base class handler implementation
void KSelectAction_SuperDeleteWidget(KSelectAction* self, QWidget* widget) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        vkselectaction->KSelectAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KSelectAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnDeleteWidget(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_deletewidget_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_DeleteWidget_Callback>(slot);
}

// Base class handler implementation
bool KSelectAction_SuperEvent(KSelectAction* self, QEvent* event) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        return vkselectaction->KSelectAction::event(event);
    } else
        qFatal("Error: Protected virtual method KSelectAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnEvent(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_event_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_Event_Callback>(slot);
}

// Base class handler implementation
bool KSelectAction_SuperEventFilter(KSelectAction* self, QObject* watched, QEvent* event) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        return vkselectaction->KSelectAction::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KSelectAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnEventFilter(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_eventfilter_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSelectAction_TimerEvent(KSelectAction* self, QTimerEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        vkselectaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectAction_SuperTimerEvent(KSelectAction* self, QTimerEvent* event) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        vkselectaction->KSelectAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnTimerEvent(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_timerevent_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectAction_ChildEvent(KSelectAction* self, QChildEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        vkselectaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectAction_SuperChildEvent(KSelectAction* self, QChildEvent* event) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        vkselectaction->KSelectAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnChildEvent(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_childevent_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectAction_CustomEvent(KSelectAction* self, QEvent* event) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        vkselectaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectAction_SuperCustomEvent(KSelectAction* self, QEvent* event) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        vkselectaction->KSelectAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnCustomEvent(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_customevent_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectAction_ConnectNotify(KSelectAction* self, const QMetaMethod* signal) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        vkselectaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelectAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectAction_SuperConnectNotify(KSelectAction* self, const QMetaMethod* signal) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        vkselectaction->KSelectAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelectAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnConnectNotify(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_connectnotify_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSelectAction_DisconnectNotify(KSelectAction* self, const QMetaMethod* signal) {
    auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self);
    if (vkselectaction) {
        vkselectaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelectAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectAction_SuperDisconnectNotify(KSelectAction* self, const QMetaMethod* signal) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        vkselectaction->KSelectAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelectAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectAction_OnDisconnectNotify(KSelectAction* self, intptr_t slot) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self))
        vkselectaction->kselectaction_disconnectnotify_callback = reinterpret_cast<VirtualKSelectAction::KSelectAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSelectAction_SlotToggled(KSelectAction* self, bool param1) {
    if (auto* vkselectaction = dynamic_cast<VirtualKSelectAction*>(self)) {
        vkselectaction->VirtualKSelectAction::slotToggled(param1);
    } else
        qFatal("Error: Protected method KSelectAction::slotToggled called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KSelectAction_CreatedWidgets(const KSelectAction* self) {
    if (auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self))) {
        QList<QWidget*> _ret = vkselectaction->VirtualKSelectAction::createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KSelectAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSelectAction_Sender(const KSelectAction* self) {
    if (auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self))) {
        return vkselectaction->VirtualKSelectAction::sender();
    } else
        qFatal("Error: Protected method KSelectAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelectAction_SenderSignalIndex(const KSelectAction* self) {
    if (auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self))) {
        return vkselectaction->VirtualKSelectAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSelectAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelectAction_Receivers(const KSelectAction* self, const char* signal) {
    if (auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self))) {
        return vkselectaction->VirtualKSelectAction::receivers(signal);
    } else
        qFatal("Error: Protected method KSelectAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelectAction_IsSignalConnected(const KSelectAction* self, const QMetaMethod* signal) {
    if (auto* vkselectaction = const_cast<VirtualKSelectAction*>(dynamic_cast<const VirtualKSelectAction*>(self))) {
        return vkselectaction->VirtualKSelectAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSelectAction::isSignalConnected called without a directly constructed type");
}

void KSelectAction_Delete(KSelectAction* self) {
    delete self;
}
