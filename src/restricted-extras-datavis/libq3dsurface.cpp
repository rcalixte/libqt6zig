#include <Q3DSurface>
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
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QSurface>
#include <QSurface3DSeries>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QValue3DAxis>
#include <QWheelEvent>
#include <QWindow>
#include <q3dsurface.h>
#include "libq3dsurface.h"
#include "libq3dsurface.hxx"

Q3DSurface* Q3DSurface_new() {
    return new VirtualQ3DSurface();
}

Q3DSurface* Q3DSurface_new2(const QSurfaceFormat* format) {
    return new VirtualQ3DSurface(format);
}

Q3DSurface* Q3DSurface_new3(const QSurfaceFormat* format, QWindow* parent) {
    return new VirtualQ3DSurface(format, parent);
}

QMetaObject* Q3DSurface_MetaObject(const Q3DSurface* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DSurface_Metacast(Q3DSurface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DSurface_Metacall(Q3DSurface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DSurface_Tr(const char* s) {
    auto _ret = Q3DSurface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Q3DSurface_AddSeries(Q3DSurface* self, QSurface3DSeries* series) {
    self->addSeries(series);
}

void Q3DSurface_RemoveSeries(Q3DSurface* self, QSurface3DSeries* series) {
    self->removeSeries(series);
}

libqt_list /* of QSurface3DSeries* */ Q3DSurface_SeriesList(const Q3DSurface* self) {
    QList<QSurface3DSeries*> _ret = self->seriesList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSurface3DSeries** _arr = static_cast<QSurface3DSeries**>(malloc(sizeof(QSurface3DSeries*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Q3DSurface_SetAxisX(Q3DSurface* self, QValue3DAxis* axis) {
    self->setAxisX(axis);
}

QValue3DAxis* Q3DSurface_AxisX(const Q3DSurface* self) {
    return self->axisX();
}

void Q3DSurface_SetAxisY(Q3DSurface* self, QValue3DAxis* axis) {
    self->setAxisY(axis);
}

QValue3DAxis* Q3DSurface_AxisY(const Q3DSurface* self) {
    return self->axisY();
}

void Q3DSurface_SetAxisZ(Q3DSurface* self, QValue3DAxis* axis) {
    self->setAxisZ(axis);
}

QValue3DAxis* Q3DSurface_AxisZ(const Q3DSurface* self) {
    return self->axisZ();
}

void Q3DSurface_AddAxis(Q3DSurface* self, QValue3DAxis* axis) {
    self->addAxis(axis);
}

void Q3DSurface_ReleaseAxis(Q3DSurface* self, QValue3DAxis* axis) {
    self->releaseAxis(axis);
}

libqt_list /* of QValue3DAxis* */ Q3DSurface_Axes(const Q3DSurface* self) {
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

QSurface3DSeries* Q3DSurface_SelectedSeries(const Q3DSurface* self) {
    return self->selectedSeries();
}

void Q3DSurface_SetFlipHorizontalGrid(Q3DSurface* self, bool flip) {
    self->setFlipHorizontalGrid(flip);
}

bool Q3DSurface_FlipHorizontalGrid(const Q3DSurface* self) {
    return self->flipHorizontalGrid();
}

void Q3DSurface_AxisXChanged(Q3DSurface* self, QValue3DAxis* axis) {
    self->axisXChanged(axis);
}

void Q3DSurface_Connect_AxisXChanged(Q3DSurface* self, intptr_t slot) {
    void (*slotFunc)(Q3DSurface*, QValue3DAxis*) = reinterpret_cast<void (*)(Q3DSurface*, QValue3DAxis*)>(slot);
    Q3DSurface::connect(self,
                        static_cast<void (Q3DSurface::*)(QValue3DAxis*)>(&Q3DSurface::axisXChanged),
                        [self, slotFunc](QValue3DAxis* axis) {
                            QValue3DAxis* sigval1 = axis;
                            slotFunc(self, sigval1);
                        });
}

void Q3DSurface_AxisYChanged(Q3DSurface* self, QValue3DAxis* axis) {
    self->axisYChanged(axis);
}

void Q3DSurface_Connect_AxisYChanged(Q3DSurface* self, intptr_t slot) {
    void (*slotFunc)(Q3DSurface*, QValue3DAxis*) = reinterpret_cast<void (*)(Q3DSurface*, QValue3DAxis*)>(slot);
    Q3DSurface::connect(self,
                        static_cast<void (Q3DSurface::*)(QValue3DAxis*)>(&Q3DSurface::axisYChanged),
                        [self, slotFunc](QValue3DAxis* axis) {
                            QValue3DAxis* sigval1 = axis;
                            slotFunc(self, sigval1);
                        });
}

void Q3DSurface_AxisZChanged(Q3DSurface* self, QValue3DAxis* axis) {
    self->axisZChanged(axis);
}

void Q3DSurface_Connect_AxisZChanged(Q3DSurface* self, intptr_t slot) {
    void (*slotFunc)(Q3DSurface*, QValue3DAxis*) = reinterpret_cast<void (*)(Q3DSurface*, QValue3DAxis*)>(slot);
    Q3DSurface::connect(self,
                        static_cast<void (Q3DSurface::*)(QValue3DAxis*)>(&Q3DSurface::axisZChanged),
                        [self, slotFunc](QValue3DAxis* axis) {
                            QValue3DAxis* sigval1 = axis;
                            slotFunc(self, sigval1);
                        });
}

void Q3DSurface_SelectedSeriesChanged(Q3DSurface* self, QSurface3DSeries* series) {
    self->selectedSeriesChanged(series);
}

void Q3DSurface_Connect_SelectedSeriesChanged(Q3DSurface* self, intptr_t slot) {
    void (*slotFunc)(Q3DSurface*, QSurface3DSeries*) = reinterpret_cast<void (*)(Q3DSurface*, QSurface3DSeries*)>(slot);
    Q3DSurface::connect(self,
                        static_cast<void (Q3DSurface::*)(QSurface3DSeries*)>(&Q3DSurface::selectedSeriesChanged),
                        [self, slotFunc](QSurface3DSeries* series) {
                            QSurface3DSeries* sigval1 = series;
                            slotFunc(self, sigval1);
                        });
}

void Q3DSurface_FlipHorizontalGridChanged(Q3DSurface* self, bool flip) {
    self->flipHorizontalGridChanged(flip);
}

void Q3DSurface_Connect_FlipHorizontalGridChanged(Q3DSurface* self, intptr_t slot) {
    void (*slotFunc)(Q3DSurface*, bool) = reinterpret_cast<void (*)(Q3DSurface*, bool)>(slot);
    Q3DSurface::connect(self,
                        static_cast<void (Q3DSurface::*)(bool)>(&Q3DSurface::flipHorizontalGridChanged),
                        [self, slotFunc](bool flip) {
                            bool sigval1 = flip;
                            slotFunc(self, sigval1);
                        });
}

libqt_string Q3DSurface_Tr2(const char* s, const char* c) {
    auto _ret = Q3DSurface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DSurface_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DSurface::tr(s, c, static_cast<int>(n));
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
QMetaObject* Q3DSurface_SuperMetaObject(const Q3DSurface* self) {
    return (QMetaObject*)self->Q3DSurface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnMetaObject(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self)))
        vq3dsurface->q3dsurface_metaobject_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DSurface_SuperMetacast(Q3DSurface* self, const char* param1) {
    return self->Q3DSurface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnMetacast(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_metacast_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DSurface_SuperMetacall(Q3DSurface* self, int param1, int param2, void** param3) {
    return self->Q3DSurface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnMetacall(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_metacall_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Q3DSurface_ShadowsSupported(const Q3DSurface* self) {
    return self->shadowsSupported();
}

// Base class handler implementation
bool Q3DSurface_SuperShadowsSupported(const Q3DSurface* self) {
    return self->Q3DSurface::shadowsSupported();
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnShadowsSupported(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self)))
        vq3dsurface->q3dsurface_shadowssupported_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_ShadowsSupported_Callback>(slot);
}

// Derived class handler implementation
bool Q3DSurface_Event(Q3DSurface* self, QEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        return vq3dsurface->event(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool Q3DSurface_SuperEvent(Q3DSurface* self, QEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        return vq3dsurface->Q3DSurface::event(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_event_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_Event_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_ResizeEvent(Q3DSurface* self, QResizeEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperResizeEvent(Q3DSurface* self, QResizeEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnResizeEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_resizeevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_ExposeEvent(Q3DSurface* self, QExposeEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->exposeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::exposeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperExposeEvent(Q3DSurface* self, QExposeEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::exposeEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::exposeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnExposeEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_exposeevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_ExposeEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_MouseDoubleClickEvent(Q3DSurface* self, QMouseEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperMouseDoubleClickEvent(Q3DSurface* self, QMouseEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnMouseDoubleClickEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_mousedoubleclickevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_TouchEvent(Q3DSurface* self, QTouchEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->touchEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperTouchEvent(Q3DSurface* self, QTouchEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::touchEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnTouchEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_touchevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_MousePressEvent(Q3DSurface* self, QMouseEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperMousePressEvent(Q3DSurface* self, QMouseEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnMousePressEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_mousepressevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_MouseReleaseEvent(Q3DSurface* self, QMouseEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperMouseReleaseEvent(Q3DSurface* self, QMouseEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnMouseReleaseEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_mousereleaseevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_MouseMoveEvent(Q3DSurface* self, QMouseEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperMouseMoveEvent(Q3DSurface* self, QMouseEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnMouseMoveEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_mousemoveevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_WheelEvent(Q3DSurface* self, QWheelEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperWheelEvent(Q3DSurface* self, QWheelEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnWheelEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_wheelevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
int Q3DSurface_SurfaceType(const Q3DSurface* self) {
    return static_cast<int>(self->surfaceType());
}

// Base class handler implementation
int Q3DSurface_SuperSurfaceType(const Q3DSurface* self) {
    return static_cast<int>(self->Q3DSurface::surfaceType());
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnSurfaceType(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self)))
        vq3dsurface->q3dsurface_surfacetype_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_SurfaceType_Callback>(slot);
}

// Derived class handler implementation
QSurfaceFormat* Q3DSurface_Format(const Q3DSurface* self) {
    return new QSurfaceFormat(self->format());
}

// Base class handler implementation
QSurfaceFormat* Q3DSurface_SuperFormat(const Q3DSurface* self) {
    return new QSurfaceFormat(self->Q3DSurface::format());
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnFormat(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self)))
        vq3dsurface->q3dsurface_format_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_Format_Callback>(slot);
}

// Derived class handler implementation
QSize* Q3DSurface_Size(const Q3DSurface* self) {
    return new QSize(self->size());
}

// Base class handler implementation
QSize* Q3DSurface_SuperSize(const Q3DSurface* self) {
    return new QSize(self->Q3DSurface::size());
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnSize(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self)))
        vq3dsurface->q3dsurface_size_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_Size_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* Q3DSurface_AccessibleRoot(const Q3DSurface* self) {
    return self->accessibleRoot();
}

// Base class handler implementation
QAccessibleInterface* Q3DSurface_SuperAccessibleRoot(const Q3DSurface* self) {
    return self->Q3DSurface::accessibleRoot();
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnAccessibleRoot(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self)))
        vq3dsurface->q3dsurface_accessibleroot_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_AccessibleRoot_Callback>(slot);
}

// Derived class handler implementation
QObject* Q3DSurface_FocusObject(const Q3DSurface* self) {
    return self->focusObject();
}

// Base class handler implementation
QObject* Q3DSurface_SuperFocusObject(const Q3DSurface* self) {
    return self->Q3DSurface::focusObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnFocusObject(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self)))
        vq3dsurface->q3dsurface_focusobject_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_FocusObject_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_PaintEvent(Q3DSurface* self, QPaintEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperPaintEvent(Q3DSurface* self, QPaintEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnPaintEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_paintevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_MoveEvent(Q3DSurface* self, QMoveEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->moveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperMoveEvent(Q3DSurface* self, QMoveEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::moveEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnMoveEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_moveevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_FocusInEvent(Q3DSurface* self, QFocusEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperFocusInEvent(Q3DSurface* self, QFocusEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnFocusInEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_focusinevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_FocusOutEvent(Q3DSurface* self, QFocusEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperFocusOutEvent(Q3DSurface* self, QFocusEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnFocusOutEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_focusoutevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_ShowEvent(Q3DSurface* self, QShowEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperShowEvent(Q3DSurface* self, QShowEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnShowEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_showevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_HideEvent(Q3DSurface* self, QHideEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperHideEvent(Q3DSurface* self, QHideEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnHideEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_hideevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_CloseEvent(Q3DSurface* self, QCloseEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperCloseEvent(Q3DSurface* self, QCloseEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnCloseEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_closeevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_KeyPressEvent(Q3DSurface* self, QKeyEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperKeyPressEvent(Q3DSurface* self, QKeyEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnKeyPressEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_keypressevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_KeyReleaseEvent(Q3DSurface* self, QKeyEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->keyReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperKeyReleaseEvent(Q3DSurface* self, QKeyEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnKeyReleaseEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_keyreleaseevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_TabletEvent(Q3DSurface* self, QTabletEvent* param1) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->tabletEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperTabletEvent(Q3DSurface* self, QTabletEvent* param1) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::tabletEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnTabletEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_tabletevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
bool Q3DSurface_NativeEvent(Q3DSurface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        return vq3dsurface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool Q3DSurface_SuperNativeEvent(Q3DSurface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        return vq3dsurface->Q3DSurface::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method Q3DSurface::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnNativeEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_nativeevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
bool Q3DSurface_EventFilter(Q3DSurface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DSurface_SuperEventFilter(Q3DSurface* self, QObject* watched, QEvent* event) {
    return self->Q3DSurface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnEventFilter(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_eventfilter_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_TimerEvent(Q3DSurface* self, QTimerEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperTimerEvent(Q3DSurface* self, QTimerEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnTimerEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_timerevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_ChildEvent(Q3DSurface* self, QChildEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperChildEvent(Q3DSurface* self, QChildEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnChildEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_childevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_CustomEvent(Q3DSurface* self, QEvent* event) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperCustomEvent(Q3DSurface* self, QEvent* event) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnCustomEvent(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_customevent_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_ConnectNotify(Q3DSurface* self, const QMetaMethod* signal) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperConnectNotify(Q3DSurface* self, const QMetaMethod* signal) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnConnectNotify(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_connectnotify_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DSurface_DisconnectNotify(Q3DSurface* self, const QMetaMethod* signal) {
    auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self);
    if (vq3dsurface) {
        vq3dsurface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DSurface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DSurface_SuperDisconnectNotify(Q3DSurface* self, const QMetaMethod* signal) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self)) {
        vq3dsurface->Q3DSurface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DSurface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DSurface_OnDisconnectNotify(Q3DSurface* self, intptr_t slot) {
    if (auto* vq3dsurface = dynamic_cast<VirtualQ3DSurface*>(self))
        vq3dsurface->q3dsurface_disconnectnotify_callback = reinterpret_cast<VirtualQ3DSurface::Q3DSurface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* Q3DSurface_ResolveInterface(const Q3DSurface* self, const char* name, int revision) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self))) {
        return vq3dsurface->VirtualQ3DSurface::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method Q3DSurface::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Q3DSurface_Sender(const Q3DSurface* self) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self))) {
        return vq3dsurface->VirtualQ3DSurface::sender();
    } else
        qFatal("Error: Protected method Q3DSurface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DSurface_SenderSignalIndex(const Q3DSurface* self) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self))) {
        return vq3dsurface->VirtualQ3DSurface::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DSurface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DSurface_Receivers(const Q3DSurface* self, const char* signal) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self))) {
        return vq3dsurface->VirtualQ3DSurface::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DSurface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DSurface_IsSignalConnected(const Q3DSurface* self, const QMetaMethod* signal) {
    if (auto* vq3dsurface = const_cast<VirtualQ3DSurface*>(dynamic_cast<const VirtualQ3DSurface*>(self))) {
        return vq3dsurface->VirtualQ3DSurface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DSurface::isSignalConnected called without a directly constructed type");
}

void Q3DSurface_Delete(Q3DSurface* self) {
    delete self;
}
