#include <KActionMenu>
#include <KBookmark>
#include <KBookmarkActionInterface>
#include <KBookmarkActionMenu>
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
#include <QWidget>
#include <QWidgetAction>
#include <kbookmarkactionmenu.h>
#include "libkbookmarkactionmenu.h"
#include "libkbookmarkactionmenu.hxx"

KBookmarkActionMenu* KBookmarkActionMenu_new(const KBookmark* bm, QObject* parent) {
    return new VirtualKBookmarkActionMenu(*bm, parent);
}

KBookmarkActionMenu* KBookmarkActionMenu_new2(const KBookmark* bm, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKBookmarkActionMenu(*bm, text_QString, parent);
}

QMetaObject* KBookmarkActionMenu_MetaObject(const KBookmarkActionMenu* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBookmarkActionMenu_Metacast(KBookmarkActionMenu* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBookmarkActionMenu_Metacall(KBookmarkActionMenu* self, int param1, int param2, void** param3) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBookmarkActionMenu_Tr(const char* s) {
    QString _ret = KBookmarkActionMenu::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkActionMenu_Tr2(const char* s, const char* c) {
    QString _ret = KBookmarkActionMenu::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkActionMenu_Tr3(const char* s, const char* c, int n) {
    QString _ret = KBookmarkActionMenu::tr(s, c, static_cast<int>(n));
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
int KBookmarkActionMenu_QBaseMetacall(KBookmarkActionMenu* self, int param1, int param2, void** param3) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_Metacall_IsBase(true);
        return vkbookmarkactionmenu->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KBookmarkActionMenu::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnMetacall(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_Metacall_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KBookmarkActionMenu_CreateWidget(KBookmarkActionMenu* self, QWidget* parent) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        return vkbookmarkactionmenu->createWidget(parent);
    } else {
        return self->KBookmarkActionMenu::createWidget(parent);
    }
}

// Base class handler implementation
QWidget* KBookmarkActionMenu_QBaseCreateWidget(KBookmarkActionMenu* self, QWidget* parent) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_CreateWidget_IsBase(true);
        return vkbookmarkactionmenu->createWidget(parent);
    } else {
        return self->KBookmarkActionMenu::createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnCreateWidget(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_CreateWidget_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkActionMenu_Event(KBookmarkActionMenu* self, QEvent* param1) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        return vkbookmarkactionmenu->event(param1);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->event(param1);
    }
}

// Base class handler implementation
bool KBookmarkActionMenu_QBaseEvent(KBookmarkActionMenu* self, QEvent* param1) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_Event_IsBase(true);
        return vkbookmarkactionmenu->event(param1);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnEvent(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_Event_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkActionMenu_EventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        return vkbookmarkactionmenu->eventFilter(param1, param2);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KBookmarkActionMenu_QBaseEventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_EventFilter_IsBase(true);
        return vkbookmarkactionmenu->eventFilter(param1, param2);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnEventFilter(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_EventFilter_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkActionMenu_DeleteWidget(KBookmarkActionMenu* self, QWidget* widget) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->deleteWidget(widget);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KBookmarkActionMenu_QBaseDeleteWidget(KBookmarkActionMenu* self, QWidget* widget) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_DeleteWidget_IsBase(true);
        vkbookmarkactionmenu->deleteWidget(widget);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnDeleteWidget(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_DeleteWidget_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkActionMenu_TimerEvent(KBookmarkActionMenu* self, QTimerEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->timerEvent(event);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KBookmarkActionMenu_QBaseTimerEvent(KBookmarkActionMenu* self, QTimerEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_TimerEvent_IsBase(true);
        vkbookmarkactionmenu->timerEvent(event);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnTimerEvent(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_TimerEvent_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkActionMenu_ChildEvent(KBookmarkActionMenu* self, QChildEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->childEvent(event);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBookmarkActionMenu_QBaseChildEvent(KBookmarkActionMenu* self, QChildEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_ChildEvent_IsBase(true);
        vkbookmarkactionmenu->childEvent(event);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnChildEvent(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_ChildEvent_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkActionMenu_CustomEvent(KBookmarkActionMenu* self, QEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->customEvent(event);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBookmarkActionMenu_QBaseCustomEvent(KBookmarkActionMenu* self, QEvent* event) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_CustomEvent_IsBase(true);
        vkbookmarkactionmenu->customEvent(event);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnCustomEvent(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_CustomEvent_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkActionMenu_ConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkActionMenu_QBaseConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_ConnectNotify_IsBase(true);
        vkbookmarkactionmenu->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnConnectNotify(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_ConnectNotify_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkActionMenu_DisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkActionMenu_QBaseDisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_DisconnectNotify_IsBase(true);
        vkbookmarkactionmenu->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkActionMenu*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnDisconnectNotify(KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = dynamic_cast<VirtualKBookmarkActionMenu*>(self);
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_DisconnectNotify_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KBookmarkActionMenu_CreatedWidgets(const KBookmarkActionMenu* self) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        QList<QWidget*> _ret = vkbookmarkactionmenu->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKBookmarkActionMenu*)self)->createdWidgets();
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
libqt_list /* of QWidget* */ KBookmarkActionMenu_QBaseCreatedWidgets(const KBookmarkActionMenu* self) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vkbookmarkactionmenu->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKBookmarkActionMenu*)self)->createdWidgets();
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
void KBookmarkActionMenu_OnCreatedWidgets(const KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_CreatedWidgets_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBookmarkActionMenu_Sender(const KBookmarkActionMenu* self) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        return vkbookmarkactionmenu->sender();
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBookmarkActionMenu_QBaseSender(const KBookmarkActionMenu* self) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_Sender_IsBase(true);
        return vkbookmarkactionmenu->sender();
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnSender(const KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_Sender_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkActionMenu_SenderSignalIndex(const KBookmarkActionMenu* self) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        return vkbookmarkactionmenu->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBookmarkActionMenu_QBaseSenderSignalIndex(const KBookmarkActionMenu* self) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_SenderSignalIndex_IsBase(true);
        return vkbookmarkactionmenu->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnSenderSignalIndex(const KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkActionMenu_Receivers(const KBookmarkActionMenu* self, const char* signal) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        return vkbookmarkactionmenu->receivers(signal);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBookmarkActionMenu_QBaseReceivers(const KBookmarkActionMenu* self, const char* signal) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_Receivers_IsBase(true);
        return vkbookmarkactionmenu->receivers(signal);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnReceivers(const KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_Receivers_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkActionMenu_IsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        return vkbookmarkactionmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBookmarkActionMenu_QBaseIsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_IsSignalConnected_IsBase(true);
        return vkbookmarkactionmenu->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkActionMenu*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkActionMenu_OnIsSignalConnected(const KBookmarkActionMenu* self, intptr_t slot) {
    auto* vkbookmarkactionmenu = const_cast<VirtualKBookmarkActionMenu*>(dynamic_cast<const VirtualKBookmarkActionMenu*>(self));
    if (vkbookmarkactionmenu && vkbookmarkactionmenu->isVirtualKBookmarkActionMenu) {
        vkbookmarkactionmenu->setKBookmarkActionMenu_IsSignalConnected_Callback(reinterpret_cast<VirtualKBookmarkActionMenu::KBookmarkActionMenu_IsSignalConnected_Callback>(slot));
    }
}

void KBookmarkActionMenu_Delete(KBookmarkActionMenu* self) {
    delete self;
}
