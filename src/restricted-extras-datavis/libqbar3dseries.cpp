#include <QAbstract3DSeries>
#include <QBar3DSeries>
#include <QBarDataProxy>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QTimerEvent>
#include <qbar3dseries.h>
#include "libqbar3dseries.h"
#include "libqbar3dseries.hxx"

QBar3DSeries* QBar3DSeries_new() {
    return new VirtualQBar3DSeries();
}

QBar3DSeries* QBar3DSeries_new2(QBarDataProxy* dataProxy) {
    return new VirtualQBar3DSeries(dataProxy);
}

QBar3DSeries* QBar3DSeries_new3(QObject* parent) {
    return new VirtualQBar3DSeries(parent);
}

QBar3DSeries* QBar3DSeries_new4(QBarDataProxy* dataProxy, QObject* parent) {
    return new VirtualQBar3DSeries(dataProxy, parent);
}

QMetaObject* QBar3DSeries_MetaObject(const QBar3DSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBar3DSeries_Metacast(QBar3DSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBar3DSeries_Metacall(QBar3DSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBar3DSeries_Tr(const char* s) {
    auto _ret = QBar3DSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBar3DSeries_SetDataProxy(QBar3DSeries* self, QBarDataProxy* proxy) {
    self->setDataProxy(proxy);
}

QBarDataProxy* QBar3DSeries_DataProxy(const QBar3DSeries* self) {
    return self->dataProxy();
}

void QBar3DSeries_SetSelectedBar(QBar3DSeries* self, const QPoint* position) {
    self->setSelectedBar(*position);
}

QPoint* QBar3DSeries_SelectedBar(const QBar3DSeries* self) {
    return new QPoint(self->selectedBar());
}

QPoint* QBar3DSeries_InvalidSelectionPosition() {
    return new QPoint(QBar3DSeries::invalidSelectionPosition());
}

void QBar3DSeries_SetMeshAngle(QBar3DSeries* self, float angle) {
    self->setMeshAngle(static_cast<float>(angle));
}

float QBar3DSeries_MeshAngle(const QBar3DSeries* self) {
    return self->meshAngle();
}

libqt_list /* of QColor* */ QBar3DSeries_RowColors(const QBar3DSeries* self) {
    QList<QColor> _ret = self->rowColors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QColor** _arr = static_cast<QColor**>(malloc(sizeof(QColor*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QColor(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBar3DSeries_SetRowColors(QBar3DSeries* self, const libqt_list /* of QColor* */ colors) {
    QList<QColor> colors_QList;
    colors_QList.reserve(colors.len);
    QColor** colors_arr = static_cast<QColor**>(colors.data);
    for (size_t i = 0; i < colors.len; ++i) {
        colors_QList.push_back(*(colors_arr[i]));
    }
    self->setRowColors(colors_QList);
}

void QBar3DSeries_DataProxyChanged(QBar3DSeries* self, QBarDataProxy* proxy) {
    self->dataProxyChanged(proxy);
}

void QBar3DSeries_Connect_DataProxyChanged(QBar3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QBar3DSeries*, QBarDataProxy*) = reinterpret_cast<void (*)(QBar3DSeries*, QBarDataProxy*)>(slot);
    QBar3DSeries::connect(self,
                          static_cast<void (QBar3DSeries::*)(QBarDataProxy*)>(&QBar3DSeries::dataProxyChanged),
                          [self, slotFunc](QBarDataProxy* proxy) {
                              QBarDataProxy* sigval1 = proxy;
                              slotFunc(self, sigval1);
                          });
}

void QBar3DSeries_SelectedBarChanged(QBar3DSeries* self, const QPoint* position) {
    self->selectedBarChanged(*position);
}

void QBar3DSeries_Connect_SelectedBarChanged(QBar3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QBar3DSeries*, QPoint*) = reinterpret_cast<void (*)(QBar3DSeries*, QPoint*)>(slot);
    QBar3DSeries::connect(self,
                          static_cast<void (QBar3DSeries::*)(const QPoint&)>(&QBar3DSeries::selectedBarChanged),
                          [self, slotFunc](const QPoint& position) {
                              const QPoint& position_ret = position;
                              // Cast returned reference into pointer
                              QPoint* sigval1 = const_cast<QPoint*>(&position_ret);
                              slotFunc(self, sigval1);
                          });
}

void QBar3DSeries_MeshAngleChanged(QBar3DSeries* self, float angle) {
    self->meshAngleChanged(static_cast<float>(angle));
}

void QBar3DSeries_Connect_MeshAngleChanged(QBar3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QBar3DSeries*, float) = reinterpret_cast<void (*)(QBar3DSeries*, float)>(slot);
    QBar3DSeries::connect(self,
                          static_cast<void (QBar3DSeries::*)(float)>(&QBar3DSeries::meshAngleChanged),
                          [self, slotFunc](float angle) {
                              float sigval1 = angle;
                              slotFunc(self, sigval1);
                          });
}

void QBar3DSeries_RowColorsChanged(QBar3DSeries* self, const libqt_list /* of QColor* */ rowcolors) {
    QList<QColor> rowcolors_QList;
    rowcolors_QList.reserve(rowcolors.len);
    QColor** rowcolors_arr = static_cast<QColor**>(rowcolors.data);
    for (size_t i = 0; i < rowcolors.len; ++i) {
        rowcolors_QList.push_back(*(rowcolors_arr[i]));
    }
    self->rowColorsChanged(rowcolors_QList);
}

void QBar3DSeries_Connect_RowColorsChanged(QBar3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QBar3DSeries*, libqt_list /* of QColor* */) = reinterpret_cast<void (*)(QBar3DSeries*, libqt_list /* of QColor* */)>(slot);
    QBar3DSeries::connect(self,
                          static_cast<void (QBar3DSeries::*)(const QList<QColor>&)>(&QBar3DSeries::rowColorsChanged),
                          [self, slotFunc](const QList<QColor>& rowcolors) {
                              const QList<QColor>& rowcolors_ret = rowcolors;
                              // Convert QList<> from C++ memory to manually-managed C memory
                              QColor** rowcolors_arr = static_cast<QColor**>(malloc(sizeof(QColor*) * (rowcolors_ret.size())));
                              for (qsizetype i = 0; i < rowcolors_ret.size(); ++i) {
                                  rowcolors_arr[i] = new QColor(rowcolors_ret[i]);
                              }
                              libqt_list rowcolors_out;
                              rowcolors_out.len = rowcolors_ret.size();
                              rowcolors_out.data = static_cast<void*>(rowcolors_arr);
                              libqt_list /* of QColor* */ sigval1 = rowcolors_out;
                              slotFunc(self, sigval1);
                              free(rowcolors_arr);
                          });
}

libqt_string QBar3DSeries_Tr2(const char* s, const char* c) {
    auto _ret = QBar3DSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBar3DSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBar3DSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QBar3DSeries_SuperMetaObject(const QBar3DSeries* self) {
    return (QMetaObject*)self->QBar3DSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnMetaObject(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = const_cast<VirtualQBar3DSeries*>(dynamic_cast<const VirtualQBar3DSeries*>(self)))
        vqbar3dseries->qbar3dseries_metaobject_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBar3DSeries_SuperMetacast(QBar3DSeries* self, const char* param1) {
    return self->QBar3DSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnMetacast(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_metacast_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBar3DSeries_SuperMetacall(QBar3DSeries* self, int param1, int param2, void** param3) {
    return self->QBar3DSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnMetacall(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_metacall_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QBar3DSeries_Event(QBar3DSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBar3DSeries_SuperEvent(QBar3DSeries* self, QEvent* event) {
    return self->QBar3DSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnEvent(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_event_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBar3DSeries_EventFilter(QBar3DSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBar3DSeries_SuperEventFilter(QBar3DSeries* self, QObject* watched, QEvent* event) {
    return self->QBar3DSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnEventFilter(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_eventfilter_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBar3DSeries_TimerEvent(QBar3DSeries* self, QTimerEvent* event) {
    auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self);
    if (vqbar3dseries) {
        vqbar3dseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBar3DSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBar3DSeries_SuperTimerEvent(QBar3DSeries* self, QTimerEvent* event) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self)) {
        vqbar3dseries->QBar3DSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBar3DSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnTimerEvent(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_timerevent_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBar3DSeries_ChildEvent(QBar3DSeries* self, QChildEvent* event) {
    auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self);
    if (vqbar3dseries) {
        vqbar3dseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBar3DSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBar3DSeries_SuperChildEvent(QBar3DSeries* self, QChildEvent* event) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self)) {
        vqbar3dseries->QBar3DSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBar3DSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnChildEvent(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_childevent_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBar3DSeries_CustomEvent(QBar3DSeries* self, QEvent* event) {
    auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self);
    if (vqbar3dseries) {
        vqbar3dseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBar3DSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBar3DSeries_SuperCustomEvent(QBar3DSeries* self, QEvent* event) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self)) {
        vqbar3dseries->QBar3DSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBar3DSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnCustomEvent(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_customevent_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBar3DSeries_ConnectNotify(QBar3DSeries* self, const QMetaMethod* signal) {
    auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self);
    if (vqbar3dseries) {
        vqbar3dseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBar3DSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBar3DSeries_SuperConnectNotify(QBar3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self)) {
        vqbar3dseries->QBar3DSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBar3DSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnConnectNotify(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_connectnotify_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBar3DSeries_DisconnectNotify(QBar3DSeries* self, const QMetaMethod* signal) {
    auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self);
    if (vqbar3dseries) {
        vqbar3dseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBar3DSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBar3DSeries_SuperDisconnectNotify(QBar3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self)) {
        vqbar3dseries->QBar3DSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBar3DSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBar3DSeries_OnDisconnectNotify(QBar3DSeries* self, intptr_t slot) {
    if (auto* vqbar3dseries = dynamic_cast<VirtualQBar3DSeries*>(self))
        vqbar3dseries->qbar3dseries_disconnectnotify_callback = reinterpret_cast<VirtualQBar3DSeries::QBar3DSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBar3DSeries_Sender(const QBar3DSeries* self) {
    if (auto* vqbar3dseries = const_cast<VirtualQBar3DSeries*>(dynamic_cast<const VirtualQBar3DSeries*>(self))) {
        return vqbar3dseries->VirtualQBar3DSeries::sender();
    } else
        qFatal("Error: Protected method QBar3DSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBar3DSeries_SenderSignalIndex(const QBar3DSeries* self) {
    if (auto* vqbar3dseries = const_cast<VirtualQBar3DSeries*>(dynamic_cast<const VirtualQBar3DSeries*>(self))) {
        return vqbar3dseries->VirtualQBar3DSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBar3DSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBar3DSeries_Receivers(const QBar3DSeries* self, const char* signal) {
    if (auto* vqbar3dseries = const_cast<VirtualQBar3DSeries*>(dynamic_cast<const VirtualQBar3DSeries*>(self))) {
        return vqbar3dseries->VirtualQBar3DSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QBar3DSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBar3DSeries_IsSignalConnected(const QBar3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqbar3dseries = const_cast<VirtualQBar3DSeries*>(dynamic_cast<const VirtualQBar3DSeries*>(self))) {
        return vqbar3dseries->VirtualQBar3DSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBar3DSeries::isSignalConnected called without a directly constructed type");
}

void QBar3DSeries_Delete(QBar3DSeries* self) {
    delete self;
}
