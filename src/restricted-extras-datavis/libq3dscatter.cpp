#include <Q3DScatter>
#include <QAbstract3DGraph>
#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QScatter3DSeries>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QValue3DAxis>
#include <QWheelEvent>
#include <QWindow>
#include <q3dscatter.h>
#include "libq3dscatter.h"
#include "libq3dscatter.hxx"

Q3DScatter* Q3DScatter_new() {
    return new VirtualQ3DScatter();
}

Q3DScatter* Q3DScatter_new2(const QSurfaceFormat* format) {
    return new VirtualQ3DScatter(format);
}

Q3DScatter* Q3DScatter_new3(const QSurfaceFormat* format, QWindow* parent) {
    return new VirtualQ3DScatter(format, parent);
}

QMetaObject* Q3DScatter_MetaObject(const Q3DScatter* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DScatter_Metacast(Q3DScatter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DScatter_Metacall(Q3DScatter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DScatter_Tr(const char* s) {
    auto _ret = Q3DScatter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Q3DScatter_AddSeries(Q3DScatter* self, QScatter3DSeries* series) {
    self->addSeries(series);
}

void Q3DScatter_RemoveSeries(Q3DScatter* self, QScatter3DSeries* series) {
    self->removeSeries(series);
}

libqt_list /* of QScatter3DSeries* */ Q3DScatter_SeriesList(const Q3DScatter* self) {
    QList<QScatter3DSeries*> _ret = self->seriesList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QScatter3DSeries** _arr = static_cast<QScatter3DSeries**>(malloc(sizeof(QScatter3DSeries*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Q3DScatter_SetAxisX(Q3DScatter* self, QValue3DAxis* axis) {
    self->setAxisX(axis);
}

QValue3DAxis* Q3DScatter_AxisX(const Q3DScatter* self) {
    return self->axisX();
}

void Q3DScatter_SetAxisY(Q3DScatter* self, QValue3DAxis* axis) {
    self->setAxisY(axis);
}

QValue3DAxis* Q3DScatter_AxisY(const Q3DScatter* self) {
    return self->axisY();
}

void Q3DScatter_SetAxisZ(Q3DScatter* self, QValue3DAxis* axis) {
    self->setAxisZ(axis);
}

QValue3DAxis* Q3DScatter_AxisZ(const Q3DScatter* self) {
    return self->axisZ();
}

void Q3DScatter_AddAxis(Q3DScatter* self, QValue3DAxis* axis) {
    self->addAxis(axis);
}

void Q3DScatter_ReleaseAxis(Q3DScatter* self, QValue3DAxis* axis) {
    self->releaseAxis(axis);
}

libqt_list /* of QValue3DAxis* */ Q3DScatter_Axes(const Q3DScatter* self) {
    QList<QValue3DAxis*> _ret = self->axes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QValue3DAxis** _arr = static_cast<QValue3DAxis**>(malloc(sizeof(QValue3DAxis*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QScatter3DSeries* Q3DScatter_SelectedSeries(const Q3DScatter* self) {
    return self->selectedSeries();
}

void Q3DScatter_AxisXChanged(Q3DScatter* self, QValue3DAxis* axis) {
    self->axisXChanged(axis);
}

void Q3DScatter_Connect_AxisXChanged(Q3DScatter* self, intptr_t slot) {
    void (*slotFunc)(Q3DScatter*, QValue3DAxis*) = reinterpret_cast<void (*)(Q3DScatter*, QValue3DAxis*)>(slot);
    Q3DScatter::connect(self,
                        static_cast<void (Q3DScatter::*)(QValue3DAxis*)>(&Q3DScatter::axisXChanged),
                        [self, slotFunc](QValue3DAxis* axis) {
                            QValue3DAxis* sigval1 = axis;
                            slotFunc(self, sigval1);
                        });
}

void Q3DScatter_AxisYChanged(Q3DScatter* self, QValue3DAxis* axis) {
    self->axisYChanged(axis);
}

void Q3DScatter_Connect_AxisYChanged(Q3DScatter* self, intptr_t slot) {
    void (*slotFunc)(Q3DScatter*, QValue3DAxis*) = reinterpret_cast<void (*)(Q3DScatter*, QValue3DAxis*)>(slot);
    Q3DScatter::connect(self,
                        static_cast<void (Q3DScatter::*)(QValue3DAxis*)>(&Q3DScatter::axisYChanged),
                        [self, slotFunc](QValue3DAxis* axis) {
                            QValue3DAxis* sigval1 = axis;
                            slotFunc(self, sigval1);
                        });
}

void Q3DScatter_AxisZChanged(Q3DScatter* self, QValue3DAxis* axis) {
    self->axisZChanged(axis);
}

void Q3DScatter_Connect_AxisZChanged(Q3DScatter* self, intptr_t slot) {
    void (*slotFunc)(Q3DScatter*, QValue3DAxis*) = reinterpret_cast<void (*)(Q3DScatter*, QValue3DAxis*)>(slot);
    Q3DScatter::connect(self,
                        static_cast<void (Q3DScatter::*)(QValue3DAxis*)>(&Q3DScatter::axisZChanged),
                        [self, slotFunc](QValue3DAxis* axis) {
                            QValue3DAxis* sigval1 = axis;
                            slotFunc(self, sigval1);
                        });
}

void Q3DScatter_SelectedSeriesChanged(Q3DScatter* self, QScatter3DSeries* series) {
    self->selectedSeriesChanged(series);
}

void Q3DScatter_Connect_SelectedSeriesChanged(Q3DScatter* self, intptr_t slot) {
    void (*slotFunc)(Q3DScatter*, QScatter3DSeries*) = reinterpret_cast<void (*)(Q3DScatter*, QScatter3DSeries*)>(slot);
    Q3DScatter::connect(self,
                        static_cast<void (Q3DScatter::*)(QScatter3DSeries*)>(&Q3DScatter::selectedSeriesChanged),
                        [self, slotFunc](QScatter3DSeries* series) {
                            QScatter3DSeries* sigval1 = series;
                            slotFunc(self, sigval1);
                        });
}

libqt_string Q3DScatter_Tr2(const char* s, const char* c) {
    auto _ret = Q3DScatter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DScatter_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DScatter::tr(s, c, static_cast<int>(n));
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
QMetaObject* Q3DScatter_SuperMetaObject(const Q3DScatter* self) {
    return (QMetaObject*)self->Q3DScatter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnMetaObject(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self)))
        vq3dscatter->q3dscatter_metaobject_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DScatter_SuperMetacast(Q3DScatter* self, const char* param1) {
    return self->Q3DScatter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnMetacast(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_metacast_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DScatter_SuperMetacall(Q3DScatter* self, int param1, int param2, void** param3) {
    return self->Q3DScatter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnMetacall(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_metacall_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Q3DScatter_ShadowsSupported(const Q3DScatter* self) {
    return self->shadowsSupported();
}

// Base class handler implementation
bool Q3DScatter_SuperShadowsSupported(const Q3DScatter* self) {
    return self->Q3DScatter::shadowsSupported();
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnShadowsSupported(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self)))
        vq3dscatter->q3dscatter_shadowssupported_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_ShadowsSupported_Callback>(slot);
}

// Derived class handler implementation
bool Q3DScatter_Event(Q3DScatter* self, QEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        return vq3dscatter->event(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool Q3DScatter_SuperEvent(Q3DScatter* self, QEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        return vq3dscatter->Q3DScatter::event(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_event_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_Event_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_ResizeEvent(Q3DScatter* self, QResizeEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperResizeEvent(Q3DScatter* self, QResizeEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnResizeEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_resizeevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_ExposeEvent(Q3DScatter* self, QExposeEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->exposeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::exposeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperExposeEvent(Q3DScatter* self, QExposeEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::exposeEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::exposeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnExposeEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_exposeevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_ExposeEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_MouseDoubleClickEvent(Q3DScatter* self, QMouseEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperMouseDoubleClickEvent(Q3DScatter* self, QMouseEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnMouseDoubleClickEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_mousedoubleclickevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_TouchEvent(Q3DScatter* self, QTouchEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->touchEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperTouchEvent(Q3DScatter* self, QTouchEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::touchEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnTouchEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_touchevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_MousePressEvent(Q3DScatter* self, QMouseEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperMousePressEvent(Q3DScatter* self, QMouseEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnMousePressEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_mousepressevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_MouseReleaseEvent(Q3DScatter* self, QMouseEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperMouseReleaseEvent(Q3DScatter* self, QMouseEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnMouseReleaseEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_mousereleaseevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_MouseMoveEvent(Q3DScatter* self, QMouseEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperMouseMoveEvent(Q3DScatter* self, QMouseEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnMouseMoveEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_mousemoveevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_WheelEvent(Q3DScatter* self, QWheelEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperWheelEvent(Q3DScatter* self, QWheelEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnWheelEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_wheelevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
int Q3DScatter_SurfaceType(const Q3DScatter* self) {
    return static_cast<int>(self->surfaceType());
}

// Base class handler implementation
int Q3DScatter_SuperSurfaceType(const Q3DScatter* self) {
    return static_cast<int>(self->Q3DScatter::surfaceType());
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnSurfaceType(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self)))
        vq3dscatter->q3dscatter_surfacetype_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_SurfaceType_Callback>(slot);
}

// Derived class handler implementation
QSurfaceFormat* Q3DScatter_Format(const Q3DScatter* self) {
    return new QSurfaceFormat(self->format());
}

// Base class handler implementation
QSurfaceFormat* Q3DScatter_SuperFormat(const Q3DScatter* self) {
    return new QSurfaceFormat(self->Q3DScatter::format());
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnFormat(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self)))
        vq3dscatter->q3dscatter_format_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_Format_Callback>(slot);
}

// Derived class handler implementation
QSize* Q3DScatter_Size(const Q3DScatter* self) {
    return new QSize(self->size());
}

// Base class handler implementation
QSize* Q3DScatter_SuperSize(const Q3DScatter* self) {
    return new QSize(self->Q3DScatter::size());
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnSize(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self)))
        vq3dscatter->q3dscatter_size_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_Size_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* Q3DScatter_AccessibleRoot(const Q3DScatter* self) {
    return self->accessibleRoot();
}

// Base class handler implementation
QAccessibleInterface* Q3DScatter_SuperAccessibleRoot(const Q3DScatter* self) {
    return self->Q3DScatter::accessibleRoot();
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnAccessibleRoot(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self)))
        vq3dscatter->q3dscatter_accessibleroot_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_AccessibleRoot_Callback>(slot);
}

// Derived class handler implementation
QObject* Q3DScatter_FocusObject(const Q3DScatter* self) {
    return self->focusObject();
}

// Base class handler implementation
QObject* Q3DScatter_SuperFocusObject(const Q3DScatter* self) {
    return self->Q3DScatter::focusObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnFocusObject(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self)))
        vq3dscatter->q3dscatter_focusobject_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_FocusObject_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_PaintEvent(Q3DScatter* self, QPaintEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperPaintEvent(Q3DScatter* self, QPaintEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnPaintEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_paintevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_MoveEvent(Q3DScatter* self, QMoveEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->moveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperMoveEvent(Q3DScatter* self, QMoveEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::moveEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnMoveEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_moveevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_FocusInEvent(Q3DScatter* self, QFocusEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperFocusInEvent(Q3DScatter* self, QFocusEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnFocusInEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_focusinevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_FocusOutEvent(Q3DScatter* self, QFocusEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperFocusOutEvent(Q3DScatter* self, QFocusEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnFocusOutEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_focusoutevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_ShowEvent(Q3DScatter* self, QShowEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperShowEvent(Q3DScatter* self, QShowEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnShowEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_showevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_HideEvent(Q3DScatter* self, QHideEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperHideEvent(Q3DScatter* self, QHideEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnHideEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_hideevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_CloseEvent(Q3DScatter* self, QCloseEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperCloseEvent(Q3DScatter* self, QCloseEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnCloseEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_closeevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_KeyPressEvent(Q3DScatter* self, QKeyEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperKeyPressEvent(Q3DScatter* self, QKeyEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnKeyPressEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_keypressevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_KeyReleaseEvent(Q3DScatter* self, QKeyEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->keyReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperKeyReleaseEvent(Q3DScatter* self, QKeyEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnKeyReleaseEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_keyreleaseevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_TabletEvent(Q3DScatter* self, QTabletEvent* param1) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->tabletEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperTabletEvent(Q3DScatter* self, QTabletEvent* param1) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::tabletEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnTabletEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_tabletevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
bool Q3DScatter_NativeEvent(Q3DScatter* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        return vq3dscatter->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool Q3DScatter_SuperNativeEvent(Q3DScatter* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        return vq3dscatter->Q3DScatter::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method Q3DScatter::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnNativeEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_nativeevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
bool Q3DScatter_EventFilter(Q3DScatter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DScatter_SuperEventFilter(Q3DScatter* self, QObject* watched, QEvent* event) {
    return self->Q3DScatter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnEventFilter(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_eventfilter_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_TimerEvent(Q3DScatter* self, QTimerEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperTimerEvent(Q3DScatter* self, QTimerEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnTimerEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_timerevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_ChildEvent(Q3DScatter* self, QChildEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperChildEvent(Q3DScatter* self, QChildEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnChildEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_childevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_CustomEvent(Q3DScatter* self, QEvent* event) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperCustomEvent(Q3DScatter* self, QEvent* event) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnCustomEvent(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_customevent_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_ConnectNotify(Q3DScatter* self, const QMetaMethod* signal) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperConnectNotify(Q3DScatter* self, const QMetaMethod* signal) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnConnectNotify(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_connectnotify_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DScatter_DisconnectNotify(Q3DScatter* self, const QMetaMethod* signal) {
    auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self);
    if (vq3dscatter) {
        vq3dscatter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DScatter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DScatter_SuperDisconnectNotify(Q3DScatter* self, const QMetaMethod* signal) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self)) {
        vq3dscatter->Q3DScatter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DScatter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DScatter_OnDisconnectNotify(Q3DScatter* self, intptr_t slot) {
    if (auto* vq3dscatter = dynamic_cast<VirtualQ3DScatter*>(self))
        vq3dscatter->q3dscatter_disconnectnotify_callback = reinterpret_cast<VirtualQ3DScatter::Q3DScatter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* Q3DScatter_ResolveInterface(const Q3DScatter* self, const char* name, int revision) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self))) {
        return vq3dscatter->VirtualQ3DScatter::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method Q3DScatter::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Q3DScatter_Sender(const Q3DScatter* self) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self))) {
        return vq3dscatter->VirtualQ3DScatter::sender();
    } else
        qFatal("Error: Protected method Q3DScatter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DScatter_SenderSignalIndex(const Q3DScatter* self) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self))) {
        return vq3dscatter->VirtualQ3DScatter::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DScatter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DScatter_Receivers(const Q3DScatter* self, const char* signal) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self))) {
        return vq3dscatter->VirtualQ3DScatter::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DScatter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DScatter_IsSignalConnected(const Q3DScatter* self, const QMetaMethod* signal) {
    if (auto* vq3dscatter = const_cast<VirtualQ3DScatter*>(dynamic_cast<const VirtualQ3DScatter*>(self))) {
        return vq3dscatter->VirtualQ3DScatter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DScatter::isSignalConnected called without a directly constructed type");
}

void Q3DScatter_Delete(Q3DScatter* self) {
    delete self;
}
