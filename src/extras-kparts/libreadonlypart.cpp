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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__ReadOnlyPart_Tr(const char* s) {
    auto _ret = KParts::ReadOnlyPart::tr(s);
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
    return self->openUrl(*url);
}

QUrl* KParts__ReadOnlyPart_Url(const KParts__ReadOnlyPart* self) {
    return new QUrl(self->url());
}

bool KParts__ReadOnlyPart_CloseUrl(KParts__ReadOnlyPart* self) {
    return self->closeUrl();
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
    KParts::ReadOnlyPart::connect(self,
                                  static_cast<void (KParts::ReadOnlyPart::*)(KIO::Job*)>(&KParts::ReadOnlyPart::started),
                                  [self, slotFunc](KIO::Job* job) {
                                      KIO__Job* sigval1 = job;
                                      slotFunc(self, sigval1);
                                  });
}

void KParts__ReadOnlyPart_Completed(KParts__ReadOnlyPart* self) {
    self->completed();
}

void KParts__ReadOnlyPart_Connect_Completed(KParts__ReadOnlyPart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadOnlyPart*) = reinterpret_cast<void (*)(KParts__ReadOnlyPart*)>(slot);
    KParts::ReadOnlyPart::connect(self,
                                  static_cast<void (KParts::ReadOnlyPart::*)()>(&KParts::ReadOnlyPart::completed),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KParts__ReadOnlyPart_CompletedWithPendingAction(KParts__ReadOnlyPart* self) {
    self->completedWithPendingAction();
}

void KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(KParts__ReadOnlyPart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadOnlyPart*) = reinterpret_cast<void (*)(KParts__ReadOnlyPart*)>(slot);
    KParts::ReadOnlyPart::connect(self,
                                  static_cast<void (KParts::ReadOnlyPart::*)()>(&KParts::ReadOnlyPart::completedWithPendingAction),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KParts__ReadOnlyPart_Canceled(KParts__ReadOnlyPart* self, const libqt_string errMsg) {
    QString errMsg_QString = QString::fromUtf8(errMsg.data, errMsg.len);
    self->canceled(errMsg_QString);
}

void KParts__ReadOnlyPart_Connect_Canceled(KParts__ReadOnlyPart* self, intptr_t slot) {
    void (*slotFunc)(KParts__ReadOnlyPart*, const char*) = reinterpret_cast<void (*)(KParts__ReadOnlyPart*, const char*)>(slot);
    KParts::ReadOnlyPart::connect(self,
                                  static_cast<void (KParts::ReadOnlyPart::*)(const QString&)>(&KParts::ReadOnlyPart::canceled),
                                  [self, slotFunc](const QString& errMsg) {
                                      const auto errMsg_ret = errMsg;
                                      // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                      QByteArray errMsg_b = errMsg_ret.toUtf8();
                                      auto errMsg_str_len = errMsg_b.length();
                                      const char* errMsg_str = static_cast<const char*>(malloc(errMsg_str_len + 1));
                                      memcpy((void*)errMsg_str, errMsg_b.data(), errMsg_str_len);
                                      ((char*)errMsg_str)[errMsg_str_len] = '\0';
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
    KParts::ReadOnlyPart::connect(self,
                                  static_cast<void (KParts::ReadOnlyPart::*)(const QUrl&)>(&KParts::ReadOnlyPart::urlChanged),
                                  [self, slotFunc](const QUrl& url) {
                                      const QUrl& url_ret = url;
                                      // Cast returned reference into pointer
                                      QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                      slotFunc(self, sigval1);
                                  });
}

bool KParts__ReadOnlyPart_OpenFile(KParts__ReadOnlyPart* self) {
    auto* vkparts__readonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkparts__readonlypart) {
        return vkparts__readonlypart->openFile();
    }
    qFatal("Error: Protected method KParts::ReadOnlyPart::openFile called without a directly constructed type");
}

void KParts__ReadOnlyPart_GuiActivateEvent(KParts__ReadOnlyPart* self, KParts__GUIActivateEvent* event) {
    auto* vkparts__readonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkparts__readonlypart) {
        vkparts__readonlypart->guiActivateEvent(event);
    }
}

libqt_string KParts__ReadOnlyPart_Tr2(const char* s, const char* c) {
    auto _ret = KParts::ReadOnlyPart::tr(s, c);
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
    auto _ret = KParts::ReadOnlyPart::tr(s, c, static_cast<int>(n));
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
QMetaObject* KParts__ReadOnlyPart_SuperMetaObject(const KParts__ReadOnlyPart* self) {
    return (QMetaObject*)self->KParts::ReadOnlyPart::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnMetaObject(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self)))
        vkpartsreadonlypart->kparts__readonlypart_metaobject_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KParts__ReadOnlyPart_SuperMetacast(KParts__ReadOnlyPart* self, const char* param1) {
    return self->KParts::ReadOnlyPart::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnMetacast(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_metacast_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Metacast_Callback>(slot);
}

// Base class handler implementation
int KParts__ReadOnlyPart_SuperMetacall(KParts__ReadOnlyPart* self, int param1, int param2, void** param3) {
    return self->KParts::ReadOnlyPart::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnMetacall(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_metacall_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadOnlyPart_SuperOpenUrl(KParts__ReadOnlyPart* self, const QUrl* url) {
    return self->KParts::ReadOnlyPart::openUrl(*url);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnOpenUrl(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_openurl_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_OpenUrl_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadOnlyPart_SuperCloseUrl(KParts__ReadOnlyPart* self) {
    return self->KParts::ReadOnlyPart::closeUrl();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnCloseUrl(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_closeurl_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_CloseUrl_Callback>(slot);
}

// Base class handler implementation
bool KParts__ReadOnlyPart_SuperOpenFile(KParts__ReadOnlyPart* self) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        return vkpartsreadonlypart->KParts::ReadOnlyPart::openFile();
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::openFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnOpenFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_openfile_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_OpenFile_Callback>(slot);
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperGuiActivateEvent(KParts__ReadOnlyPart* self, KParts__GUIActivateEvent* event) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::guiActivateEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::guiActivateEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnGuiActivateEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_guiactivateevent_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_GuiActivateEvent_Callback>(slot);
}

// Derived class handler implementation
QWidget* KParts__ReadOnlyPart_Widget(KParts__ReadOnlyPart* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* KParts__ReadOnlyPart_SuperWidget(KParts__ReadOnlyPart* self) {
    return self->KParts::ReadOnlyPart::widget();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnWidget(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_widget_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Widget_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetManager(KParts__ReadOnlyPart* self, KParts__PartManager* manager) {
    self->setManager(manager);
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperSetManager(KParts__ReadOnlyPart* self, KParts__PartManager* manager) {
    self->KParts::ReadOnlyPart::setManager(manager);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetManager(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_setmanager_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetManager_Callback>(slot);
}

// Derived class handler implementation
KParts__Part* KParts__ReadOnlyPart_HitTest(KParts__ReadOnlyPart* self, QWidget* widget, const QPoint* globalPos) {
    return self->hitTest(widget, *globalPos);
}

// Base class handler implementation
KParts__Part* KParts__ReadOnlyPart_SuperHitTest(KParts__ReadOnlyPart* self, QWidget* widget, const QPoint* globalPos) {
    return self->KParts::ReadOnlyPart::hitTest(widget, *globalPos);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnHitTest(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_hittest_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_HitTest_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetWidget(KParts__ReadOnlyPart* self, QWidget* widget) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->setWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperSetWidget(KParts__ReadOnlyPart* self, QWidget* widget) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::setWidget(widget);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetWidget(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_setwidget_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetWidget_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_CustomEvent(KParts__ReadOnlyPart* self, QEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperCustomEvent(KParts__ReadOnlyPart* self, QEvent* event) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnCustomEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_customevent_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_PartActivateEvent(KParts__ReadOnlyPart* self, KParts__PartActivateEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->partActivateEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::partActivateEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperPartActivateEvent(KParts__ReadOnlyPart* self, KParts__PartActivateEvent* event) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::partActivateEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::partActivateEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnPartActivateEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_partactivateevent_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_PartActivateEvent_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ReadOnlyPart_Event(KParts__ReadOnlyPart* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KParts__ReadOnlyPart_SuperEvent(KParts__ReadOnlyPart* self, QEvent* event) {
    return self->KParts::ReadOnlyPart::event(event);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_event_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Event_Callback>(slot);
}

// Derived class handler implementation
bool KParts__ReadOnlyPart_EventFilter(KParts__ReadOnlyPart* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KParts__ReadOnlyPart_SuperEventFilter(KParts__ReadOnlyPart* self, QObject* watched, QEvent* event) {
    return self->KParts::ReadOnlyPart::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnEventFilter(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_eventfilter_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_TimerEvent(KParts__ReadOnlyPart* self, QTimerEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperTimerEvent(KParts__ReadOnlyPart* self, QTimerEvent* event) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnTimerEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_timerevent_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_ChildEvent(KParts__ReadOnlyPart* self, QChildEvent* event) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperChildEvent(KParts__ReadOnlyPart* self, QChildEvent* event) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnChildEvent(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_childevent_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_ConnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperConnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnConnectNotify(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_connectnotify_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_DisconnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperDisconnectNotify(KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnDisconnectNotify(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_disconnectnotify_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QAction* KParts__ReadOnlyPart_Action2(const KParts__ReadOnlyPart* self, const QDomElement* element) {
    return self->action(*element);
}

// Base class handler implementation
QAction* KParts__ReadOnlyPart_SuperAction2(const KParts__ReadOnlyPart* self, const QDomElement* element) {
    return self->KParts::ReadOnlyPart::action(*element);
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnAction2(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self)))
        vkpartsreadonlypart->kparts__readonlypart_action2_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_Action2_Callback>(slot);
}

// Derived class handler implementation
KActionCollection* KParts__ReadOnlyPart_ActionCollection(const KParts__ReadOnlyPart* self) {
    return self->actionCollection();
}

// Base class handler implementation
KActionCollection* KParts__ReadOnlyPart_SuperActionCollection(const KParts__ReadOnlyPart* self) {
    return self->KParts::ReadOnlyPart::actionCollection();
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnActionCollection(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self)))
        vkpartsreadonlypart->kparts__readonlypart_actioncollection_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_ActionCollection_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__ReadOnlyPart_ComponentName(const KParts__ReadOnlyPart* self) {
    auto _ret = self->componentName();
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
libqt_string KParts__ReadOnlyPart_SuperComponentName(const KParts__ReadOnlyPart* self) {
    auto _ret = self->KParts::ReadOnlyPart::componentName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnComponentName(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self)))
        vkpartsreadonlypart->kparts__readonlypart_componentname_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_ComponentName_Callback>(slot);
}

// Derived class handler implementation
QDomDocument* KParts__ReadOnlyPart_DomDocument(const KParts__ReadOnlyPart* self) {
    return new QDomDocument(self->domDocument());
}

// Base class handler implementation
QDomDocument* KParts__ReadOnlyPart_SuperDomDocument(const KParts__ReadOnlyPart* self) {
    return new QDomDocument(self->KParts::ReadOnlyPart::domDocument());
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnDomDocument(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self)))
        vkpartsreadonlypart->kparts__readonlypart_domdocument_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_DomDocument_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__ReadOnlyPart_XmlFile(const KParts__ReadOnlyPart* self) {
    auto _ret = self->xmlFile();
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
libqt_string KParts__ReadOnlyPart_SuperXmlFile(const KParts__ReadOnlyPart* self) {
    auto _ret = self->KParts::ReadOnlyPart::xmlFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnXmlFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self)))
        vkpartsreadonlypart->kparts__readonlypart_xmlfile_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_XmlFile_Callback>(slot);
}

// Derived class handler implementation
libqt_string KParts__ReadOnlyPart_LocalXMLFile(const KParts__ReadOnlyPart* self) {
    auto _ret = self->localXMLFile();
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
libqt_string KParts__ReadOnlyPart_SuperLocalXMLFile(const KParts__ReadOnlyPart* self) {
    auto _ret = self->KParts::ReadOnlyPart::localXMLFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnLocalXMLFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self)))
        vkpartsreadonlypart->kparts__readonlypart_localxmlfile_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_LocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetComponentName(KParts__ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->setComponentName(componentName_QString, componentDisplayName_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setComponentName called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperSetComponentName(KParts__ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString componentDisplayName_QString = QString::fromUtf8(componentDisplayName.data, componentDisplayName.len);
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::setComponentName(componentName_QString, componentDisplayName_QString);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setComponentName called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetComponentName(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_setcomponentname_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetComponentName_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetXMLFile(KParts__ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->setXMLFile(file_QString, merge, setXMLDoc);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperSetXMLFile(KParts__ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::setXMLFile(file_QString, merge, setXMLDoc);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetXMLFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_setxmlfile_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetLocalXMLFile(KParts__ReadOnlyPart* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->setLocalXMLFile(file_QString);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setLocalXMLFile called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperSetLocalXMLFile(KParts__ReadOnlyPart* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::setLocalXMLFile(file_QString);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setLocalXMLFile called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetLocalXMLFile(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_setlocalxmlfile_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetLocalXMLFile_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetXML(KParts__ReadOnlyPart* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->setXML(document_QString, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setXML called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperSetXML(KParts__ReadOnlyPart* self, const libqt_string document, bool merge) {
    QString document_QString = QString::fromUtf8(document.data, document.len);
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::setXML(document_QString, merge);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setXML called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetXML(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_setxml_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetXML_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_SetDOMDocument(KParts__ReadOnlyPart* self, const QDomDocument* document, bool merge) {
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->setDOMDocument(*document, merge);
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setDOMDocument called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperSetDOMDocument(KParts__ReadOnlyPart* self, const QDomDocument* document, bool merge) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::setDOMDocument(*document, merge);
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::setDOMDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnSetDOMDocument(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_setdomdocument_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_SetDOMDocument_Callback>(slot);
}

// Derived class handler implementation
void KParts__ReadOnlyPart_StateChanged(KParts__ReadOnlyPart* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self);
    if (vkpartsreadonlypart) {
        vkpartsreadonlypart->stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else {
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::stateChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KParts__ReadOnlyPart_SuperStateChanged(KParts__ReadOnlyPart* self, const libqt_string newstate, int reverse) {
    QString newstate_QString = QString::fromUtf8(newstate.data, newstate.len);
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->KParts::ReadOnlyPart::stateChanged(newstate_QString, static_cast<KXMLGUIClient::ReverseStateChange>(reverse));
    } else
        qFatal("Error: Protected virtual method KParts::ReadOnlyPart::stateChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KParts__ReadOnlyPart_OnStateChanged(KParts__ReadOnlyPart* self, intptr_t slot) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self))
        vkpartsreadonlypart->kparts__readonlypart_statechanged_callback = reinterpret_cast<VirtualKPartsReadOnlyPart::KParts__ReadOnlyPart_StateChanged_Callback>(slot);
}

// Derived class protected handler implementation
void KParts__ReadOnlyPart_AbortLoad(KParts__ReadOnlyPart* self) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->VirtualKPartsReadOnlyPart::abortLoad();
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::abortLoad called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__ReadOnlyPart_SetUrl(KParts__ReadOnlyPart* self, const QUrl* url) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->VirtualKPartsReadOnlyPart::setUrl(*url);
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::setUrl called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KParts__ReadOnlyPart_LocalFilePath(const KParts__ReadOnlyPart* self) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self))) {
        auto _ret = vkpartsreadonlypart->VirtualKPartsReadOnlyPart::localFilePath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::localFilePath called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__ReadOnlyPart_SetLocalFilePath(KParts__ReadOnlyPart* self, const libqt_string localFilePath) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        QString localFilePath_QString = QString::fromUtf8(localFilePath.data, localFilePath.len);
        vkpartsreadonlypart->VirtualKPartsReadOnlyPart::setLocalFilePath(localFilePath_QString);
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::setLocalFilePath called without a directly constructed type");
}

// Derived class protected handler implementation
QWidget* KParts__ReadOnlyPart_HostContainer(KParts__ReadOnlyPart* self, const libqt_string containerName) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        QString containerName_QString = QString::fromUtf8(containerName.data, containerName.len);
        return vkpartsreadonlypart->VirtualKPartsReadOnlyPart::hostContainer(containerName_QString);
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::hostContainer called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__ReadOnlyPart_SlotWidgetDestroyed(KParts__ReadOnlyPart* self) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->VirtualKPartsReadOnlyPart::slotWidgetDestroyed();
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::slotWidgetDestroyed called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KParts__ReadOnlyPart_Sender(const KParts__ReadOnlyPart* self) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self))) {
        return vkpartsreadonlypart->VirtualKPartsReadOnlyPart::sender();
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__ReadOnlyPart_SenderSignalIndex(const KParts__ReadOnlyPart* self) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self))) {
        return vkpartsreadonlypart->VirtualKPartsReadOnlyPart::senderSignalIndex();
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KParts__ReadOnlyPart_Receivers(const KParts__ReadOnlyPart* self, const char* signal) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self))) {
        return vkpartsreadonlypart->VirtualKPartsReadOnlyPart::receivers(signal);
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KParts__ReadOnlyPart_IsSignalConnected(const KParts__ReadOnlyPart* self, const QMetaMethod* signal) {
    if (auto* vkpartsreadonlypart = const_cast<VirtualKPartsReadOnlyPart*>(dynamic_cast<const VirtualKPartsReadOnlyPart*>(self))) {
        return vkpartsreadonlypart->VirtualKPartsReadOnlyPart::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KParts__ReadOnlyPart_StandardsXmlFileLocation(KParts__ReadOnlyPart* self) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        auto _ret = vkpartsreadonlypart->VirtualKPartsReadOnlyPart::standardsXmlFileLocation();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::standardsXmlFileLocation called without a directly constructed type");
}

// Derived class protected handler implementation
void KParts__ReadOnlyPart_LoadStandardsXmlFile(KParts__ReadOnlyPart* self) {
    if (auto* vkpartsreadonlypart = dynamic_cast<VirtualKPartsReadOnlyPart*>(self)) {
        vkpartsreadonlypart->VirtualKPartsReadOnlyPart::loadStandardsXmlFile();
    } else
        qFatal("Error: Protected method KParts::ReadOnlyPart::loadStandardsXmlFile called without a directly constructed type");
}

void KParts__ReadOnlyPart_Delete(KParts__ReadOnlyPart* self) {
    delete self;
}
