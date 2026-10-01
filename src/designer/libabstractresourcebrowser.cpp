#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerResourceBrowserInterface>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <abstractresourcebrowser.h>
#include "libabstractresourcebrowser.h"
#include "libabstractresourcebrowser.hxx"

QDesignerResourceBrowserInterface* QDesignerResourceBrowserInterface_new(QWidget* parent) {
    return new VirtualQDesignerResourceBrowserInterface(parent);
}

QDesignerResourceBrowserInterface* QDesignerResourceBrowserInterface_new2() {
    return new VirtualQDesignerResourceBrowserInterface();
}

QMetaObject* QDesignerResourceBrowserInterface_MetaObject(const QDesignerResourceBrowserInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerResourceBrowserInterface_Metacast(QDesignerResourceBrowserInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerResourceBrowserInterface_Metacall(QDesignerResourceBrowserInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerResourceBrowserInterface_Tr(const char* s) {
    auto _ret = QDesignerResourceBrowserInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerResourceBrowserInterface_SetCurrentPath(QDesignerResourceBrowserInterface* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->setCurrentPath(filePath_QString);
}

libqt_string QDesignerResourceBrowserInterface_CurrentPath(const QDesignerResourceBrowserInterface* self) {
    auto _ret = self->currentPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerResourceBrowserInterface_CurrentPathChanged(QDesignerResourceBrowserInterface* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->currentPathChanged(filePath_QString);
}

void QDesignerResourceBrowserInterface_Connect_CurrentPathChanged(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerResourceBrowserInterface*, const char*) = reinterpret_cast<void (*)(QDesignerResourceBrowserInterface*, const char*)>(slot);
    QDesignerResourceBrowserInterface::connect(self,
                                               static_cast<void (QDesignerResourceBrowserInterface::*)(const QString&)>(&QDesignerResourceBrowserInterface::currentPathChanged),
                                               [self, slotFunc](const QString& filePath) {
                                                   const auto filePath_ret = filePath;
                                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                   QByteArray filePath_b = filePath_ret.toUtf8();
                                                   auto filePath_str_len = filePath_b.length();
                                                   const char* filePath_str = static_cast<const char*>(malloc(filePath_str_len + 1));
                                                   memcpy((void*)filePath_str, filePath_b.data(), filePath_str_len);
                                                   ((char*)filePath_str)[filePath_str_len] = '\0';
                                                   const char* sigval1 = filePath_str;
                                                   slotFunc(self, sigval1);
                                                   libqt_free(filePath_str);
                                               });
}

void QDesignerResourceBrowserInterface_PathActivated(QDesignerResourceBrowserInterface* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->pathActivated(filePath_QString);
}

void QDesignerResourceBrowserInterface_Connect_PathActivated(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerResourceBrowserInterface*, const char*) = reinterpret_cast<void (*)(QDesignerResourceBrowserInterface*, const char*)>(slot);
    QDesignerResourceBrowserInterface::connect(self,
                                               static_cast<void (QDesignerResourceBrowserInterface::*)(const QString&)>(&QDesignerResourceBrowserInterface::pathActivated),
                                               [self, slotFunc](const QString& filePath) {
                                                   const auto filePath_ret = filePath;
                                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                   QByteArray filePath_b = filePath_ret.toUtf8();
                                                   auto filePath_str_len = filePath_b.length();
                                                   const char* filePath_str = static_cast<const char*>(malloc(filePath_str_len + 1));
                                                   memcpy((void*)filePath_str, filePath_b.data(), filePath_str_len);
                                                   ((char*)filePath_str)[filePath_str_len] = '\0';
                                                   const char* sigval1 = filePath_str;
                                                   slotFunc(self, sigval1);
                                                   libqt_free(filePath_str);
                                               });
}

libqt_string QDesignerResourceBrowserInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerResourceBrowserInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerResourceBrowserInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerResourceBrowserInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerResourceBrowserInterface_SuperMetaObject(const QDesignerResourceBrowserInterface* self) {
    return (QMetaObject*)self->QDesignerResourceBrowserInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMetaObject(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerResourceBrowserInterface_SuperMetacast(QDesignerResourceBrowserInterface* self, const char* param1) {
    return self->QDesignerResourceBrowserInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMetacast(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_metacast_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperMetacall(QDesignerResourceBrowserInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerResourceBrowserInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMetacall(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_metacall_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSetCurrentPath(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_setcurrentpath_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SetCurrentPath_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnCurrentPath(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_currentpath_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_CurrentPath_Callback>(slot);
}

// Derived class handler implementation
int QDesignerResourceBrowserInterface_DevType(const QDesignerResourceBrowserInterface* self) {
    return self->devType();
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperDevType(const QDesignerResourceBrowserInterface* self) {
    return self->QDesignerResourceBrowserInterface::devType();
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDevType(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_devtype_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_SetVisible(QDesignerResourceBrowserInterface* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperSetVisible(QDesignerResourceBrowserInterface* self, bool visible) {
    self->QDesignerResourceBrowserInterface::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSetVisible(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_setvisible_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerResourceBrowserInterface_SizeHint(const QDesignerResourceBrowserInterface* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDesignerResourceBrowserInterface_SuperSizeHint(const QDesignerResourceBrowserInterface* self) {
    return new QSize(self->QDesignerResourceBrowserInterface::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSizeHint(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_sizehint_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerResourceBrowserInterface_MinimumSizeHint(const QDesignerResourceBrowserInterface* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDesignerResourceBrowserInterface_SuperMinimumSizeHint(const QDesignerResourceBrowserInterface* self) {
    return new QSize(self->QDesignerResourceBrowserInterface::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMinimumSizeHint(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_minimumsizehint_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QDesignerResourceBrowserInterface_HeightForWidth(const QDesignerResourceBrowserInterface* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperHeightForWidth(const QDesignerResourceBrowserInterface* self, int param1) {
    return self->QDesignerResourceBrowserInterface::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnHeightForWidth(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_heightforwidth_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_HasHeightForWidth(const QDesignerResourceBrowserInterface* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperHasHeightForWidth(const QDesignerResourceBrowserInterface* self) {
    return self->QDesignerResourceBrowserInterface::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnHasHeightForWidth(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_hasheightforwidth_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDesignerResourceBrowserInterface_PaintEngine(const QDesignerResourceBrowserInterface* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDesignerResourceBrowserInterface_SuperPaintEngine(const QDesignerResourceBrowserInterface* self) {
    return self->QDesignerResourceBrowserInterface::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnPaintEngine(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_paintengine_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_Event(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        return vqdesignerresourcebrowserinterface->event(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        return vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::event(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_event_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Event_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MousePressEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMousePressEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMousePressEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_mousepressevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MouseReleaseEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMouseReleaseEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMouseReleaseEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_mousereleaseevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MouseMoveEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMouseMoveEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMouseMoveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_mousemoveevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_WheelEvent(QDesignerResourceBrowserInterface* self, QWheelEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperWheelEvent(QDesignerResourceBrowserInterface* self, QWheelEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnWheelEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_wheelevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_KeyPressEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperKeyPressEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnKeyPressEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_keypressevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_KeyReleaseEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperKeyReleaseEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnKeyReleaseEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_keyreleaseevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_FocusInEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperFocusInEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnFocusInEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_focusinevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_FocusOutEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperFocusOutEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnFocusOutEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_focusoutevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_EnterEvent(QDesignerResourceBrowserInterface* self, QEnterEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperEnterEvent(QDesignerResourceBrowserInterface* self, QEnterEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnEnterEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_enterevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_LeaveEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperLeaveEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnLeaveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_leaveevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_PaintEvent(QDesignerResourceBrowserInterface* self, QPaintEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperPaintEvent(QDesignerResourceBrowserInterface* self, QPaintEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnPaintEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_paintevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_MoveEvent(QDesignerResourceBrowserInterface* self, QMoveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperMoveEvent(QDesignerResourceBrowserInterface* self, QMoveEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMoveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_moveevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ResizeEvent(QDesignerResourceBrowserInterface* self, QResizeEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperResizeEvent(QDesignerResourceBrowserInterface* self, QResizeEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnResizeEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_resizeevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_CloseEvent(QDesignerResourceBrowserInterface* self, QCloseEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperCloseEvent(QDesignerResourceBrowserInterface* self, QCloseEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnCloseEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_closeevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ContextMenuEvent(QDesignerResourceBrowserInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperContextMenuEvent(QDesignerResourceBrowserInterface* self, QContextMenuEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnContextMenuEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_contextmenuevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_TabletEvent(QDesignerResourceBrowserInterface* self, QTabletEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperTabletEvent(QDesignerResourceBrowserInterface* self, QTabletEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnTabletEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_tabletevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ActionEvent(QDesignerResourceBrowserInterface* self, QActionEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperActionEvent(QDesignerResourceBrowserInterface* self, QActionEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnActionEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_actionevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DragEnterEvent(QDesignerResourceBrowserInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDragEnterEvent(QDesignerResourceBrowserInterface* self, QDragEnterEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDragEnterEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_dragenterevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DragMoveEvent(QDesignerResourceBrowserInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDragMoveEvent(QDesignerResourceBrowserInterface* self, QDragMoveEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDragMoveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_dragmoveevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DragLeaveEvent(QDesignerResourceBrowserInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDragLeaveEvent(QDesignerResourceBrowserInterface* self, QDragLeaveEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDragLeaveEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_dragleaveevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DropEvent(QDesignerResourceBrowserInterface* self, QDropEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDropEvent(QDesignerResourceBrowserInterface* self, QDropEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDropEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_dropevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ShowEvent(QDesignerResourceBrowserInterface* self, QShowEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperShowEvent(QDesignerResourceBrowserInterface* self, QShowEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnShowEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_showevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_HideEvent(QDesignerResourceBrowserInterface* self, QHideEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperHideEvent(QDesignerResourceBrowserInterface* self, QHideEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnHideEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_hideevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_NativeEvent(QDesignerResourceBrowserInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        return vqdesignerresourcebrowserinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperNativeEvent(QDesignerResourceBrowserInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        return vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnNativeEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_nativeevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ChangeEvent(QDesignerResourceBrowserInterface* self, QEvent* param1) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperChangeEvent(QDesignerResourceBrowserInterface* self, QEvent* param1) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnChangeEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_changeevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDesignerResourceBrowserInterface_Metric(const QDesignerResourceBrowserInterface* self, int param1) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface) {
        return vqdesignerresourcebrowserinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDesignerResourceBrowserInterface_SuperMetric(const QDesignerResourceBrowserInterface* self, int param1) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        return vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnMetric(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_metric_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_InitPainter(const QDesignerResourceBrowserInterface* self, QPainter* painter) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperInitPainter(const QDesignerResourceBrowserInterface* self, QPainter* painter) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnInitPainter(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_initpainter_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDesignerResourceBrowserInterface_Redirected(const QDesignerResourceBrowserInterface* self, QPoint* offset) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface) {
        return vqdesignerresourcebrowserinterface->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDesignerResourceBrowserInterface_SuperRedirected(const QDesignerResourceBrowserInterface* self, QPoint* offset) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        return vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnRedirected(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_redirected_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDesignerResourceBrowserInterface_SharedPainter(const QDesignerResourceBrowserInterface* self) {
    auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self));
    if (vqdesignerresourcebrowserinterface) {
        return vqdesignerresourcebrowserinterface->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDesignerResourceBrowserInterface_SuperSharedPainter(const QDesignerResourceBrowserInterface* self) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        return vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnSharedPainter(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_sharedpainter_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_InputMethodEvent(QDesignerResourceBrowserInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperInputMethodEvent(QDesignerResourceBrowserInterface* self, QInputMethodEvent* param1) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnInputMethodEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_inputmethodevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDesignerResourceBrowserInterface_InputMethodQuery(const QDesignerResourceBrowserInterface* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDesignerResourceBrowserInterface_SuperInputMethodQuery(const QDesignerResourceBrowserInterface* self, int param1) {
    return new QVariant(self->QDesignerResourceBrowserInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnInputMethodQuery(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self)))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_inputmethodquery_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_FocusNextPrevChild(QDesignerResourceBrowserInterface* self, bool next) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        return vqdesignerresourcebrowserinterface->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperFocusNextPrevChild(QDesignerResourceBrowserInterface* self, bool next) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        return vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnFocusNextPrevChild(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_focusnextprevchild_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerResourceBrowserInterface_EventFilter(QDesignerResourceBrowserInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerResourceBrowserInterface_SuperEventFilter(QDesignerResourceBrowserInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerResourceBrowserInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnEventFilter(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_TimerEvent(QDesignerResourceBrowserInterface* self, QTimerEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperTimerEvent(QDesignerResourceBrowserInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnTimerEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ChildEvent(QDesignerResourceBrowserInterface* self, QChildEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperChildEvent(QDesignerResourceBrowserInterface* self, QChildEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnChildEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_childevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_CustomEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperCustomEvent(QDesignerResourceBrowserInterface* self, QEvent* event) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnCustomEvent(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_customevent_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_ConnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperConnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnConnectNotify(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerResourceBrowserInterface_DisconnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self);
    if (vqdesignerresourcebrowserinterface) {
        vqdesignerresourcebrowserinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerResourceBrowserInterface_SuperDisconnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->QDesignerResourceBrowserInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerResourceBrowserInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerResourceBrowserInterface_OnDisconnectNotify(QDesignerResourceBrowserInterface* self, intptr_t slot) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self))
        vqdesignerresourcebrowserinterface->qdesignerresourcebrowserinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerResourceBrowserInterface::QDesignerResourceBrowserInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDesignerResourceBrowserInterface_UpdateMicroFocus(QDesignerResourceBrowserInterface* self) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerResourceBrowserInterface_Create(QDesignerResourceBrowserInterface* self) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::create();
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerResourceBrowserInterface_Destroy(QDesignerResourceBrowserInterface* self) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::destroy();
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerResourceBrowserInterface_FocusNextChild(QDesignerResourceBrowserInterface* self) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        return vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::focusNextChild();
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerResourceBrowserInterface_FocusPreviousChild(QDesignerResourceBrowserInterface* self) {
    if (auto* vqdesignerresourcebrowserinterface = dynamic_cast<VirtualQDesignerResourceBrowserInterface*>(self)) {
        return vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDesignerResourceBrowserInterface_Sender(const QDesignerResourceBrowserInterface* self) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        return vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerResourceBrowserInterface_SenderSignalIndex(const QDesignerResourceBrowserInterface* self) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        return vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerResourceBrowserInterface_Receivers(const QDesignerResourceBrowserInterface* self, const char* signal) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        return vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerResourceBrowserInterface_IsSignalConnected(const QDesignerResourceBrowserInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        return vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDesignerResourceBrowserInterface_GetDecodedMetricF(const QDesignerResourceBrowserInterface* self, int metricA, int metricB) {
    if (auto* vqdesignerresourcebrowserinterface = const_cast<VirtualQDesignerResourceBrowserInterface*>(dynamic_cast<const VirtualQDesignerResourceBrowserInterface*>(self))) {
        return vqdesignerresourcebrowserinterface->VirtualQDesignerResourceBrowserInterface::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDesignerResourceBrowserInterface::getDecodedMetricF called without a directly constructed type");
}

void QDesignerResourceBrowserInterface_Delete(QDesignerResourceBrowserInterface* self) {
    delete self;
}
