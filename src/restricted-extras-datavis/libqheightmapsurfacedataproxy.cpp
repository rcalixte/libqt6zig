#include <QAbstractDataProxy>
#include <QChildEvent>
#include <QEvent>
#include <QHeightMapSurfaceDataProxy>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QSurfaceDataProxy>
#include <QTimerEvent>
#include <qheightmapsurfacedataproxy.h>
#include "libqheightmapsurfacedataproxy.h"
#include "libqheightmapsurfacedataproxy.hxx"

QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new() {
    return new VirtualQHeightMapSurfaceDataProxy();
}

QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new2(const QImage* image) {
    return new VirtualQHeightMapSurfaceDataProxy(*image);
}

QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new3(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualQHeightMapSurfaceDataProxy(filename_QString);
}

QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new4(QObject* parent) {
    return new VirtualQHeightMapSurfaceDataProxy(parent);
}

QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new5(const QImage* image, QObject* parent) {
    return new VirtualQHeightMapSurfaceDataProxy(*image, parent);
}

QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new6(const libqt_string filename, QObject* parent) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualQHeightMapSurfaceDataProxy(filename_QString, parent);
}

QMetaObject* QHeightMapSurfaceDataProxy_MetaObject(const QHeightMapSurfaceDataProxy* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHeightMapSurfaceDataProxy_Metacast(QHeightMapSurfaceDataProxy* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHeightMapSurfaceDataProxy_Metacall(QHeightMapSurfaceDataProxy* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QHeightMapSurfaceDataProxy_Tr(const char* s) {
    auto _ret = QHeightMapSurfaceDataProxy::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QHeightMapSurfaceDataProxy_SetHeightMap(QHeightMapSurfaceDataProxy* self, const QImage* image) {
    self->setHeightMap(*image);
}

QImage* QHeightMapSurfaceDataProxy_HeightMap(const QHeightMapSurfaceDataProxy* self) {
    return new QImage(self->heightMap());
}

void QHeightMapSurfaceDataProxy_SetHeightMapFile(QHeightMapSurfaceDataProxy* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->setHeightMapFile(filename_QString);
}

libqt_string QHeightMapSurfaceDataProxy_HeightMapFile(const QHeightMapSurfaceDataProxy* self) {
    auto _ret = self->heightMapFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QHeightMapSurfaceDataProxy_SetValueRanges(QHeightMapSurfaceDataProxy* self, float minX, float maxX, float minZ, float maxZ) {
    self->setValueRanges(static_cast<float>(minX), static_cast<float>(maxX), static_cast<float>(minZ), static_cast<float>(maxZ));
}

void QHeightMapSurfaceDataProxy_SetMinXValue(QHeightMapSurfaceDataProxy* self, float min) {
    self->setMinXValue(static_cast<float>(min));
}

float QHeightMapSurfaceDataProxy_MinXValue(const QHeightMapSurfaceDataProxy* self) {
    return self->minXValue();
}

void QHeightMapSurfaceDataProxy_SetMaxXValue(QHeightMapSurfaceDataProxy* self, float max) {
    self->setMaxXValue(static_cast<float>(max));
}

float QHeightMapSurfaceDataProxy_MaxXValue(const QHeightMapSurfaceDataProxy* self) {
    return self->maxXValue();
}

void QHeightMapSurfaceDataProxy_SetMinZValue(QHeightMapSurfaceDataProxy* self, float min) {
    self->setMinZValue(static_cast<float>(min));
}

float QHeightMapSurfaceDataProxy_MinZValue(const QHeightMapSurfaceDataProxy* self) {
    return self->minZValue();
}

void QHeightMapSurfaceDataProxy_SetMaxZValue(QHeightMapSurfaceDataProxy* self, float max) {
    self->setMaxZValue(static_cast<float>(max));
}

float QHeightMapSurfaceDataProxy_MaxZValue(const QHeightMapSurfaceDataProxy* self) {
    return self->maxZValue();
}

void QHeightMapSurfaceDataProxy_SetMinYValue(QHeightMapSurfaceDataProxy* self, float min) {
    self->setMinYValue(static_cast<float>(min));
}

float QHeightMapSurfaceDataProxy_MinYValue(const QHeightMapSurfaceDataProxy* self) {
    return self->minYValue();
}

void QHeightMapSurfaceDataProxy_SetMaxYValue(QHeightMapSurfaceDataProxy* self, float max) {
    self->setMaxYValue(static_cast<float>(max));
}

float QHeightMapSurfaceDataProxy_MaxYValue(const QHeightMapSurfaceDataProxy* self) {
    return self->maxYValue();
}

void QHeightMapSurfaceDataProxy_SetAutoScaleY(QHeightMapSurfaceDataProxy* self, bool enabled) {
    self->setAutoScaleY(enabled);
}

bool QHeightMapSurfaceDataProxy_AutoScaleY(const QHeightMapSurfaceDataProxy* self) {
    return self->autoScaleY();
}

void QHeightMapSurfaceDataProxy_HeightMapChanged(QHeightMapSurfaceDataProxy* self, const QImage* image) {
    self->heightMapChanged(*image);
}

void QHeightMapSurfaceDataProxy_Connect_HeightMapChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, QImage*) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, QImage*)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(const QImage&)>(&QHeightMapSurfaceDataProxy::heightMapChanged),
                                        [self, slotFunc](const QImage& image) {
                                            const QImage& image_ret = image;
                                            // Cast returned reference into pointer
                                            QImage* sigval1 = const_cast<QImage*>(&image_ret);
                                            slotFunc(self, sigval1);
                                        });
}

void QHeightMapSurfaceDataProxy_HeightMapFileChanged(QHeightMapSurfaceDataProxy* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->heightMapFileChanged(filename_QString);
}

void QHeightMapSurfaceDataProxy_Connect_HeightMapFileChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, const char*) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, const char*)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(const QString&)>(&QHeightMapSurfaceDataProxy::heightMapFileChanged),
                                        [self, slotFunc](const QString& filename) {
                                            const auto filename_ret = filename;
                                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                            QByteArray filename_b = filename_ret.toUtf8();
                                            auto filename_str_len = filename_b.length();
                                            const char* filename_str = static_cast<const char*>(malloc(filename_str_len + 1));
                                            memcpy((void*)filename_str, filename_b.data(), filename_str_len);
                                            ((char*)filename_str)[filename_str_len] = '\0';
                                            const char* sigval1 = filename_str;
                                            slotFunc(self, sigval1);
                                            libqt_free(filename_str);
                                        });
}

void QHeightMapSurfaceDataProxy_MinXValueChanged(QHeightMapSurfaceDataProxy* self, float value) {
    self->minXValueChanged(static_cast<float>(value));
}

void QHeightMapSurfaceDataProxy_Connect_MinXValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, float) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, float)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(float)>(&QHeightMapSurfaceDataProxy::minXValueChanged),
                                        [self, slotFunc](float value) {
                                            float sigval1 = value;
                                            slotFunc(self, sigval1);
                                        });
}

void QHeightMapSurfaceDataProxy_MaxXValueChanged(QHeightMapSurfaceDataProxy* self, float value) {
    self->maxXValueChanged(static_cast<float>(value));
}

void QHeightMapSurfaceDataProxy_Connect_MaxXValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, float) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, float)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(float)>(&QHeightMapSurfaceDataProxy::maxXValueChanged),
                                        [self, slotFunc](float value) {
                                            float sigval1 = value;
                                            slotFunc(self, sigval1);
                                        });
}

void QHeightMapSurfaceDataProxy_MinZValueChanged(QHeightMapSurfaceDataProxy* self, float value) {
    self->minZValueChanged(static_cast<float>(value));
}

void QHeightMapSurfaceDataProxy_Connect_MinZValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, float) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, float)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(float)>(&QHeightMapSurfaceDataProxy::minZValueChanged),
                                        [self, slotFunc](float value) {
                                            float sigval1 = value;
                                            slotFunc(self, sigval1);
                                        });
}

void QHeightMapSurfaceDataProxy_MaxZValueChanged(QHeightMapSurfaceDataProxy* self, float value) {
    self->maxZValueChanged(static_cast<float>(value));
}

void QHeightMapSurfaceDataProxy_Connect_MaxZValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, float) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, float)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(float)>(&QHeightMapSurfaceDataProxy::maxZValueChanged),
                                        [self, slotFunc](float value) {
                                            float sigval1 = value;
                                            slotFunc(self, sigval1);
                                        });
}

void QHeightMapSurfaceDataProxy_MinYValueChanged(QHeightMapSurfaceDataProxy* self, float value) {
    self->minYValueChanged(static_cast<float>(value));
}

void QHeightMapSurfaceDataProxy_Connect_MinYValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, float) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, float)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(float)>(&QHeightMapSurfaceDataProxy::minYValueChanged),
                                        [self, slotFunc](float value) {
                                            float sigval1 = value;
                                            slotFunc(self, sigval1);
                                        });
}

void QHeightMapSurfaceDataProxy_MaxYValueChanged(QHeightMapSurfaceDataProxy* self, float value) {
    self->maxYValueChanged(static_cast<float>(value));
}

void QHeightMapSurfaceDataProxy_Connect_MaxYValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, float) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, float)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(float)>(&QHeightMapSurfaceDataProxy::maxYValueChanged),
                                        [self, slotFunc](float value) {
                                            float sigval1 = value;
                                            slotFunc(self, sigval1);
                                        });
}

void QHeightMapSurfaceDataProxy_AutoScaleYChanged(QHeightMapSurfaceDataProxy* self, bool enabled) {
    self->autoScaleYChanged(enabled);
}

void QHeightMapSurfaceDataProxy_Connect_AutoScaleYChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QHeightMapSurfaceDataProxy*, bool) = reinterpret_cast<void (*)(QHeightMapSurfaceDataProxy*, bool)>(slot);
    QHeightMapSurfaceDataProxy::connect(self,
                                        static_cast<void (QHeightMapSurfaceDataProxy::*)(bool)>(&QHeightMapSurfaceDataProxy::autoScaleYChanged),
                                        [self, slotFunc](bool enabled) {
                                            bool sigval1 = enabled;
                                            slotFunc(self, sigval1);
                                        });
}

libqt_string QHeightMapSurfaceDataProxy_Tr2(const char* s, const char* c) {
    auto _ret = QHeightMapSurfaceDataProxy::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHeightMapSurfaceDataProxy_Tr3(const char* s, const char* c, int n) {
    auto _ret = QHeightMapSurfaceDataProxy::tr(s, c, static_cast<int>(n));
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
QMetaObject* QHeightMapSurfaceDataProxy_SuperMetaObject(const QHeightMapSurfaceDataProxy* self) {
    return (QMetaObject*)self->QHeightMapSurfaceDataProxy::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnMetaObject(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = const_cast<VirtualQHeightMapSurfaceDataProxy*>(dynamic_cast<const VirtualQHeightMapSurfaceDataProxy*>(self)))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_metaobject_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QHeightMapSurfaceDataProxy_SuperMetacast(QHeightMapSurfaceDataProxy* self, const char* param1) {
    return self->QHeightMapSurfaceDataProxy::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnMetacast(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_metacast_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_Metacast_Callback>(slot);
}

// Base class handler implementation
int QHeightMapSurfaceDataProxy_SuperMetacall(QHeightMapSurfaceDataProxy* self, int param1, int param2, void** param3) {
    return self->QHeightMapSurfaceDataProxy::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnMetacall(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_metacall_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QHeightMapSurfaceDataProxy_Event(QHeightMapSurfaceDataProxy* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QHeightMapSurfaceDataProxy_SuperEvent(QHeightMapSurfaceDataProxy* self, QEvent* event) {
    return self->QHeightMapSurfaceDataProxy::event(event);
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnEvent(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_event_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_Event_Callback>(slot);
}

// Derived class handler implementation
bool QHeightMapSurfaceDataProxy_EventFilter(QHeightMapSurfaceDataProxy* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QHeightMapSurfaceDataProxy_SuperEventFilter(QHeightMapSurfaceDataProxy* self, QObject* watched, QEvent* event) {
    return self->QHeightMapSurfaceDataProxy::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnEventFilter(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_eventfilter_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QHeightMapSurfaceDataProxy_TimerEvent(QHeightMapSurfaceDataProxy* self, QTimerEvent* event) {
    auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self);
    if (vqheightmapsurfacedataproxy) {
        vqheightmapsurfacedataproxy->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeightMapSurfaceDataProxy_SuperTimerEvent(QHeightMapSurfaceDataProxy* self, QTimerEvent* event) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self)) {
        vqheightmapsurfacedataproxy->QHeightMapSurfaceDataProxy::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnTimerEvent(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_timerevent_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeightMapSurfaceDataProxy_ChildEvent(QHeightMapSurfaceDataProxy* self, QChildEvent* event) {
    auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self);
    if (vqheightmapsurfacedataproxy) {
        vqheightmapsurfacedataproxy->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeightMapSurfaceDataProxy_SuperChildEvent(QHeightMapSurfaceDataProxy* self, QChildEvent* event) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self)) {
        vqheightmapsurfacedataproxy->QHeightMapSurfaceDataProxy::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnChildEvent(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_childevent_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeightMapSurfaceDataProxy_CustomEvent(QHeightMapSurfaceDataProxy* self, QEvent* event) {
    auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self);
    if (vqheightmapsurfacedataproxy) {
        vqheightmapsurfacedataproxy->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeightMapSurfaceDataProxy_SuperCustomEvent(QHeightMapSurfaceDataProxy* self, QEvent* event) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self)) {
        vqheightmapsurfacedataproxy->QHeightMapSurfaceDataProxy::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnCustomEvent(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_customevent_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QHeightMapSurfaceDataProxy_ConnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal) {
    auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self);
    if (vqheightmapsurfacedataproxy) {
        vqheightmapsurfacedataproxy->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeightMapSurfaceDataProxy_SuperConnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self)) {
        vqheightmapsurfacedataproxy->QHeightMapSurfaceDataProxy::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnConnectNotify(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_connectnotify_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QHeightMapSurfaceDataProxy_DisconnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal) {
    auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self);
    if (vqheightmapsurfacedataproxy) {
        vqheightmapsurfacedataproxy->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QHeightMapSurfaceDataProxy_SuperDisconnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self)) {
        vqheightmapsurfacedataproxy->QHeightMapSurfaceDataProxy::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QHeightMapSurfaceDataProxy::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QHeightMapSurfaceDataProxy_OnDisconnectNotify(QHeightMapSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqheightmapsurfacedataproxy = dynamic_cast<VirtualQHeightMapSurfaceDataProxy*>(self))
        vqheightmapsurfacedataproxy->qheightmapsurfacedataproxy_disconnectnotify_callback = reinterpret_cast<VirtualQHeightMapSurfaceDataProxy::QHeightMapSurfaceDataProxy_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QHeightMapSurfaceDataProxy_Sender(const QHeightMapSurfaceDataProxy* self) {
    if (auto* vqheightmapsurfacedataproxy = const_cast<VirtualQHeightMapSurfaceDataProxy*>(dynamic_cast<const VirtualQHeightMapSurfaceDataProxy*>(self))) {
        return vqheightmapsurfacedataproxy->VirtualQHeightMapSurfaceDataProxy::sender();
    } else
        qFatal("Error: Protected method QHeightMapSurfaceDataProxy::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QHeightMapSurfaceDataProxy_SenderSignalIndex(const QHeightMapSurfaceDataProxy* self) {
    if (auto* vqheightmapsurfacedataproxy = const_cast<VirtualQHeightMapSurfaceDataProxy*>(dynamic_cast<const VirtualQHeightMapSurfaceDataProxy*>(self))) {
        return vqheightmapsurfacedataproxy->VirtualQHeightMapSurfaceDataProxy::senderSignalIndex();
    } else
        qFatal("Error: Protected method QHeightMapSurfaceDataProxy::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QHeightMapSurfaceDataProxy_Receivers(const QHeightMapSurfaceDataProxy* self, const char* signal) {
    if (auto* vqheightmapsurfacedataproxy = const_cast<VirtualQHeightMapSurfaceDataProxy*>(dynamic_cast<const VirtualQHeightMapSurfaceDataProxy*>(self))) {
        return vqheightmapsurfacedataproxy->VirtualQHeightMapSurfaceDataProxy::receivers(signal);
    } else
        qFatal("Error: Protected method QHeightMapSurfaceDataProxy::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QHeightMapSurfaceDataProxy_IsSignalConnected(const QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqheightmapsurfacedataproxy = const_cast<VirtualQHeightMapSurfaceDataProxy*>(dynamic_cast<const VirtualQHeightMapSurfaceDataProxy*>(self))) {
        return vqheightmapsurfacedataproxy->VirtualQHeightMapSurfaceDataProxy::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QHeightMapSurfaceDataProxy::isSignalConnected called without a directly constructed type");
}

void QHeightMapSurfaceDataProxy_Delete(QHeightMapSurfaceDataProxy* self) {
    delete self;
}
