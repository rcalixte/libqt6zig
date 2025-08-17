#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QScreen>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <qscreen.h>
#include "libqscreen.h"
#include "libqscreen.hxx"

QMetaObject* QScreen_MetaObject(const QScreen* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScreen_Metacast(QScreen* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScreen_Metacall(QScreen* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QScreen_Tr(const char* s) {
    QString _ret = QScreen::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScreen_Name(const QScreen* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScreen_Manufacturer(const QScreen* self) {
    QString _ret = self->manufacturer();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScreen_Model(const QScreen* self) {
    QString _ret = self->model();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScreen_SerialNumber(const QScreen* self) {
    QString _ret = self->serialNumber();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QScreen_Depth(const QScreen* self) {
    return self->depth();
}

QSize* QScreen_Size(const QScreen* self) {
    return new QSize(self->size());
}

QRect* QScreen_Geometry(const QScreen* self) {
    return new QRect(self->geometry());
}

QSizeF* QScreen_PhysicalSize(const QScreen* self) {
    return new QSizeF(self->physicalSize());
}

double QScreen_PhysicalDotsPerInchX(const QScreen* self) {
    return static_cast<double>(self->physicalDotsPerInchX());
}

double QScreen_PhysicalDotsPerInchY(const QScreen* self) {
    return static_cast<double>(self->physicalDotsPerInchY());
}

double QScreen_PhysicalDotsPerInch(const QScreen* self) {
    return static_cast<double>(self->physicalDotsPerInch());
}

double QScreen_LogicalDotsPerInchX(const QScreen* self) {
    return static_cast<double>(self->logicalDotsPerInchX());
}

double QScreen_LogicalDotsPerInchY(const QScreen* self) {
    return static_cast<double>(self->logicalDotsPerInchY());
}

double QScreen_LogicalDotsPerInch(const QScreen* self) {
    return static_cast<double>(self->logicalDotsPerInch());
}

double QScreen_DevicePixelRatio(const QScreen* self) {
    return static_cast<double>(self->devicePixelRatio());
}

QSize* QScreen_AvailableSize(const QScreen* self) {
    return new QSize(self->availableSize());
}

QRect* QScreen_AvailableGeometry(const QScreen* self) {
    return new QRect(self->availableGeometry());
}

libqt_list /* of QScreen* */ QScreen_VirtualSiblings(const QScreen* self) {
    QList<QScreen*> _ret = self->virtualSiblings();
    // Convert QList<> from C++ memory to manually-managed C memory
    QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QScreen* QScreen_VirtualSiblingAt(QScreen* self, QPoint* point) {
    return self->virtualSiblingAt(*point);
}

QSize* QScreen_VirtualSize(const QScreen* self) {
    return new QSize(self->virtualSize());
}

QRect* QScreen_VirtualGeometry(const QScreen* self) {
    return new QRect(self->virtualGeometry());
}

QSize* QScreen_AvailableVirtualSize(const QScreen* self) {
    return new QSize(self->availableVirtualSize());
}

QRect* QScreen_AvailableVirtualGeometry(const QScreen* self) {
    return new QRect(self->availableVirtualGeometry());
}

int QScreen_PrimaryOrientation(const QScreen* self) {
    return static_cast<int>(self->primaryOrientation());
}

int QScreen_Orientation(const QScreen* self) {
    return static_cast<int>(self->orientation());
}

int QScreen_NativeOrientation(const QScreen* self) {
    return static_cast<int>(self->nativeOrientation());
}

int QScreen_AngleBetween(const QScreen* self, int a, int b) {
    return self->angleBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b));
}

QTransform* QScreen_TransformBetween(const QScreen* self, int a, int b, const QRect* target) {
    return new QTransform(self->transformBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *target));
}

QRect* QScreen_MapBetween(const QScreen* self, int a, int b, const QRect* rect) {
    return new QRect(self->mapBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *rect));
}

bool QScreen_IsPortrait(const QScreen* self, int orientation) {
    return self->isPortrait(static_cast<Qt::ScreenOrientation>(orientation));
}

bool QScreen_IsLandscape(const QScreen* self, int orientation) {
    return self->isLandscape(static_cast<Qt::ScreenOrientation>(orientation));
}

QPixmap* QScreen_GrabWindow(QScreen* self) {
    return new QPixmap(self->grabWindow());
}

double QScreen_RefreshRate(const QScreen* self) {
    return static_cast<double>(self->refreshRate());
}

void QScreen_GeometryChanged(QScreen* self, const QRect* geometry) {
    self->geometryChanged(*geometry);
}

void QScreen_Connect_GeometryChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, QRect*) = reinterpret_cast<void (*)(QScreen*, QRect*)>(slot);
    QScreen::connect(self, &QScreen::geometryChanged, [self, slotFunc](const QRect& geometry) {
        const QRect& geometry_ret = geometry;
        // Cast returned reference into pointer
        QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
        slotFunc(self, sigval1);
    });
}

void QScreen_AvailableGeometryChanged(QScreen* self, const QRect* geometry) {
    self->availableGeometryChanged(*geometry);
}

void QScreen_Connect_AvailableGeometryChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, QRect*) = reinterpret_cast<void (*)(QScreen*, QRect*)>(slot);
    QScreen::connect(self, &QScreen::availableGeometryChanged, [self, slotFunc](const QRect& geometry) {
        const QRect& geometry_ret = geometry;
        // Cast returned reference into pointer
        QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
        slotFunc(self, sigval1);
    });
}

void QScreen_PhysicalSizeChanged(QScreen* self, const QSizeF* size) {
    self->physicalSizeChanged(*size);
}

void QScreen_Connect_PhysicalSizeChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, QSizeF*) = reinterpret_cast<void (*)(QScreen*, QSizeF*)>(slot);
    QScreen::connect(self, &QScreen::physicalSizeChanged, [self, slotFunc](const QSizeF& size) {
        const QSizeF& size_ret = size;
        // Cast returned reference into pointer
        QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
        slotFunc(self, sigval1);
    });
}

void QScreen_PhysicalDotsPerInchChanged(QScreen* self, double dpi) {
    self->physicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_Connect_PhysicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, double) = reinterpret_cast<void (*)(QScreen*, double)>(slot);
    QScreen::connect(self, &QScreen::physicalDotsPerInchChanged, [self, slotFunc](qreal dpi) {
        double sigval1 = static_cast<double>(dpi);
        slotFunc(self, sigval1);
    });
}

void QScreen_LogicalDotsPerInchChanged(QScreen* self, double dpi) {
    self->logicalDotsPerInchChanged(static_cast<qreal>(dpi));
}

void QScreen_Connect_LogicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, double) = reinterpret_cast<void (*)(QScreen*, double)>(slot);
    QScreen::connect(self, &QScreen::logicalDotsPerInchChanged, [self, slotFunc](qreal dpi) {
        double sigval1 = static_cast<double>(dpi);
        slotFunc(self, sigval1);
    });
}

void QScreen_VirtualGeometryChanged(QScreen* self, const QRect* rect) {
    self->virtualGeometryChanged(*rect);
}

void QScreen_Connect_VirtualGeometryChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, QRect*) = reinterpret_cast<void (*)(QScreen*, QRect*)>(slot);
    QScreen::connect(self, &QScreen::virtualGeometryChanged, [self, slotFunc](const QRect& rect) {
        const QRect& rect_ret = rect;
        // Cast returned reference into pointer
        QRect* sigval1 = const_cast<QRect*>(&rect_ret);
        slotFunc(self, sigval1);
    });
}

void QScreen_PrimaryOrientationChanged(QScreen* self, int orientation) {
    self->primaryOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_Connect_PrimaryOrientationChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, int) = reinterpret_cast<void (*)(QScreen*, int)>(slot);
    QScreen::connect(self, &QScreen::primaryOrientationChanged, [self, slotFunc](Qt::ScreenOrientation orientation) {
        int sigval1 = static_cast<int>(orientation);
        slotFunc(self, sigval1);
    });
}

void QScreen_OrientationChanged(QScreen* self, int orientation) {
    self->orientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_Connect_OrientationChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, int) = reinterpret_cast<void (*)(QScreen*, int)>(slot);
    QScreen::connect(self, &QScreen::orientationChanged, [self, slotFunc](Qt::ScreenOrientation orientation) {
        int sigval1 = static_cast<int>(orientation);
        slotFunc(self, sigval1);
    });
}

void QScreen_RefreshRateChanged(QScreen* self, double refreshRate) {
    self->refreshRateChanged(static_cast<qreal>(refreshRate));
}

void QScreen_Connect_RefreshRateChanged(QScreen* self, intptr_t slot) {
    void (*slotFunc)(QScreen*, double) = reinterpret_cast<void (*)(QScreen*, double)>(slot);
    QScreen::connect(self, &QScreen::refreshRateChanged, [self, slotFunc](qreal refreshRate) {
        double sigval1 = static_cast<double>(refreshRate);
        slotFunc(self, sigval1);
    });
}

libqt_string QScreen_Tr2(const char* s, const char* c) {
    QString _ret = QScreen::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScreen_Tr3(const char* s, const char* c, int n) {
    QString _ret = QScreen::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPixmap* QScreen_GrabWindow1(QScreen* self, uintptr_t window) {
    return new QPixmap(self->grabWindow(static_cast<WId>(window)));
}

QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x) {
    return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x)));
}

QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y) {
    return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y)));
}

QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w) {
    return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w)));
}

QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h) {
    return new QPixmap(self->grabWindow(static_cast<WId>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

void QScreen_Delete(QScreen* self) {
    delete self;
}
