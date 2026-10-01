#include <KPreviewWidgetBase>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kpreviewwidgetbase.h>
#include "libkpreviewwidgetbase.h"
#include "libkpreviewwidgetbase.hxx"

KPreviewWidgetBase* KPreviewWidgetBase_new(QWidget* parent) {
    return new VirtualKPreviewWidgetBase(parent);
}

QMetaObject* KPreviewWidgetBase_MetaObject(const KPreviewWidgetBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPreviewWidgetBase_Metacast(KPreviewWidgetBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPreviewWidgetBase_Metacall(KPreviewWidgetBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPreviewWidgetBase_Tr(const char* s) {
    auto _ret = KPreviewWidgetBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KPreviewWidgetBase_SupportedMimeTypes(const KPreviewWidgetBase* self) {
    QList<QString> _ret = self->supportedMimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KPreviewWidgetBase_ShowPreview(KPreviewWidgetBase* self, const QUrl* url) {
    self->showPreview(*url);
}

void KPreviewWidgetBase_ClearPreview(KPreviewWidgetBase* self) {
    self->clearPreview();
}

libqt_string KPreviewWidgetBase_Tr2(const char* s, const char* c) {
    auto _ret = KPreviewWidgetBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPreviewWidgetBase_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPreviewWidgetBase::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPreviewWidgetBase_SuperMetaObject(const KPreviewWidgetBase* self) {
    return (QMetaObject*)self->KPreviewWidgetBase::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMetaObject(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_metaobject_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPreviewWidgetBase_SuperMetacast(KPreviewWidgetBase* self, const char* param1) {
    return self->KPreviewWidgetBase::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMetacast(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_metacast_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPreviewWidgetBase_SuperMetacall(KPreviewWidgetBase* self, int param1, int param2, void** param3) {
    return self->KPreviewWidgetBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMetacall(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_metacall_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnShowPreview(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_showpreview_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ShowPreview_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnClearPreview(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_clearpreview_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ClearPreview_Callback>(slot);
}

// Derived class handler implementation
int KPreviewWidgetBase_DevType(const KPreviewWidgetBase* self) {
    return self->devType();
}

// Base class handler implementation
int KPreviewWidgetBase_SuperDevType(const KPreviewWidgetBase* self) {
    return self->KPreviewWidgetBase::devType();
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDevType(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_devtype_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_SetVisible(KPreviewWidgetBase* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPreviewWidgetBase_SuperSetVisible(KPreviewWidgetBase* self, bool visible) {
    self->KPreviewWidgetBase::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSetVisible(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_setvisible_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPreviewWidgetBase_SizeHint(const KPreviewWidgetBase* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPreviewWidgetBase_SuperSizeHint(const KPreviewWidgetBase* self) {
    return new QSize(self->KPreviewWidgetBase::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSizeHint(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_sizehint_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPreviewWidgetBase_MinimumSizeHint(const KPreviewWidgetBase* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPreviewWidgetBase_SuperMinimumSizeHint(const KPreviewWidgetBase* self) {
    return new QSize(self->KPreviewWidgetBase::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMinimumSizeHint(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_minimumsizehint_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KPreviewWidgetBase_HeightForWidth(const KPreviewWidgetBase* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPreviewWidgetBase_SuperHeightForWidth(const KPreviewWidgetBase* self, int param1) {
    return self->KPreviewWidgetBase::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnHeightForWidth(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_heightforwidth_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPreviewWidgetBase_HasHeightForWidth(const KPreviewWidgetBase* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPreviewWidgetBase_SuperHasHeightForWidth(const KPreviewWidgetBase* self) {
    return self->KPreviewWidgetBase::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnHasHeightForWidth(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_hasheightforwidth_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPreviewWidgetBase_PaintEngine(const KPreviewWidgetBase* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPreviewWidgetBase_SuperPaintEngine(const KPreviewWidgetBase* self) {
    return self->KPreviewWidgetBase::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnPaintEngine(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_paintengine_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPreviewWidgetBase_Event(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        return vkpreviewwidgetbase->event(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_SuperEvent(KPreviewWidgetBase* self, QEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        return vkpreviewwidgetbase->KPreviewWidgetBase::event(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_event_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Event_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_MousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperMousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMousePressEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_mousepressevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_MouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperMouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMouseReleaseEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_mousereleaseevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_MouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperMouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMouseDoubleClickEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_MouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperMouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMouseMoveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_mousemoveevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_WheelEvent(KPreviewWidgetBase* self, QWheelEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperWheelEvent(KPreviewWidgetBase* self, QWheelEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnWheelEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_wheelevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_KeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperKeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnKeyPressEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_keypressevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_KeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperKeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnKeyReleaseEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_keyreleaseevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_FocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperFocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnFocusInEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_focusinevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_FocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperFocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnFocusOutEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_focusoutevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_EnterEvent(KPreviewWidgetBase* self, QEnterEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperEnterEvent(KPreviewWidgetBase* self, QEnterEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnEnterEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_enterevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_LeaveEvent(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperLeaveEvent(KPreviewWidgetBase* self, QEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnLeaveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_leaveevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_PaintEvent(KPreviewWidgetBase* self, QPaintEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperPaintEvent(KPreviewWidgetBase* self, QPaintEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnPaintEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_paintevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_MoveEvent(KPreviewWidgetBase* self, QMoveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperMoveEvent(KPreviewWidgetBase* self, QMoveEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMoveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_moveevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_ResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnResizeEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_resizeevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_CloseEvent(KPreviewWidgetBase* self, QCloseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperCloseEvent(KPreviewWidgetBase* self, QCloseEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnCloseEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_closeevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_ContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnContextMenuEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_contextmenuevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_TabletEvent(KPreviewWidgetBase* self, QTabletEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperTabletEvent(KPreviewWidgetBase* self, QTabletEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnTabletEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_tabletevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_ActionEvent(KPreviewWidgetBase* self, QActionEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperActionEvent(KPreviewWidgetBase* self, QActionEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnActionEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_actionevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_DragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperDragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDragEnterEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_dragenterevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_DragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperDragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDragMoveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_dragmoveevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_DragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperDragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDragLeaveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_dragleaveevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_DropEvent(KPreviewWidgetBase* self, QDropEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperDropEvent(KPreviewWidgetBase* self, QDropEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDropEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_dropevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_ShowEvent(KPreviewWidgetBase* self, QShowEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperShowEvent(KPreviewWidgetBase* self, QShowEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnShowEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_showevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_HideEvent(KPreviewWidgetBase* self, QHideEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperHideEvent(KPreviewWidgetBase* self, QHideEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnHideEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_hideevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPreviewWidgetBase_NativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        return vkpreviewwidgetbase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_SuperNativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        return vkpreviewwidgetbase->KPreviewWidgetBase::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnNativeEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_nativeevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_ChangeEvent(KPreviewWidgetBase* self, QEvent* param1) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperChangeEvent(KPreviewWidgetBase* self, QEvent* param1) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnChangeEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_changeevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPreviewWidgetBase_Metric(const KPreviewWidgetBase* self, int param1) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase) {
        return vkpreviewwidgetbase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPreviewWidgetBase_SuperMetric(const KPreviewWidgetBase* self, int param1) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        return vkpreviewwidgetbase->KPreviewWidgetBase::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMetric(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_metric_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_InitPainter(const KPreviewWidgetBase* self, QPainter* painter) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperInitPainter(const KPreviewWidgetBase* self, QPainter* painter) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        vkpreviewwidgetbase->KPreviewWidgetBase::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnInitPainter(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_initpainter_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPreviewWidgetBase_Redirected(const KPreviewWidgetBase* self, QPoint* offset) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase) {
        return vkpreviewwidgetbase->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPreviewWidgetBase_SuperRedirected(const KPreviewWidgetBase* self, QPoint* offset) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        return vkpreviewwidgetbase->KPreviewWidgetBase::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnRedirected(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_redirected_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPreviewWidgetBase_SharedPainter(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase) {
        return vkpreviewwidgetbase->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPreviewWidgetBase_SuperSharedPainter(const KPreviewWidgetBase* self) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        return vkpreviewwidgetbase->KPreviewWidgetBase::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSharedPainter(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_sharedpainter_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_InputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperInputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnInputMethodEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_inputmethodevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPreviewWidgetBase_InputMethodQuery(const KPreviewWidgetBase* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPreviewWidgetBase_SuperInputMethodQuery(const KPreviewWidgetBase* self, int param1) {
    return new QVariant(self->KPreviewWidgetBase::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnInputMethodQuery(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self)))
        vkpreviewwidgetbase->kpreviewwidgetbase_inputmethodquery_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPreviewWidgetBase_FocusNextPrevChild(KPreviewWidgetBase* self, bool next) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        return vkpreviewwidgetbase->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_SuperFocusNextPrevChild(KPreviewWidgetBase* self, bool next) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        return vkpreviewwidgetbase->KPreviewWidgetBase::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnFocusNextPrevChild(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_focusnextprevchild_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KPreviewWidgetBase_EventFilter(KPreviewWidgetBase* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPreviewWidgetBase_SuperEventFilter(KPreviewWidgetBase* self, QObject* watched, QEvent* event) {
    return self->KPreviewWidgetBase::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnEventFilter(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_eventfilter_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_TimerEvent(KPreviewWidgetBase* self, QTimerEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperTimerEvent(KPreviewWidgetBase* self, QTimerEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnTimerEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_timerevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_ChildEvent(KPreviewWidgetBase* self, QChildEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperChildEvent(KPreviewWidgetBase* self, QChildEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnChildEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_childevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_CustomEvent(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperCustomEvent(KPreviewWidgetBase* self, QEvent* event) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnCustomEvent(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_customevent_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_ConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnConnectNotify(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_connectnotify_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPreviewWidgetBase_DisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase) {
        vkpreviewwidgetbase->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPreviewWidgetBase::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPreviewWidgetBase_SuperDisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->KPreviewWidgetBase::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPreviewWidgetBase::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDisconnectNotify(KPreviewWidgetBase* self, intptr_t slot) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self))
        vkpreviewwidgetbase->kpreviewwidgetbase_disconnectnotify_callback = reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPreviewWidgetBase_SetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        QList<QString> mimeTypes_QList;
        mimeTypes_QList.reserve(mimeTypes.len);
        libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
        for (size_t i = 0; i < mimeTypes.len; ++i) {
            QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
            mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
        }
        vkpreviewwidgetbase->VirtualKPreviewWidgetBase::setSupportedMimeTypes(mimeTypes_QList);
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::setSupportedMimeTypes called without a directly constructed type");
}

// Derived class protected handler implementation
void KPreviewWidgetBase_UpdateMicroFocus(KPreviewWidgetBase* self) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->VirtualKPreviewWidgetBase::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPreviewWidgetBase_Create(KPreviewWidgetBase* self) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->VirtualKPreviewWidgetBase::create();
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPreviewWidgetBase_Destroy(KPreviewWidgetBase* self) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        vkpreviewwidgetbase->VirtualKPreviewWidgetBase::destroy();
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPreviewWidgetBase_FocusNextChild(KPreviewWidgetBase* self) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        return vkpreviewwidgetbase->VirtualKPreviewWidgetBase::focusNextChild();
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPreviewWidgetBase_FocusPreviousChild(KPreviewWidgetBase* self) {
    if (auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self)) {
        return vkpreviewwidgetbase->VirtualKPreviewWidgetBase::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPreviewWidgetBase_Sender(const KPreviewWidgetBase* self) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        return vkpreviewwidgetbase->VirtualKPreviewWidgetBase::sender();
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPreviewWidgetBase_SenderSignalIndex(const KPreviewWidgetBase* self) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        return vkpreviewwidgetbase->VirtualKPreviewWidgetBase::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPreviewWidgetBase_Receivers(const KPreviewWidgetBase* self, const char* signal) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        return vkpreviewwidgetbase->VirtualKPreviewWidgetBase::receivers(signal);
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPreviewWidgetBase_IsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        return vkpreviewwidgetbase->VirtualKPreviewWidgetBase::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPreviewWidgetBase_GetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB) {
    if (auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self))) {
        return vkpreviewwidgetbase->VirtualKPreviewWidgetBase::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPreviewWidgetBase::getDecodedMetricF called without a directly constructed type");
}

void KPreviewWidgetBase_Delete(KPreviewWidgetBase* self) {
    delete self;
}
