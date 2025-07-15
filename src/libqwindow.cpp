#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCursor>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QWheelEvent>
#include <QWindow>
#include <qwindow.h>
#include "libqwindow.h"
#include "libqwindow.hxx"

QWindow* QWindow_new() {
    return new VirtualQWindow();
}

QWindow* QWindow_new2(QWindow* parent) {
    return new VirtualQWindow(parent);
}

QWindow* QWindow_new3(QScreen* screen) {
    return new VirtualQWindow(screen);
}

QMetaObject* QWindow_MetaObject(const QWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWindow_Metacast(QWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWindow_Metacall(QWindow* self, int param1, int param2, void** param3) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWindow_OnMetacall(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Metacall_Callback(reinterpret_cast<VirtualQWindow::QWindow_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWindow_QBaseMetacall(QWindow* self, int param1, int param2, void** param3) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Metacall_IsBase(true);
        return vqwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWindow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWindow_Tr(const char* s) {
    QString _ret = QWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWindow_SetSurfaceType(QWindow* self, int surfaceType) {
    self->setSurfaceType(static_cast<QSurface::SurfaceType>(surfaceType));
}

bool QWindow_IsVisible(const QWindow* self) {
    return self->isVisible();
}

int QWindow_Visibility(const QWindow* self) {
    return static_cast<int>(self->visibility());
}

void QWindow_SetVisibility(QWindow* self, int v) {
    self->setVisibility(static_cast<QWindow::Visibility>(v));
}

void QWindow_Create(QWindow* self) {
    self->create();
}

uintptr_t QWindow_WinId(const QWindow* self) {
    return static_cast<uintptr_t>(self->winId());
}

QWindow* QWindow_Parent(const QWindow* self) {
    return self->parent();
}

void QWindow_SetParent(QWindow* self, QWindow* parent) {
    self->setParent(parent);
}

bool QWindow_IsTopLevel(const QWindow* self) {
    return self->isTopLevel();
}

bool QWindow_IsModal(const QWindow* self) {
    return self->isModal();
}

int QWindow_Modality(const QWindow* self) {
    return static_cast<int>(self->modality());
}

void QWindow_SetModality(QWindow* self, int modality) {
    self->setModality(static_cast<Qt::WindowModality>(modality));
}

void QWindow_SetFormat(QWindow* self, const QSurfaceFormat* format) {
    self->setFormat(*format);
}

QSurfaceFormat* QWindow_RequestedFormat(const QWindow* self) {
    return new QSurfaceFormat(self->requestedFormat());
}

void QWindow_SetFlags(QWindow* self, int flags) {
    self->setFlags(static_cast<Qt::WindowFlags>(flags));
}

int QWindow_Flags(const QWindow* self) {
    return static_cast<int>(self->flags());
}

void QWindow_SetFlag(QWindow* self, int param1) {
    self->setFlag(static_cast<Qt::WindowType>(param1));
}

int QWindow_Type(const QWindow* self) {
    return static_cast<int>(self->type());
}

libqt_string QWindow_Title(const QWindow* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWindow_SetOpacity(QWindow* self, double level) {
    self->setOpacity(static_cast<qreal>(level));
}

double QWindow_Opacity(const QWindow* self) {
    return static_cast<double>(self->opacity());
}

void QWindow_SetMask(QWindow* self, const QRegion* region) {
    self->setMask(*region);
}

QRegion* QWindow_Mask(const QWindow* self) {
    return new QRegion(self->mask());
}

bool QWindow_IsActive(const QWindow* self) {
    return self->isActive();
}

void QWindow_ReportContentOrientationChange(QWindow* self, int orientation) {
    self->reportContentOrientationChange(static_cast<Qt::ScreenOrientation>(orientation));
}

int QWindow_ContentOrientation(const QWindow* self) {
    return static_cast<int>(self->contentOrientation());
}

double QWindow_DevicePixelRatio(const QWindow* self) {
    return static_cast<double>(self->devicePixelRatio());
}

int QWindow_WindowState(const QWindow* self) {
    return static_cast<int>(self->windowState());
}

int QWindow_WindowStates(const QWindow* self) {
    return static_cast<int>(self->windowStates());
}

void QWindow_SetWindowState(QWindow* self, int state) {
    self->setWindowState(static_cast<Qt::WindowState>(state));
}

void QWindow_SetWindowStates(QWindow* self, int states) {
    self->setWindowStates(static_cast<Qt::WindowStates>(states));
}

void QWindow_SetTransientParent(QWindow* self, QWindow* parent) {
    self->setTransientParent(parent);
}

QWindow* QWindow_TransientParent(const QWindow* self) {
    return self->transientParent();
}

bool QWindow_IsAncestorOf(const QWindow* self, const QWindow* child) {
    return self->isAncestorOf(child);
}

bool QWindow_IsExposed(const QWindow* self) {
    return self->isExposed();
}

int QWindow_MinimumWidth(const QWindow* self) {
    return self->minimumWidth();
}

int QWindow_MinimumHeight(const QWindow* self) {
    return self->minimumHeight();
}

int QWindow_MaximumWidth(const QWindow* self) {
    return self->maximumWidth();
}

int QWindow_MaximumHeight(const QWindow* self) {
    return self->maximumHeight();
}

QSize* QWindow_MinimumSize(const QWindow* self) {
    return new QSize(self->minimumSize());
}

QSize* QWindow_MaximumSize(const QWindow* self) {
    return new QSize(self->maximumSize());
}

QSize* QWindow_BaseSize(const QWindow* self) {
    return new QSize(self->baseSize());
}

QSize* QWindow_SizeIncrement(const QWindow* self) {
    return new QSize(self->sizeIncrement());
}

void QWindow_SetMinimumSize(QWindow* self, const QSize* size) {
    self->setMinimumSize(*size);
}

void QWindow_SetMaximumSize(QWindow* self, const QSize* size) {
    self->setMaximumSize(*size);
}

void QWindow_SetBaseSize(QWindow* self, const QSize* size) {
    self->setBaseSize(*size);
}

void QWindow_SetSizeIncrement(QWindow* self, const QSize* size) {
    self->setSizeIncrement(*size);
}

QRect* QWindow_Geometry(const QWindow* self) {
    return new QRect(self->geometry());
}

QMargins* QWindow_FrameMargins(const QWindow* self) {
    return new QMargins(self->frameMargins());
}

QRect* QWindow_FrameGeometry(const QWindow* self) {
    return new QRect(self->frameGeometry());
}

QPoint* QWindow_FramePosition(const QWindow* self) {
    return new QPoint(self->framePosition());
}

void QWindow_SetFramePosition(QWindow* self, const QPoint* point) {
    self->setFramePosition(*point);
}

int QWindow_Width(const QWindow* self) {
    return self->width();
}

int QWindow_Height(const QWindow* self) {
    return self->height();
}

int QWindow_X(const QWindow* self) {
    return self->x();
}

int QWindow_Y(const QWindow* self) {
    return self->y();
}

QPoint* QWindow_Position(const QWindow* self) {
    return new QPoint(self->position());
}

void QWindow_SetPosition(QWindow* self, const QPoint* pt) {
    self->setPosition(*pt);
}

void QWindow_SetPosition2(QWindow* self, int posx, int posy) {
    self->setPosition(static_cast<int>(posx), static_cast<int>(posy));
}

void QWindow_Resize(QWindow* self, const QSize* newSize) {
    self->resize(*newSize);
}

void QWindow_Resize2(QWindow* self, int w, int h) {
    self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWindow_SetFilePath(QWindow* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->setFilePath(filePath_QString);
}

libqt_string QWindow_FilePath(const QWindow* self) {
    QString _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWindow_SetIcon(QWindow* self, const QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* QWindow_Icon(const QWindow* self) {
    return new QIcon(self->icon());
}

void QWindow_Destroy(QWindow* self) {
    self->destroy();
}

bool QWindow_SetKeyboardGrabEnabled(QWindow* self, bool grab) {
    return self->setKeyboardGrabEnabled(grab);
}

bool QWindow_SetMouseGrabEnabled(QWindow* self, bool grab) {
    return self->setMouseGrabEnabled(grab);
}

QScreen* QWindow_Screen(const QWindow* self) {
    return self->screen();
}

void QWindow_SetScreen(QWindow* self, QScreen* screen) {
    self->setScreen(screen);
}

QPointF* QWindow_MapToGlobal(const QWindow* self, const QPointF* pos) {
    return new QPointF(self->mapToGlobal(*pos));
}

QPointF* QWindow_MapFromGlobal(const QWindow* self, const QPointF* pos) {
    return new QPointF(self->mapFromGlobal(*pos));
}

QPoint* QWindow_MapToGlobal2(const QWindow* self, const QPoint* pos) {
    return new QPoint(self->mapToGlobal(*pos));
}

QPoint* QWindow_MapFromGlobal2(const QWindow* self, const QPoint* pos) {
    return new QPoint(self->mapFromGlobal(*pos));
}

QCursor* QWindow_Cursor(const QWindow* self) {
    return new QCursor(self->cursor());
}

void QWindow_SetCursor(QWindow* self, const QCursor* cursor) {
    self->setCursor(*cursor);
}

void QWindow_UnsetCursor(QWindow* self) {
    self->unsetCursor();
}

QWindow* QWindow_FromWinId(uintptr_t id) {
    return QWindow::fromWinId(static_cast<WId>(id));
}

void QWindow_RequestActivate(QWindow* self) {
    self->requestActivate();
}

void QWindow_SetVisible(QWindow* self, bool visible) {
    self->setVisible(visible);
}

void QWindow_Show(QWindow* self) {
    self->show();
}

void QWindow_Hide(QWindow* self) {
    self->hide();
}

void QWindow_ShowMinimized(QWindow* self) {
    self->showMinimized();
}

void QWindow_ShowMaximized(QWindow* self) {
    self->showMaximized();
}

void QWindow_ShowFullScreen(QWindow* self) {
    self->showFullScreen();
}

void QWindow_ShowNormal(QWindow* self) {
    self->showNormal();
}

bool QWindow_Close(QWindow* self) {
    return self->close();
}

void QWindow_Raise(QWindow* self) {
    self->raise();
}

void QWindow_Lower(QWindow* self) {
    self->lower();
}

bool QWindow_StartSystemResize(QWindow* self, int edges) {
    return self->startSystemResize(static_cast<Qt::Edges>(edges));
}

bool QWindow_StartSystemMove(QWindow* self) {
    return self->startSystemMove();
}

void QWindow_SetTitle(QWindow* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

void QWindow_SetX(QWindow* self, int arg) {
    self->setX(static_cast<int>(arg));
}

void QWindow_SetY(QWindow* self, int arg) {
    self->setY(static_cast<int>(arg));
}

void QWindow_SetWidth(QWindow* self, int arg) {
    self->setWidth(static_cast<int>(arg));
}

void QWindow_SetHeight(QWindow* self, int arg) {
    self->setHeight(static_cast<int>(arg));
}

void QWindow_SetGeometry(QWindow* self, int posx, int posy, int w, int h) {
    self->setGeometry(static_cast<int>(posx), static_cast<int>(posy), static_cast<int>(w), static_cast<int>(h));
}

void QWindow_SetGeometry2(QWindow* self, const QRect* rect) {
    self->setGeometry(*rect);
}

void QWindow_SetMinimumWidth(QWindow* self, int w) {
    self->setMinimumWidth(static_cast<int>(w));
}

void QWindow_SetMinimumHeight(QWindow* self, int h) {
    self->setMinimumHeight(static_cast<int>(h));
}

void QWindow_SetMaximumWidth(QWindow* self, int w) {
    self->setMaximumWidth(static_cast<int>(w));
}

void QWindow_SetMaximumHeight(QWindow* self, int h) {
    self->setMaximumHeight(static_cast<int>(h));
}

void QWindow_Alert(QWindow* self, int msec) {
    self->alert(static_cast<int>(msec));
}

void QWindow_RequestUpdate(QWindow* self) {
    self->requestUpdate();
}

void QWindow_ScreenChanged(QWindow* self, QScreen* screen) {
    self->screenChanged(screen);
}

void QWindow_Connect_ScreenChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, QScreen*) = reinterpret_cast<void (*)(QWindow*, QScreen*)>(slot);
    QWindow::connect(self, &QWindow::screenChanged, [self, slotFunc](QScreen* screen) {
        QScreen* sigval1 = screen;
        slotFunc(self, sigval1);
    });
}

void QWindow_ModalityChanged(QWindow* self, int modality) {
    self->modalityChanged(static_cast<Qt::WindowModality>(modality));
}

void QWindow_Connect_ModalityChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::modalityChanged, [self, slotFunc](Qt::WindowModality modality) {
        int sigval1 = static_cast<int>(modality);
        slotFunc(self, sigval1);
    });
}

void QWindow_WindowStateChanged(QWindow* self, int windowState) {
    self->windowStateChanged(static_cast<Qt::WindowState>(windowState));
}

void QWindow_Connect_WindowStateChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::windowStateChanged, [self, slotFunc](Qt::WindowState windowState) {
        int sigval1 = static_cast<int>(windowState);
        slotFunc(self, sigval1);
    });
}

void QWindow_WindowTitleChanged(QWindow* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->windowTitleChanged(title_QString);
}

void QWindow_Connect_WindowTitleChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, libqt_string) = reinterpret_cast<void (*)(QWindow*, libqt_string)>(slot);
    QWindow::connect(self, &QWindow::windowTitleChanged, [self, slotFunc](const QString& title) {
        const QString title_ret = title;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray title_b = title_ret.toUtf8();
        libqt_string title_str;
        title_str.len = title_b.length();
        title_str.data = static_cast<const char*>(malloc((title_str.len + 1) * sizeof(char)));
        memcpy((void*)title_str.data, title_b.data(), title_str.len);
        ((char*)title_str.data)[title_str.len] = '\0';
        libqt_string sigval1 = title_str;
        slotFunc(self, sigval1);
    });
}

void QWindow_XChanged(QWindow* self, int arg) {
    self->xChanged(static_cast<int>(arg));
}

void QWindow_Connect_XChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::xChanged, [self, slotFunc](int arg) {
        int sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_YChanged(QWindow* self, int arg) {
    self->yChanged(static_cast<int>(arg));
}

void QWindow_Connect_YChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::yChanged, [self, slotFunc](int arg) {
        int sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_WidthChanged(QWindow* self, int arg) {
    self->widthChanged(static_cast<int>(arg));
}

void QWindow_Connect_WidthChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::widthChanged, [self, slotFunc](int arg) {
        int sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_HeightChanged(QWindow* self, int arg) {
    self->heightChanged(static_cast<int>(arg));
}

void QWindow_Connect_HeightChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::heightChanged, [self, slotFunc](int arg) {
        int sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_MinimumWidthChanged(QWindow* self, int arg) {
    self->minimumWidthChanged(static_cast<int>(arg));
}

void QWindow_Connect_MinimumWidthChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::minimumWidthChanged, [self, slotFunc](int arg) {
        int sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_MinimumHeightChanged(QWindow* self, int arg) {
    self->minimumHeightChanged(static_cast<int>(arg));
}

void QWindow_Connect_MinimumHeightChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::minimumHeightChanged, [self, slotFunc](int arg) {
        int sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_MaximumWidthChanged(QWindow* self, int arg) {
    self->maximumWidthChanged(static_cast<int>(arg));
}

void QWindow_Connect_MaximumWidthChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::maximumWidthChanged, [self, slotFunc](int arg) {
        int sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_MaximumHeightChanged(QWindow* self, int arg) {
    self->maximumHeightChanged(static_cast<int>(arg));
}

void QWindow_Connect_MaximumHeightChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::maximumHeightChanged, [self, slotFunc](int arg) {
        int sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_VisibleChanged(QWindow* self, bool arg) {
    self->visibleChanged(arg);
}

void QWindow_Connect_VisibleChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, bool) = reinterpret_cast<void (*)(QWindow*, bool)>(slot);
    QWindow::connect(self, &QWindow::visibleChanged, [self, slotFunc](bool arg) {
        bool sigval1 = arg;
        slotFunc(self, sigval1);
    });
}

void QWindow_VisibilityChanged(QWindow* self, int visibility) {
    self->visibilityChanged(static_cast<QWindow::Visibility>(visibility));
}

void QWindow_Connect_VisibilityChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::visibilityChanged, [self, slotFunc](QWindow::Visibility visibility) {
        int sigval1 = static_cast<int>(visibility);
        slotFunc(self, sigval1);
    });
}

void QWindow_ActiveChanged(QWindow* self) {
    self->activeChanged();
}

void QWindow_Connect_ActiveChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*) = reinterpret_cast<void (*)(QWindow*)>(slot);
    QWindow::connect(self, &QWindow::activeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWindow_ContentOrientationChanged(QWindow* self, int orientation) {
    self->contentOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QWindow_Connect_ContentOrientationChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::contentOrientationChanged, [self, slotFunc](Qt::ScreenOrientation orientation) {
        int sigval1 = static_cast<int>(orientation);
        slotFunc(self, sigval1);
    });
}

void QWindow_FocusObjectChanged(QWindow* self, QObject* object) {
    self->focusObjectChanged(object);
}

void QWindow_Connect_FocusObjectChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, QObject*) = reinterpret_cast<void (*)(QWindow*, QObject*)>(slot);
    QWindow::connect(self, &QWindow::focusObjectChanged, [self, slotFunc](QObject* object) {
        QObject* sigval1 = object;
        slotFunc(self, sigval1);
    });
}

void QWindow_OpacityChanged(QWindow* self, double opacity) {
    self->opacityChanged(static_cast<qreal>(opacity));
}

void QWindow_Connect_OpacityChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, double) = reinterpret_cast<void (*)(QWindow*, double)>(slot);
    QWindow::connect(self, &QWindow::opacityChanged, [self, slotFunc](qreal opacity) {
        double sigval1 = static_cast<double>(opacity);
        slotFunc(self, sigval1);
    });
}

void QWindow_TransientParentChanged(QWindow* self, QWindow* transientParent) {
    self->transientParentChanged(transientParent);
}

void QWindow_Connect_TransientParentChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, QWindow*) = reinterpret_cast<void (*)(QWindow*, QWindow*)>(slot);
    QWindow::connect(self, &QWindow::transientParentChanged, [self, slotFunc](QWindow* transientParent) {
        QWindow* sigval1 = transientParent;
        slotFunc(self, sigval1);
    });
}

libqt_string QWindow_Tr2(const char* s, const char* c) {
    QString _ret = QWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWindow* QWindow_Parent1(const QWindow* self, int mode) {
    return self->parent(static_cast<QWindow::AncestorMode>(mode));
}

void QWindow_SetFlag2(QWindow* self, int param1, bool on) {
    self->setFlag(static_cast<Qt::WindowType>(param1), on);
}

bool QWindow_IsAncestorOf2(const QWindow* self, const QWindow* child, int mode) {
    return self->isAncestorOf(child, static_cast<QWindow::AncestorMode>(mode));
}

// Derived class handler implementation
int QWindow_SurfaceType(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return static_cast<int>(vqwindow->surfaceType());
    } else {
        return static_cast<int>(self->QWindow::surfaceType());
    }
}

// Base class handler implementation
int QWindow_QBaseSurfaceType(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_SurfaceType_IsBase(true);
        return static_cast<int>(vqwindow->surfaceType());
    } else {
        return static_cast<int>(self->QWindow::surfaceType());
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnSurfaceType(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_SurfaceType_Callback(reinterpret_cast<VirtualQWindow::QWindow_SurfaceType_Callback>(slot));
    }
}

// Derived class handler implementation
QSurfaceFormat* QWindow_Format(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return new QSurfaceFormat(vqwindow->format());
    } else {
        return new QSurfaceFormat(((VirtualQWindow*)self)->format());
    }
}

// Base class handler implementation
QSurfaceFormat* QWindow_QBaseFormat(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Format_IsBase(true);
        return new QSurfaceFormat(vqwindow->format());
    } else {
        return new QSurfaceFormat(((VirtualQWindow*)self)->format());
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnFormat(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Format_Callback(reinterpret_cast<VirtualQWindow::QWindow_Format_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWindow_Size(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return new QSize(vqwindow->size());
    } else {
        return new QSize(((VirtualQWindow*)self)->size());
    }
}

// Base class handler implementation
QSize* QWindow_QBaseSize(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Size_IsBase(true);
        return new QSize(vqwindow->size());
    } else {
        return new QSize(((VirtualQWindow*)self)->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnSize(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Size_Callback(reinterpret_cast<VirtualQWindow::QWindow_Size_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QWindow_AccessibleRoot(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->accessibleRoot();
    } else {
        return self->QWindow::accessibleRoot();
    }
}

// Base class handler implementation
QAccessibleInterface* QWindow_QBaseAccessibleRoot(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_AccessibleRoot_IsBase(true);
        return vqwindow->accessibleRoot();
    } else {
        return self->QWindow::accessibleRoot();
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnAccessibleRoot(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_AccessibleRoot_Callback(reinterpret_cast<VirtualQWindow::QWindow_AccessibleRoot_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWindow_FocusObject(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->focusObject();
    } else {
        return self->QWindow::focusObject();
    }
}

// Base class handler implementation
QObject* QWindow_QBaseFocusObject(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_FocusObject_IsBase(true);
        return vqwindow->focusObject();
    } else {
        return self->QWindow::focusObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnFocusObject(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_FocusObject_Callback(reinterpret_cast<VirtualQWindow::QWindow_FocusObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_ExposeEvent(QWindow* self, QExposeEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->exposeEvent(param1);
    } else {
        ((VirtualQWindow*)self)->exposeEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseExposeEvent(QWindow* self, QExposeEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ExposeEvent_IsBase(true);
        vqwindow->exposeEvent(param1);
    } else {
        ((VirtualQWindow*)self)->exposeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnExposeEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ExposeEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_ExposeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_ResizeEvent(QWindow* self, QResizeEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->resizeEvent(param1);
    } else {
        ((VirtualQWindow*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseResizeEvent(QWindow* self, QResizeEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ResizeEvent_IsBase(true);
        vqwindow->resizeEvent(param1);
    } else {
        ((VirtualQWindow*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnResizeEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_PaintEvent(QWindow* self, QPaintEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->paintEvent(param1);
    } else {
        ((VirtualQWindow*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBasePaintEvent(QWindow* self, QPaintEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_PaintEvent_IsBase(true);
        vqwindow->paintEvent(param1);
    } else {
        ((VirtualQWindow*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnPaintEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_PaintEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_MoveEvent(QWindow* self, QMoveEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->moveEvent(param1);
    } else {
        ((VirtualQWindow*)self)->moveEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseMoveEvent(QWindow* self, QMoveEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MoveEvent_IsBase(true);
        vqwindow->moveEvent(param1);
    } else {
        ((VirtualQWindow*)self)->moveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnMoveEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MoveEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_FocusInEvent(QWindow* self, QFocusEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->focusInEvent(param1);
    } else {
        ((VirtualQWindow*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseFocusInEvent(QWindow* self, QFocusEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_FocusInEvent_IsBase(true);
        vqwindow->focusInEvent(param1);
    } else {
        ((VirtualQWindow*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnFocusInEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_FocusInEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_FocusOutEvent(QWindow* self, QFocusEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->focusOutEvent(param1);
    } else {
        ((VirtualQWindow*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseFocusOutEvent(QWindow* self, QFocusEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_FocusOutEvent_IsBase(true);
        vqwindow->focusOutEvent(param1);
    } else {
        ((VirtualQWindow*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnFocusOutEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_ShowEvent(QWindow* self, QShowEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->showEvent(param1);
    } else {
        ((VirtualQWindow*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseShowEvent(QWindow* self, QShowEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ShowEvent_IsBase(true);
        vqwindow->showEvent(param1);
    } else {
        ((VirtualQWindow*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnShowEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ShowEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_HideEvent(QWindow* self, QHideEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->hideEvent(param1);
    } else {
        ((VirtualQWindow*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseHideEvent(QWindow* self, QHideEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_HideEvent_IsBase(true);
        vqwindow->hideEvent(param1);
    } else {
        ((VirtualQWindow*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnHideEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_HideEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_CloseEvent(QWindow* self, QCloseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->closeEvent(param1);
    } else {
        ((VirtualQWindow*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseCloseEvent(QWindow* self, QCloseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_CloseEvent_IsBase(true);
        vqwindow->closeEvent(param1);
    } else {
        ((VirtualQWindow*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnCloseEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_CloseEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWindow_Event(QWindow* self, QEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->event(param1);
    } else {
        return ((VirtualQWindow*)self)->event(param1);
    }
}

// Base class handler implementation
bool QWindow_QBaseEvent(QWindow* self, QEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Event_IsBase(true);
        return vqwindow->event(param1);
    } else {
        return ((VirtualQWindow*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Event_Callback(reinterpret_cast<VirtualQWindow::QWindow_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_KeyPressEvent(QWindow* self, QKeyEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->keyPressEvent(param1);
    } else {
        ((VirtualQWindow*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseKeyPressEvent(QWindow* self, QKeyEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_KeyPressEvent_IsBase(true);
        vqwindow->keyPressEvent(param1);
    } else {
        ((VirtualQWindow*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnKeyPressEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_KeyReleaseEvent(QWindow* self, QKeyEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->keyReleaseEvent(param1);
    } else {
        ((VirtualQWindow*)self)->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseKeyReleaseEvent(QWindow* self, QKeyEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_KeyReleaseEvent_IsBase(true);
        vqwindow->keyReleaseEvent(param1);
    } else {
        ((VirtualQWindow*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnKeyReleaseEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_MousePressEvent(QWindow* self, QMouseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->mousePressEvent(param1);
    } else {
        ((VirtualQWindow*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseMousePressEvent(QWindow* self, QMouseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MousePressEvent_IsBase(true);
        vqwindow->mousePressEvent(param1);
    } else {
        ((VirtualQWindow*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnMousePressEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MousePressEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_MouseReleaseEvent(QWindow* self, QMouseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->mouseReleaseEvent(param1);
    } else {
        ((VirtualQWindow*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseMouseReleaseEvent(QWindow* self, QMouseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MouseReleaseEvent_IsBase(true);
        vqwindow->mouseReleaseEvent(param1);
    } else {
        ((VirtualQWindow*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnMouseReleaseEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_MouseDoubleClickEvent(QWindow* self, QMouseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQWindow*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseMouseDoubleClickEvent(QWindow* self, QMouseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MouseDoubleClickEvent_IsBase(true);
        vqwindow->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQWindow*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnMouseDoubleClickEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_MouseMoveEvent(QWindow* self, QMouseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->mouseMoveEvent(param1);
    } else {
        ((VirtualQWindow*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseMouseMoveEvent(QWindow* self, QMouseEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MouseMoveEvent_IsBase(true);
        vqwindow->mouseMoveEvent(param1);
    } else {
        ((VirtualQWindow*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnMouseMoveEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_WheelEvent(QWindow* self, QWheelEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->wheelEvent(param1);
    } else {
        ((VirtualQWindow*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseWheelEvent(QWindow* self, QWheelEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_WheelEvent_IsBase(true);
        vqwindow->wheelEvent(param1);
    } else {
        ((VirtualQWindow*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnWheelEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_WheelEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_TouchEvent(QWindow* self, QTouchEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->touchEvent(param1);
    } else {
        ((VirtualQWindow*)self)->touchEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseTouchEvent(QWindow* self, QTouchEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_TouchEvent_IsBase(true);
        vqwindow->touchEvent(param1);
    } else {
        ((VirtualQWindow*)self)->touchEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnTouchEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_TouchEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_TouchEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_TabletEvent(QWindow* self, QTabletEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->tabletEvent(param1);
    } else {
        ((VirtualQWindow*)self)->tabletEvent(param1);
    }
}

// Base class handler implementation
void QWindow_QBaseTabletEvent(QWindow* self, QTabletEvent* param1) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_TabletEvent_IsBase(true);
        vqwindow->tabletEvent(param1);
    } else {
        ((VirtualQWindow*)self)->tabletEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnTabletEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_TabletEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWindow_NativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QWindow_QBaseNativeEvent(QWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_NativeEvent_IsBase(true);
        return vqwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnNativeEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_NativeEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWindow_EventFilter(QWindow* self, QObject* watched, QEvent* event) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->eventFilter(watched, event);
    } else {
        return self->QWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWindow_QBaseEventFilter(QWindow* self, QObject* watched, QEvent* event) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_EventFilter_IsBase(true);
        return vqwindow->eventFilter(watched, event);
    } else {
        return self->QWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnEventFilter(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_EventFilter_Callback(reinterpret_cast<VirtualQWindow::QWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_TimerEvent(QWindow* self, QTimerEvent* event) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->timerEvent(event);
    } else {
        ((VirtualQWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWindow_QBaseTimerEvent(QWindow* self, QTimerEvent* event) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_TimerEvent_IsBase(true);
        vqwindow->timerEvent(event);
    } else {
        ((VirtualQWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnTimerEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_TimerEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_ChildEvent(QWindow* self, QChildEvent* event) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->childEvent(event);
    } else {
        ((VirtualQWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWindow_QBaseChildEvent(QWindow* self, QChildEvent* event) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ChildEvent_IsBase(true);
        vqwindow->childEvent(event);
    } else {
        ((VirtualQWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnChildEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ChildEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_CustomEvent(QWindow* self, QEvent* event) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->customEvent(event);
    } else {
        ((VirtualQWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWindow_QBaseCustomEvent(QWindow* self, QEvent* event) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_CustomEvent_IsBase(true);
        vqwindow->customEvent(event);
    } else {
        ((VirtualQWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnCustomEvent(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_CustomEvent_Callback(reinterpret_cast<VirtualQWindow::QWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_ConnectNotify(QWindow* self, const QMetaMethod* signal) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->connectNotify(*signal);
    } else {
        ((VirtualQWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWindow_QBaseConnectNotify(QWindow* self, const QMetaMethod* signal) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ConnectNotify_IsBase(true);
        vqwindow->connectNotify(*signal);
    } else {
        ((VirtualQWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnConnectNotify(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ConnectNotify_Callback(reinterpret_cast<VirtualQWindow::QWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWindow_DisconnectNotify(QWindow* self, const QMetaMethod* signal) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWindow_QBaseDisconnectNotify(QWindow* self, const QMetaMethod* signal) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_DisconnectNotify_IsBase(true);
        vqwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnDisconnectNotify(QWindow* self, intptr_t slot) {
    auto* vqwindow = dynamic_cast<VirtualQWindow*>(self);
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualQWindow::QWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void* QWindow_ResolveInterface(const QWindow* self, const char* name, int revision) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQWindow*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QWindow_QBaseResolveInterface(const QWindow* self, const char* name, int revision) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ResolveInterface_IsBase(true);
        return vqwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQWindow*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnResolveInterface(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_ResolveInterface_Callback(reinterpret_cast<VirtualQWindow::QWindow_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWindow_Sender(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->sender();
    } else {
        return ((VirtualQWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWindow_QBaseSender(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Sender_IsBase(true);
        return vqwindow->sender();
    } else {
        return ((VirtualQWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnSender(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Sender_Callback(reinterpret_cast<VirtualQWindow::QWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWindow_SenderSignalIndex(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->senderSignalIndex();
    } else {
        return ((VirtualQWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWindow_QBaseSenderSignalIndex(const QWindow* self) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_SenderSignalIndex_IsBase(true);
        return vqwindow->senderSignalIndex();
    } else {
        return ((VirtualQWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnSenderSignalIndex(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWindow::QWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWindow_Receivers(const QWindow* self, const char* signal) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->receivers(signal);
    } else {
        return ((VirtualQWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWindow_QBaseReceivers(const QWindow* self, const char* signal) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Receivers_IsBase(true);
        return vqwindow->receivers(signal);
    } else {
        return ((VirtualQWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnReceivers(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_Receivers_Callback(reinterpret_cast<VirtualQWindow::QWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWindow_IsSignalConnected(const QWindow* self, const QMetaMethod* signal) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        return vqwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWindow_QBaseIsSignalConnected(const QWindow* self, const QMetaMethod* signal) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_IsSignalConnected_IsBase(true);
        return vqwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnIsSignalConnected(const QWindow* self, intptr_t slot) {
    auto* vqwindow = const_cast<VirtualQWindow*>(dynamic_cast<const VirtualQWindow*>(self));
    if (vqwindow && vqwindow->isVirtualQWindow) {
        vqwindow->setQWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualQWindow::QWindow_IsSignalConnected_Callback>(slot));
    }
}

void QWindow_Delete(QWindow* self) {
    delete self;
}
