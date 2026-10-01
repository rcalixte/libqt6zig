#include <KPlotAxis>
#include <KPlotObject>
#include <KPlotPoint>
#include <KPlotWidget>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kplotwidget.h>
#include "libkplotwidget.h"
#include "libkplotwidget.hxx"

KPlotWidget* KPlotWidget_new(QWidget* parent) {
    return new VirtualKPlotWidget(parent);
}

KPlotWidget* KPlotWidget_new2() {
    return new VirtualKPlotWidget();
}

QMetaObject* KPlotWidget_MetaObject(const KPlotWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPlotWidget_Metacast(KPlotWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPlotWidget_Metacall(KPlotWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPlotWidget_Tr(const char* s) {
    auto _ret = KPlotWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KPlotWidget_MinimumSizeHint(const KPlotWidget* self) {
    return new QSize(self->minimumSizeHint());
}

QSize* KPlotWidget_SizeHint(const KPlotWidget* self) {
    return new QSize(self->sizeHint());
}

void KPlotWidget_SetLimits(KPlotWidget* self, double x1, double x2, double y1, double y2) {
    self->setLimits(static_cast<double>(x1), static_cast<double>(x2), static_cast<double>(y1), static_cast<double>(y2));
}

void KPlotWidget_SetSecondaryLimits(KPlotWidget* self, double x1, double x2, double y1, double y2) {
    self->setSecondaryLimits(static_cast<double>(x1), static_cast<double>(x2), static_cast<double>(y1), static_cast<double>(y2));
}

void KPlotWidget_ClearSecondaryLimits(KPlotWidget* self) {
    self->clearSecondaryLimits();
}

QRectF* KPlotWidget_DataRect(const KPlotWidget* self) {
    return new QRectF(self->dataRect());
}

QRectF* KPlotWidget_SecondaryDataRect(const KPlotWidget* self) {
    return new QRectF(self->secondaryDataRect());
}

QRect* KPlotWidget_PixRect(const KPlotWidget* self) {
    return new QRect(self->pixRect());
}

void KPlotWidget_AddPlotObject(KPlotWidget* self, KPlotObject* object) {
    self->addPlotObject(object);
}

void KPlotWidget_AddPlotObjects(KPlotWidget* self, const libqt_list /* of KPlotObject* */ objects) {
    QList<KPlotObject*> objects_QList;
    objects_QList.reserve(objects.len);
    KPlotObject** objects_arr = static_cast<KPlotObject**>(objects.data);
    for (size_t i = 0; i < objects.len; ++i) {
        objects_QList.push_back(objects_arr[i]);
    }
    self->addPlotObjects(objects_QList);
}

libqt_list /* of KPlotObject* */ KPlotWidget_PlotObjects(const KPlotWidget* self) {
    QList<KPlotObject*> _ret = self->plotObjects();
    // Convert QList<> from C++ memory to manually-managed C memory
    KPlotObject** _arr = static_cast<KPlotObject**>(malloc(sizeof(KPlotObject*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KPlotWidget_SetAutoDeletePlotObjects(KPlotWidget* self, bool autoDelete) {
    self->setAutoDeletePlotObjects(autoDelete);
}

void KPlotWidget_RemoveAllPlotObjects(KPlotWidget* self) {
    self->removeAllPlotObjects();
}

void KPlotWidget_ResetPlotMask(KPlotWidget* self) {
    self->resetPlotMask();
}

void KPlotWidget_ResetPlot(KPlotWidget* self) {
    self->resetPlot();
}

void KPlotWidget_ReplacePlotObject(KPlotWidget* self, int i, KPlotObject* o) {
    self->replacePlotObject(static_cast<int>(i), o);
}

QColor* KPlotWidget_BackgroundColor(const KPlotWidget* self) {
    return new QColor(self->backgroundColor());
}

QColor* KPlotWidget_ForegroundColor(const KPlotWidget* self) {
    return new QColor(self->foregroundColor());
}

QColor* KPlotWidget_GridColor(const KPlotWidget* self) {
    return new QColor(self->gridColor());
}

void KPlotWidget_SetBackgroundColor(KPlotWidget* self, const QColor* bg) {
    self->setBackgroundColor(*bg);
}

void KPlotWidget_SetForegroundColor(KPlotWidget* self, const QColor* fg) {
    self->setForegroundColor(*fg);
}

void KPlotWidget_SetGridColor(KPlotWidget* self, const QColor* gc) {
    self->setGridColor(*gc);
}

bool KPlotWidget_IsGridShown(const KPlotWidget* self) {
    return self->isGridShown();
}

bool KPlotWidget_IsObjectToolTipShown(const KPlotWidget* self) {
    return self->isObjectToolTipShown();
}

bool KPlotWidget_Antialiasing(const KPlotWidget* self) {
    return self->antialiasing();
}

void KPlotWidget_SetAntialiasing(KPlotWidget* self, bool b) {
    self->setAntialiasing(b);
}

int KPlotWidget_LeftPadding(const KPlotWidget* self) {
    return self->leftPadding();
}

int KPlotWidget_RightPadding(const KPlotWidget* self) {
    return self->rightPadding();
}

int KPlotWidget_TopPadding(const KPlotWidget* self) {
    return self->topPadding();
}

int KPlotWidget_BottomPadding(const KPlotWidget* self) {
    return self->bottomPadding();
}

void KPlotWidget_SetLeftPadding(KPlotWidget* self, int padding) {
    self->setLeftPadding(static_cast<int>(padding));
}

void KPlotWidget_SetRightPadding(KPlotWidget* self, int padding) {
    self->setRightPadding(static_cast<int>(padding));
}

void KPlotWidget_SetTopPadding(KPlotWidget* self, int padding) {
    self->setTopPadding(static_cast<int>(padding));
}

void KPlotWidget_SetBottomPadding(KPlotWidget* self, int padding) {
    self->setBottomPadding(static_cast<int>(padding));
}

void KPlotWidget_SetDefaultPaddings(KPlotWidget* self) {
    self->setDefaultPaddings();
}

QPointF* KPlotWidget_MapToWidget(const KPlotWidget* self, const QPointF* p) {
    return new QPointF(self->mapToWidget(*p));
}

void KPlotWidget_MaskRect(KPlotWidget* self, const QRectF* r) {
    self->maskRect(*r);
}

void KPlotWidget_MaskAlongLine(KPlotWidget* self, const QPointF* p1, const QPointF* p2) {
    self->maskAlongLine(*p1, *p2);
}

void KPlotWidget_PlaceLabel(KPlotWidget* self, QPainter* painter, KPlotPoint* pp) {
    self->placeLabel(painter, pp);
}

KPlotAxis* KPlotWidget_Axis(KPlotWidget* self, int typeVal) {
    return self->axis(static_cast<KPlotWidget::Axis>(typeVal));
}

KPlotAxis* KPlotWidget_Axis2(const KPlotWidget* self, int typeVal) {
    return (KPlotAxis*)self->axis(static_cast<KPlotWidget::Axis>(typeVal));
}

void KPlotWidget_SetShowGrid(KPlotWidget* self, bool show) {
    self->setShowGrid(show);
}

void KPlotWidget_SetObjectToolTipShown(KPlotWidget* self, bool show) {
    self->setObjectToolTipShown(show);
}

bool KPlotWidget_Event(KPlotWidget* self, QEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        return vkplotwidget->event(param1);
    }
    qFatal("Error: Protected method KPlotWidget::event called without a directly constructed type");
}

void KPlotWidget_PaintEvent(KPlotWidget* self, QPaintEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->paintEvent(param1);
    }
}

void KPlotWidget_ResizeEvent(KPlotWidget* self, QResizeEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->resizeEvent(param1);
    }
}

void KPlotWidget_DrawAxes(KPlotWidget* self, QPainter* p) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->drawAxes(p);
    }
}

libqt_string KPlotWidget_Tr2(const char* s, const char* c) {
    auto _ret = KPlotWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPlotWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPlotWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPlotWidget_MaskRect2(KPlotWidget* self, const QRectF* r, float value) {
    self->maskRect(*r, static_cast<float>(value));
}

void KPlotWidget_MaskAlongLine3(KPlotWidget* self, const QPointF* p1, const QPointF* p2, float value) {
    self->maskAlongLine(*p1, *p2, static_cast<float>(value));
}

// Base class handler implementation
QMetaObject* KPlotWidget_SuperMetaObject(const KPlotWidget* self) {
    return (QMetaObject*)self->KPlotWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMetaObject(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_metaobject_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPlotWidget_SuperMetacast(KPlotWidget* self, const char* param1) {
    return self->KPlotWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMetacast(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_metacast_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPlotWidget_SuperMetacall(KPlotWidget* self, int param1, int param2, void** param3) {
    return self->KPlotWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMetacall(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_metacall_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KPlotWidget_SuperMinimumSizeHint(const KPlotWidget* self) {
    return new QSize(self->KPlotWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMinimumSizeHint(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_minimumsizehint_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* KPlotWidget_SuperSizeHint(const KPlotWidget* self) {
    return new QSize(self->KPlotWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSizeHint(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_sizehint_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool KPlotWidget_SuperEvent(KPlotWidget* self, QEvent* param1) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        return vkplotwidget->KPlotWidget::event(param1);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_event_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Event_Callback>(slot);
}

// Base class handler implementation
void KPlotWidget_SuperPaintEvent(KPlotWidget* self, QPaintEvent* param1) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnPaintEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_paintevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KPlotWidget_SuperResizeEvent(KPlotWidget* self, QResizeEvent* param1) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnResizeEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_resizeevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KPlotWidget_SuperDrawAxes(KPlotWidget* self, QPainter* p) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::drawAxes(p);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::drawAxes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDrawAxes(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_drawaxes_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DrawAxes_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_ChangeEvent(KPlotWidget* self, QEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperChangeEvent(KPlotWidget* self, QEvent* param1) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnChangeEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_changeevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_InitStyleOption(const KPlotWidget* self, QStyleOptionFrame* option) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget) {
        vkplotwidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperInitStyleOption(const KPlotWidget* self, QStyleOptionFrame* option) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        vkplotwidget->KPlotWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnInitStyleOption(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_initstyleoption_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KPlotWidget_DevType(const KPlotWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KPlotWidget_SuperDevType(const KPlotWidget* self) {
    return self->KPlotWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDevType(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_devtype_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_SetVisible(KPlotWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPlotWidget_SuperSetVisible(KPlotWidget* self, bool visible) {
    self->KPlotWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSetVisible(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_setvisible_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KPlotWidget_HeightForWidth(const KPlotWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPlotWidget_SuperHeightForWidth(const KPlotWidget* self, int param1) {
    return self->KPlotWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnHeightForWidth(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_heightforwidth_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPlotWidget_HasHeightForWidth(const KPlotWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPlotWidget_SuperHasHeightForWidth(const KPlotWidget* self) {
    return self->KPlotWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnHasHeightForWidth(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPlotWidget_PaintEngine(const KPlotWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPlotWidget_SuperPaintEngine(const KPlotWidget* self) {
    return self->KPlotWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnPaintEngine(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_paintengine_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_MousePressEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperMousePressEvent(KPlotWidget* self, QMouseEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMousePressEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_mousepressevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_MouseReleaseEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperMouseReleaseEvent(KPlotWidget* self, QMouseEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMouseReleaseEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_MouseDoubleClickEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperMouseDoubleClickEvent(KPlotWidget* self, QMouseEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMouseDoubleClickEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_MouseMoveEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperMouseMoveEvent(KPlotWidget* self, QMouseEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMouseMoveEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_mousemoveevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_WheelEvent(KPlotWidget* self, QWheelEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperWheelEvent(KPlotWidget* self, QWheelEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnWheelEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_wheelevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_KeyPressEvent(KPlotWidget* self, QKeyEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperKeyPressEvent(KPlotWidget* self, QKeyEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnKeyPressEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_keypressevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_KeyReleaseEvent(KPlotWidget* self, QKeyEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperKeyReleaseEvent(KPlotWidget* self, QKeyEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnKeyReleaseEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_FocusInEvent(KPlotWidget* self, QFocusEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperFocusInEvent(KPlotWidget* self, QFocusEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnFocusInEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_focusinevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_FocusOutEvent(KPlotWidget* self, QFocusEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperFocusOutEvent(KPlotWidget* self, QFocusEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnFocusOutEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_focusoutevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_EnterEvent(KPlotWidget* self, QEnterEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperEnterEvent(KPlotWidget* self, QEnterEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnEnterEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_enterevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_LeaveEvent(KPlotWidget* self, QEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperLeaveEvent(KPlotWidget* self, QEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnLeaveEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_leaveevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_MoveEvent(KPlotWidget* self, QMoveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperMoveEvent(KPlotWidget* self, QMoveEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMoveEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_moveevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_CloseEvent(KPlotWidget* self, QCloseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperCloseEvent(KPlotWidget* self, QCloseEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnCloseEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_closeevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_ContextMenuEvent(KPlotWidget* self, QContextMenuEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperContextMenuEvent(KPlotWidget* self, QContextMenuEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnContextMenuEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_contextmenuevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_TabletEvent(KPlotWidget* self, QTabletEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperTabletEvent(KPlotWidget* self, QTabletEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnTabletEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_tabletevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_ActionEvent(KPlotWidget* self, QActionEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperActionEvent(KPlotWidget* self, QActionEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnActionEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_actionevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_DragEnterEvent(KPlotWidget* self, QDragEnterEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperDragEnterEvent(KPlotWidget* self, QDragEnterEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDragEnterEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_dragenterevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_DragMoveEvent(KPlotWidget* self, QDragMoveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperDragMoveEvent(KPlotWidget* self, QDragMoveEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDragMoveEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_dragmoveevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_DragLeaveEvent(KPlotWidget* self, QDragLeaveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperDragLeaveEvent(KPlotWidget* self, QDragLeaveEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDragLeaveEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_dragleaveevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_DropEvent(KPlotWidget* self, QDropEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperDropEvent(KPlotWidget* self, QDropEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDropEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_dropevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_ShowEvent(KPlotWidget* self, QShowEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperShowEvent(KPlotWidget* self, QShowEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnShowEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_showevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_HideEvent(KPlotWidget* self, QHideEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperHideEvent(KPlotWidget* self, QHideEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnHideEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_hideevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPlotWidget_NativeEvent(KPlotWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        return vkplotwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPlotWidget_SuperNativeEvent(KPlotWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        return vkplotwidget->KPlotWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPlotWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnNativeEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_nativeevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPlotWidget_Metric(const KPlotWidget* self, int param1) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget) {
        return vkplotwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPlotWidget_SuperMetric(const KPlotWidget* self, int param1) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        return vkplotwidget->KPlotWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPlotWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMetric(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_metric_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_InitPainter(const KPlotWidget* self, QPainter* painter) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget) {
        vkplotwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperInitPainter(const KPlotWidget* self, QPainter* painter) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        vkplotwidget->KPlotWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnInitPainter(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_initpainter_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPlotWidget_Redirected(const KPlotWidget* self, QPoint* offset) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget) {
        return vkplotwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPlotWidget_SuperRedirected(const KPlotWidget* self, QPoint* offset) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        return vkplotwidget->KPlotWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnRedirected(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_redirected_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPlotWidget_SharedPainter(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget) {
        return vkplotwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPlotWidget_SuperSharedPainter(const KPlotWidget* self) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        return vkplotwidget->KPlotWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPlotWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSharedPainter(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_sharedpainter_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_InputMethodEvent(KPlotWidget* self, QInputMethodEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperInputMethodEvent(KPlotWidget* self, QInputMethodEvent* param1) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnInputMethodEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_inputmethodevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPlotWidget_InputMethodQuery(const KPlotWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPlotWidget_SuperInputMethodQuery(const KPlotWidget* self, int param1) {
    return new QVariant(self->KPlotWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnInputMethodQuery(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self)))
        vkplotwidget->kplotwidget_inputmethodquery_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPlotWidget_FocusNextPrevChild(KPlotWidget* self, bool next) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        return vkplotwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPlotWidget_SuperFocusNextPrevChild(KPlotWidget* self, bool next) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        return vkplotwidget->KPlotWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnFocusNextPrevChild(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KPlotWidget_EventFilter(KPlotWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPlotWidget_SuperEventFilter(KPlotWidget* self, QObject* watched, QEvent* event) {
    return self->KPlotWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnEventFilter(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_eventfilter_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_TimerEvent(KPlotWidget* self, QTimerEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperTimerEvent(KPlotWidget* self, QTimerEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnTimerEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_timerevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_ChildEvent(KPlotWidget* self, QChildEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperChildEvent(KPlotWidget* self, QChildEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnChildEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_childevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_CustomEvent(KPlotWidget* self, QEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperCustomEvent(KPlotWidget* self, QEvent* event) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnCustomEvent(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_customevent_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_ConnectNotify(KPlotWidget* self, const QMetaMethod* signal) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperConnectNotify(KPlotWidget* self, const QMetaMethod* signal) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnConnectNotify(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_connectnotify_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPlotWidget_DisconnectNotify(KPlotWidget* self, const QMetaMethod* signal) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget) {
        vkplotwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPlotWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPlotWidget_SuperDisconnectNotify(KPlotWidget* self, const QMetaMethod* signal) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->KPlotWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPlotWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDisconnectNotify(KPlotWidget* self, intptr_t slot) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self))
        vkplotwidget->kplotwidget_disconnectnotify_callback = reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPlotWidget_SetPixRect(KPlotWidget* self) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->VirtualKPlotWidget::setPixRect();
    } else
        qFatal("Error: Protected method KPlotWidget::setPixRect called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KPlotPoint* */ KPlotWidget_PointsUnderPoint(const KPlotWidget* self, const QPoint* p) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        QList<KPlotPoint*> _ret = vkplotwidget->VirtualKPlotWidget::pointsUnderPoint(*p);
        // Convert QList<> from C++ memory to manually-managed C memory
        KPlotPoint** _arr = static_cast<KPlotPoint**>(malloc(sizeof(KPlotPoint*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KPlotWidget::pointsUnderPoint called without a directly constructed type");
}

// Derived class protected handler implementation
void KPlotWidget_DrawFrame(KPlotWidget* self, QPainter* param1) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->VirtualKPlotWidget::drawFrame(param1);
    } else
        qFatal("Error: Protected method KPlotWidget::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KPlotWidget_UpdateMicroFocus(KPlotWidget* self) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->VirtualKPlotWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPlotWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPlotWidget_Create(KPlotWidget* self) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->VirtualKPlotWidget::create();
    } else
        qFatal("Error: Protected method KPlotWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPlotWidget_Destroy(KPlotWidget* self) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        vkplotwidget->VirtualKPlotWidget::destroy();
    } else
        qFatal("Error: Protected method KPlotWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPlotWidget_FocusNextChild(KPlotWidget* self) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        return vkplotwidget->VirtualKPlotWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KPlotWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPlotWidget_FocusPreviousChild(KPlotWidget* self) {
    if (auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self)) {
        return vkplotwidget->VirtualKPlotWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPlotWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPlotWidget_Sender(const KPlotWidget* self) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        return vkplotwidget->VirtualKPlotWidget::sender();
    } else
        qFatal("Error: Protected method KPlotWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPlotWidget_SenderSignalIndex(const KPlotWidget* self) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        return vkplotwidget->VirtualKPlotWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPlotWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPlotWidget_Receivers(const KPlotWidget* self, const char* signal) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        return vkplotwidget->VirtualKPlotWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KPlotWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPlotWidget_IsSignalConnected(const KPlotWidget* self, const QMetaMethod* signal) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        return vkplotwidget->VirtualKPlotWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPlotWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPlotWidget_GetDecodedMetricF(const KPlotWidget* self, int metricA, int metricB) {
    if (auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self))) {
        return vkplotwidget->VirtualKPlotWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPlotWidget::getDecodedMetricF called without a directly constructed type");
}

void KPlotWidget_Delete(KPlotWidget* self) {
    delete self;
}
