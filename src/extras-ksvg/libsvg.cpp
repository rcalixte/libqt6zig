#define WORKAROUND_INNER_CLASS_DEFINITION_KSvg__ImageSet
#define WORKAROUND_INNER_CLASS_DEFINITION_KSvg__Svg
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <svg.h>
#include "libsvg.h"
#include "libsvg.hxx"

KSvg__Svg* KSvg__Svg_new() {
    return new VirtualKSvgSvg();
}

KSvg__Svg* KSvg__Svg_new2(QObject* parent) {
    return new VirtualKSvgSvg(parent);
}

QMetaObject* KSvg__Svg_MetaObject(const KSvg__Svg* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSvg__Svg_Metacast(KSvg__Svg* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSvg__Svg_Metacall(KSvg__Svg* self, int param1, int param2, void** param3) {
    auto* vksvg__svg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvg__svg && vksvg__svg->isVirtualKSvgSvg) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSvgSvg*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSvg__Svg_Tr(const char* s) {
    QString _ret = KSvg::Svg::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSvg__Svg_SetDevicePixelRatio(KSvg__Svg* self, double factor) {
    self->setDevicePixelRatio(static_cast<qreal>(factor));
}

double KSvg__Svg_DevicePixelRatio(const KSvg__Svg* self) {
    return static_cast<double>(self->devicePixelRatio());
}

QPixmap* KSvg__Svg_Pixmap(KSvg__Svg* self) {
    return new QPixmap(self->pixmap());
}

QImage* KSvg__Svg_Image(KSvg__Svg* self, const QSize* size) {
    return new QImage(self->image(*size));
}

void KSvg__Svg_Paint(KSvg__Svg* self, QPainter* painter, const QPointF* point) {
    self->paint(painter, *point);
}

void KSvg__Svg_Paint2(KSvg__Svg* self, QPainter* painter, int x, int y) {
    self->paint(painter, static_cast<int>(x), static_cast<int>(y));
}

void KSvg__Svg_Paint3(KSvg__Svg* self, QPainter* painter, const QRectF* rect) {
    self->paint(painter, *rect);
}

void KSvg__Svg_Paint4(KSvg__Svg* self, QPainter* painter, int x, int y, int width, int height) {
    self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
}

QSizeF* KSvg__Svg_Size(const KSvg__Svg* self) {
    return new QSizeF(self->size());
}

void KSvg__Svg_Resize(KSvg__Svg* self, double width, double height) {
    self->resize(static_cast<qreal>(width), static_cast<qreal>(height));
}

void KSvg__Svg_Resize2(KSvg__Svg* self, const QSizeF* size) {
    self->resize(*size);
}

void KSvg__Svg_Resize3(KSvg__Svg* self) {
    self->resize();
}

QSizeF* KSvg__Svg_ElementSize(const KSvg__Svg* self, const libqt_string elementId) {
    QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
    return new QSizeF(self->elementSize(elementId_QString));
}

QRectF* KSvg__Svg_ElementRect(const KSvg__Svg* self, const libqt_string elementId) {
    QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
    return new QRectF(self->elementRect(elementId_QString));
}

bool KSvg__Svg_HasElement(const KSvg__Svg* self, const libqt_string elementId) {
    QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
    return self->hasElement(elementId_QString);
}

bool KSvg__Svg_IsValid(const KSvg__Svg* self) {
    return self->isValid();
}

void KSvg__Svg_SetContainsMultipleImages(KSvg__Svg* self, bool multiple) {
    self->setContainsMultipleImages(multiple);
}

bool KSvg__Svg_ContainsMultipleImages(const KSvg__Svg* self) {
    return self->containsMultipleImages();
}

void KSvg__Svg_SetImagePath(KSvg__Svg* self, const libqt_string svgFilePath) {
    QString svgFilePath_QString = QString::fromUtf8(svgFilePath.data, svgFilePath.len);
    auto* vksvg__svg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvg__svg && vksvg__svg->isVirtualKSvgSvg) {
        self->setImagePath(svgFilePath_QString);
    } else {
        ((VirtualKSvgSvg*)self)->setImagePath(svgFilePath_QString);
    }
}

libqt_string KSvg__Svg_ImagePath(const KSvg__Svg* self) {
    QString _ret = self->imagePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSvg__Svg_SetUsingRenderingCache(KSvg__Svg* self, bool useCache) {
    self->setUsingRenderingCache(useCache);
}

bool KSvg__Svg_IsUsingRenderingCache(const KSvg__Svg* self) {
    return self->isUsingRenderingCache();
}

bool KSvg__Svg_FromCurrentImageSet(const KSvg__Svg* self) {
    return self->fromCurrentImageSet();
}

void KSvg__Svg_SetImageSet(KSvg__Svg* self, KSvg__ImageSet* theme) {
    self->setImageSet(theme);
}

KSvg__ImageSet* KSvg__Svg_ImageSet(const KSvg__Svg* self) {
    return self->imageSet();
}

void KSvg__Svg_SetStatus(KSvg__Svg* self, int status) {
    self->setStatus(static_cast<KSvg::Svg::Status>(status));
}

int KSvg__Svg_Status(const KSvg__Svg* self) {
    return static_cast<int>(self->status());
}

void KSvg__Svg_SetColorSet(KSvg__Svg* self, int colorSet) {
    self->setColorSet(static_cast<KSvg::Svg::ColorSet>(colorSet));
}

int KSvg__Svg_ColorSet(const KSvg__Svg* self) {
    return static_cast<int>(self->colorSet());
}

QColor* KSvg__Svg_Color(const KSvg__Svg* self, int colorName) {
    return new QColor(self->color(static_cast<KSvg::Svg::StyleSheetColor>(colorName)));
}

void KSvg__Svg_SetColor(KSvg__Svg* self, int colorName, const QColor* color) {
    self->setColor(static_cast<KSvg::Svg::StyleSheetColor>(colorName), *color);
}

void KSvg__Svg_ClearColorOverrides(KSvg__Svg* self) {
    self->clearColorOverrides();
}

void KSvg__Svg_RepaintNeeded(KSvg__Svg* self) {
    self->repaintNeeded();
}

void KSvg__Svg_Connect_RepaintNeeded(KSvg__Svg* self, intptr_t slot) {
    void (*slotFunc)(KSvg__Svg*) = reinterpret_cast<void (*)(KSvg__Svg*)>(slot);
    KSvg::Svg::connect(self, &KSvg::Svg::repaintNeeded, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSvg__Svg_SizeChanged(KSvg__Svg* self) {
    self->sizeChanged();
}

void KSvg__Svg_Connect_SizeChanged(KSvg__Svg* self, intptr_t slot) {
    void (*slotFunc)(KSvg__Svg*) = reinterpret_cast<void (*)(KSvg__Svg*)>(slot);
    KSvg::Svg::connect(self, &KSvg::Svg::sizeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSvg__Svg_ImagePathChanged(KSvg__Svg* self) {
    self->imagePathChanged();
}

void KSvg__Svg_Connect_ImagePathChanged(KSvg__Svg* self, intptr_t slot) {
    void (*slotFunc)(KSvg__Svg*) = reinterpret_cast<void (*)(KSvg__Svg*)>(slot);
    KSvg::Svg::connect(self, &KSvg::Svg::imagePathChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSvg__Svg_ColorHintChanged(KSvg__Svg* self) {
    self->colorHintChanged();
}

void KSvg__Svg_Connect_ColorHintChanged(KSvg__Svg* self, intptr_t slot) {
    void (*slotFunc)(KSvg__Svg*) = reinterpret_cast<void (*)(KSvg__Svg*)>(slot);
    KSvg::Svg::connect(self, &KSvg::Svg::colorHintChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KSvg__Svg_FromCurrentImageSetChanged(KSvg__Svg* self, bool fromCurrentImageSet) {
    self->fromCurrentImageSetChanged(fromCurrentImageSet);
}

void KSvg__Svg_Connect_FromCurrentImageSetChanged(KSvg__Svg* self, intptr_t slot) {
    void (*slotFunc)(KSvg__Svg*, bool) = reinterpret_cast<void (*)(KSvg__Svg*, bool)>(slot);
    KSvg::Svg::connect(self, &KSvg::Svg::fromCurrentImageSetChanged, [self, slotFunc](bool fromCurrentImageSet) {
        bool sigval1 = fromCurrentImageSet;
        slotFunc(self, sigval1);
    });
}

void KSvg__Svg_StatusChanged(KSvg__Svg* self, int status) {
    self->statusChanged(static_cast<KSvg::Svg::Status>(status));
}

void KSvg__Svg_Connect_StatusChanged(KSvg__Svg* self, intptr_t slot) {
    void (*slotFunc)(KSvg__Svg*, int) = reinterpret_cast<void (*)(KSvg__Svg*, int)>(slot);
    KSvg::Svg::connect(self, &KSvg::Svg::statusChanged, [self, slotFunc](KSvg::Svg::Status status) {
        int sigval1 = static_cast<int>(status);
        slotFunc(self, sigval1);
    });
}

void KSvg__Svg_ColorSetChanged(KSvg__Svg* self, int colorSet) {
    self->colorSetChanged(static_cast<KSvg::Svg::ColorSet>(colorSet));
}

void KSvg__Svg_Connect_ColorSetChanged(KSvg__Svg* self, intptr_t slot) {
    void (*slotFunc)(KSvg__Svg*, int) = reinterpret_cast<void (*)(KSvg__Svg*, int)>(slot);
    KSvg::Svg::connect(self, &KSvg::Svg::colorSetChanged, [self, slotFunc](KSvg::Svg::ColorSet colorSet) {
        int sigval1 = static_cast<int>(colorSet);
        slotFunc(self, sigval1);
    });
}

void KSvg__Svg_ImageSetChanged(KSvg__Svg* self, KSvg__ImageSet* imageSet) {
    self->imageSetChanged(imageSet);
}

void KSvg__Svg_Connect_ImageSetChanged(KSvg__Svg* self, intptr_t slot) {
    void (*slotFunc)(KSvg__Svg*, KSvg__ImageSet*) = reinterpret_cast<void (*)(KSvg__Svg*, KSvg__ImageSet*)>(slot);
    KSvg::Svg::connect(self, &KSvg::Svg::imageSetChanged, [self, slotFunc](KSvg::ImageSet* imageSet) {
        KSvg__ImageSet* sigval1 = imageSet;
        slotFunc(self, sigval1);
    });
}

libqt_string KSvg__Svg_Tr2(const char* s, const char* c) {
    QString _ret = KSvg::Svg::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSvg__Svg_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSvg::Svg::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPixmap* KSvg__Svg_Pixmap1(KSvg__Svg* self, const libqt_string elementID) {
    QString elementID_QString = QString::fromUtf8(elementID.data, elementID.len);
    return new QPixmap(self->pixmap(elementID_QString));
}

QImage* KSvg__Svg_Image2(KSvg__Svg* self, const QSize* size, const libqt_string elementID) {
    QString elementID_QString = QString::fromUtf8(elementID.data, elementID.len);
    return new QImage(self->image(*size, elementID_QString));
}

void KSvg__Svg_Paint32(KSvg__Svg* self, QPainter* painter, const QPointF* point, const libqt_string elementID) {
    QString elementID_QString = QString::fromUtf8(elementID.data, elementID.len);
    self->paint(painter, *point, elementID_QString);
}

void KSvg__Svg_Paint42(KSvg__Svg* self, QPainter* painter, int x, int y, const libqt_string elementID) {
    QString elementID_QString = QString::fromUtf8(elementID.data, elementID.len);
    self->paint(painter, static_cast<int>(x), static_cast<int>(y), elementID_QString);
}

void KSvg__Svg_Paint33(KSvg__Svg* self, QPainter* painter, const QRectF* rect, const libqt_string elementID) {
    QString elementID_QString = QString::fromUtf8(elementID.data, elementID.len);
    self->paint(painter, *rect, elementID_QString);
}

void KSvg__Svg_Paint6(KSvg__Svg* self, QPainter* painter, int x, int y, int width, int height, const libqt_string elementID) {
    QString elementID_QString = QString::fromUtf8(elementID.data, elementID.len);
    self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height), elementID_QString);
}

// Base class handler implementation
int KSvg__Svg_QBaseMetacall(KSvg__Svg* self, int param1, int param2, void** param3) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_Metacall_IsBase(true);
        return vksvgsvg->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSvg::Svg::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnMetacall(KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_Metacall_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KSvg__Svg_QBaseSetImagePath(KSvg__Svg* self, const libqt_string svgFilePath) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    QString svgFilePath_QString = QString::fromUtf8(svgFilePath.data, svgFilePath.len);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_SetImagePath_IsBase(true);
        vksvgsvg->setImagePath(svgFilePath_QString);
    } else {
        self->KSvg::Svg::setImagePath(svgFilePath_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnSetImagePath(KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_SetImagePath_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_SetImagePath_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSvg__Svg_Event(KSvg__Svg* self, QEvent* event) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        return vksvgsvg->event(event);
    } else {
        return self->KSvg::Svg::event(event);
    }
}

// Base class handler implementation
bool KSvg__Svg_QBaseEvent(KSvg__Svg* self, QEvent* event) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_Event_IsBase(true);
        return vksvgsvg->event(event);
    } else {
        return self->KSvg::Svg::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnEvent(KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_Event_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__Svg_TimerEvent(KSvg__Svg* self, QTimerEvent* event) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->timerEvent(event);
    } else {
        ((VirtualKSvgSvg*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSvg__Svg_QBaseTimerEvent(KSvg__Svg* self, QTimerEvent* event) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_TimerEvent_IsBase(true);
        vksvgsvg->timerEvent(event);
    } else {
        ((VirtualKSvgSvg*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnTimerEvent(KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_TimerEvent_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__Svg_ChildEvent(KSvg__Svg* self, QChildEvent* event) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->childEvent(event);
    } else {
        ((VirtualKSvgSvg*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSvg__Svg_QBaseChildEvent(KSvg__Svg* self, QChildEvent* event) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_ChildEvent_IsBase(true);
        vksvgsvg->childEvent(event);
    } else {
        ((VirtualKSvgSvg*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnChildEvent(KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_ChildEvent_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__Svg_CustomEvent(KSvg__Svg* self, QEvent* event) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->customEvent(event);
    } else {
        ((VirtualKSvgSvg*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSvg__Svg_QBaseCustomEvent(KSvg__Svg* self, QEvent* event) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_CustomEvent_IsBase(true);
        vksvgsvg->customEvent(event);
    } else {
        ((VirtualKSvgSvg*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnCustomEvent(KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_CustomEvent_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__Svg_ConnectNotify(KSvg__Svg* self, const QMetaMethod* signal) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->connectNotify(*signal);
    } else {
        ((VirtualKSvgSvg*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSvg__Svg_QBaseConnectNotify(KSvg__Svg* self, const QMetaMethod* signal) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_ConnectNotify_IsBase(true);
        vksvgsvg->connectNotify(*signal);
    } else {
        ((VirtualKSvgSvg*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnConnectNotify(KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_ConnectNotify_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__Svg_DisconnectNotify(KSvg__Svg* self, const QMetaMethod* signal) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->disconnectNotify(*signal);
    } else {
        ((VirtualKSvgSvg*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSvg__Svg_QBaseDisconnectNotify(KSvg__Svg* self, const QMetaMethod* signal) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_DisconnectNotify_IsBase(true);
        vksvgsvg->disconnectNotify(*signal);
    } else {
        ((VirtualKSvgSvg*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnDisconnectNotify(KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = dynamic_cast<VirtualKSvgSvg*>(self);
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_DisconnectNotify_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSvg__Svg_Sender(const KSvg__Svg* self) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        return vksvgsvg->sender();
    } else {
        return ((VirtualKSvgSvg*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSvg__Svg_QBaseSender(const KSvg__Svg* self) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_Sender_IsBase(true);
        return vksvgsvg->sender();
    } else {
        return ((VirtualKSvgSvg*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnSender(const KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_Sender_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSvg__Svg_SenderSignalIndex(const KSvg__Svg* self) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        return vksvgsvg->senderSignalIndex();
    } else {
        return ((VirtualKSvgSvg*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSvg__Svg_QBaseSenderSignalIndex(const KSvg__Svg* self) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_SenderSignalIndex_IsBase(true);
        return vksvgsvg->senderSignalIndex();
    } else {
        return ((VirtualKSvgSvg*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnSenderSignalIndex(const KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSvg__Svg_Receivers(const KSvg__Svg* self, const char* signal) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        return vksvgsvg->receivers(signal);
    } else {
        return ((VirtualKSvgSvg*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSvg__Svg_QBaseReceivers(const KSvg__Svg* self, const char* signal) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_Receivers_IsBase(true);
        return vksvgsvg->receivers(signal);
    } else {
        return ((VirtualKSvgSvg*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnReceivers(const KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_Receivers_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSvg__Svg_IsSignalConnected(const KSvg__Svg* self, const QMetaMethod* signal) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        return vksvgsvg->isSignalConnected(*signal);
    } else {
        return ((VirtualKSvgSvg*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSvg__Svg_QBaseIsSignalConnected(const KSvg__Svg* self, const QMetaMethod* signal) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_IsSignalConnected_IsBase(true);
        return vksvgsvg->isSignalConnected(*signal);
    } else {
        return ((VirtualKSvgSvg*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__Svg_OnIsSignalConnected(const KSvg__Svg* self, intptr_t slot) {
    auto* vksvgsvg = const_cast<VirtualKSvgSvg*>(dynamic_cast<const VirtualKSvgSvg*>(self));
    if (vksvgsvg && vksvgsvg->isVirtualKSvgSvg) {
        vksvgsvg->setKSvg__Svg_IsSignalConnected_Callback(reinterpret_cast<VirtualKSvgSvg::KSvg__Svg_IsSignalConnected_Callback>(slot));
    }
}

void KSvg__Svg_Delete(KSvg__Svg* self) {
    delete self;
}
