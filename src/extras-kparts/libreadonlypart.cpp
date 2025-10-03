#include <KActionCollection>
#include <KIO/Job>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__NavigationExtension
#include <KParts/OpenUrlArguments>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartActivateEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <KPluginMetaData>
#include <KXMLGUIClient>
#include <QAction>
#include <QByteArray>
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
#include <QUrl>
#include <QWidget>
#include <readonlypart.h>
#include "libreadonlypart.h"
#include "libreadonlypart.hxx"

KParts__ReadOnlyPart* KParts__ReadOnlyPart_new() {
    return new VirtualKPartsReadOnlyPart();
}

KParts__ReadOnlyPart* KParts__ReadOnlyPart_new2(QObject* parent) {
    return new VirtualKPartsReadOnlyPart(parent);
}

KParts__ReadOnlyPart* KParts__ReadOnlyPart_new3(QObject* parent, const KPluginMetaData* data) {
    return new VirtualKPartsReadOnlyPart(parent, *data);
}

QMetaObject* KParts__ReadOnlyPart_MetaObject(const KParts__ReadOnlyPart* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__ReadOnlyPart_Metacast(KParts__ReadOnlyPart* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__ReadOnlyPart_Metacall(KParts__ReadOnlyPart* self, int param1, int param2, void** param3) {
    auto* vkparts__readonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkparts__readonlypart && vkparts__readonlypart->isVirtualKPartsReadOnlyPart) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KParts__ReadOnlyPart_Tr(const char* s) {
    QString _ret = KParts::ReadOnlyPart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KParts__ReadOnlyPart_SetProgressInfoEnabled(KParts__ReadOnlyPart* self, bool show) {
    self->setProgressInfoEnabled(show);
}

bool KParts__ReadOnlyPart_IsProgressInfoEnabled(const KParts__ReadOnlyPart* self) {
    return self->isProgressInfoEnabled();
}

bool KParts__ReadOnlyPart_OpenUrl(KParts__ReadOnlyPart* self, const QUrl* url) {
    auto* vkparts__readonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkparts__readonlypart && vkparts__readonlypart->isVirtualKPartsReadOnlyPart) {
        return self->openUrl(*url);
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->openUrl(*url);
    }
}

QUrl* KParts__ReadOnlyPart_Url(const KParts__ReadOnlyPart* self) {
    return new QUrl(self->url());
}

bool KParts__ReadOnlyPart_CloseUrl(KParts__ReadOnlyPart* self) {
    auto* vkparts__readonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkparts__readonlypart && vkparts__readonlypart->isVirtualKPartsReadOnlyPart) {
        return self->closeUrl();
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->closeUrl();
    }
}

KParts__NavigationExtension* KParts__ReadOnlyPart_NavigationExtension(const KParts__ReadOnlyPart* self) {
    return self->navigationExtension();
}

void KParts__ReadOnlyPart_SetArguments(KParts__ReadOnlyPart* self, const KParts__OpenUrlArguments* arguments) {
    self->setArguments(*arguments);
}

KParts__OpenUrlArguments* KParts__ReadOnlyPart_Arguments(const KParts__ReadOnlyPart* self) {
    return new KParts::OpenUrlArguments(self->arguments());
}

bool KParts__ReadOnlyPart_OpenStream(KParts__ReadOnlyPart* self, const libqt_string mimeType, const QUrl* url) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return self->openStream(mimeType_QString, *url);
}

bool KParts__ReadOnlyPart_WriteStream(KParts__ReadOnlyPart* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->writeStream(data_QByteArray);
}

bool KParts__ReadOnlyPart_CloseStream(KParts__ReadOnlyPart* self) {
    return self->closeStream();
}

void KParts__ReadOnlyPart_Started(KParts__ReadOnlyPart* self, KIO__Job* job) {
    self->started(job);
}

void KParts__ReadOnlyPart_Connect_Started(KParts__ReadOnlyPart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadOnlyPart*, KIO__Job*) = reinterpret_cast<void (*)(KParts__ReadOnlyPart*, KIO__Job*)>(slot);
    KParts::ReadOnlyPart::connect(self, &KParts::ReadOnlyPart::started, [self, slotFunc](KIO::Job* job) {
        KIO__Job* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KParts__ReadOnlyPart_Completed(KParts__ReadOnlyPart* self) {
    self->completed();
}

void KParts__ReadOnlyPart_Connect_Completed(KParts__ReadOnlyPart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadOnlyPart*) = reinterpret_cast<void (*)(KParts__ReadOnlyPart*)>(slot);
    KParts::ReadOnlyPart::connect(self, &KParts::ReadOnlyPart::completed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KParts__ReadOnlyPart_CompletedWithPendingAction(KParts__ReadOnlyPart* self) {
    self->completedWithPendingAction();
}

void KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(KParts__ReadOnlyPart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadOnlyPart*) = reinterpret_cast<void (*)(KParts__ReadOnlyPart*)>(slot);
    KParts::ReadOnlyPart::connect(self, &KParts::ReadOnlyPart::completedWithPendingAction, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KParts__ReadOnlyPart_Canceled(KParts__ReadOnlyPart* self, const libqt_string errMsg) {
    QString errMsg_QString = QString::fromUtf8(errMsg.data, errMsg.len);
    self->canceled(errMsg_QString);
}

void KParts__ReadOnlyPart_Connect_Canceled(KParts__ReadOnlyPart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadOnlyPart*, const char*) = reinterpret_cast<void (*)(KParts__ReadOnlyPart*, const char*)>(slot);
    KParts::ReadOnlyPart::connect(self, &KParts::ReadOnlyPart::canceled, [self, slotFunc](const QString& errMsg) {
        const QString errMsg_ret = errMsg;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errMsg_b = errMsg_ret.toUtf8();
        const char* errMsg_str = static_cast<const char*>(malloc(errMsg_b.length() + 1));
        memcpy((void*)errMsg_str, errMsg_b.data(), errMsg_b.length());
        ((char*)errMsg_str)[errMsg_b.length()] = '\0';
        const char* sigval1 = errMsg_str;
        slotFunc(self, sigval1);
        libqt_free(errMsg_str);
    });
}

void KParts__ReadOnlyPart_UrlChanged(KParts__ReadOnlyPart* self, const QUrl* url) {
    self->urlChanged(*url);
}

void KParts__ReadOnlyPart_Connect_UrlChanged(KParts__ReadOnlyPart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadOnlyPart*, QUrl*) = reinterpret_cast<void (*)(KParts__ReadOnlyPart*, QUrl*)>(slot);
    KParts::ReadOnlyPart::connect(self, &KParts::ReadOnlyPart::urlChanged, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

bool KParts__ReadOnlyPart_OpenFile(KParts__ReadOnlyPart* self) {
    auto* vkparts__readonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkparts__readonlypart && vkparts__readonlypart->isVirtualKPartsReadOnlyPart) {
        return vkparts__readonlypart->openFile();
    }
    return {};
}

void KParts__ReadOnlyPart_GuiActivateEvent(KParts__ReadOnlyPart* self, KParts__GUIActivateEvent* event) {
    auto* vkparts__readonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkparts__readonlypart && vkparts__readonlypart->isVirtualKPartsReadOnlyPart) {
        vkparts__readonlypart->guiActivateEvent(event);
    }
}

libqt_string KParts__ReadOnlyPart_Tr2(const char* s, const char* c) {
    QString _ret = KParts::ReadOnlyPart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__ReadOnlyPart_Tr3(const char* s, const char* c, int n) {
    QString _ret = KParts::ReadOnlyPart::tr(s, c, static_cast<int>(n));
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
int KParts__ReadOnlyPart_QBaseMetacall(KParts__ReadOnlyPart* self, int param1, int param2, void** param3) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Metacall_IsBase(true);
        return vkpartsreadonlypart->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::ReadOnlyPart::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnMetacall(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Metacall_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadOnlyPart_QBaseOpenUrl(KParts__ReadOnlyPart* self, const QUrl* url) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_OpenUrl_IsBase(true);
        return vkpartsreadonlypart->openUrl(*url);
    } else {
        return self->KParts::ReadOnlyPart::openUrl(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnOpenUrl(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_OpenUrl_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_OpenUrl_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadOnlyPart_QBaseCloseUrl(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_CloseUrl_IsBase(true);
        return vkpartsreadonlypart->closeUrl();
    } else {
        return self->KParts::ReadOnlyPart::closeUrl();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnCloseUrl(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_CloseUrl_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_CloseUrl_Callback>(slot));
    }
}

// Base class handler implementation
bool KParts__ReadOnlyPart_QBaseOpenFile(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_OpenFile_IsBase(true);
        return vkpartsreadonlypart->openFile();
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->openFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnOpenFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_OpenFile_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_OpenFile_Callback>(slot));
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseGuiActivateEvent(KParts__ReadOnlyPart* self, KParts__GUIActivateEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_GuiActivateEvent_IsBase(true);
        vkpartsreadonlypart->guiActivateEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->guiActivateEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnGuiActivateEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_GuiActivateEvent_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_GuiActivateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KParts__ReadOnlyPart_Widget(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->widget();
    } else {
        return self->KParts::ReadOnlyPart::widget();
    }
}

// Base class handler implementation
QWidget* KParts__ReadOnlyPart_QBaseWidget(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Widget_IsBase(true);
        return vkpartsreadonlypart->widget();
    } else {
        return self->KParts::ReadOnlyPart::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnWidget(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Widget_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetManager(KParts__ReadOnlyPart* self, KParts__PartManager* manager) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setManager(manager);
    } else {
        self->KParts::ReadOnlyPart::setManager(manager);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetManager(KParts__ReadOnlyPart* self, KParts__PartManager* manager) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetManager_IsBase(true);
        vkpartsreadonlypart->setManager(manager);
    } else {
        self->KParts::ReadOnlyPart::setManager(manager);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetManager(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetManager_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetManager_Callback>(slot));
    }
}

// Derived class handler implementation
KParts__Part* KParts__ReadOnlyPart_HitTest(KParts__ReadOnlyPart* self, QWidget* widget, const QPoint* globalPos) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->hitTest(widget, *globalPos);
    } else {
        return self->KParts::ReadOnlyPart::hitTest(widget, *globalPos);
    }
}

// Base class handler implementation
KParts__Part* KParts__ReadOnlyPart_QBaseHitTest(KParts__ReadOnlyPart* self, QWidget* widget, const QPoint* globalPos) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_HitTest_IsBase(true);
        return vkpartsreadonlypart->hitTest(widget, *globalPos);
    } else {
        return self->KParts::ReadOnlyPart::hitTest(widget, *globalPos);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnHitTest(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_HitTest_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_HitTest_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetWidget(KParts__ReadOnlyPart* self, QWidget* widget) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setWidget(widget);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setWidget(widget);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetWidget(KParts__ReadOnlyPart* self, QWidget* widget) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetWidget_IsBase(true);
        vkpartsreadonlypart->setWidget(widget);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetWidget(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetWidget_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_CustomEvent(KParts__ReadOnlyPart* self, QEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->customEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseCustomEvent(KParts__ReadOnlyPart* self, QEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_CustomEvent_IsBase(true);
        vkpartsreadonlypart->customEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnCustomEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_CustomEvent_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_PartActivateEvent(KParts__ReadOnlyPart* self, KParts__PartActivateEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->partActivateEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->partActivateEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBasePartActivateEvent(KParts__ReadOnlyPart* self, KParts__PartActivateEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_PartActivateEvent_IsBase(true);
        vkpartsreadonlypart->partActivateEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->partActivateEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnPartActivateEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_PartActivateEvent_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_PartActivateEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ReadOnlyPart_Event(KParts__ReadOnlyPart* self, QEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->event(event);
    } else {
        return self->KParts::ReadOnlyPart::event(event);
    }
}

// Base class handler implementation
bool KParts__ReadOnlyPart_QBaseEvent(KParts__ReadOnlyPart* self, QEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Event_IsBase(true);
        return vkpartsreadonlypart->event(event);
    } else {
        return self->KParts::ReadOnlyPart::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Event_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ReadOnlyPart_EventFilter(KParts__ReadOnlyPart* self, QObject* watched, QEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->eventFilter(watched, event);
    } else {
        return self->KParts::ReadOnlyPart::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__ReadOnlyPart_QBaseEventFilter(KParts__ReadOnlyPart* self, QObject* watched, QEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_EventFilter_IsBase(true);
        return vkpartsreadonlypart->eventFilter(watched, event);
    } else {
        return self->KParts::ReadOnlyPart::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnEventFilter(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_EventFilter_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_TimerEvent(KParts__ReadOnlyPart* self, QTimerEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->timerEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseTimerEvent(KParts__ReadOnlyPart* self, QTimerEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_TimerEvent_IsBase(true);
        vkpartsreadonlypart->timerEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnTimerEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_TimerEvent_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_ChildEvent(KParts__ReadOnlyPart* self, QChildEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->childEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseChildEvent(KParts__ReadOnlyPart* self, QChildEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_ChildEvent_IsBase(true);
        vkpartsreadonlypart->childEvent(event);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnChildEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_ChildEvent_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_ConnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->connectNotify(*signal);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseConnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_ConnectNotify_IsBase(true);
        vkpartsreadonlypart->connectNotify(*signal);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnConnectNotify(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_DisconnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseDisconnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_DisconnectNotify_IsBase(true);
        vkpartsreadonlypart->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnDisconnectNotify(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* KParts__ReadOnlyPart_Action2(const KParts__ReadOnlyPart* self, const QDomElement* element) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->action(*element);
    } else {
        return self->KParts::ReadOnlyPart::action(*element);
    }
}

// Base class handler implementation
QAction* KParts__ReadOnlyPart_QBaseAction2(const KParts__ReadOnlyPart* self, const QDomElement* element) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Action2_IsBase(true);
        return vkpartsreadonlypart->action(*element);
    } else {
        return self->KParts::ReadOnlyPart::action(*element);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnAction2(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Action2_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Action2_Callback>(slot));
    }
}

// Derived class handler implementation
KActionCollection* KParts__ReadOnlyPart_ActionCollection(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->actionCollection();
    } else {
        return self->KParts::ReadOnlyPart::actionCollection();
    }
}

// Base class handler implementation
KActionCollection* KParts__ReadOnlyPart_QBaseActionCollection(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_ActionCollection_IsBase(true);
        return vkpartsreadonlypart->actionCollection();
    } else {
        return self->KParts::ReadOnlyPart::actionCollection();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnActionCollection(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_ActionCollection_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_ActionCollection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadOnlyPart_ComponentName(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        QString _ret = vkpartsreadonlypart->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadOnlyPart::componentName();
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
libqt_string KParts__ReadOnlyPart_QBaseComponentName(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_ComponentName_IsBase(true);
        QString _ret = vkpartsreadonlypart->componentName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadOnlyPart::componentName();
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
void KParts__ReadOnlyPart_OnComponentName(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_ComponentName_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_ComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
QDomDocument* KParts__ReadOnlyPart_DomDocument(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return new QDomDocument(vkpartsreadonlypart->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsReadOnlyPart*)self)->domDocument());
    }
}

// Base class handler implementation
QDomDocument* KParts__ReadOnlyPart_QBaseDomDocument(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_DomDocument_IsBase(true);
        return new QDomDocument(vkpartsreadonlypart->domDocument());
    } else {
        return new QDomDocument(((VirtualKPartsReadOnlyPart*)self)->domDocument());
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnDomDocument(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_DomDocument_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_DomDocument_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadOnlyPart_XmlFile(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        QString _ret = vkpartsreadonlypart->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadOnlyPart::xmlFile();
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
libqt_string KParts__ReadOnlyPart_QBaseXmlFile(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_XmlFile_IsBase(true);
        QString _ret = vkpartsreadonlypart->xmlFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadOnlyPart::xmlFile();
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
void KParts__ReadOnlyPart_OnXmlFile(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_XmlFile_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_XmlFile_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadOnlyPart_LocalXMLFile(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        QString _ret = vkpartsreadonlypart->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadOnlyPart::localXMLFile();
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
libqt_string KParts__ReadOnlyPart_QBaseLocalXMLFile(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_LocalXMLFile_IsBase(true);
        QString _ret = vkpartsreadonlypart->localXMLFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KParts::ReadOnlyPart::localXMLFile();
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
void KParts__ReadOnlyPart_OnLocalXMLFile(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_LocalXMLFile_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_LocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetComponentName(KParts__ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetComponentName(KParts__ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetComponentName_IsBase(true);
        vkpartsreadonlypart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setComponentName(componentName_QString, componentDisplayName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetComponentName(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetComponentName_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetComponentName_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetXMLFile(KParts__ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetXMLFile(KParts__ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetXMLFile_IsBase(true);
        vkpartsreadonlypart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setXMLFile(file_QString, merge, setXMLDoc);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetXMLFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetXMLFile_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetLocalXMLFile(KParts__ReadOnlyPart* self, const libqt_string file) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setLocalXMLFile(file_QString);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetLocalXMLFile(KParts__ReadOnlyPart* self, const libqt_string file) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetLocalXMLFile_IsBase(true);
        vkpartsreadonlypart->setLocalXMLFile(file_QString);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setLocalXMLFile(file_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetLocalXMLFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetLocalXMLFile_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetLocalXMLFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetXML(KParts__ReadOnlyPart* self, const libqt_string document, bool merge) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setXML(document_QString, merge);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetXML(KParts__ReadOnlyPart* self, const libqt_string document, bool merge) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetXML_IsBase(true);
        vkpartsreadonlypart->setXML(document_QString, merge);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setXML(document_QString, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetXML(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetXML_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetXML_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetDOMDocument(KParts__ReadOnlyPart* self, const QDomDocument* document, bool merge) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setDOMDocument(*document, merge);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetDOMDocument(KParts__ReadOnlyPart* self, const QDomDocument* document, bool merge) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetDOMDocument_IsBase(true);
        vkpartsreadonlypart->setDOMDocument(*document, merge);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setDOMDocument(*document, merge);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetDOMDocument(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetDOMDocument_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetDOMDocument_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_StateChanged(KParts__ReadOnlyPart* self, const libqt_string newstate, int reverse) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseStateChanged(KParts__ReadOnlyPart* self, const libqt_string newstate, int reverse) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_StateChanged_IsBase(true);
        vkpartsreadonlypart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnStateChanged(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_StateChanged_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_StateChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_AbortLoad(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->abortLoad();
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->abortLoad();
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseAbortLoad(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_AbortLoad_IsBase(true);
        vkpartsreadonlypart->abortLoad();
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->abortLoad();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnAbortLoad(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_AbortLoad_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_AbortLoad_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetUrl(KParts__ReadOnlyPart* self, const QUrl* url) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setUrl(*url);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setUrl(*url);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetUrl(KParts__ReadOnlyPart* self, const QUrl* url) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetUrl_IsBase(true);
        vkpartsreadonlypart->setUrl(*url);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setUrl(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetUrl(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetUrl_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetUrl_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadOnlyPart_LocalFilePath(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        QString _ret = vkpartsreadonlypart->localFilePath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsReadOnlyPart*)self)->localFilePath();
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
libqt_string KParts__ReadOnlyPart_QBaseLocalFilePath(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_LocalFilePath_IsBase(true);
        QString _ret = vkpartsreadonlypart->localFilePath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsReadOnlyPart*)self)->localFilePath();
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
void KParts__ReadOnlyPart_OnLocalFilePath(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_LocalFilePath_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_LocalFilePath_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetLocalFilePath(KParts__ReadOnlyPart* self, const libqt_string localFilePath) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString localFilePath_QString = QString::fromUtf8(localFilePath.data, localFilePath.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setLocalFilePath(localFilePath_QString);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setLocalFilePath(localFilePath_QString);
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSetLocalFilePath(KParts__ReadOnlyPart* self, const libqt_string localFilePath) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString localFilePath_QString = QString::fromUtf8(localFilePath.data, localFilePath.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetLocalFilePath_IsBase(true);
        vkpartsreadonlypart->setLocalFilePath(localFilePath_QString);
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->setLocalFilePath(localFilePath_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetLocalFilePath(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SetLocalFilePath_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetLocalFilePath_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KParts__ReadOnlyPart_HostContainer(KParts__ReadOnlyPart* self, const libqt_string containerName) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->hostContainer(containerName_QString);
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->hostContainer(containerName_QString);
    }
}

// Base class handler implementation
QWidget* KParts__ReadOnlyPart_QBaseHostContainer(KParts__ReadOnlyPart* self, const libqt_string containerName) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_HostContainer_IsBase(true);
        return vkpartsreadonlypart->hostContainer(containerName_QString);
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->hostContainer(containerName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnHostContainer(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_HostContainer_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_HostContainer_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SlotWidgetDestroyed(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->slotWidgetDestroyed();
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->slotWidgetDestroyed();
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseSlotWidgetDestroyed(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SlotWidgetDestroyed_IsBase(true);
        vkpartsreadonlypart->slotWidgetDestroyed();
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->slotWidgetDestroyed();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSlotWidgetDestroyed(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SlotWidgetDestroyed_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SlotWidgetDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KParts__ReadOnlyPart_Sender(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->sender();
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__ReadOnlyPart_QBaseSender(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Sender_IsBase(true);
        return vkpartsreadonlypart->sender();
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSender(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Sender_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__ReadOnlyPart_SenderSignalIndex(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->senderSignalIndex();
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__ReadOnlyPart_QBaseSenderSignalIndex(const KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SenderSignalIndex_IsBase(true);
        return vkpartsreadonlypart->senderSignalIndex();
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSenderSignalIndex(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KParts__ReadOnlyPart_Receivers(const KParts__ReadOnlyPart* self, const char* signal) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->receivers(signal);
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__ReadOnlyPart_QBaseReceivers(const KParts__ReadOnlyPart* self, const char* signal) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Receivers_IsBase(true);
        return vkpartsreadonlypart->receivers(signal);
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnReceivers(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_Receivers_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KParts__ReadOnlyPart_IsSignalConnected(const KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        return vkpartsreadonlypart->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__ReadOnlyPart_QBaseIsSignalConnected(const KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_IsSignalConnected_IsBase(true);
        return vkpartsreadonlypart->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsReadOnlyPart*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnIsSignalConnected(const KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self));
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KParts__ReadOnlyPart_StandardsXmlFileLocation(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        QString _ret = vkpartsreadonlypart->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsReadOnlyPart*)self)->standardsXmlFileLocation();
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
libqt_string KParts__ReadOnlyPart_QBaseStandardsXmlFileLocation(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_StandardsXmlFileLocation_IsBase(true);
        QString _ret = vkpartsreadonlypart->standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKPartsReadOnlyPart*)self)->standardsXmlFileLocation();
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
void KParts__ReadOnlyPart_OnStandardsXmlFileLocation(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_StandardsXmlFileLocation_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_StandardsXmlFileLocation_Callback>(slot));
    }
}

// Derived class handler implementation
void KParts__ReadOnlyPart_LoadStandardsXmlFile(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->loadStandardsXmlFile();
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_QBaseLoadStandardsXmlFile(KParts__ReadOnlyPart* self) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_LoadStandardsXmlFile_IsBase(true);
        vkpartsreadonlypart->loadStandardsXmlFile();
    } else {
        ((VirtualKPartsReadOnlyPart*)self)->loadStandardsXmlFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnLoadStandardsXmlFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart && vkpartsreadonlypart->isVirtualKPartsReadOnlyPart) {
        vkpartsreadonlypart->setKParts__ReadOnlyPart_LoadStandardsXmlFile_Callback(reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_LoadStandardsXmlFile_Callback>(slot));
    }
}

void KParts__ReadOnlyPart_Delete(KParts__ReadOnlyPart* self) {
    delete self;
}
