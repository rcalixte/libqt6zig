#include <Q3DBars>
#include <QAbstract3DAxis>
#include <QAbstract3DGraph>
#include <QAccessibleInterface>
#include <QBar3DSeries>
#include <QByteArray>
#include <QCategory3DAxis>
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
#include <QSizeF>
#include <QString>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QValue3DAxis>
#include <QWheelEvent>
#include <QWindow>
#include <q3dbars.h>
#include "libq3dbars.h"
#include "libq3dbars.hxx"

Q3DBars* Q3DBars_new() {
    return new VirtualQ3DBars();
}

Q3DBars* Q3DBars_new2(const QSurfaceFormat* format) {
    return new VirtualQ3DBars(format);
}

Q3DBars* Q3DBars_new3(const QSurfaceFormat* format, QWindow* parent) {
    return new VirtualQ3DBars(format, parent);
}

QMetaObject* Q3DBars_MetaObject(const Q3DBars* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DBars_Metacast(Q3DBars* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DBars_Metacall(Q3DBars* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DBars_Tr(const char* s) {
    auto _ret = Q3DBars::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Q3DBars_SetPrimarySeries(Q3DBars* self, QBar3DSeries* series) {
    self->setPrimarySeries(series);
}

QBar3DSeries* Q3DBars_PrimarySeries(const Q3DBars* self) {
    return self->primarySeries();
}

void Q3DBars_AddSeries(Q3DBars* self, QBar3DSeries* series) {
    self->addSeries(series);
}

void Q3DBars_RemoveSeries(Q3DBars* self, QBar3DSeries* series) {
    self->removeSeries(series);
}

void Q3DBars_InsertSeries(Q3DBars* self, int index, QBar3DSeries* series) {
    self->insertSeries(static_cast<int>(index), series);
}

libqt_list /* of QBar3DSeries* */ Q3DBars_SeriesList(const Q3DBars* self) {
    QList<QBar3DSeries*> _ret = self->seriesList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBar3DSeries** _arr = static_cast<QBar3DSeries**>(malloc(sizeof(QBar3DSeries*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Q3DBars_SetMultiSeriesUniform(Q3DBars* self, bool uniform) {
    self->setMultiSeriesUniform(uniform);
}

bool Q3DBars_IsMultiSeriesUniform(const Q3DBars* self) {
    return self->isMultiSeriesUniform();
}

void Q3DBars_SetBarThickness(Q3DBars* self, float thicknessRatio) {
    self->setBarThickness(static_cast<float>(thicknessRatio));
}

float Q3DBars_BarThickness(const Q3DBars* self) {
    return self->barThickness();
}

void Q3DBars_SetBarSpacing(Q3DBars* self, const QSizeF* spacing) {
    self->setBarSpacing(*spacing);
}

QSizeF* Q3DBars_BarSpacing(const Q3DBars* self) {
    return new QSizeF(self->barSpacing());
}

void Q3DBars_SetBarSpacingRelative(Q3DBars* self, bool relative) {
    self->setBarSpacingRelative(relative);
}

bool Q3DBars_IsBarSpacingRelative(const Q3DBars* self) {
    return self->isBarSpacingRelative();
}

void Q3DBars_SetBarSeriesMargin(Q3DBars* self, const QSizeF* margin) {
    self->setBarSeriesMargin(*margin);
}

QSizeF* Q3DBars_BarSeriesMargin(const Q3DBars* self) {
    return new QSizeF(self->barSeriesMargin());
}

void Q3DBars_SetRowAxis(Q3DBars* self, QCategory3DAxis* axis) {
    self->setRowAxis(axis);
}

QCategory3DAxis* Q3DBars_RowAxis(const Q3DBars* self) {
    return self->rowAxis();
}

void Q3DBars_SetColumnAxis(Q3DBars* self, QCategory3DAxis* axis) {
    self->setColumnAxis(axis);
}

QCategory3DAxis* Q3DBars_ColumnAxis(const Q3DBars* self) {
    return self->columnAxis();
}

void Q3DBars_SetValueAxis(Q3DBars* self, QValue3DAxis* axis) {
    self->setValueAxis(axis);
}

QValue3DAxis* Q3DBars_ValueAxis(const Q3DBars* self) {
    return self->valueAxis();
}

void Q3DBars_AddAxis(Q3DBars* self, QAbstract3DAxis* axis) {
    self->addAxis(axis);
}

void Q3DBars_ReleaseAxis(Q3DBars* self, QAbstract3DAxis* axis) {
    self->releaseAxis(axis);
}

libqt_list /* of QAbstract3DAxis* */ Q3DBars_Axes(const Q3DBars* self) {
    QList<QAbstract3DAxis*> _ret = self->axes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstract3DAxis** _arr = static_cast<QAbstract3DAxis**>(malloc(sizeof(QAbstract3DAxis*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QBar3DSeries* Q3DBars_SelectedSeries(const Q3DBars* self) {
    return self->selectedSeries();
}

void Q3DBars_SetFloorLevel(Q3DBars* self, float level) {
    self->setFloorLevel(static_cast<float>(level));
}

float Q3DBars_FloorLevel(const Q3DBars* self) {
    return self->floorLevel();
}

void Q3DBars_MultiSeriesUniformChanged(Q3DBars* self, bool uniform) {
    self->multiSeriesUniformChanged(uniform);
}

void Q3DBars_Connect_MultiSeriesUniformChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, bool) = reinterpret_cast<void (*)(Q3DBars*, bool)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(bool)>(&Q3DBars::multiSeriesUniformChanged),
                     [self, slotFunc](bool uniform) {
                         bool sigval1 = uniform;
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_BarThicknessChanged(Q3DBars* self, float thicknessRatio) {
    self->barThicknessChanged(static_cast<float>(thicknessRatio));
}

void Q3DBars_Connect_BarThicknessChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, float) = reinterpret_cast<void (*)(Q3DBars*, float)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(float)>(&Q3DBars::barThicknessChanged),
                     [self, slotFunc](float thicknessRatio) {
                         float sigval1 = thicknessRatio;
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_BarSpacingChanged(Q3DBars* self, const QSizeF* spacing) {
    self->barSpacingChanged(*spacing);
}

void Q3DBars_Connect_BarSpacingChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, QSizeF*) = reinterpret_cast<void (*)(Q3DBars*, QSizeF*)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(const QSizeF&)>(&Q3DBars::barSpacingChanged),
                     [self, slotFunc](const QSizeF& spacing) {
                         const QSizeF& spacing_ret = spacing;
                         // Cast returned reference into pointer
                         QSizeF* sigval1 = const_cast<QSizeF*>(&spacing_ret);
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_BarSpacingRelativeChanged(Q3DBars* self, bool relative) {
    self->barSpacingRelativeChanged(relative);
}

void Q3DBars_Connect_BarSpacingRelativeChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, bool) = reinterpret_cast<void (*)(Q3DBars*, bool)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(bool)>(&Q3DBars::barSpacingRelativeChanged),
                     [self, slotFunc](bool relative) {
                         bool sigval1 = relative;
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_BarSeriesMarginChanged(Q3DBars* self, const QSizeF* margin) {
    self->barSeriesMarginChanged(*margin);
}

void Q3DBars_Connect_BarSeriesMarginChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, QSizeF*) = reinterpret_cast<void (*)(Q3DBars*, QSizeF*)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(const QSizeF&)>(&Q3DBars::barSeriesMarginChanged),
                     [self, slotFunc](const QSizeF& margin) {
                         const QSizeF& margin_ret = margin;
                         // Cast returned reference into pointer
                         QSizeF* sigval1 = const_cast<QSizeF*>(&margin_ret);
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_RowAxisChanged(Q3DBars* self, QCategory3DAxis* axis) {
    self->rowAxisChanged(axis);
}

void Q3DBars_Connect_RowAxisChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, QCategory3DAxis*) = reinterpret_cast<void (*)(Q3DBars*, QCategory3DAxis*)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(QCategory3DAxis*)>(&Q3DBars::rowAxisChanged),
                     [self, slotFunc](QCategory3DAxis* axis) {
                         QCategory3DAxis* sigval1 = axis;
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_ColumnAxisChanged(Q3DBars* self, QCategory3DAxis* axis) {
    self->columnAxisChanged(axis);
}

void Q3DBars_Connect_ColumnAxisChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, QCategory3DAxis*) = reinterpret_cast<void (*)(Q3DBars*, QCategory3DAxis*)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(QCategory3DAxis*)>(&Q3DBars::columnAxisChanged),
                     [self, slotFunc](QCategory3DAxis* axis) {
                         QCategory3DAxis* sigval1 = axis;
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_ValueAxisChanged(Q3DBars* self, QValue3DAxis* axis) {
    self->valueAxisChanged(axis);
}

void Q3DBars_Connect_ValueAxisChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, QValue3DAxis*) = reinterpret_cast<void (*)(Q3DBars*, QValue3DAxis*)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(QValue3DAxis*)>(&Q3DBars::valueAxisChanged),
                     [self, slotFunc](QValue3DAxis* axis) {
                         QValue3DAxis* sigval1 = axis;
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_PrimarySeriesChanged(Q3DBars* self, QBar3DSeries* series) {
    self->primarySeriesChanged(series);
}

void Q3DBars_Connect_PrimarySeriesChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, QBar3DSeries*) = reinterpret_cast<void (*)(Q3DBars*, QBar3DSeries*)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(QBar3DSeries*)>(&Q3DBars::primarySeriesChanged),
                     [self, slotFunc](QBar3DSeries* series) {
                         QBar3DSeries* sigval1 = series;
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_SelectedSeriesChanged(Q3DBars* self, QBar3DSeries* series) {
    self->selectedSeriesChanged(series);
}

void Q3DBars_Connect_SelectedSeriesChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, QBar3DSeries*) = reinterpret_cast<void (*)(Q3DBars*, QBar3DSeries*)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(QBar3DSeries*)>(&Q3DBars::selectedSeriesChanged),
                     [self, slotFunc](QBar3DSeries* series) {
                         QBar3DSeries* sigval1 = series;
                         slotFunc(self, sigval1);
                     });
}

void Q3DBars_FloorLevelChanged(Q3DBars* self, float level) {
    self->floorLevelChanged(static_cast<float>(level));
}

void Q3DBars_Connect_FloorLevelChanged(Q3DBars* self, intptr_t slot) {
    void (*slotFunc)(Q3DBars*, float) = reinterpret_cast<void (*)(Q3DBars*, float)>(slot);
    Q3DBars::connect(self,
                     static_cast<void (Q3DBars::*)(float)>(&Q3DBars::floorLevelChanged),
                     [self, slotFunc](float level) {
                         float sigval1 = level;
                         slotFunc(self, sigval1);
                     });
}

libqt_string Q3DBars_Tr2(const char* s, const char* c) {
    auto _ret = Q3DBars::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DBars_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DBars::tr(s, c, static_cast<int>(n));
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
QMetaObject* Q3DBars_SuperMetaObject(const Q3DBars* self) {
    return (QMetaObject*)self->Q3DBars::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnMetaObject(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self)))
        vq3dbars->q3dbars_metaobject_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DBars_SuperMetacast(Q3DBars* self, const char* param1) {
    return self->Q3DBars::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnMetacast(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_metacast_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DBars_SuperMetacall(Q3DBars* self, int param1, int param2, void** param3) {
    return self->Q3DBars::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnMetacall(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_metacall_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Q3DBars_ShadowsSupported(const Q3DBars* self) {
    return self->shadowsSupported();
}

// Base class handler implementation
bool Q3DBars_SuperShadowsSupported(const Q3DBars* self) {
    return self->Q3DBars::shadowsSupported();
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnShadowsSupported(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self)))
        vq3dbars->q3dbars_shadowssupported_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_ShadowsSupported_Callback>(slot);
}

// Derived class handler implementation
bool Q3DBars_Event(Q3DBars* self, QEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        return vq3dbars->event(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool Q3DBars_SuperEvent(Q3DBars* self, QEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        return vq3dbars->Q3DBars::event(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_event_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_Event_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_ResizeEvent(Q3DBars* self, QResizeEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperResizeEvent(Q3DBars* self, QResizeEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnResizeEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_resizeevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_ExposeEvent(Q3DBars* self, QExposeEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->exposeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::exposeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperExposeEvent(Q3DBars* self, QExposeEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::exposeEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::exposeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnExposeEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_exposeevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_ExposeEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_MouseDoubleClickEvent(Q3DBars* self, QMouseEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperMouseDoubleClickEvent(Q3DBars* self, QMouseEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnMouseDoubleClickEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_mousedoubleclickevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_TouchEvent(Q3DBars* self, QTouchEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->touchEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperTouchEvent(Q3DBars* self, QTouchEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::touchEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnTouchEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_touchevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_MousePressEvent(Q3DBars* self, QMouseEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperMousePressEvent(Q3DBars* self, QMouseEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnMousePressEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_mousepressevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_MouseReleaseEvent(Q3DBars* self, QMouseEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperMouseReleaseEvent(Q3DBars* self, QMouseEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnMouseReleaseEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_mousereleaseevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_MouseMoveEvent(Q3DBars* self, QMouseEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperMouseMoveEvent(Q3DBars* self, QMouseEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnMouseMoveEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_mousemoveevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_WheelEvent(Q3DBars* self, QWheelEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperWheelEvent(Q3DBars* self, QWheelEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnWheelEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_wheelevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
int Q3DBars_SurfaceType(const Q3DBars* self) {
    return static_cast<int>(self->surfaceType());
}

// Base class handler implementation
int Q3DBars_SuperSurfaceType(const Q3DBars* self) {
    return static_cast<int>(self->Q3DBars::surfaceType());
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnSurfaceType(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self)))
        vq3dbars->q3dbars_surfacetype_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_SurfaceType_Callback>(slot);
}

// Derived class handler implementation
QSurfaceFormat* Q3DBars_Format(const Q3DBars* self) {
    return new QSurfaceFormat(self->format());
}

// Base class handler implementation
QSurfaceFormat* Q3DBars_SuperFormat(const Q3DBars* self) {
    return new QSurfaceFormat(self->Q3DBars::format());
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnFormat(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self)))
        vq3dbars->q3dbars_format_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_Format_Callback>(slot);
}

// Derived class handler implementation
QSize* Q3DBars_Size(const Q3DBars* self) {
    return new QSize(self->size());
}

// Base class handler implementation
QSize* Q3DBars_SuperSize(const Q3DBars* self) {
    return new QSize(self->Q3DBars::size());
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnSize(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self)))
        vq3dbars->q3dbars_size_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_Size_Callback>(slot);
}

// Derived class handler implementation
QAccessibleInterface* Q3DBars_AccessibleRoot(const Q3DBars* self) {
    return self->accessibleRoot();
}

// Base class handler implementation
QAccessibleInterface* Q3DBars_SuperAccessibleRoot(const Q3DBars* self) {
    return self->Q3DBars::accessibleRoot();
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnAccessibleRoot(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self)))
        vq3dbars->q3dbars_accessibleroot_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_AccessibleRoot_Callback>(slot);
}

// Derived class handler implementation
QObject* Q3DBars_FocusObject(const Q3DBars* self) {
    return self->focusObject();
}

// Base class handler implementation
QObject* Q3DBars_SuperFocusObject(const Q3DBars* self) {
    return self->Q3DBars::focusObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnFocusObject(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self)))
        vq3dbars->q3dbars_focusobject_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_FocusObject_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_PaintEvent(Q3DBars* self, QPaintEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperPaintEvent(Q3DBars* self, QPaintEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnPaintEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_paintevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_MoveEvent(Q3DBars* self, QMoveEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->moveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperMoveEvent(Q3DBars* self, QMoveEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::moveEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnMoveEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_moveevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_FocusInEvent(Q3DBars* self, QFocusEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperFocusInEvent(Q3DBars* self, QFocusEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnFocusInEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_focusinevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_FocusOutEvent(Q3DBars* self, QFocusEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperFocusOutEvent(Q3DBars* self, QFocusEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnFocusOutEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_focusoutevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_ShowEvent(Q3DBars* self, QShowEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperShowEvent(Q3DBars* self, QShowEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnShowEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_showevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_HideEvent(Q3DBars* self, QHideEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->hideEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperHideEvent(Q3DBars* self, QHideEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnHideEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_hideevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_CloseEvent(Q3DBars* self, QCloseEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperCloseEvent(Q3DBars* self, QCloseEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnCloseEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_closeevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_KeyPressEvent(Q3DBars* self, QKeyEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperKeyPressEvent(Q3DBars* self, QKeyEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnKeyPressEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_keypressevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_KeyReleaseEvent(Q3DBars* self, QKeyEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->keyReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperKeyReleaseEvent(Q3DBars* self, QKeyEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnKeyReleaseEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_keyreleaseevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_TabletEvent(Q3DBars* self, QTabletEvent* param1) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->tabletEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperTabletEvent(Q3DBars* self, QTabletEvent* param1) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::tabletEvent(param1);
    } else
        qFatal("Error: Protected virtual method Q3DBars::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnTabletEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_tabletevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
bool Q3DBars_NativeEvent(Q3DBars* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        return vq3dbars->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method Q3DBars::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool Q3DBars_SuperNativeEvent(Q3DBars* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        return vq3dbars->Q3DBars::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method Q3DBars::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnNativeEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_nativeevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
bool Q3DBars_EventFilter(Q3DBars* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DBars_SuperEventFilter(Q3DBars* self, QObject* watched, QEvent* event) {
    return self->Q3DBars::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnEventFilter(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_eventfilter_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_TimerEvent(Q3DBars* self, QTimerEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperTimerEvent(Q3DBars* self, QTimerEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnTimerEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_timerevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_ChildEvent(Q3DBars* self, QChildEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperChildEvent(Q3DBars* self, QChildEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnChildEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_childevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_CustomEvent(Q3DBars* self, QEvent* event) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperCustomEvent(Q3DBars* self, QEvent* event) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DBars::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnCustomEvent(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_customevent_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_ConnectNotify(Q3DBars* self, const QMetaMethod* signal) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperConnectNotify(Q3DBars* self, const QMetaMethod* signal) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DBars::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnConnectNotify(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_connectnotify_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DBars_DisconnectNotify(Q3DBars* self, const QMetaMethod* signal) {
    auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self);
    if (vq3dbars) {
        vq3dbars->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DBars::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DBars_SuperDisconnectNotify(Q3DBars* self, const QMetaMethod* signal) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self)) {
        vq3dbars->Q3DBars::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DBars::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DBars_OnDisconnectNotify(Q3DBars* self, intptr_t slot) {
    if (auto* vq3dbars = dynamic_cast<VirtualQ3DBars*>(self))
        vq3dbars->q3dbars_disconnectnotify_callback = reinterpret_cast<VirtualQ3DBars::Q3DBars_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* Q3DBars_ResolveInterface(const Q3DBars* self, const char* name, int revision) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self))) {
        return vq3dbars->VirtualQ3DBars::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method Q3DBars::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Q3DBars_Sender(const Q3DBars* self) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self))) {
        return vq3dbars->VirtualQ3DBars::sender();
    } else
        qFatal("Error: Protected method Q3DBars::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DBars_SenderSignalIndex(const Q3DBars* self) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self))) {
        return vq3dbars->VirtualQ3DBars::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DBars::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DBars_Receivers(const Q3DBars* self, const char* signal) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self))) {
        return vq3dbars->VirtualQ3DBars::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DBars::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DBars_IsSignalConnected(const Q3DBars* self, const QMetaMethod* signal) {
    if (auto* vq3dbars = const_cast<VirtualQ3DBars*>(dynamic_cast<const VirtualQ3DBars*>(self))) {
        return vq3dbars->VirtualQ3DBars::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DBars::isSignalConnected called without a directly constructed type");
}

void Q3DBars_Delete(Q3DBars* self) {
    delete self;
}
