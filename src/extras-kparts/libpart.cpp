#include <KActionCollection>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager
#include <KPluginMetaData>
#include <KXMLGUIClient>
#include <QAction>
#include <QChildEvent>
#include <QDomDocument>
#include <QDomElement>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <part.h>
#include "libpart.h"
#include "libpart.hxx"

KParts__Part* KParts__Part_new() {
    return new VirtualKPartsPart();
}

KParts__Part* KParts__Part_new2(QObject* parent) {
    return new VirtualKPartsPart(parent);
}

KParts__Part* KParts__Part_new3(QObject* parent, const KPluginMetaData* data) {
    return new VirtualKPartsPart(parent, *data);
}

QMetaObject* KParts__Part_MetaObject(const KParts__Part* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__Part_Metacast(KParts__Part* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__Part_Metacall(KParts__Part* self, int param1, int param2, void** param3) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part && vkparts__part->isVirtualKPartsPart) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsPart*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KParts__Part_Tr(const char* s) {
    QString _ret = KParts::Part::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KParts__Part_Widget(KParts__Part* self) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part && vkparts__part->isVirtualKPartsPart) {
        return self->widget();
    } else {
        return ((VirtualKPartsPart*)self)->widget();
    }
}

void KParts__Part_SetManager(KParts__Part* self, KParts__PartManager* manager) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part && vkparts__part->isVirtualKPartsPart) {
        self->setManager(manager);
    } else {
        ((VirtualKPartsPart*)self)->setManager(manager);
    }
}

KParts__PartManager* KParts__Part_Manager(const KParts__Part* self) {
    return self->manager();
}

void KParts__Part_SetAutoDeleteWidget(KParts__Part* self, bool autoDeleteWidget) {
    self->setAutoDeleteWidget(autoDeleteWidget);
}

void KParts__Part_SetAutoDeletePart(KParts__Part* self, bool autoDeletePart) {
    self->setAutoDeletePart(autoDeletePart);
}

KParts__Part* KParts__Part_HitTest(KParts__Part* self, QWidget* widget, const QPoint* globalPos) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part && vkparts__part->isVirtualKPartsPart) {
        return self->hitTest(widget, *globalPos);
    } else {
        return ((VirtualKPartsPart*)self)->hitTest(widget, *globalPos);
    }
}

KPluginMetaData* KParts__Part_MetaData(const KParts__Part* self) {
    return new KPluginMetaData(self->metaData());
}

void KParts__Part_SetWindowCaption(KParts__Part* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setWindowCaption(caption_QString);
}

void KParts__Part_Connect_SetWindowCaption(KParts__Part* self, intptr_t slot) {
    void (*slotFunc)(KParts__Part*, const char*) = reinterpret_cast<void (*)(KParts__Part*, const char*)>(slot);
    KParts::Part::connect(self, &KParts::Part::setWindowCaption, [self, slotFunc](const QString& caption) {
        const QString caption_ret = caption;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray caption_b = caption_ret.toUtf8();
        const char* caption_str = static_cast<const char*>(malloc(caption_b.length() + 1));
        memcpy((void*)caption_str, caption_b.data(), caption_b.length());
        ((char*)caption_str)[caption_b.length()] = '\0';
        const char* sigval1 = caption_str;
        slotFunc(self, sigval1);
        libqt_free(caption_str);
    });
}

void KParts__Part_SetStatusBarText(KParts__Part* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setStatusBarText(text_QString);
}

void KParts__Part_Connect_SetStatusBarText(KParts__Part* self, intptr_t slot) {
    void (*slotFunc)(KParts__Part*, const char*) = reinterpret_cast<void (*)(KParts__Part*, const char*)>(slot);
    KParts::Part::connect(self, &KParts::Part::setStatusBarText, [self, slotFunc](const QString& text) {
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

void KParts__Part_SetWidget(KParts__Part* self, QWidget* widget) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part && vkparts__part->isVirtualKPartsPart) {
        vkparts__part->setWidget(widget);
    }
}

void KParts__Part_CustomEvent(KParts__Part* self, QEvent* event) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part && vkparts__part->isVirtualKPartsPart) {
        vkparts__part->customEvent(event);
    }
}

void KParts__Part_PartActivateEvent(KParts__Part* self, KParts__PartActivateEvent* event) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part && vkparts__part->isVirtualKPartsPart) {
        vkparts__part->partActivateEvent(event);
    }
}

void KParts__Part_GuiActivateEvent(KParts__Part* self, KParts__GUIActivateEvent* event) {
    auto* vkparts__part = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkparts__part && vkparts__part->isVirtualKPartsPart) {
        vkparts__part->guiActivateEvent(event);
    }
}

libqt_string KParts__Part_Tr2(const char* s, const char* c) {
    QString _ret = KParts::Part::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__Part_Tr3(const char* s, const char* c, int n) {
    QString _ret = KParts::Part::tr(s, c, static_cast<int>(n));
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
int KParts__Part_QBaseMetacall(KParts__Part* self, int param1, int param2, void** param3) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Metacall_IsBase(true);
        return vkpartspart->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::Part::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnMetacall(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Metacall_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KParts__Part_QBaseWidget(KParts__Part* self) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Widget_IsBase(true);
        return vkpartspart->widget();
    } else {
        return self->KParts::Part::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnWidget(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Widget_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_Widget_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__Part_QBaseSetManager(KParts__Part* self, KParts__PartManager* manager) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetManager_IsBase(true);
        vkpartspart->setManager(manager);
    } else {
        self->KParts::Part::setManager(manager);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetManager(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetManager_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SetManager_Callback>(slot));
    }
}

// Base class handler implementation
KParts__Part* KParts__Part_QBaseHitTest(KParts__Part* self, QWidget* widget, const QPoint* globalPos) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_HitTest_IsBase(true);
        return vkpartspart->hitTest(widget, *globalPos);
    } else {
        return self->KParts::Part::hitTest(widget, *globalPos);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnHitTest(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_HitTest_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_HitTest_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__Part_QBaseSetWidget(KParts__Part* self, QWidget* widget) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetWidget_IsBase(true);
        vkpartspart->setWidget(widget);
    } else {
        ((VirtualKPartsPart*)self)->setWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetWidget(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetWidget_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SetWidget_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__Part_QBaseCustomEvent(KParts__Part* self, QEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_CustomEvent_IsBase(true);
        vkpartspart->customEvent(event);
    } else {
        ((VirtualKPartsPart*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnCustomEvent(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_CustomEvent_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_CustomEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__Part_QBasePartActivateEvent(KParts__Part* self, KParts__PartActivateEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_PartActivateEvent_IsBase(true);
        vkpartspart->partActivateEvent(event);
    } else {
        ((VirtualKPartsPart*)self)->partActivateEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnPartActivateEvent(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_PartActivateEvent_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_PartActivateEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__Part_QBaseGuiActivateEvent(KParts__Part* self, KParts__GUIActivateEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_GuiActivateEvent_IsBase(true);
        vkpartspart->guiActivateEvent(event);
    } else {
        ((VirtualKPartsPart*)self)->guiActivateEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnGuiActivateEvent(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_GuiActivateEvent_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_GuiActivateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__Part_Event(KParts__Part* self, QEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->event(event);
    } else {
        return self->KParts::Part::event(event);
    }
}

// Base class handler implementation
bool KParts__Part_QBaseEvent(KParts__Part* self, QEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Event_IsBase(true);
        return vkpartspart->event(event);
    } else {
        return self->KParts::Part::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnEvent(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Event_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__Part_EventFilter(KParts__Part* self, QObject* watched, QEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->eventFilter(watched, event);
    } else {
        return self->KParts::Part::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__Part_QBaseEventFilter(KParts__Part* self, QObject* watched, QEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_EventFilter_IsBase(true);
        return vkpartspart->eventFilter(watched, event);
    } else {
        return self->KParts::Part::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnEventFilter(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_EventFilter_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_TimerEvent(KParts__Part* self, QTimerEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->timerEvent(event);
    } else {
        ((VirtualKPartsPart*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__Part_QBaseTimerEvent(KParts__Part* self, QTimerEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_TimerEvent_IsBase(true);
        vkpartspart->timerEvent(event);
    } else {
        ((VirtualKPartsPart*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnTimerEvent(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_TimerEvent_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_ChildEvent(KParts__Part* self, QChildEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->childEvent(event);
    } else {
        ((VirtualKPartsPart*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__Part_QBaseChildEvent(KParts__Part* self, QChildEvent* event) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_ChildEvent_IsBase(true);
        vkpartspart->childEvent(event);
    } else {
        ((VirtualKPartsPart*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnChildEvent(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_ChildEvent_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_ConnectNotify(KParts__Part* self, const QMetaMethod* signal) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->connectNotify(*signal);
    } else {
        ((VirtualKPartsPart*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__Part_QBaseConnectNotify(KParts__Part* self, const QMetaMethod* signal) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_ConnectNotify_IsBase(true);
        vkpartspart->connectNotify(*signal);
    } else {
        ((VirtualKPartsPart*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnConnectNotify(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_DisconnectNotify(KParts__Part* self, const QMetaMethod* signal) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsPart*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__Part_QBaseDisconnectNotify(KParts__Part* self, const QMetaMethod* signal) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_DisconnectNotify_IsBase(true);
        vkpartspart->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsPart*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnDisconnectNotify(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* KParts__Part_Action2(const KParts__Part* self, const QDomElement* element) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->action(*element);
    } else {
        return self->KParts::Part::action(*element);
    }
}

// Base class handler implementation
QAction* KParts__Part_QBaseAction2(const KParts__Part* self, const QDomElement* element) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Action2_IsBase(true);
        return vkpartspart->action(*element);
    } else {
        return self->KParts::Part::action(*element);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnAction2(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Action2_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_Action2_Callback>(slot));
    }
}

// Derived class handler implementation
KActionCollection* KParts__Part_ActionCollection(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->actionCollection();
    } else {
        return self->KParts::Part::actionCollection();
    }
}

// Base class handler implementation
KActionCollection* KParts__Part_QBaseActionCollection(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_ActionCollection_IsBase(true);
        return vkpartspart->actionCollection();
    } else {
        return self->KParts::Part::actionCollection();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnActionCollection(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_ActionCollection_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_ActionCollection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__Part_ComponentName(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        QString _ret = vkpartspart->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::Part::componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__Part_QBaseComponentName(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_ComponentName_IsBase(true);
        QString _ret = vkpartspart->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::Part::componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnComponentName(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_ComponentName_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_ComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
QDomDocument* KParts__Part_DomDocument(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return new QDomDocument(vkpartspart->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsPart*)self)->domDocument());
    }
}

// Base class handler implementation
QDomDocument* KParts__Part_QBaseDomDocument(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_DomDocument_IsBase(true);
        return new QDomDocument(vkpartspart->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsPart*)self)->domDocument());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnDomDocument(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_DomDocument_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_DomDocument_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__Part_XmlFile(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        QString _ret = vkpartspart->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::Part::xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__Part_QBaseXmlFile(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_XmlFile_IsBase(true);
        QString _ret = vkpartspart->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::Part::xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnXmlFile(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_XmlFile_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_XmlFile_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__Part_LocalXMLFile(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        QString _ret = vkpartspart->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::Part::localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__Part_QBaseLocalXMLFile(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_LocalXMLFile_IsBase(true);
        QString _ret = vkpartspart->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::Part::localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnLocalXMLFile(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_LocalXMLFile_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_LocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_SetComponentName(KParts__Part* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsPart*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Base class handler implementation
void KParts__Part_QBaseSetComponentName(KParts__Part* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetComponentName_IsBase(true);
        vkpartspart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsPart*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetComponentName(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetComponentName_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SetComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_SetXMLFile(KParts__Part* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsPart*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Base class handler implementation
void KParts__Part_QBaseSetXMLFile(KParts__Part* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetXMLFile_IsBase(true);
        vkpartspart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsPart*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetXMLFile(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetXMLFile_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SetXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_SetLocalXMLFile(KParts__Part* self, const libqt_string file) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsPart*)self)->setLocalXMLFile(file_QString);
    }
}

// Base class handler implementation
void KParts__Part_QBaseSetLocalXMLFile(KParts__Part* self, const libqt_string file) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetLocalXMLFile_IsBase(true);
        vkpartspart->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsPart*)self)->setLocalXMLFile(file_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetLocalXMLFile(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetLocalXMLFile_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SetLocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_SetXML(KParts__Part* self, const libqt_string document, bool merge) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsPart*)self)->setXML(document_QString, merge);
    }
}

// Base class handler implementation
void KParts__Part_QBaseSetXML(KParts__Part* self, const libqt_string document, bool merge) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetXML_IsBase(true);
        vkpartspart->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsPart*)self)->setXML(document_QString, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetXML(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetXML_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SetXML_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_SetDOMDocument(KParts__Part* self, const QDomDocument* document, bool merge) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsPart*)self)->setDOMDocument(*document, merge);
    }
}

// Base class handler implementation
void KParts__Part_QBaseSetDOMDocument(KParts__Part* self, const QDomDocument* document, bool merge) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetDOMDocument_IsBase(true);
        vkpartspart->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsPart*)self)->setDOMDocument(*document, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSetDOMDocument(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SetDOMDocument_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SetDOMDocument_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_StateChanged(KParts__Part* self, const libqt_string newstate, int reverse) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsPart*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Base class handler implementation
void KParts__Part_QBaseStateChanged(KParts__Part* self, const libqt_string newstate, int reverse) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_StateChanged_IsBase(true);
        vkpartspart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsPart*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnStateChanged(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_StateChanged_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_StateChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KParts__Part_HostContainer(KParts__Part* self, const libqt_string containerName) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->hostContainer(containerName_QString);
    } else {
        return ((VirtualKPartsPart*)self)->hostContainer(containerName_QString);
    }
}

// Base class handler implementation
QWidget* KParts__Part_QBaseHostContainer(KParts__Part* self, const libqt_string containerName) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_HostContainer_IsBase(true);
        return vkpartspart->hostContainer(containerName_QString);
    } else {
        return ((VirtualKPartsPart*)self)->hostContainer(containerName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnHostContainer(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_HostContainer_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_HostContainer_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_SlotWidgetDestroyed(KParts__Part* self) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->slotWidgetDestroyed();
    } else {
        ((VirtualKPartsPart*)self)->slotWidgetDestroyed();
    }
}

// Base class handler implementation
void KParts__Part_QBaseSlotWidgetDestroyed(KParts__Part* self) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SlotWidgetDestroyed_IsBase(true);
        vkpartspart->slotWidgetDestroyed();
    } else {
        ((VirtualKPartsPart*)self)->slotWidgetDestroyed();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSlotWidgetDestroyed(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SlotWidgetDestroyed_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SlotWidgetDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__Part_Sender(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->sender();
    } else {
        return ((VirtualKPartsPart*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__Part_QBaseSender(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Sender_IsBase(true);
        return vkpartspart->sender();
    } else {
        return ((VirtualKPartsPart*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSender(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Sender_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__Part_SenderSignalIndex(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->senderSignalIndex();
    } else {
        return ((VirtualKPartsPart*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__Part_QBaseSenderSignalIndex(const KParts__Part* self) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SenderSignalIndex_IsBase(true);
        return vkpartspart->senderSignalIndex();
    } else {
        return ((VirtualKPartsPart*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnSenderSignalIndex(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__Part_Receivers(const KParts__Part* self, const char* signal) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->receivers(signal);
    } else {
        return ((VirtualKPartsPart*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__Part_QBaseReceivers(const KParts__Part* self, const char* signal) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Receivers_IsBase(true);
        return vkpartspart->receivers(signal);
    } else {
        return ((VirtualKPartsPart*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnReceivers(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_Receivers_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__Part_IsSignalConnected(const KParts__Part* self, const QMetaMethod* signal) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        return vkpartspart->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsPart*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__Part_QBaseIsSignalConnected(const KParts__Part* self, const QMetaMethod* signal) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_IsSignalConnected_IsBase(true);
        return vkpartspart->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsPart*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnIsSignalConnected(const KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = const_cast<VirtualKPartsPart*>(dynamic_cast<const VirtualKPartsPart*>(self));
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__Part_StandardsXmlFileLocation(KParts__Part* self) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        QString _ret = vkpartspart->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsPart*)self)->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KParts__Part_QBaseStandardsXmlFileLocation(KParts__Part* self) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_StandardsXmlFileLocation_IsBase(true);
        QString _ret = vkpartspart->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsPart*)self)->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnStandardsXmlFileLocation(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_StandardsXmlFileLocation_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_StandardsXmlFileLocation_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__Part_LoadStandardsXmlFile(KParts__Part* self) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsPart*)self)->loadStandardsXmlFile();
    }
}

// Base class handler implementation
void KParts__Part_QBaseLoadStandardsXmlFile(KParts__Part* self) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_LoadStandardsXmlFile_IsBase(true);
        vkpartspart->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsPart*)self)->loadStandardsXmlFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__Part_OnLoadStandardsXmlFile(KParts__Part* self, intptr_t slot) {
    auto* vkpartspart = dynamic_cast<VirtualKPartsPart*>(self);
    if (vkpartspart && vkpartspart->isVirtualKPartsPart) {
        vkpartspart->setKParts__Part_LoadStandardsXmlFile_Callback(reinterpret_cast<VirtualKPartsPart::KParts__Part_LoadStandardsXmlFile_Callback>(slot));
    }
}

void KParts__Part_Delete(KParts__Part* self) {
    delete self;
}
