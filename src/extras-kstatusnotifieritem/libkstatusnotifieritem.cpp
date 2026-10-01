#include <KStatusNotifierItem>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QTimerEvent>
#include <QWindow>
#include <kstatusnotifieritem.h>
#include "libkstatusnotifieritem.h"
#include "libkstatusnotifieritem.hxx"

KStatusNotifierItem* KStatusNotifierItem_new() {
    return new VirtualKStatusNotifierItem();
}

KStatusNotifierItem* KStatusNotifierItem_new2(const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new VirtualKStatusNotifierItem(id_QString);
}

KStatusNotifierItem* KStatusNotifierItem_new3(QObject* parent) {
    return new VirtualKStatusNotifierItem(parent);
}

KStatusNotifierItem* KStatusNotifierItem_new4(const libqt_string id, QObject* parent) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new VirtualKStatusNotifierItem(id_QString, parent);
}

QMetaObject* KStatusNotifierItem_MetaObject(const KStatusNotifierItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* KStatusNotifierItem_Metacast(KStatusNotifierItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KStatusNotifierItem_Metacall(KStatusNotifierItem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KStatusNotifierItem_Tr(const char* s) {
    auto _ret = KStatusNotifierItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStatusNotifierItem_Id(const KStatusNotifierItem* self) {
    auto _ret = self->id();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetCategory(KStatusNotifierItem* self, const int category) {
    self->setCategory(static_cast<const KStatusNotifierItem::ItemCategory>(category));
}

int KStatusNotifierItem_Category(const KStatusNotifierItem* self) {
    return static_cast<int>(self->category());
}

void KStatusNotifierItem_SetTitle(KStatusNotifierItem* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string KStatusNotifierItem_Title(const KStatusNotifierItem* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetStatus(KStatusNotifierItem* self, const int status) {
    self->setStatus(static_cast<const KStatusNotifierItem::ItemStatus>(status));
}

int KStatusNotifierItem_Status(const KStatusNotifierItem* self) {
    return static_cast<int>(self->status());
}

void KStatusNotifierItem_SetIconByName(KStatusNotifierItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setIconByName(name_QString);
}

libqt_string KStatusNotifierItem_IconName(const KStatusNotifierItem* self) {
    auto _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetIconByPixmap(KStatusNotifierItem* self, const QIcon* icon) {
    self->setIconByPixmap(*icon);
}

QIcon* KStatusNotifierItem_IconPixmap(const KStatusNotifierItem* self) {
    return new QIcon(self->iconPixmap());
}

void KStatusNotifierItem_SetOverlayIconByName(KStatusNotifierItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setOverlayIconByName(name_QString);
}

libqt_string KStatusNotifierItem_OverlayIconName(const KStatusNotifierItem* self) {
    auto _ret = self->overlayIconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetOverlayIconByPixmap(KStatusNotifierItem* self, const QIcon* icon) {
    self->setOverlayIconByPixmap(*icon);
}

QIcon* KStatusNotifierItem_OverlayIconPixmap(const KStatusNotifierItem* self) {
    return new QIcon(self->overlayIconPixmap());
}

void KStatusNotifierItem_SetAttentionIconByName(KStatusNotifierItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAttentionIconByName(name_QString);
}

libqt_string KStatusNotifierItem_AttentionIconName(const KStatusNotifierItem* self) {
    auto _ret = self->attentionIconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetAttentionIconByPixmap(KStatusNotifierItem* self, const QIcon* icon) {
    self->setAttentionIconByPixmap(*icon);
}

QIcon* KStatusNotifierItem_AttentionIconPixmap(const KStatusNotifierItem* self) {
    return new QIcon(self->attentionIconPixmap());
}

void KStatusNotifierItem_SetAttentionMovieByName(KStatusNotifierItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAttentionMovieByName(name_QString);
}

libqt_string KStatusNotifierItem_AttentionMovieName(const KStatusNotifierItem* self) {
    auto _ret = self->attentionMovieName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetToolTip(KStatusNotifierItem* self, const libqt_string iconName, const libqt_string title, const libqt_string subTitle) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
    self->setToolTip(iconName_QString, title_QString, subTitle_QString);
}

void KStatusNotifierItem_SetToolTip2(KStatusNotifierItem* self, const QIcon* icon, const libqt_string title, const libqt_string subTitle) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
    self->setToolTip(*icon, title_QString, subTitle_QString);
}

void KStatusNotifierItem_SetToolTipIconByName(KStatusNotifierItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setToolTipIconByName(name_QString);
}

libqt_string KStatusNotifierItem_ToolTipIconName(const KStatusNotifierItem* self) {
    auto _ret = self->toolTipIconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetToolTipIconByPixmap(KStatusNotifierItem* self, const QIcon* icon) {
    self->setToolTipIconByPixmap(*icon);
}

QIcon* KStatusNotifierItem_ToolTipIconPixmap(const KStatusNotifierItem* self) {
    return new QIcon(self->toolTipIconPixmap());
}

void KStatusNotifierItem_SetToolTipTitle(KStatusNotifierItem* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setToolTipTitle(title_QString);
}

libqt_string KStatusNotifierItem_ToolTipTitle(const KStatusNotifierItem* self) {
    auto _ret = self->toolTipTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetToolTipSubTitle(KStatusNotifierItem* self, const libqt_string subTitle) {
    QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
    self->setToolTipSubTitle(subTitle_QString);
}

libqt_string KStatusNotifierItem_ToolTipSubTitle(const KStatusNotifierItem* self) {
    auto _ret = self->toolTipSubTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_SetContextMenu(KStatusNotifierItem* self, QMenu* menu) {
    self->setContextMenu(menu);
}

QMenu* KStatusNotifierItem_ContextMenu(const KStatusNotifierItem* self) {
    return self->contextMenu();
}

void KStatusNotifierItem_SetAssociatedWindow(KStatusNotifierItem* self, QWindow* window) {
    self->setAssociatedWindow(window);
}

QWindow* KStatusNotifierItem_AssociatedWindow(const KStatusNotifierItem* self) {
    return self->associatedWindow();
}

libqt_list /* of QAction* */ KStatusNotifierItem_ActionCollection(const KStatusNotifierItem* self) {
    QList<QAction*> _ret = self->actionCollection();
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

void KStatusNotifierItem_AddAction(KStatusNotifierItem* self, const libqt_string name, QAction* action) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addAction(name_QString, action);
}

void KStatusNotifierItem_RemoveAction(KStatusNotifierItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->removeAction(name_QString);
}

QAction* KStatusNotifierItem_Action(const KStatusNotifierItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->action(name_QString);
}

void KStatusNotifierItem_SetStandardActionsEnabled(KStatusNotifierItem* self, bool enabled) {
    self->setStandardActionsEnabled(enabled);
}

bool KStatusNotifierItem_StandardActionsEnabled(const KStatusNotifierItem* self) {
    return self->standardActionsEnabled();
}

void KStatusNotifierItem_ShowMessage(KStatusNotifierItem* self, const libqt_string title, const libqt_string message, const libqt_string icon) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->showMessage(title_QString, message_QString, icon_QString);
}

libqt_string KStatusNotifierItem_ProvidedToken(const KStatusNotifierItem* self) {
    auto _ret = self->providedToken();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_AbortQuit(KStatusNotifierItem* self) {
    self->abortQuit();
}

void KStatusNotifierItem_Activate(KStatusNotifierItem* self, const QPoint* pos) {
    self->activate(*pos);
}

void KStatusNotifierItem_HideAssociatedWindow(KStatusNotifierItem* self) {
    self->hideAssociatedWindow();
}

void KStatusNotifierItem_ScrollRequested(KStatusNotifierItem* self, int delta, int orientation) {
    self->scrollRequested(static_cast<int>(delta), static_cast<Qt::Orientation>(orientation));
}

void KStatusNotifierItem_Connect_ScrollRequested(KStatusNotifierItem* self, intptr_t slot) {
    void (*slotFunc)(KStatusNotifierItem*, int, int) = reinterpret_cast<void (*)(KStatusNotifierItem*, int, int)>(slot);
    KStatusNotifierItem::connect(self,
                                 static_cast<void (KStatusNotifierItem::*)(int, Qt::Orientation)>(&KStatusNotifierItem::scrollRequested),
                                 [self, slotFunc](int delta, Qt::Orientation orientation) {
                                     int sigval1 = delta;
                                     int sigval2 = static_cast<int>(orientation);
                                     slotFunc(self, sigval1, sigval2);
                                 });
}

void KStatusNotifierItem_ActivateRequested(KStatusNotifierItem* self, bool active, const QPoint* pos) {
    self->activateRequested(active, *pos);
}

void KStatusNotifierItem_Connect_ActivateRequested(KStatusNotifierItem* self, intptr_t slot) {
    void (*slotFunc)(KStatusNotifierItem*, bool, QPoint*) = reinterpret_cast<void (*)(KStatusNotifierItem*, bool, QPoint*)>(slot);
    KStatusNotifierItem::connect(self,
                                 static_cast<void (KStatusNotifierItem::*)(bool, const QPoint&)>(&KStatusNotifierItem::activateRequested),
                                 [self, slotFunc](bool active, const QPoint& pos) {
                                     bool sigval1 = active;
                                     const QPoint& pos_ret = pos;
                                     // Cast returned reference into pointer
                                     QPoint* sigval2 = const_cast<QPoint*>(&pos_ret);
                                     slotFunc(self, sigval1, sigval2);
                                 });
}

void KStatusNotifierItem_SecondaryActivateRequested(KStatusNotifierItem* self, const QPoint* pos) {
    self->secondaryActivateRequested(*pos);
}

void KStatusNotifierItem_Connect_SecondaryActivateRequested(KStatusNotifierItem* self, intptr_t slot) {
    void (*slotFunc)(KStatusNotifierItem*, QPoint*) = reinterpret_cast<void (*)(KStatusNotifierItem*, QPoint*)>(slot);
    KStatusNotifierItem::connect(self,
                                 static_cast<void (KStatusNotifierItem::*)(const QPoint&)>(&KStatusNotifierItem::secondaryActivateRequested),
                                 [self, slotFunc](const QPoint& pos) {
                                     const QPoint& pos_ret = pos;
                                     // Cast returned reference into pointer
                                     QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
                                     slotFunc(self, sigval1);
                                 });
}

void KStatusNotifierItem_QuitRequested(KStatusNotifierItem* self) {
    self->quitRequested();
}

void KStatusNotifierItem_Connect_QuitRequested(KStatusNotifierItem* self, intptr_t slot) {
    void (*slotFunc)(KStatusNotifierItem*) = reinterpret_cast<void (*)(KStatusNotifierItem*)>(slot);
    KStatusNotifierItem::connect(self,
                                 static_cast<void (KStatusNotifierItem::*)()>(&KStatusNotifierItem::quitRequested),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

bool KStatusNotifierItem_EventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem) {
        return vkstatusnotifieritem->eventFilter(watched, event);
    }
    qFatal("Error: Protected method KStatusNotifierItem::eventFilter called without a directly constructed type");
}

libqt_string KStatusNotifierItem_Tr2(const char* s, const char* c) {
    auto _ret = KStatusNotifierItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStatusNotifierItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = KStatusNotifierItem::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusNotifierItem_ShowMessage4(KStatusNotifierItem* self, const libqt_string title, const libqt_string message, const libqt_string icon, int timeout) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->showMessage(title_QString, message_QString, icon_QString, static_cast<int>(timeout));
}

// Base class handler implementation
QMetaObject* KStatusNotifierItem_SuperMetaObject(const KStatusNotifierItem* self) {
    return (QMetaObject*)self->KStatusNotifierItem::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnMetaObject(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self)))
        vkstatusnotifieritem->kstatusnotifieritem_metaobject_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KStatusNotifierItem_SuperMetacast(KStatusNotifierItem* self, const char* param1) {
    return self->KStatusNotifierItem::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnMetacast(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_metacast_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Metacast_Callback>(slot);
}

// Base class handler implementation
int KStatusNotifierItem_SuperMetacall(KStatusNotifierItem* self, int param1, int param2, void** param3) {
    return self->KStatusNotifierItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnMetacall(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_metacall_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Metacall_Callback>(slot);
}

// Base class handler implementation
void KStatusNotifierItem_SuperActivate(KStatusNotifierItem* self, const QPoint* pos) {
    self->KStatusNotifierItem::activate(*pos);
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnActivate(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_activate_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Activate_Callback>(slot);
}

// Base class handler implementation
bool KStatusNotifierItem_SuperEventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self)) {
        return vkstatusnotifieritem->KStatusNotifierItem::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KStatusNotifierItem::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnEventFilter(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_eventfilter_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KStatusNotifierItem_Event(KStatusNotifierItem* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KStatusNotifierItem_SuperEvent(KStatusNotifierItem* self, QEvent* event) {
    return self->KStatusNotifierItem::event(event);
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnEvent(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_event_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Event_Callback>(slot);
}

// Derived class handler implementation
void KStatusNotifierItem_TimerEvent(KStatusNotifierItem* self, QTimerEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem) {
        vkstatusnotifieritem->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KStatusNotifierItem::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperTimerEvent(KStatusNotifierItem* self, QTimerEvent* event) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self)) {
        vkstatusnotifieritem->KStatusNotifierItem::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KStatusNotifierItem::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnTimerEvent(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_timerevent_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KStatusNotifierItem_ChildEvent(KStatusNotifierItem* self, QChildEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem) {
        vkstatusnotifieritem->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KStatusNotifierItem::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperChildEvent(KStatusNotifierItem* self, QChildEvent* event) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self)) {
        vkstatusnotifieritem->KStatusNotifierItem::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KStatusNotifierItem::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnChildEvent(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_childevent_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KStatusNotifierItem_CustomEvent(KStatusNotifierItem* self, QEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem) {
        vkstatusnotifieritem->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KStatusNotifierItem::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperCustomEvent(KStatusNotifierItem* self, QEvent* event) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self)) {
        vkstatusnotifieritem->KStatusNotifierItem::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KStatusNotifierItem::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnCustomEvent(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_customevent_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KStatusNotifierItem_ConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem) {
        vkstatusnotifieritem->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KStatusNotifierItem::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self)) {
        vkstatusnotifieritem->KStatusNotifierItem::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KStatusNotifierItem::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnConnectNotify(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_connectnotify_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KStatusNotifierItem_DisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem) {
        vkstatusnotifieritem->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KStatusNotifierItem::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperDisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self)) {
        vkstatusnotifieritem->KStatusNotifierItem::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KStatusNotifierItem::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnDisconnectNotify(KStatusNotifierItem* self, intptr_t slot) {
    if (auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self))
        vkstatusnotifieritem->kstatusnotifieritem_disconnectnotify_callback = reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KStatusNotifierItem_Sender(const KStatusNotifierItem* self) {
    if (auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self))) {
        return vkstatusnotifieritem->VirtualKStatusNotifierItem::sender();
    } else
        qFatal("Error: Protected method KStatusNotifierItem::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KStatusNotifierItem_SenderSignalIndex(const KStatusNotifierItem* self) {
    if (auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self))) {
        return vkstatusnotifieritem->VirtualKStatusNotifierItem::senderSignalIndex();
    } else
        qFatal("Error: Protected method KStatusNotifierItem::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KStatusNotifierItem_Receivers(const KStatusNotifierItem* self, const char* signal) {
    if (auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self))) {
        return vkstatusnotifieritem->VirtualKStatusNotifierItem::receivers(signal);
    } else
        qFatal("Error: Protected method KStatusNotifierItem::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KStatusNotifierItem_IsSignalConnected(const KStatusNotifierItem* self, const QMetaMethod* signal) {
    if (auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self))) {
        return vkstatusnotifieritem->VirtualKStatusNotifierItem::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KStatusNotifierItem::isSignalConnected called without a directly constructed type");
}

void KStatusNotifierItem_Delete(KStatusNotifierItem* self) {
    delete self;
}
