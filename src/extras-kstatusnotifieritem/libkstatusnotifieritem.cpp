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
#include <QByteArray>
#include <cstring>
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
    auto* vkstatusnotifieritem = dynamic_cast<const VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKStatusNotifierItem*)self)->metaObject();
    }
}

void* KStatusNotifierItem_Metacast(KStatusNotifierItem* self, const char* param1) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKStatusNotifierItem*)self)->qt_metacast(param1);
    }
}

int KStatusNotifierItem_Metacall(KStatusNotifierItem* self, int param1, int param2, void** param3) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKStatusNotifierItem*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KStatusNotifierItem_Id(const KStatusNotifierItem* self) {
    QString _ret = self->id();
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
    QString _ret = self->title();
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
    QString _ret = self->iconName();
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
    QString _ret = self->overlayIconName();
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
    QString _ret = self->attentionIconName();
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
    QString _ret = self->attentionMovieName();
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
    QString _ret = self->toolTipIconName();
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
    QString _ret = self->toolTipTitle();
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
    QString _ret = self->toolTipSubTitle();
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
    QString _ret = self->providedToken();
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
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        self->activate(*pos);
    } else {
        ((VirtualKStatusNotifierItem*)self)->activate(*pos);
    }
}

void KStatusNotifierItem_HideAssociatedWindow(KStatusNotifierItem* self) {
    self->hideAssociatedWindow();
}

void KStatusNotifierItem_ScrollRequested(KStatusNotifierItem* self, int delta, int orientation) {
    self->scrollRequested(static_cast<int>(delta), static_cast<Qt::Orientation>(orientation));
}

void KStatusNotifierItem_Connect_ScrollRequested(KStatusNotifierItem* self, intptr_t slot) {
    void (*slotFunc)(KStatusNotifierItem*, int, int) = reinterpret_cast<void (*)(KStatusNotifierItem*, int, int)>(slot);
    KStatusNotifierItem::connect(self, &KStatusNotifierItem::scrollRequested, [self, slotFunc](int delta, Qt::Orientation orientation) {
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
    KStatusNotifierItem::connect(self, &KStatusNotifierItem::activateRequested, [self, slotFunc](bool active, const QPoint& pos) {
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
    KStatusNotifierItem::connect(self, &KStatusNotifierItem::secondaryActivateRequested, [self, slotFunc](const QPoint& pos) {
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
    KStatusNotifierItem::connect(self, &KStatusNotifierItem::quitRequested, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool KStatusNotifierItem_EventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return vkstatusnotifieritem->eventFilter(watched, event);
    }
    return {};
}

void KStatusNotifierItem_ShowMessage4(KStatusNotifierItem* self, const libqt_string title, const libqt_string message, const libqt_string icon, int timeout) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->showMessage(title_QString, message_QString, icon_QString, static_cast<int>(timeout));
}

// Base class handler implementation
QMetaObject* KStatusNotifierItem_SuperMetaObject(const KStatusNotifierItem* self) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_MetaObject_IsBase(true);
        return (QMetaObject*)vkstatusnotifieritem->metaObject();
    } else {
        return (QMetaObject*)self->KStatusNotifierItem::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnMetaObject(const KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_MetaObject_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KStatusNotifierItem_SuperMetacast(KStatusNotifierItem* self, const char* param1) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Metacast_IsBase(true);
        return vkstatusnotifieritem->qt_metacast(param1);
    } else {
        return self->KStatusNotifierItem::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnMetacast(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Metacast_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KStatusNotifierItem_SuperMetacall(KStatusNotifierItem* self, int param1, int param2, void** param3) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Metacall_IsBase(true);
        return vkstatusnotifieritem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KStatusNotifierItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnMetacall(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Metacall_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperActivate(KStatusNotifierItem* self, const QPoint* pos) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Activate_IsBase(true);
        vkstatusnotifieritem->activate(*pos);
    } else {
        self->KStatusNotifierItem::activate(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnActivate(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Activate_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Activate_Callback>(slot));
    }
}

// Base class handler implementation
bool KStatusNotifierItem_SuperEventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_EventFilter_IsBase(true);
        return vkstatusnotifieritem->eventFilter(watched, event);
    } else {
        return ((VirtualKStatusNotifierItem*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnEventFilter(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_EventFilter_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KStatusNotifierItem_Event(KStatusNotifierItem* self, QEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return vkstatusnotifieritem->event(event);
    } else {
        return self->KStatusNotifierItem::event(event);
    }
}

// Base class handler implementation
bool KStatusNotifierItem_SuperEvent(KStatusNotifierItem* self, QEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Event_IsBase(true);
        return vkstatusnotifieritem->event(event);
    } else {
        return self->KStatusNotifierItem::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnEvent(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Event_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusNotifierItem_TimerEvent(KStatusNotifierItem* self, QTimerEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->timerEvent(event);
    } else {
        ((VirtualKStatusNotifierItem*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperTimerEvent(KStatusNotifierItem* self, QTimerEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_TimerEvent_IsBase(true);
        vkstatusnotifieritem->timerEvent(event);
    } else {
        ((VirtualKStatusNotifierItem*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnTimerEvent(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_TimerEvent_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusNotifierItem_ChildEvent(KStatusNotifierItem* self, QChildEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->childEvent(event);
    } else {
        ((VirtualKStatusNotifierItem*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperChildEvent(KStatusNotifierItem* self, QChildEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_ChildEvent_IsBase(true);
        vkstatusnotifieritem->childEvent(event);
    } else {
        ((VirtualKStatusNotifierItem*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnChildEvent(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_ChildEvent_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusNotifierItem_CustomEvent(KStatusNotifierItem* self, QEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->customEvent(event);
    } else {
        ((VirtualKStatusNotifierItem*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperCustomEvent(KStatusNotifierItem* self, QEvent* event) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_CustomEvent_IsBase(true);
        vkstatusnotifieritem->customEvent(event);
    } else {
        ((VirtualKStatusNotifierItem*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnCustomEvent(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_CustomEvent_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusNotifierItem_ConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->connectNotify(*signal);
    } else {
        ((VirtualKStatusNotifierItem*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_ConnectNotify_IsBase(true);
        vkstatusnotifieritem->connectNotify(*signal);
    } else {
        ((VirtualKStatusNotifierItem*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnConnectNotify(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_ConnectNotify_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KStatusNotifierItem_DisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->disconnectNotify(*signal);
    } else {
        ((VirtualKStatusNotifierItem*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KStatusNotifierItem_SuperDisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_DisconnectNotify_IsBase(true);
        vkstatusnotifieritem->disconnectNotify(*signal);
    } else {
        ((VirtualKStatusNotifierItem*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnDisconnectNotify(KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = dynamic_cast<VirtualKStatusNotifierItem*>(self);
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_DisconnectNotify_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KStatusNotifierItem_Sender(const KStatusNotifierItem* self) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return vkstatusnotifieritem->sender();
    } else {
        return ((VirtualKStatusNotifierItem*)self)->sender();
    }
}

// Base class handler implementation
QObject* KStatusNotifierItem_SuperSender(const KStatusNotifierItem* self) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Sender_IsBase(true);
        return vkstatusnotifieritem->sender();
    } else {
        return ((VirtualKStatusNotifierItem*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnSender(const KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Sender_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KStatusNotifierItem_SenderSignalIndex(const KStatusNotifierItem* self) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return vkstatusnotifieritem->senderSignalIndex();
    } else {
        return ((VirtualKStatusNotifierItem*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KStatusNotifierItem_SuperSenderSignalIndex(const KStatusNotifierItem* self) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_SenderSignalIndex_IsBase(true);
        return vkstatusnotifieritem->senderSignalIndex();
    } else {
        return ((VirtualKStatusNotifierItem*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnSenderSignalIndex(const KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KStatusNotifierItem_Receivers(const KStatusNotifierItem* self, const char* signal) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return vkstatusnotifieritem->receivers(signal);
    } else {
        return ((VirtualKStatusNotifierItem*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KStatusNotifierItem_SuperReceivers(const KStatusNotifierItem* self, const char* signal) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Receivers_IsBase(true);
        return vkstatusnotifieritem->receivers(signal);
    } else {
        return ((VirtualKStatusNotifierItem*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnReceivers(const KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_Receivers_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KStatusNotifierItem_IsSignalConnected(const KStatusNotifierItem* self, const QMetaMethod* signal) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        return vkstatusnotifieritem->isSignalConnected(*signal);
    } else {
        return ((VirtualKStatusNotifierItem*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KStatusNotifierItem_SuperIsSignalConnected(const KStatusNotifierItem* self, const QMetaMethod* signal) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_IsSignalConnected_IsBase(true);
        return vkstatusnotifieritem->isSignalConnected(*signal);
    } else {
        return ((VirtualKStatusNotifierItem*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KStatusNotifierItem_OnIsSignalConnected(const KStatusNotifierItem* self, intptr_t slot) {
    auto* vkstatusnotifieritem = const_cast<VirtualKStatusNotifierItem*>(dynamic_cast<const VirtualKStatusNotifierItem*>(self));
    if (vkstatusnotifieritem && vkstatusnotifieritem->isVirtualKStatusNotifierItem) {
        vkstatusnotifieritem->setKStatusNotifierItem_IsSignalConnected_Callback(reinterpret_cast<VirtualKStatusNotifierItem::KStatusNotifierItem_IsSignalConnected_Callback>(slot));
    }
}

void KStatusNotifierItem_Delete(KStatusNotifierItem* self) {
    delete self;
}
