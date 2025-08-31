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
#include <QByteArray>
#include <cstring>
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
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPlotWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPlotWidget_Tr(const char* s) {
    QString _ret = KPlotWidget::tr(s);
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
    auto* vkplotwidget = dynamic_cast<const VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPlotWidget*)self)->minimumSizeHint());
    }
}

QSize* KPlotWidget_SizeHint(const KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<const VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKPlotWidget*)self)->sizeHint());
    }
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
    KPlotObject** _arr = static_cast<KPlotObject**>(malloc(sizeof(KPlotObject*) * (_ret.size() + 1)));
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
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->event(param1);
    }
    return {};
}

void KPlotWidget_PaintEvent(KPlotWidget* self, QPaintEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->paintEvent(param1);
    }
}

void KPlotWidget_ResizeEvent(KPlotWidget* self, QResizeEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->resizeEvent(param1);
    }
}

void KPlotWidget_DrawAxes(KPlotWidget* self, QPainter* p) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->drawAxes(p);
    }
}

libqt_string KPlotWidget_Tr2(const char* s, const char* c) {
    QString _ret = KPlotWidget::tr(s, c);
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
    QString _ret = KPlotWidget::tr(s, c, static_cast<int>(n));
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
int KPlotWidget_QBaseMetacall(KPlotWidget* self, int param1, int param2, void** param3) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Metacall_IsBase(true);
        return vkplotwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPlotWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMetacall(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Metacall_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KPlotWidget_QBaseMinimumSizeHint(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkplotwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPlotWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMinimumSizeHint(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KPlotWidget_QBaseSizeHint(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SizeHint_IsBase(true);
        return new QSize(vkplotwidget->sizeHint());
    } else {
        return new QSize(((VirtualKPlotWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSizeHint(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SizeHint_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
bool KPlotWidget_QBaseEvent(KPlotWidget* self, QEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Event_IsBase(true);
        return vkplotwidget->event(param1);
    } else {
        return ((VirtualKPlotWidget*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Event_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Event_Callback>(slot));
    }
}

// Base class handler implementation
void KPlotWidget_QBasePaintEvent(KPlotWidget* self, QPaintEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_PaintEvent_IsBase(true);
        vkplotwidget->paintEvent(param1);
    } else {
        ((VirtualKPlotWidget*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnPaintEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_PaintEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KPlotWidget_QBaseResizeEvent(KPlotWidget* self, QResizeEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ResizeEvent_IsBase(true);
        vkplotwidget->resizeEvent(param1);
    } else {
        ((VirtualKPlotWidget*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnResizeEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KPlotWidget_QBaseDrawAxes(KPlotWidget* self, QPainter* p) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DrawAxes_IsBase(true);
        vkplotwidget->drawAxes(p);
    } else {
        ((VirtualKPlotWidget*)self)->drawAxes(p);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDrawAxes(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DrawAxes_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DrawAxes_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_ChangeEvent(KPlotWidget* self, QEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->changeEvent(param1);
    } else {
        ((VirtualKPlotWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseChangeEvent(KPlotWidget* self, QEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ChangeEvent_IsBase(true);
        vkplotwidget->changeEvent(param1);
    } else {
        ((VirtualKPlotWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnChangeEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_InitStyleOption(const KPlotWidget* self, QStyleOptionFrame* option) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->initStyleOption(option);
    } else {
        ((VirtualKPlotWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseInitStyleOption(const KPlotWidget* self, QStyleOptionFrame* option) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_InitStyleOption_IsBase(true);
        vkplotwidget->initStyleOption(option);
    } else {
        ((VirtualKPlotWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnInitStyleOption(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_InitStyleOption_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KPlotWidget_DevType(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->devType();
    } else {
        return self->KPlotWidget::devType();
    }
}

// Base class handler implementation
int KPlotWidget_QBaseDevType(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DevType_IsBase(true);
        return vkplotwidget->devType();
    } else {
        return self->KPlotWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDevType(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DevType_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_SetVisible(KPlotWidget* self, bool visible) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setVisible(visible);
    } else {
        self->KPlotWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseSetVisible(KPlotWidget* self, bool visible) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SetVisible_IsBase(true);
        vkplotwidget->setVisible(visible);
    } else {
        self->KPlotWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSetVisible(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SetVisible_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KPlotWidget_HeightForWidth(const KPlotWidget* self, int param1) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPlotWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPlotWidget_QBaseHeightForWidth(const KPlotWidget* self, int param1) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_HeightForWidth_IsBase(true);
        return vkplotwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPlotWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnHeightForWidth(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPlotWidget_HasHeightForWidth(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->hasHeightForWidth();
    } else {
        return self->KPlotWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPlotWidget_QBaseHasHeightForWidth(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_HasHeightForWidth_IsBase(true);
        return vkplotwidget->hasHeightForWidth();
    } else {
        return self->KPlotWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnHasHeightForWidth(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPlotWidget_PaintEngine(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->paintEngine();
    } else {
        return self->KPlotWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPlotWidget_QBasePaintEngine(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_PaintEngine_IsBase(true);
        return vkplotwidget->paintEngine();
    } else {
        return self->KPlotWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnPaintEngine(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_PaintEngine_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_MousePressEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->mousePressEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseMousePressEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MousePressEvent_IsBase(true);
        vkplotwidget->mousePressEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMousePressEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_MouseReleaseEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseMouseReleaseEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MouseReleaseEvent_IsBase(true);
        vkplotwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMouseReleaseEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_MouseDoubleClickEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseMouseDoubleClickEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MouseDoubleClickEvent_IsBase(true);
        vkplotwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMouseDoubleClickEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_MouseMoveEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseMouseMoveEvent(KPlotWidget* self, QMouseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MouseMoveEvent_IsBase(true);
        vkplotwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMouseMoveEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_WheelEvent(KPlotWidget* self, QWheelEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->wheelEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseWheelEvent(KPlotWidget* self, QWheelEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_WheelEvent_IsBase(true);
        vkplotwidget->wheelEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnWheelEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_WheelEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_KeyPressEvent(KPlotWidget* self, QKeyEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->keyPressEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseKeyPressEvent(KPlotWidget* self, QKeyEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_KeyPressEvent_IsBase(true);
        vkplotwidget->keyPressEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnKeyPressEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_KeyReleaseEvent(KPlotWidget* self, QKeyEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseKeyReleaseEvent(KPlotWidget* self, QKeyEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_KeyReleaseEvent_IsBase(true);
        vkplotwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnKeyReleaseEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_FocusInEvent(KPlotWidget* self, QFocusEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->focusInEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseFocusInEvent(KPlotWidget* self, QFocusEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusInEvent_IsBase(true);
        vkplotwidget->focusInEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnFocusInEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_FocusOutEvent(KPlotWidget* self, QFocusEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->focusOutEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseFocusOutEvent(KPlotWidget* self, QFocusEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusOutEvent_IsBase(true);
        vkplotwidget->focusOutEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnFocusOutEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_EnterEvent(KPlotWidget* self, QEnterEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->enterEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseEnterEvent(KPlotWidget* self, QEnterEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_EnterEvent_IsBase(true);
        vkplotwidget->enterEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnEnterEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_EnterEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_LeaveEvent(KPlotWidget* self, QEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->leaveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseLeaveEvent(KPlotWidget* self, QEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_LeaveEvent_IsBase(true);
        vkplotwidget->leaveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnLeaveEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_MoveEvent(KPlotWidget* self, QMoveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->moveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseMoveEvent(KPlotWidget* self, QMoveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MoveEvent_IsBase(true);
        vkplotwidget->moveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMoveEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_MoveEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_CloseEvent(KPlotWidget* self, QCloseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->closeEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseCloseEvent(KPlotWidget* self, QCloseEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_CloseEvent_IsBase(true);
        vkplotwidget->closeEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnCloseEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_CloseEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_ContextMenuEvent(KPlotWidget* self, QContextMenuEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->contextMenuEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseContextMenuEvent(KPlotWidget* self, QContextMenuEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ContextMenuEvent_IsBase(true);
        vkplotwidget->contextMenuEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnContextMenuEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_TabletEvent(KPlotWidget* self, QTabletEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->tabletEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseTabletEvent(KPlotWidget* self, QTabletEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_TabletEvent_IsBase(true);
        vkplotwidget->tabletEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnTabletEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_TabletEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_ActionEvent(KPlotWidget* self, QActionEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->actionEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseActionEvent(KPlotWidget* self, QActionEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ActionEvent_IsBase(true);
        vkplotwidget->actionEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnActionEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ActionEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_DragEnterEvent(KPlotWidget* self, QDragEnterEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->dragEnterEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseDragEnterEvent(KPlotWidget* self, QDragEnterEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DragEnterEvent_IsBase(true);
        vkplotwidget->dragEnterEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDragEnterEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_DragMoveEvent(KPlotWidget* self, QDragMoveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->dragMoveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseDragMoveEvent(KPlotWidget* self, QDragMoveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DragMoveEvent_IsBase(true);
        vkplotwidget->dragMoveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDragMoveEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_DragLeaveEvent(KPlotWidget* self, QDragLeaveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseDragLeaveEvent(KPlotWidget* self, QDragLeaveEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DragLeaveEvent_IsBase(true);
        vkplotwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDragLeaveEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_DropEvent(KPlotWidget* self, QDropEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->dropEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseDropEvent(KPlotWidget* self, QDropEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DropEvent_IsBase(true);
        vkplotwidget->dropEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDropEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DropEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_ShowEvent(KPlotWidget* self, QShowEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->showEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseShowEvent(KPlotWidget* self, QShowEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ShowEvent_IsBase(true);
        vkplotwidget->showEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnShowEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ShowEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_HideEvent(KPlotWidget* self, QHideEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->hideEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseHideEvent(KPlotWidget* self, QHideEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_HideEvent_IsBase(true);
        vkplotwidget->hideEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnHideEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_HideEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPlotWidget_NativeEvent(KPlotWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPlotWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPlotWidget_QBaseNativeEvent(KPlotWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_NativeEvent_IsBase(true);
        return vkplotwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPlotWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnNativeEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_NativeEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPlotWidget_Metric(const KPlotWidget* self, int param1) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPlotWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPlotWidget_QBaseMetric(const KPlotWidget* self, int param1) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Metric_IsBase(true);
        return vkplotwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPlotWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnMetric(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Metric_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_InitPainter(const KPlotWidget* self, QPainter* painter) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->initPainter(painter);
    } else {
        ((VirtualKPlotWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseInitPainter(const KPlotWidget* self, QPainter* painter) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_InitPainter_IsBase(true);
        vkplotwidget->initPainter(painter);
    } else {
        ((VirtualKPlotWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnInitPainter(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_InitPainter_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPlotWidget_Redirected(const KPlotWidget* self, QPoint* offset) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->redirected(offset);
    } else {
        return ((VirtualKPlotWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPlotWidget_QBaseRedirected(const KPlotWidget* self, QPoint* offset) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Redirected_IsBase(true);
        return vkplotwidget->redirected(offset);
    } else {
        return ((VirtualKPlotWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnRedirected(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Redirected_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPlotWidget_SharedPainter(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->sharedPainter();
    } else {
        return ((VirtualKPlotWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPlotWidget_QBaseSharedPainter(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SharedPainter_IsBase(true);
        return vkplotwidget->sharedPainter();
    } else {
        return ((VirtualKPlotWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSharedPainter(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SharedPainter_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_InputMethodEvent(KPlotWidget* self, QInputMethodEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKPlotWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseInputMethodEvent(KPlotWidget* self, QInputMethodEvent* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_InputMethodEvent_IsBase(true);
        vkplotwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKPlotWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnInputMethodEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPlotWidget_InputMethodQuery(const KPlotWidget* self, int param1) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return new QVariant(vkplotwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPlotWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPlotWidget_QBaseInputMethodQuery(const KPlotWidget* self, int param1) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkplotwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPlotWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnInputMethodQuery(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPlotWidget_FocusNextPrevChild(KPlotWidget* self, bool next) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKPlotWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPlotWidget_QBaseFocusNextPrevChild(KPlotWidget* self, bool next) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusNextPrevChild_IsBase(true);
        return vkplotwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKPlotWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnFocusNextPrevChild(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPlotWidget_EventFilter(KPlotWidget* self, QObject* watched, QEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->eventFilter(watched, event);
    } else {
        return self->KPlotWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPlotWidget_QBaseEventFilter(KPlotWidget* self, QObject* watched, QEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_EventFilter_IsBase(true);
        return vkplotwidget->eventFilter(watched, event);
    } else {
        return self->KPlotWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnEventFilter(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_EventFilter_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_TimerEvent(KPlotWidget* self, QTimerEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->timerEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseTimerEvent(KPlotWidget* self, QTimerEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_TimerEvent_IsBase(true);
        vkplotwidget->timerEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnTimerEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_TimerEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_ChildEvent(KPlotWidget* self, QChildEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->childEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseChildEvent(KPlotWidget* self, QChildEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ChildEvent_IsBase(true);
        vkplotwidget->childEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnChildEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ChildEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_CustomEvent(KPlotWidget* self, QEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->customEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseCustomEvent(KPlotWidget* self, QEvent* event) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_CustomEvent_IsBase(true);
        vkplotwidget->customEvent(event);
    } else {
        ((VirtualKPlotWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnCustomEvent(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_CustomEvent_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_ConnectNotify(KPlotWidget* self, const QMetaMethod* signal) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->connectNotify(*signal);
    } else {
        ((VirtualKPlotWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseConnectNotify(KPlotWidget* self, const QMetaMethod* signal) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ConnectNotify_IsBase(true);
        vkplotwidget->connectNotify(*signal);
    } else {
        ((VirtualKPlotWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnConnectNotify(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_DisconnectNotify(KPlotWidget* self, const QMetaMethod* signal) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKPlotWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseDisconnectNotify(KPlotWidget* self, const QMetaMethod* signal) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DisconnectNotify_IsBase(true);
        vkplotwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKPlotWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDisconnectNotify(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_SetPixRect(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setPixRect();
    } else {
        ((VirtualKPlotWidget*)self)->setPixRect();
    }
}

// Base class handler implementation
void KPlotWidget_QBaseSetPixRect(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SetPixRect_IsBase(true);
        vkplotwidget->setPixRect();
    } else {
        ((VirtualKPlotWidget*)self)->setPixRect();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSetPixRect(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SetPixRect_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_SetPixRect_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KPlotPoint* */ KPlotWidget_PointsUnderPoint(const KPlotWidget* self, const QPoint* p) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        QList<KPlotPoint*> _ret = vkplotwidget->pointsUnderPoint(*p);
        // Convert QList<> from C++ memory to manually-managed C memory
        KPlotPoint** _arr = static_cast<KPlotPoint**>(malloc(sizeof(KPlotPoint*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<KPlotPoint*> _ret = ((VirtualKPlotWidget*)self)->pointsUnderPoint(*p);
        // Convert QList<> from C++ memory to manually-managed C memory
        KPlotPoint** _arr = static_cast<KPlotPoint**>(malloc(sizeof(KPlotPoint*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of KPlotPoint* */ KPlotWidget_QBasePointsUnderPoint(const KPlotWidget* self, const QPoint* p) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_PointsUnderPoint_IsBase(true);
        QList<KPlotPoint*> _ret = vkplotwidget->pointsUnderPoint(*p);
        // Convert QList<> from C++ memory to manually-managed C memory
        KPlotPoint** _arr = static_cast<KPlotPoint**>(malloc(sizeof(KPlotPoint*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<KPlotPoint*> _ret = ((VirtualKPlotWidget*)self)->pointsUnderPoint(*p);
        // Convert QList<> from C++ memory to manually-managed C memory
        KPlotPoint** _arr = static_cast<KPlotPoint**>(malloc(sizeof(KPlotPoint*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnPointsUnderPoint(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_PointsUnderPoint_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_PointsUnderPoint_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_DrawFrame(KPlotWidget* self, QPainter* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->drawFrame(param1);
    } else {
        ((VirtualKPlotWidget*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KPlotWidget_QBaseDrawFrame(KPlotWidget* self, QPainter* param1) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DrawFrame_IsBase(true);
        vkplotwidget->drawFrame(param1);
    } else {
        ((VirtualKPlotWidget*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDrawFrame(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_DrawFrame_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_UpdateMicroFocus(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->updateMicroFocus();
    } else {
        ((VirtualKPlotWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPlotWidget_QBaseUpdateMicroFocus(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_UpdateMicroFocus_IsBase(true);
        vkplotwidget->updateMicroFocus();
    } else {
        ((VirtualKPlotWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnUpdateMicroFocus(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_Create(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->create();
    } else {
        ((VirtualKPlotWidget*)self)->create();
    }
}

// Base class handler implementation
void KPlotWidget_QBaseCreate(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Create_IsBase(true);
        vkplotwidget->create();
    } else {
        ((VirtualKPlotWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnCreate(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Create_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPlotWidget_Destroy(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->destroy();
    } else {
        ((VirtualKPlotWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KPlotWidget_QBaseDestroy(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Destroy_IsBase(true);
        vkplotwidget->destroy();
    } else {
        ((VirtualKPlotWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnDestroy(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Destroy_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPlotWidget_FocusNextChild(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->focusNextChild();
    } else {
        return ((VirtualKPlotWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPlotWidget_QBaseFocusNextChild(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusNextChild_IsBase(true);
        return vkplotwidget->focusNextChild();
    } else {
        return ((VirtualKPlotWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnFocusNextChild(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPlotWidget_FocusPreviousChild(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->focusPreviousChild();
    } else {
        return ((VirtualKPlotWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPlotWidget_QBaseFocusPreviousChild(KPlotWidget* self) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusPreviousChild_IsBase(true);
        return vkplotwidget->focusPreviousChild();
    } else {
        return ((VirtualKPlotWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnFocusPreviousChild(KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = dynamic_cast<VirtualKPlotWidget*>(self);
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPlotWidget_Sender(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->sender();
    } else {
        return ((VirtualKPlotWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPlotWidget_QBaseSender(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Sender_IsBase(true);
        return vkplotwidget->sender();
    } else {
        return ((VirtualKPlotWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSender(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Sender_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPlotWidget_SenderSignalIndex(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->senderSignalIndex();
    } else {
        return ((VirtualKPlotWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPlotWidget_QBaseSenderSignalIndex(const KPlotWidget* self) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SenderSignalIndex_IsBase(true);
        return vkplotwidget->senderSignalIndex();
    } else {
        return ((VirtualKPlotWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnSenderSignalIndex(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPlotWidget_Receivers(const KPlotWidget* self, const char* signal) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->receivers(signal);
    } else {
        return ((VirtualKPlotWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPlotWidget_QBaseReceivers(const KPlotWidget* self, const char* signal) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Receivers_IsBase(true);
        return vkplotwidget->receivers(signal);
    } else {
        return ((VirtualKPlotWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnReceivers(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_Receivers_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPlotWidget_IsSignalConnected(const KPlotWidget* self, const QMetaMethod* signal) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKPlotWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPlotWidget_QBaseIsSignalConnected(const KPlotWidget* self, const QMetaMethod* signal) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_IsSignalConnected_IsBase(true);
        return vkplotwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKPlotWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnIsSignalConnected(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPlotWidget_GetDecodedMetricF(const KPlotWidget* self, int metricA, int metricB) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        return vkplotwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPlotWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPlotWidget_QBaseGetDecodedMetricF(const KPlotWidget* self, int metricA, int metricB) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_GetDecodedMetricF_IsBase(true);
        return vkplotwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPlotWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPlotWidget_OnGetDecodedMetricF(const KPlotWidget* self, intptr_t slot) {
    auto* vkplotwidget = const_cast<VirtualKPlotWidget*>(dynamic_cast<const VirtualKPlotWidget*>(self));
    if (vkplotwidget && vkplotwidget->isVirtualKPlotWidget) {
        vkplotwidget->setKPlotWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPlotWidget::KPlotWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KPlotWidget_Delete(KPlotWidget* self) {
    delete self;
}
