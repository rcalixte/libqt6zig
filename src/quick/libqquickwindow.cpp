#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QImage>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QQmlIncubationController>
#include <QQuickGraphicsConfiguration>
#include <QQuickGraphicsDevice>
#include <QQuickItem>
#include <QQuickRenderControl>
#include <QQuickRenderTarget>
#include <QQuickWindow>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickWindow__GraphicsStateInfo
#include <QResizeEvent>
#include <QRunnable>
#include <QSGImageNode>
#include <QSGNinePatchNode>
#include <QSGRectangleNode>
#include <QSGRendererInterface>
#include <QSGTextNode>
#include <QSGTexture>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QWheelEvent>
#include <QWindow>
#include <qquickwindow.h>
#include "libqquickwindow.h"
#include "libqquickwindow.hxx"

QQuickWindow* QQuickWindow_new() {
    return new VirtualQQuickWindow();
}

QQuickWindow* QQuickWindow_new2(QQuickRenderControl* renderControl) {
    return new VirtualQQuickWindow(renderControl);
}

QQuickWindow* QQuickWindow_new3(QWindow* parent) {
    return new VirtualQQuickWindow(parent);
}

QMetaObject* QQuickWindow_MetaObject(const QQuickWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickWindow_Metacast(QQuickWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickWindow_Metacall(QQuickWindow* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickWindow_Tr(const char* s) {
    auto _ret = QQuickWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QQuickItem* QQuickWindow_ContentItem(const QQuickWindow* self) {
    return self->contentItem();
}

QQuickItem* QQuickWindow_ActiveFocusItem(const QQuickWindow* self) {
    return self->activeFocusItem();
}

QObject* QQuickWindow_FocusObject(const QQuickWindow* self) {
    return self->focusObject();
}

QQuickItem* QQuickWindow_MouseGrabberItem(const QQuickWindow* self) {
    return self->mouseGrabberItem();
}

QImage* QQuickWindow_GrabWindow(QQuickWindow* self) {
    return new QImage(self->grabWindow());
}

void QQuickWindow_SetRenderTarget(QQuickWindow* self, const QQuickRenderTarget* target) {
    self->setRenderTarget(*target);
}

QQuickRenderTarget* QQuickWindow_RenderTarget(const QQuickWindow* self) {
    return new QQuickRenderTarget(self->renderTarget());
}

QQuickWindow__GraphicsStateInfo* QQuickWindow_GraphicsStateInfo(QQuickWindow* self) {
    const QQuickWindow::GraphicsStateInfo& _ret = self->graphicsStateInfo();
    // Cast returned reference into pointer
    return const_cast<QQuickWindow::GraphicsStateInfo*>(&_ret);
}

void QQuickWindow_BeginExternalCommands(QQuickWindow* self) {
    self->beginExternalCommands();
}

void QQuickWindow_EndExternalCommands(QQuickWindow* self) {
    self->endExternalCommands();
}

QQmlIncubationController* QQuickWindow_IncubationController(const QQuickWindow* self) {
    return self->incubationController();
}

QAccessibleInterface* QQuickWindow_AccessibleRoot(const QQuickWindow* self) {
    return self->accessibleRoot();
}

QSGTexture* QQuickWindow_CreateTextureFromImage(const QQuickWindow* self, const QImage* image) {
    return self->createTextureFromImage(*image);
}

QSGTexture* QQuickWindow_CreateTextureFromImage2(const QQuickWindow* self, const QImage* image, int options) {
    return self->createTextureFromImage(*image, static_cast<QQuickWindow::CreateTextureOptions>(options));
}

void QQuickWindow_SetColor(QQuickWindow* self, const QColor* color) {
    self->setColor(*color);
}

QColor* QQuickWindow_Color(const QQuickWindow* self) {
    return new QColor(self->color());
}

bool QQuickWindow_HasDefaultAlphaBuffer() {
    return QQuickWindow::hasDefaultAlphaBuffer();
}

void QQuickWindow_SetDefaultAlphaBuffer(bool useAlpha) {
    QQuickWindow::setDefaultAlphaBuffer(useAlpha);
}

void QQuickWindow_SetPersistentGraphics(QQuickWindow* self, bool persistent) {
    self->setPersistentGraphics(persistent);
}

bool QQuickWindow_IsPersistentGraphics(const QQuickWindow* self) {
    return self->isPersistentGraphics();
}

void QQuickWindow_SetPersistentSceneGraph(QQuickWindow* self, bool persistent) {
    self->setPersistentSceneGraph(persistent);
}

bool QQuickWindow_IsPersistentSceneGraph(const QQuickWindow* self) {
    return self->isPersistentSceneGraph();
}

bool QQuickWindow_IsSceneGraphInitialized(const QQuickWindow* self) {
    return self->isSceneGraphInitialized();
}

void QQuickWindow_ScheduleRenderJob(QQuickWindow* self, QRunnable* job, int schedule) {
    self->scheduleRenderJob(job, static_cast<QQuickWindow::RenderStage>(schedule));
}

double QQuickWindow_EffectiveDevicePixelRatio(const QQuickWindow* self) {
    return static_cast<double>(self->effectiveDevicePixelRatio());
}

QSGRendererInterface* QQuickWindow_RendererInterface(const QQuickWindow* self) {
    return self->rendererInterface();
}

void QQuickWindow_SetGraphicsApi(int api) {
    QQuickWindow::setGraphicsApi(static_cast<QSGRendererInterface::GraphicsApi>(api));
}

int QQuickWindow_GraphicsApi() {
    return static_cast<int>(QQuickWindow::graphicsApi());
}

void QQuickWindow_SetSceneGraphBackend(const libqt_string backend) {
    QString backend_QString = QString::fromUtf8(backend.data, backend.len);
    QQuickWindow::setSceneGraphBackend(backend_QString);
}

libqt_string QQuickWindow_SceneGraphBackend() {
    auto _ret = QQuickWindow::sceneGraphBackend();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWindow_SetGraphicsDevice(QQuickWindow* self, const QQuickGraphicsDevice* device) {
    self->setGraphicsDevice(*device);
}

QQuickGraphicsDevice* QQuickWindow_GraphicsDevice(const QQuickWindow* self) {
    return new QQuickGraphicsDevice(self->graphicsDevice());
}

void QQuickWindow_SetGraphicsConfiguration(QQuickWindow* self, const QQuickGraphicsConfiguration* config) {
    self->setGraphicsConfiguration(*config);
}

QQuickGraphicsConfiguration* QQuickWindow_GraphicsConfiguration(const QQuickWindow* self) {
    return new QQuickGraphicsConfiguration(self->graphicsConfiguration());
}

QSGRectangleNode* QQuickWindow_CreateRectangleNode(const QQuickWindow* self) {
    return self->createRectangleNode();
}

QSGImageNode* QQuickWindow_CreateImageNode(const QQuickWindow* self) {
    return self->createImageNode();
}

QSGNinePatchNode* QQuickWindow_CreateNinePatchNode(const QQuickWindow* self) {
    return self->createNinePatchNode();
}

QSGTextNode* QQuickWindow_CreateTextNode(const QQuickWindow* self) {
    return self->createTextNode();
}

int QQuickWindow_TextRenderType() {
    return static_cast<int>(QQuickWindow::textRenderType());
}

void QQuickWindow_SetTextRenderType(int renderType) {
    QQuickWindow::setTextRenderType(static_cast<QQuickWindow::TextRenderType>(renderType));
}

void QQuickWindow_FrameSwapped(QQuickWindow* self) {
    self->frameSwapped();
}

void QQuickWindow_Connect_FrameSwapped(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::frameSwapped, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_SceneGraphInitialized(QQuickWindow* self) {
    self->sceneGraphInitialized();
}

void QQuickWindow_Connect_SceneGraphInitialized(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::sceneGraphInitialized, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_SceneGraphInvalidated(QQuickWindow* self) {
    self->sceneGraphInvalidated();
}

void QQuickWindow_Connect_SceneGraphInvalidated(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::sceneGraphInvalidated, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_BeforeSynchronizing(QQuickWindow* self) {
    self->beforeSynchronizing();
}

void QQuickWindow_Connect_BeforeSynchronizing(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::beforeSynchronizing, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_AfterSynchronizing(QQuickWindow* self) {
    self->afterSynchronizing();
}

void QQuickWindow_Connect_AfterSynchronizing(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::afterSynchronizing, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_BeforeRendering(QQuickWindow* self) {
    self->beforeRendering();
}

void QQuickWindow_Connect_BeforeRendering(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::beforeRendering, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_AfterRendering(QQuickWindow* self) {
    self->afterRendering();
}

void QQuickWindow_Connect_AfterRendering(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::afterRendering, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_AfterAnimating(QQuickWindow* self) {
    self->afterAnimating();
}

void QQuickWindow_Connect_AfterAnimating(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::afterAnimating, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_SceneGraphAboutToStop(QQuickWindow* self) {
    self->sceneGraphAboutToStop();
}

void QQuickWindow_Connect_SceneGraphAboutToStop(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::sceneGraphAboutToStop, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_ColorChanged(QQuickWindow* self, const QColor* param1) {
    self->colorChanged(*param1);
}

void QQuickWindow_Connect_ColorChanged(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*, QColor*) = reinterpret_cast<void (*)(QQuickWindow*, QColor*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::colorChanged, [self, slotFunc](const QColor& param1) {
        const QColor& param1_ret = param1;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QQuickWindow_ActiveFocusItemChanged(QQuickWindow* self) {
    self->activeFocusItemChanged();
}

void QQuickWindow_Connect_ActiveFocusItemChanged(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::activeFocusItemChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_SceneGraphError(QQuickWindow* self, int errorVal, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->sceneGraphError(static_cast<QQuickWindow::SceneGraphError>(errorVal), message_QString);
}

void QQuickWindow_Connect_SceneGraphError(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*, int, const char*) = reinterpret_cast<void (*)(QQuickWindow*, int, const char*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::sceneGraphError, [self, slotFunc](QQuickWindow::SceneGraphError errorVal, const QString& message) {
        int sigval1 = static_cast<int>(errorVal);
        const auto message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        auto message_str_len = message_b.length();
        const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
        memcpy((void*)message_str, message_b.data(), message_str_len);
        ((char*)message_str)[message_str_len] = '\0';
        const char* sigval2 = message_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(message_str);
    });
}

void QQuickWindow_BeforeRenderPassRecording(QQuickWindow* self) {
    self->beforeRenderPassRecording();
}

void QQuickWindow_Connect_BeforeRenderPassRecording(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::beforeRenderPassRecording, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_AfterRenderPassRecording(QQuickWindow* self) {
    self->afterRenderPassRecording();
}

void QQuickWindow_Connect_AfterRenderPassRecording(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::afterRenderPassRecording, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_PaletteChanged(QQuickWindow* self) {
    self->paletteChanged();
}

void QQuickWindow_Connect_PaletteChanged(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::paletteChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_PaletteCreated(QQuickWindow* self) {
    self->paletteCreated();
}

void QQuickWindow_Connect_PaletteCreated(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::paletteCreated, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_BeforeFrameBegin(QQuickWindow* self) {
    self->beforeFrameBegin();
}

void QQuickWindow_Connect_BeforeFrameBegin(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::beforeFrameBegin, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_AfterFrameEnd(QQuickWindow* self) {
    self->afterFrameEnd();
}

void QQuickWindow_Connect_AfterFrameEnd(QQuickWindow* self, intptr_t slot) {
    void (*slotFunc)(QQuickWindow*) = reinterpret_cast<void (*)(QQuickWindow*)>(slot);
    QQuickWindow::connect(self, &QQuickWindow::afterFrameEnd, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickWindow_Update(QQuickWindow* self) {
    self->update();
}

void QQuickWindow_ReleaseResources(QQuickWindow* self) {
    self->releaseResources();
}

void QQuickWindow_ExposeEvent(QQuickWindow* self, QExposeEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->exposeEvent(param1);
    }
}

void QQuickWindow_ResizeEvent(QQuickWindow* self, QResizeEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->resizeEvent(param1);
    }
}

void QQuickWindow_ShowEvent(QQuickWindow* self, QShowEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->showEvent(param1);
    }
}

void QQuickWindow_HideEvent(QQuickWindow* self, QHideEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->hideEvent(param1);
    }
}

void QQuickWindow_CloseEvent(QQuickWindow* self, QCloseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->closeEvent(param1);
    }
}

void QQuickWindow_FocusInEvent(QQuickWindow* self, QFocusEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->focusInEvent(param1);
    }
}

void QQuickWindow_FocusOutEvent(QQuickWindow* self, QFocusEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->focusOutEvent(param1);
    }
}

bool QQuickWindow_Event(QQuickWindow* self, QEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return vqquickwindow->event(param1);
    }
    return {};
}

void QQuickWindow_KeyPressEvent(QQuickWindow* self, QKeyEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->keyPressEvent(param1);
    }
}

void QQuickWindow_KeyReleaseEvent(QQuickWindow* self, QKeyEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->keyReleaseEvent(param1);
    }
}

void QQuickWindow_MousePressEvent(QQuickWindow* self, QMouseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->mousePressEvent(param1);
    }
}

void QQuickWindow_MouseReleaseEvent(QQuickWindow* self, QMouseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->mouseReleaseEvent(param1);
    }
}

void QQuickWindow_MouseDoubleClickEvent(QQuickWindow* self, QMouseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->mouseDoubleClickEvent(param1);
    }
}

void QQuickWindow_MouseMoveEvent(QQuickWindow* self, QMouseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->mouseMoveEvent(param1);
    }
}

void QQuickWindow_WheelEvent(QQuickWindow* self, QWheelEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->wheelEvent(param1);
    }
}

void QQuickWindow_TabletEvent(QQuickWindow* self, QTabletEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->tabletEvent(param1);
    }
}

libqt_string QQuickWindow_Tr2(const char* s, const char* c) {
    auto _ret = QQuickWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickWindow_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickWindow::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickWindow_SuperMetaObject(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickwindow->metaObject();
    } else {
        return (QMetaObject*)self->QQuickWindow::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnMetaObject(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_MetaObject_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickWindow_SuperMetacast(QQuickWindow* self, const char* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_Metacast_IsBase(true);
        return vqquickwindow->qt_metacast(param1);
    } else {
        return self->QQuickWindow::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnMetacast(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_Metacast_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickWindow_SuperMetacall(QQuickWindow* self, int param1, int param2, void** param3) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_Metacall_IsBase(true);
        return vqquickwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickWindow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnMetacall(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_Metacall_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_Metacall_Callback>(slot));
}

// Base class handler implementation
QObject* QQuickWindow_SuperFocusObject(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_FocusObject_IsBase(true);
        return vqquickwindow->focusObject();
    } else {
        return self->QQuickWindow::focusObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnFocusObject(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_FocusObject_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_FocusObject_Callback>(slot));
}

// Base class handler implementation
QAccessibleInterface* QQuickWindow_SuperAccessibleRoot(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_AccessibleRoot_IsBase(true);
        return vqquickwindow->accessibleRoot();
    } else {
        return self->QQuickWindow::accessibleRoot();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnAccessibleRoot(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_AccessibleRoot_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_AccessibleRoot_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperExposeEvent(QQuickWindow* self, QExposeEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_ExposeEvent_IsBase(true);
        vqquickwindow->exposeEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->exposeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnExposeEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_ExposeEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_ExposeEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperResizeEvent(QQuickWindow* self, QResizeEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_ResizeEvent_IsBase(true);
        vqquickwindow->resizeEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnResizeEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_ResizeEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperShowEvent(QQuickWindow* self, QShowEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_ShowEvent_IsBase(true);
        vqquickwindow->showEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnShowEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_ShowEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_ShowEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperHideEvent(QQuickWindow* self, QHideEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_HideEvent_IsBase(true);
        vqquickwindow->hideEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnHideEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_HideEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_HideEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperCloseEvent(QQuickWindow* self, QCloseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_CloseEvent_IsBase(true);
        vqquickwindow->closeEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnCloseEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_CloseEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_CloseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperFocusInEvent(QQuickWindow* self, QFocusEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_FocusInEvent_IsBase(true);
        vqquickwindow->focusInEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnFocusInEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_FocusInEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_FocusInEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperFocusOutEvent(QQuickWindow* self, QFocusEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_FocusOutEvent_IsBase(true);
        vqquickwindow->focusOutEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnFocusOutEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_FocusOutEvent_Callback>(slot));
}

// Base class handler implementation
bool QQuickWindow_SuperEvent(QQuickWindow* self, QEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_Event_IsBase(true);
        return vqquickwindow->event(param1);
    } else {
        return ((VirtualQQuickWindow*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_Event_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_Event_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperKeyPressEvent(QQuickWindow* self, QKeyEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_KeyPressEvent_IsBase(true);
        vqquickwindow->keyPressEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnKeyPressEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_KeyPressEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperKeyReleaseEvent(QQuickWindow* self, QKeyEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_KeyReleaseEvent_IsBase(true);
        vqquickwindow->keyReleaseEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnKeyReleaseEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_KeyReleaseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperMousePressEvent(QQuickWindow* self, QMouseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_MousePressEvent_IsBase(true);
        vqquickwindow->mousePressEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnMousePressEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_MousePressEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_MousePressEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperMouseReleaseEvent(QQuickWindow* self, QMouseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_MouseReleaseEvent_IsBase(true);
        vqquickwindow->mouseReleaseEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnMouseReleaseEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_MouseReleaseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperMouseDoubleClickEvent(QQuickWindow* self, QMouseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_MouseDoubleClickEvent_IsBase(true);
        vqquickwindow->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnMouseDoubleClickEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_MouseDoubleClickEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperMouseMoveEvent(QQuickWindow* self, QMouseEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_MouseMoveEvent_IsBase(true);
        vqquickwindow->mouseMoveEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnMouseMoveEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_MouseMoveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperWheelEvent(QQuickWindow* self, QWheelEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_WheelEvent_IsBase(true);
        vqquickwindow->wheelEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnWheelEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_WheelEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_WheelEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWindow_SuperTabletEvent(QQuickWindow* self, QTabletEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_TabletEvent_IsBase(true);
        vqquickwindow->tabletEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->tabletEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnTabletEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_TabletEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_TabletEvent_Callback>(slot));
}

// Derived class handler implementation
int QQuickWindow_SurfaceType(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return static_cast<int>(vqquickwindow->surfaceType());
    } else {
        return static_cast<int>(self->QQuickWindow::surfaceType());
    }
}

// Base class handler implementation
int QQuickWindow_SuperSurfaceType(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_SurfaceType_IsBase(true);
        return static_cast<int>(vqquickwindow->surfaceType());
    } else {
        return static_cast<int>(self->QQuickWindow::surfaceType());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnSurfaceType(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_SurfaceType_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_SurfaceType_Callback>(slot));
}

// Derived class handler implementation
QSurfaceFormat* QQuickWindow_Format(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return new QSurfaceFormat(vqquickwindow->format());
    } else {
        return new QSurfaceFormat(((VirtualQQuickWindow*)self)->format());
    }
}

// Base class handler implementation
QSurfaceFormat* QQuickWindow_SuperFormat(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_Format_IsBase(true);
        return new QSurfaceFormat(vqquickwindow->format());
    } else {
        return new QSurfaceFormat(((VirtualQQuickWindow*)self)->format());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnFormat(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_Format_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_Format_Callback>(slot));
}

// Derived class handler implementation
QSize* QQuickWindow_Size(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return new QSize(vqquickwindow->size());
    } else {
        return new QSize(((VirtualQQuickWindow*)self)->size());
    }
}

// Base class handler implementation
QSize* QQuickWindow_SuperSize(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_Size_IsBase(true);
        return new QSize(vqquickwindow->size());
    } else {
        return new QSize(((VirtualQQuickWindow*)self)->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnSize(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_Size_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_Size_Callback>(slot));
}

// Derived class handler implementation
void QQuickWindow_PaintEvent(QQuickWindow* self, QPaintEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->paintEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QQuickWindow_SuperPaintEvent(QQuickWindow* self, QPaintEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_PaintEvent_IsBase(true);
        vqquickwindow->paintEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnPaintEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_PaintEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_PaintEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWindow_MoveEvent(QQuickWindow* self, QMoveEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->moveEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->moveEvent(param1);
    }
}

// Base class handler implementation
void QQuickWindow_SuperMoveEvent(QQuickWindow* self, QMoveEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_MoveEvent_IsBase(true);
        vqquickwindow->moveEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->moveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnMoveEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_MoveEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_MoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWindow_TouchEvent(QQuickWindow* self, QTouchEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->touchEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->touchEvent(param1);
    }
}

// Base class handler implementation
void QQuickWindow_SuperTouchEvent(QQuickWindow* self, QTouchEvent* param1) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_TouchEvent_IsBase(true);
        vqquickwindow->touchEvent(param1);
    } else {
        ((VirtualQQuickWindow*)self)->touchEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnTouchEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_TouchEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_TouchEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWindow_NativeEvent(QQuickWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return vqquickwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQQuickWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QQuickWindow_SuperNativeEvent(QQuickWindow* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_NativeEvent_IsBase(true);
        return vqquickwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQQuickWindow*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnNativeEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_NativeEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_NativeEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWindow_EventFilter(QQuickWindow* self, QObject* watched, QEvent* event) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return vqquickwindow->eventFilter(watched, event);
    } else {
        return self->QQuickWindow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickWindow_SuperEventFilter(QQuickWindow* self, QObject* watched, QEvent* event) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_EventFilter_IsBase(true);
        return vqquickwindow->eventFilter(watched, event);
    } else {
        return self->QQuickWindow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnEventFilter(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_EventFilter_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickWindow_TimerEvent(QQuickWindow* self, QTimerEvent* event) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->timerEvent(event);
    } else {
        ((VirtualQQuickWindow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickWindow_SuperTimerEvent(QQuickWindow* self, QTimerEvent* event) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_TimerEvent_IsBase(true);
        vqquickwindow->timerEvent(event);
    } else {
        ((VirtualQQuickWindow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnTimerEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_TimerEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWindow_ChildEvent(QQuickWindow* self, QChildEvent* event) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->childEvent(event);
    } else {
        ((VirtualQQuickWindow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickWindow_SuperChildEvent(QQuickWindow* self, QChildEvent* event) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_ChildEvent_IsBase(true);
        vqquickwindow->childEvent(event);
    } else {
        ((VirtualQQuickWindow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnChildEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_ChildEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWindow_CustomEvent(QQuickWindow* self, QEvent* event) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->customEvent(event);
    } else {
        ((VirtualQQuickWindow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickWindow_SuperCustomEvent(QQuickWindow* self, QEvent* event) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_CustomEvent_IsBase(true);
        vqquickwindow->customEvent(event);
    } else {
        ((VirtualQQuickWindow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnCustomEvent(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_CustomEvent_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWindow_ConnectNotify(QQuickWindow* self, const QMetaMethod* signal) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->connectNotify(*signal);
    } else {
        ((VirtualQQuickWindow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickWindow_SuperConnectNotify(QQuickWindow* self, const QMetaMethod* signal) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_ConnectNotify_IsBase(true);
        vqquickwindow->connectNotify(*signal);
    } else {
        ((VirtualQQuickWindow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnConnectNotify(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickWindow_DisconnectNotify(QQuickWindow* self, const QMetaMethod* signal) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickWindow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickWindow_SuperDisconnectNotify(QQuickWindow* self, const QMetaMethod* signal) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_DisconnectNotify_IsBase(true);
        vqquickwindow->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickWindow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnDisconnectNotify(QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = dynamic_cast<VirtualQQuickWindow*>(self);
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void* QQuickWindow_ResolveInterface(const QQuickWindow* self, const char* name, int revision) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return vqquickwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQQuickWindow*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QQuickWindow_SuperResolveInterface(const QQuickWindow* self, const char* name, int revision) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_ResolveInterface_IsBase(true);
        return vqquickwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQQuickWindow*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnResolveInterface(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_ResolveInterface_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_ResolveInterface_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickWindow_Sender(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return vqquickwindow->sender();
    } else {
        return ((VirtualQQuickWindow*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickWindow_SuperSender(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_Sender_IsBase(true);
        return vqquickwindow->sender();
    } else {
        return ((VirtualQQuickWindow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnSender(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_Sender_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickWindow_SenderSignalIndex(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return vqquickwindow->senderSignalIndex();
    } else {
        return ((VirtualQQuickWindow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickWindow_SuperSenderSignalIndex(const QQuickWindow* self) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_SenderSignalIndex_IsBase(true);
        return vqquickwindow->senderSignalIndex();
    } else {
        return ((VirtualQQuickWindow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnSenderSignalIndex(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickWindow_Receivers(const QQuickWindow* self, const char* signal) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return vqquickwindow->receivers(signal);
    } else {
        return ((VirtualQQuickWindow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickWindow_SuperReceivers(const QQuickWindow* self, const char* signal) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_Receivers_IsBase(true);
        return vqquickwindow->receivers(signal);
    } else {
        return ((VirtualQQuickWindow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnReceivers(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_Receivers_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWindow_IsSignalConnected(const QQuickWindow* self, const QMetaMethod* signal) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        return vqquickwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickWindow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickWindow_SuperIsSignalConnected(const QQuickWindow* self, const QMetaMethod* signal) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow) {
        vqquickwindow->setQQuickWindow_IsSignalConnected_IsBase(true);
        return vqquickwindow->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickWindow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWindow_OnIsSignalConnected(const QQuickWindow* self, intptr_t slot) {
    auto* vqquickwindow = const_cast<VirtualQQuickWindow*>(dynamic_cast<const VirtualQQuickWindow*>(self));
    if (vqquickwindow && vqquickwindow->isVirtualQQuickWindow)
        vqquickwindow->setQQuickWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickWindow::QQuickWindow_IsSignalConnected_Callback>(slot));
}

void QQuickWindow_Delete(QQuickWindow* self) {
    delete self;
}

int QQuickWindow__GraphicsStateInfo_CurrentFrameSlot(const QQuickWindow__GraphicsStateInfo* self) {
    return self->currentFrameSlot;
}

void QQuickWindow__GraphicsStateInfo_SetCurrentFrameSlot(QQuickWindow__GraphicsStateInfo* self, int currentFrameSlot) {
    self->currentFrameSlot = static_cast<int>(currentFrameSlot);
}

int QQuickWindow__GraphicsStateInfo_FramesInFlight(const QQuickWindow__GraphicsStateInfo* self) {
    return self->framesInFlight;
}

void QQuickWindow__GraphicsStateInfo_SetFramesInFlight(QQuickWindow__GraphicsStateInfo* self, int framesInFlight) {
    self->framesInFlight = static_cast<int>(framesInFlight);
}

void QQuickWindow__GraphicsStateInfo_Delete(QQuickWindow__GraphicsStateInfo* self) {
    delete self;
}
