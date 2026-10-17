#include <QAbstract3DSeries>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QSurface3DSeries>
#include <QSurfaceDataProxy>
#include <QTimerEvent>
#include <qsurface3dseries.h>
#include "libqsurface3dseries.h"
#include "libqsurface3dseries.hxx"

QSurface3DSeries* QSurface3DSeries_new() {
    return new VirtualQSurface3DSeries();
}

QSurface3DSeries* QSurface3DSeries_new2(QSurfaceDataProxy* dataProxy) {
    return new VirtualQSurface3DSeries(dataProxy);
}

QSurface3DSeries* QSurface3DSeries_new3(QObject* parent) {
    return new VirtualQSurface3DSeries(parent);
}

QSurface3DSeries* QSurface3DSeries_new4(QSurfaceDataProxy* dataProxy, QObject* parent) {
    return new VirtualQSurface3DSeries(dataProxy, parent);
}

QMetaObject* QSurface3DSeries_MetaObject(const QSurface3DSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSurface3DSeries_Metacast(QSurface3DSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSurface3DSeries_Metacall(QSurface3DSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSurface3DSeries_Tr(const char* s) {
    auto _ret = QSurface3DSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSurface3DSeries_SetDataProxy(QSurface3DSeries* self, QSurfaceDataProxy* proxy) {
    self->setDataProxy(proxy);
}

QSurfaceDataProxy* QSurface3DSeries_DataProxy(const QSurface3DSeries* self) {
    return self->dataProxy();
}

void QSurface3DSeries_SetSelectedPoint(QSurface3DSeries* self, const QPoint* position) {
    self->setSelectedPoint(*position);
}

QPoint* QSurface3DSeries_SelectedPoint(const QSurface3DSeries* self) {
    return new QPoint(self->selectedPoint());
}

QPoint* QSurface3DSeries_InvalidSelectionPosition() {
    return new QPoint(QSurface3DSeries::invalidSelectionPosition());
}

void QSurface3DSeries_SetFlatShadingEnabled(QSurface3DSeries* self, bool enabled) {
    self->setFlatShadingEnabled(enabled);
}

bool QSurface3DSeries_IsFlatShadingEnabled(const QSurface3DSeries* self) {
    return self->isFlatShadingEnabled();
}

void QSurface3DSeries_SetDrawMode(QSurface3DSeries* self, int mode) {
    self->setDrawMode(static_cast<QSurface3DSeries::DrawFlags>(mode));
}

int QSurface3DSeries_DrawMode(const QSurface3DSeries* self) {
    return static_cast<int>(self->drawMode());
}

bool QSurface3DSeries_IsFlatShadingSupported(const QSurface3DSeries* self) {
    return self->isFlatShadingSupported();
}

void QSurface3DSeries_SetTexture(QSurface3DSeries* self, const QImage* texture) {
    self->setTexture(*texture);
}

QImage* QSurface3DSeries_Texture(const QSurface3DSeries* self) {
    return new QImage(self->texture());
}

void QSurface3DSeries_SetTextureFile(QSurface3DSeries* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->setTextureFile(filename_QString);
}

libqt_string QSurface3DSeries_TextureFile(const QSurface3DSeries* self) {
    auto _ret = self->textureFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSurface3DSeries_SetWireframeColor(QSurface3DSeries* self, const QColor* color) {
    self->setWireframeColor(*color);
}

QColor* QSurface3DSeries_WireframeColor(const QSurface3DSeries* self) {
    return new QColor(self->wireframeColor());
}

void QSurface3DSeries_DataProxyChanged(QSurface3DSeries* self, QSurfaceDataProxy* proxy) {
    self->dataProxyChanged(proxy);
}

void QSurface3DSeries_Connect_DataProxyChanged(QSurface3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QSurface3DSeries*, QSurfaceDataProxy*) = reinterpret_cast<void (*)(QSurface3DSeries*, QSurfaceDataProxy*)>(slot);
    QSurface3DSeries::connect(self,
                              static_cast<void (QSurface3DSeries::*)(QSurfaceDataProxy*)>(&QSurface3DSeries::dataProxyChanged),
                              [self, slotFunc](QSurfaceDataProxy* proxy) {
                                  QSurfaceDataProxy* sigval1 = proxy;
                                  slotFunc(self, sigval1);
                              });
}

void QSurface3DSeries_SelectedPointChanged(QSurface3DSeries* self, const QPoint* position) {
    self->selectedPointChanged(*position);
}

void QSurface3DSeries_Connect_SelectedPointChanged(QSurface3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QSurface3DSeries*, QPoint*) = reinterpret_cast<void (*)(QSurface3DSeries*, QPoint*)>(slot);
    QSurface3DSeries::connect(self,
                              static_cast<void (QSurface3DSeries::*)(const QPoint&)>(&QSurface3DSeries::selectedPointChanged),
                              [self, slotFunc](const QPoint& position) {
                                  const QPoint& position_ret = position;
                                  // Cast returned reference into pointer
                                  QPoint* sigval1 = const_cast<QPoint*>(&position_ret);
                                  slotFunc(self, sigval1);
                              });
}

void QSurface3DSeries_FlatShadingEnabledChanged(QSurface3DSeries* self, bool enable) {
    self->flatShadingEnabledChanged(enable);
}

void QSurface3DSeries_Connect_FlatShadingEnabledChanged(QSurface3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QSurface3DSeries*, bool) = reinterpret_cast<void (*)(QSurface3DSeries*, bool)>(slot);
    QSurface3DSeries::connect(self,
                              static_cast<void (QSurface3DSeries::*)(bool)>(&QSurface3DSeries::flatShadingEnabledChanged),
                              [self, slotFunc](bool enable) {
                                  bool sigval1 = enable;
                                  slotFunc(self, sigval1);
                              });
}

void QSurface3DSeries_FlatShadingSupportedChanged(QSurface3DSeries* self, bool enable) {
    self->flatShadingSupportedChanged(enable);
}

void QSurface3DSeries_Connect_FlatShadingSupportedChanged(QSurface3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QSurface3DSeries*, bool) = reinterpret_cast<void (*)(QSurface3DSeries*, bool)>(slot);
    QSurface3DSeries::connect(self,
                              static_cast<void (QSurface3DSeries::*)(bool)>(&QSurface3DSeries::flatShadingSupportedChanged),
                              [self, slotFunc](bool enable) {
                                  bool sigval1 = enable;
                                  slotFunc(self, sigval1);
                              });
}

void QSurface3DSeries_DrawModeChanged(QSurface3DSeries* self, int mode) {
    self->drawModeChanged(static_cast<QSurface3DSeries::DrawFlags>(mode));
}

void QSurface3DSeries_Connect_DrawModeChanged(QSurface3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QSurface3DSeries*, int) = reinterpret_cast<void (*)(QSurface3DSeries*, int)>(slot);
    QSurface3DSeries::connect(self,
                              static_cast<void (QSurface3DSeries::*)(QSurface3DSeries::DrawFlags)>(&QSurface3DSeries::drawModeChanged),
                              [self, slotFunc](QSurface3DSeries::DrawFlags mode) {
                                  int sigval1 = static_cast<int>(mode);
                                  slotFunc(self, sigval1);
                              });
}

void QSurface3DSeries_TextureChanged(QSurface3DSeries* self, const QImage* image) {
    self->textureChanged(*image);
}

void QSurface3DSeries_Connect_TextureChanged(QSurface3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QSurface3DSeries*, QImage*) = reinterpret_cast<void (*)(QSurface3DSeries*, QImage*)>(slot);
    QSurface3DSeries::connect(self,
                              static_cast<void (QSurface3DSeries::*)(const QImage&)>(&QSurface3DSeries::textureChanged),
                              [self, slotFunc](const QImage& image) {
                                  const QImage& image_ret = image;
                                  // Cast returned reference into pointer
                                  QImage* sigval1 = const_cast<QImage*>(&image_ret);
                                  slotFunc(self, sigval1);
                              });
}

void QSurface3DSeries_TextureFileChanged(QSurface3DSeries* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->textureFileChanged(filename_QString);
}

void QSurface3DSeries_Connect_TextureFileChanged(QSurface3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QSurface3DSeries*, const char*) = reinterpret_cast<void (*)(QSurface3DSeries*, const char*)>(slot);
    QSurface3DSeries::connect(self,
                              static_cast<void (QSurface3DSeries::*)(const QString&)>(&QSurface3DSeries::textureFileChanged),
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

void QSurface3DSeries_WireframeColorChanged(QSurface3DSeries* self, const QColor* color) {
    self->wireframeColorChanged(*color);
}

void QSurface3DSeries_Connect_WireframeColorChanged(QSurface3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QSurface3DSeries*, QColor*) = reinterpret_cast<void (*)(QSurface3DSeries*, QColor*)>(slot);
    QSurface3DSeries::connect(self,
                              static_cast<void (QSurface3DSeries::*)(const QColor&)>(&QSurface3DSeries::wireframeColorChanged),
                              [self, slotFunc](const QColor& color) {
                                  const QColor& color_ret = color;
                                  // Cast returned reference into pointer
                                  QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                  slotFunc(self, sigval1);
                              });
}

libqt_string QSurface3DSeries_Tr2(const char* s, const char* c) {
    auto _ret = QSurface3DSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSurface3DSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSurface3DSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSurface3DSeries_SuperMetaObject(const QSurface3DSeries* self) {
    return (QMetaObject*)self->QSurface3DSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnMetaObject(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = const_cast<VirtualQSurface3DSeries*>(dynamic_cast<const VirtualQSurface3DSeries*>(self)))
        vqsurface3dseries->qsurface3dseries_metaobject_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSurface3DSeries_SuperMetacast(QSurface3DSeries* self, const char* param1) {
    return self->QSurface3DSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnMetacast(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_metacast_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSurface3DSeries_SuperMetacall(QSurface3DSeries* self, int param1, int param2, void** param3) {
    return self->QSurface3DSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnMetacall(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_metacall_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QSurface3DSeries_Event(QSurface3DSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSurface3DSeries_SuperEvent(QSurface3DSeries* self, QEvent* event) {
    return self->QSurface3DSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnEvent(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_event_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSurface3DSeries_EventFilter(QSurface3DSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSurface3DSeries_SuperEventFilter(QSurface3DSeries* self, QObject* watched, QEvent* event) {
    return self->QSurface3DSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnEventFilter(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_eventfilter_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSurface3DSeries_TimerEvent(QSurface3DSeries* self, QTimerEvent* event) {
    auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self);
    if (vqsurface3dseries) {
        vqsurface3dseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSurface3DSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurface3DSeries_SuperTimerEvent(QSurface3DSeries* self, QTimerEvent* event) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self)) {
        vqsurface3dseries->QSurface3DSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSurface3DSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnTimerEvent(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_timerevent_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSurface3DSeries_ChildEvent(QSurface3DSeries* self, QChildEvent* event) {
    auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self);
    if (vqsurface3dseries) {
        vqsurface3dseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSurface3DSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurface3DSeries_SuperChildEvent(QSurface3DSeries* self, QChildEvent* event) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self)) {
        vqsurface3dseries->QSurface3DSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSurface3DSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnChildEvent(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_childevent_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSurface3DSeries_CustomEvent(QSurface3DSeries* self, QEvent* event) {
    auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self);
    if (vqsurface3dseries) {
        vqsurface3dseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSurface3DSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurface3DSeries_SuperCustomEvent(QSurface3DSeries* self, QEvent* event) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self)) {
        vqsurface3dseries->QSurface3DSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSurface3DSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnCustomEvent(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_customevent_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSurface3DSeries_ConnectNotify(QSurface3DSeries* self, const QMetaMethod* signal) {
    auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self);
    if (vqsurface3dseries) {
        vqsurface3dseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSurface3DSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurface3DSeries_SuperConnectNotify(QSurface3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self)) {
        vqsurface3dseries->QSurface3DSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSurface3DSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnConnectNotify(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_connectnotify_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSurface3DSeries_DisconnectNotify(QSurface3DSeries* self, const QMetaMethod* signal) {
    auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self);
    if (vqsurface3dseries) {
        vqsurface3dseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSurface3DSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurface3DSeries_SuperDisconnectNotify(QSurface3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self)) {
        vqsurface3dseries->QSurface3DSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSurface3DSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurface3DSeries_OnDisconnectNotify(QSurface3DSeries* self, intptr_t slot) {
    if (auto* vqsurface3dseries = dynamic_cast<VirtualQSurface3DSeries*>(self))
        vqsurface3dseries->qsurface3dseries_disconnectnotify_callback = reinterpret_cast<VirtualQSurface3DSeries::QSurface3DSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSurface3DSeries_Sender(const QSurface3DSeries* self) {
    if (auto* vqsurface3dseries = const_cast<VirtualQSurface3DSeries*>(dynamic_cast<const VirtualQSurface3DSeries*>(self))) {
        return vqsurface3dseries->VirtualQSurface3DSeries::sender();
    } else
        qFatal("Error: Protected method QSurface3DSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSurface3DSeries_SenderSignalIndex(const QSurface3DSeries* self) {
    if (auto* vqsurface3dseries = const_cast<VirtualQSurface3DSeries*>(dynamic_cast<const VirtualQSurface3DSeries*>(self))) {
        return vqsurface3dseries->VirtualQSurface3DSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSurface3DSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSurface3DSeries_Receivers(const QSurface3DSeries* self, const char* signal) {
    if (auto* vqsurface3dseries = const_cast<VirtualQSurface3DSeries*>(dynamic_cast<const VirtualQSurface3DSeries*>(self))) {
        return vqsurface3dseries->VirtualQSurface3DSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QSurface3DSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSurface3DSeries_IsSignalConnected(const QSurface3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqsurface3dseries = const_cast<VirtualQSurface3DSeries*>(dynamic_cast<const VirtualQSurface3DSeries*>(self))) {
        return vqsurface3dseries->VirtualQSurface3DSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSurface3DSeries::isSignalConnected called without a directly constructed type");
}

void QSurface3DSeries_Delete(QSurface3DSeries* self) {
    delete self;
}
