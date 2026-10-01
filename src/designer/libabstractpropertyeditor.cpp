#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerPropertyEditorInterface>
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
#include <abstractpropertyeditor.h>
#include "libabstractpropertyeditor.h"
#include "libabstractpropertyeditor.hxx"

QDesignerPropertyEditorInterface* QDesignerPropertyEditorInterface_new(QWidget* parent) {
    return new VirtualQDesignerPropertyEditorInterface(parent);
}

QDesignerPropertyEditorInterface* QDesignerPropertyEditorInterface_new2(QWidget* parent, int flags) {
    return new VirtualQDesignerPropertyEditorInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDesignerPropertyEditorInterface_MetaObject(const QDesignerPropertyEditorInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerPropertyEditorInterface_Metacast(QDesignerPropertyEditorInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerPropertyEditorInterface_Metacall(QDesignerPropertyEditorInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerPropertyEditorInterface_Tr(const char* s) {
    auto _ret = QDesignerPropertyEditorInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDesignerFormEditorInterface* QDesignerPropertyEditorInterface_Core(const QDesignerPropertyEditorInterface* self) {
    return self->core();
}

bool QDesignerPropertyEditorInterface_IsReadOnly(const QDesignerPropertyEditorInterface* self) {
    return self->isReadOnly();
}

QObject* QDesignerPropertyEditorInterface_Object(const QDesignerPropertyEditorInterface* self) {
    return self->object();
}

libqt_string QDesignerPropertyEditorInterface_CurrentPropertyName(const QDesignerPropertyEditorInterface* self) {
    auto _ret = self->currentPropertyName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerPropertyEditorInterface_PropertyChanged(QDesignerPropertyEditorInterface* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->propertyChanged(name_QString, *value);
}

void QDesignerPropertyEditorInterface_Connect_PropertyChanged(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerPropertyEditorInterface*, const char*, QVariant*) = reinterpret_cast<void (*)(QDesignerPropertyEditorInterface*, const char*, QVariant*)>(slot);
    QDesignerPropertyEditorInterface::connect(self,
                                              static_cast<void (QDesignerPropertyEditorInterface::*)(const QString&, const QVariant&)>(&QDesignerPropertyEditorInterface::propertyChanged),
                                              [self, slotFunc](const QString& name, const QVariant& value) {
                                                  const auto name_ret = name;
                                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                  QByteArray name_b = name_ret.toUtf8();
                                                  auto name_str_len = name_b.length();
                                                  const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
                                                  memcpy((void*)name_str, name_b.data(), name_str_len);
                                                  ((char*)name_str)[name_str_len] = '\0';
                                                  const char* sigval1 = name_str;
                                                  const QVariant& value_ret = value;
                                                  // Cast returned reference into pointer
                                                  QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
                                                  slotFunc(self, sigval1, sigval2);
                                                  libqt_free(name_str);
                                              });
}

void QDesignerPropertyEditorInterface_SetObject(QDesignerPropertyEditorInterface* self, QObject* object) {
    self->setObject(object);
}

void QDesignerPropertyEditorInterface_SetPropertyValue(QDesignerPropertyEditorInterface* self, const libqt_string name, const QVariant* value, bool changed) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setPropertyValue(name_QString, *value, changed);
}

void QDesignerPropertyEditorInterface_SetReadOnly(QDesignerPropertyEditorInterface* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

libqt_string QDesignerPropertyEditorInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerPropertyEditorInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerPropertyEditorInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerPropertyEditorInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerPropertyEditorInterface_SuperMetaObject(const QDesignerPropertyEditorInterface* self) {
    return (QMetaObject*)self->QDesignerPropertyEditorInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMetaObject(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerPropertyEditorInterface_SuperMetacast(QDesignerPropertyEditorInterface* self, const char* param1) {
    return self->QDesignerPropertyEditorInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMetacast(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_metacast_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_SuperMetacall(QDesignerPropertyEditorInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerPropertyEditorInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMetacall(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_metacall_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Metacall_Callback>(slot);
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerPropertyEditorInterface_SuperCore(const QDesignerPropertyEditorInterface* self) {
    return self->QDesignerPropertyEditorInterface::core();
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCore(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_core_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Core_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnIsReadOnly(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_isreadonly_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_IsReadOnly_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnObject(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_object_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Object_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCurrentPropertyName(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_currentpropertyname_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_CurrentPropertyName_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSetObject(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_setobject_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SetObject_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSetPropertyValue(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_setpropertyvalue_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SetPropertyValue_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSetReadOnly(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_setreadonly_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SetReadOnly_Callback>(slot);
}

// Derived class handler implementation
int QDesignerPropertyEditorInterface_DevType(const QDesignerPropertyEditorInterface* self) {
    return self->devType();
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_SuperDevType(const QDesignerPropertyEditorInterface* self) {
    return self->QDesignerPropertyEditorInterface::devType();
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDevType(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_devtype_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_SetVisible(QDesignerPropertyEditorInterface* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperSetVisible(QDesignerPropertyEditorInterface* self, bool visible) {
    self->QDesignerPropertyEditorInterface::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSetVisible(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_setvisible_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerPropertyEditorInterface_SizeHint(const QDesignerPropertyEditorInterface* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QDesignerPropertyEditorInterface_SuperSizeHint(const QDesignerPropertyEditorInterface* self) {
    return new QSize(self->QDesignerPropertyEditorInterface::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSizeHint(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_sizehint_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QDesignerPropertyEditorInterface_MinimumSizeHint(const QDesignerPropertyEditorInterface* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QDesignerPropertyEditorInterface_SuperMinimumSizeHint(const QDesignerPropertyEditorInterface* self) {
    return new QSize(self->QDesignerPropertyEditorInterface::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMinimumSizeHint(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_minimumsizehint_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QDesignerPropertyEditorInterface_HeightForWidth(const QDesignerPropertyEditorInterface* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_SuperHeightForWidth(const QDesignerPropertyEditorInterface* self, int param1) {
    return self->QDesignerPropertyEditorInterface::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnHeightForWidth(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_heightforwidth_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_HasHeightForWidth(const QDesignerPropertyEditorInterface* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_SuperHasHeightForWidth(const QDesignerPropertyEditorInterface* self) {
    return self->QDesignerPropertyEditorInterface::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnHasHeightForWidth(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_hasheightforwidth_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDesignerPropertyEditorInterface_PaintEngine(const QDesignerPropertyEditorInterface* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDesignerPropertyEditorInterface_SuperPaintEngine(const QDesignerPropertyEditorInterface* self) {
    return self->QDesignerPropertyEditorInterface::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnPaintEngine(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_paintengine_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_Event(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        return vqdesignerpropertyeditorinterface->event(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_SuperEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        return vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::event(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_event_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Event_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MousePressEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperMousePressEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMousePressEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_mousepressevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MouseReleaseEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperMouseReleaseEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMouseReleaseEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_mousereleaseevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperMouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MouseMoveEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperMouseMoveEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMouseMoveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_mousemoveevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_WheelEvent(QDesignerPropertyEditorInterface* self, QWheelEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperWheelEvent(QDesignerPropertyEditorInterface* self, QWheelEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnWheelEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_wheelevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_KeyPressEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperKeyPressEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnKeyPressEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_keypressevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_KeyReleaseEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperKeyReleaseEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnKeyReleaseEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_keyreleaseevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_FocusInEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperFocusInEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnFocusInEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_focusinevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_FocusOutEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperFocusOutEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnFocusOutEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_focusoutevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_EnterEvent(QDesignerPropertyEditorInterface* self, QEnterEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperEnterEvent(QDesignerPropertyEditorInterface* self, QEnterEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnEnterEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_enterevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_LeaveEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperLeaveEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnLeaveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_leaveevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_PaintEvent(QDesignerPropertyEditorInterface* self, QPaintEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperPaintEvent(QDesignerPropertyEditorInterface* self, QPaintEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnPaintEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_paintevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_MoveEvent(QDesignerPropertyEditorInterface* self, QMoveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperMoveEvent(QDesignerPropertyEditorInterface* self, QMoveEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMoveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_moveevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ResizeEvent(QDesignerPropertyEditorInterface* self, QResizeEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperResizeEvent(QDesignerPropertyEditorInterface* self, QResizeEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnResizeEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_resizeevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_CloseEvent(QDesignerPropertyEditorInterface* self, QCloseEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperCloseEvent(QDesignerPropertyEditorInterface* self, QCloseEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCloseEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_closeevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ContextMenuEvent(QDesignerPropertyEditorInterface* self, QContextMenuEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperContextMenuEvent(QDesignerPropertyEditorInterface* self, QContextMenuEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnContextMenuEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_contextmenuevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_TabletEvent(QDesignerPropertyEditorInterface* self, QTabletEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperTabletEvent(QDesignerPropertyEditorInterface* self, QTabletEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnTabletEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_tabletevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ActionEvent(QDesignerPropertyEditorInterface* self, QActionEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperActionEvent(QDesignerPropertyEditorInterface* self, QActionEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnActionEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_actionevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DragEnterEvent(QDesignerPropertyEditorInterface* self, QDragEnterEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperDragEnterEvent(QDesignerPropertyEditorInterface* self, QDragEnterEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDragEnterEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_dragenterevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DragMoveEvent(QDesignerPropertyEditorInterface* self, QDragMoveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperDragMoveEvent(QDesignerPropertyEditorInterface* self, QDragMoveEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDragMoveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_dragmoveevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DragLeaveEvent(QDesignerPropertyEditorInterface* self, QDragLeaveEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperDragLeaveEvent(QDesignerPropertyEditorInterface* self, QDragLeaveEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDragLeaveEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_dragleaveevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DropEvent(QDesignerPropertyEditorInterface* self, QDropEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperDropEvent(QDesignerPropertyEditorInterface* self, QDropEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDropEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_dropevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ShowEvent(QDesignerPropertyEditorInterface* self, QShowEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperShowEvent(QDesignerPropertyEditorInterface* self, QShowEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnShowEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_showevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_HideEvent(QDesignerPropertyEditorInterface* self, QHideEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperHideEvent(QDesignerPropertyEditorInterface* self, QHideEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnHideEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_hideevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_NativeEvent(QDesignerPropertyEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        return vqdesignerpropertyeditorinterface->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_SuperNativeEvent(QDesignerPropertyEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        return vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnNativeEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_nativeevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ChangeEvent(QDesignerPropertyEditorInterface* self, QEvent* param1) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperChangeEvent(QDesignerPropertyEditorInterface* self, QEvent* param1) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnChangeEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_changeevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDesignerPropertyEditorInterface_Metric(const QDesignerPropertyEditorInterface* self, int param1) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface) {
        return vqdesignerpropertyeditorinterface->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDesignerPropertyEditorInterface_SuperMetric(const QDesignerPropertyEditorInterface* self, int param1) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        return vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnMetric(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_metric_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_InitPainter(const QDesignerPropertyEditorInterface* self, QPainter* painter) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperInitPainter(const QDesignerPropertyEditorInterface* self, QPainter* painter) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnInitPainter(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_initpainter_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDesignerPropertyEditorInterface_Redirected(const QDesignerPropertyEditorInterface* self, QPoint* offset) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface) {
        return vqdesignerpropertyeditorinterface->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDesignerPropertyEditorInterface_SuperRedirected(const QDesignerPropertyEditorInterface* self, QPoint* offset) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        return vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnRedirected(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_redirected_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDesignerPropertyEditorInterface_SharedPainter(const QDesignerPropertyEditorInterface* self) {
    auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self));
    if (vqdesignerpropertyeditorinterface) {
        return vqdesignerpropertyeditorinterface->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDesignerPropertyEditorInterface_SuperSharedPainter(const QDesignerPropertyEditorInterface* self) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        return vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnSharedPainter(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_sharedpainter_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_InputMethodEvent(QDesignerPropertyEditorInterface* self, QInputMethodEvent* param1) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperInputMethodEvent(QDesignerPropertyEditorInterface* self, QInputMethodEvent* param1) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnInputMethodEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_inputmethodevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDesignerPropertyEditorInterface_InputMethodQuery(const QDesignerPropertyEditorInterface* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDesignerPropertyEditorInterface_SuperInputMethodQuery(const QDesignerPropertyEditorInterface* self, int param1) {
    return new QVariant(self->QDesignerPropertyEditorInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnInputMethodQuery(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self)))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_inputmethodquery_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_FocusNextPrevChild(QDesignerPropertyEditorInterface* self, bool next) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        return vqdesignerpropertyeditorinterface->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_SuperFocusNextPrevChild(QDesignerPropertyEditorInterface* self, bool next) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        return vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnFocusNextPrevChild(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_focusnextprevchild_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerPropertyEditorInterface_EventFilter(QDesignerPropertyEditorInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerPropertyEditorInterface_SuperEventFilter(QDesignerPropertyEditorInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerPropertyEditorInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnEventFilter(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_TimerEvent(QDesignerPropertyEditorInterface* self, QTimerEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperTimerEvent(QDesignerPropertyEditorInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnTimerEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ChildEvent(QDesignerPropertyEditorInterface* self, QChildEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperChildEvent(QDesignerPropertyEditorInterface* self, QChildEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnChildEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_childevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_CustomEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperCustomEvent(QDesignerPropertyEditorInterface* self, QEvent* event) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnCustomEvent(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_customevent_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_ConnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperConnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnConnectNotify(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerPropertyEditorInterface_DisconnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self);
    if (vqdesignerpropertyeditorinterface) {
        vqdesignerpropertyeditorinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerPropertyEditorInterface_SuperDisconnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->QDesignerPropertyEditorInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerPropertyEditorInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerPropertyEditorInterface_OnDisconnectNotify(QDesignerPropertyEditorInterface* self, intptr_t slot) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self))
        vqdesignerpropertyeditorinterface->qdesignerpropertyeditorinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerPropertyEditorInterface::QDesignerPropertyEditorInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDesignerPropertyEditorInterface_UpdateMicroFocus(QDesignerPropertyEditorInterface* self) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerPropertyEditorInterface_Create(QDesignerPropertyEditorInterface* self) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::create();
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDesignerPropertyEditorInterface_Destroy(QDesignerPropertyEditorInterface* self) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::destroy();
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerPropertyEditorInterface_FocusNextChild(QDesignerPropertyEditorInterface* self) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        return vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::focusNextChild();
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerPropertyEditorInterface_FocusPreviousChild(QDesignerPropertyEditorInterface* self) {
    if (auto* vqdesignerpropertyeditorinterface = dynamic_cast<VirtualQDesignerPropertyEditorInterface*>(self)) {
        return vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDesignerPropertyEditorInterface_Sender(const QDesignerPropertyEditorInterface* self) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        return vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerPropertyEditorInterface_SenderSignalIndex(const QDesignerPropertyEditorInterface* self) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        return vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerPropertyEditorInterface_Receivers(const QDesignerPropertyEditorInterface* self, const char* signal) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        return vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerPropertyEditorInterface_IsSignalConnected(const QDesignerPropertyEditorInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        return vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDesignerPropertyEditorInterface_GetDecodedMetricF(const QDesignerPropertyEditorInterface* self, int metricA, int metricB) {
    if (auto* vqdesignerpropertyeditorinterface = const_cast<VirtualQDesignerPropertyEditorInterface*>(dynamic_cast<const VirtualQDesignerPropertyEditorInterface*>(self))) {
        return vqdesignerpropertyeditorinterface->VirtualQDesignerPropertyEditorInterface::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDesignerPropertyEditorInterface::getDecodedMetricF called without a directly constructed type");
}

void QDesignerPropertyEditorInterface_Delete(QDesignerPropertyEditorInterface* self) {
    delete self;
}
