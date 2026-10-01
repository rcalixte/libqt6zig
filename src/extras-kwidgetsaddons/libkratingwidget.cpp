#include <KRatingWidget>
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
#include <QFrame>
#include <QHideEvent>
#include <QIcon>
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
#include <QPixmap>
#include <QPoint>
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
#include <kratingwidget.h>
#include "libkratingwidget.h"
#include "libkratingwidget.hxx"

KRatingWidget* KRatingWidget_new(QWidget* parent) {
    return new VirtualKRatingWidget(parent);
}

KRatingWidget* KRatingWidget_new2() {
    return new VirtualKRatingWidget();
}

QMetaObject* KRatingWidget_MetaObject(const KRatingWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRatingWidget_Metacast(KRatingWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRatingWidget_Metacall(KRatingWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KRatingWidget_Tr(const char* s) {
    auto _ret = KRatingWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KRatingWidget_Rating(const KRatingWidget* self) {
    return self->rating();
}

int KRatingWidget_MaxRating(const KRatingWidget* self) {
    return self->maxRating();
}

int KRatingWidget_Alignment(const KRatingWidget* self) {
    return static_cast<int>(self->alignment());
}

int KRatingWidget_LayoutDirection(const KRatingWidget* self) {
    return static_cast<int>(self->layoutDirection());
}

int KRatingWidget_Spacing(const KRatingWidget* self) {
    return self->spacing();
}

QSize* KRatingWidget_SizeHint(const KRatingWidget* self) {
    return new QSize(self->sizeHint());
}

bool KRatingWidget_HalfStepsEnabled(const KRatingWidget* self) {
    return self->halfStepsEnabled();
}

QIcon* KRatingWidget_Icon(const KRatingWidget* self) {
    return new QIcon(self->icon());
}

void KRatingWidget_RatingChanged(KRatingWidget* self, int rating) {
    self->ratingChanged(static_cast<int>(rating));
}

void KRatingWidget_Connect_RatingChanged(KRatingWidget* self, intptr_t slot) {
    void (*slotFunc)(KRatingWidget*, int) = reinterpret_cast<void (*)(KRatingWidget*, int)>(slot);
    KRatingWidget::connect(self,
                           static_cast<void (KRatingWidget::*)(int)>(&KRatingWidget::ratingChanged),
                           [self, slotFunc](int rating) {
                               int sigval1 = rating;
                               slotFunc(self, sigval1);
                           });
}

void KRatingWidget_SetRating(KRatingWidget* self, int rating) {
    self->setRating(static_cast<int>(rating));
}

void KRatingWidget_SetMaxRating(KRatingWidget* self, int max) {
    self->setMaxRating(static_cast<int>(max));
}

void KRatingWidget_SetHalfStepsEnabled(KRatingWidget* self, bool enabled) {
    self->setHalfStepsEnabled(enabled);
}

void KRatingWidget_SetSpacing(KRatingWidget* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

void KRatingWidget_SetAlignment(KRatingWidget* self, int alignVal) {
    self->setAlignment(static_cast<Qt::Alignment>(alignVal));
}

void KRatingWidget_SetLayoutDirection(KRatingWidget* self, int direction) {
    self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void KRatingWidget_SetIcon(KRatingWidget* self, const QIcon* icon) {
    self->setIcon(*icon);
}

void KRatingWidget_SetCustomPixmap(KRatingWidget* self, const QPixmap* pixmap) {
    self->setCustomPixmap(*pixmap);
}

void KRatingWidget_SetPixmapSize(KRatingWidget* self, int size) {
    self->setPixmapSize(static_cast<int>(size));
}

void KRatingWidget_MousePressEvent(KRatingWidget* self, QMouseEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->mousePressEvent(e);
    }
}

void KRatingWidget_MouseMoveEvent(KRatingWidget* self, QMouseEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->mouseMoveEvent(e);
    }
}

void KRatingWidget_LeaveEvent(KRatingWidget* self, QEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->leaveEvent(e);
    }
}

void KRatingWidget_PaintEvent(KRatingWidget* self, QPaintEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->paintEvent(e);
    }
}

void KRatingWidget_ResizeEvent(KRatingWidget* self, QResizeEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->resizeEvent(e);
    }
}

libqt_string KRatingWidget_Tr2(const char* s, const char* c) {
    auto _ret = KRatingWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRatingWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KRatingWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KRatingWidget_SuperMetaObject(const KRatingWidget* self) {
    return (QMetaObject*)self->KRatingWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMetaObject(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_metaobject_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KRatingWidget_SuperMetacast(KRatingWidget* self, const char* param1) {
    return self->KRatingWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMetacast(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_metacast_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KRatingWidget_SuperMetacall(KRatingWidget* self, int param1, int param2, void** param3) {
    return self->KRatingWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMetacall(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_metacall_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KRatingWidget_SuperSizeHint(const KRatingWidget* self) {
    return new QSize(self->KRatingWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnSizeHint(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_sizehint_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KRatingWidget_SuperMousePressEvent(KRatingWidget* self, QMouseEvent* e) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMousePressEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_mousepressevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KRatingWidget_SuperMouseMoveEvent(KRatingWidget* self, QMouseEvent* e) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMouseMoveEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_mousemoveevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KRatingWidget_SuperLeaveEvent(KRatingWidget* self, QEvent* e) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::leaveEvent(e);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnLeaveEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_leaveevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void KRatingWidget_SuperPaintEvent(KRatingWidget* self, QPaintEvent* e) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnPaintEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_paintevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KRatingWidget_SuperResizeEvent(KRatingWidget* self, QResizeEvent* e) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnResizeEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_resizeevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRatingWidget_Event(KRatingWidget* self, QEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        return vkratingwidget->event(e);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRatingWidget_SuperEvent(KRatingWidget* self, QEvent* e) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        return vkratingwidget->KRatingWidget::event(e);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_event_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_ChangeEvent(KRatingWidget* self, QEvent* param1) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperChangeEvent(KRatingWidget* self, QEvent* param1) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnChangeEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_changeevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_InitStyleOption(const KRatingWidget* self, QStyleOptionFrame* option) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget) {
        vkratingwidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperInitStyleOption(const KRatingWidget* self, QStyleOptionFrame* option) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        vkratingwidget->KRatingWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnInitStyleOption(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_initstyleoption_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KRatingWidget_DevType(const KRatingWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KRatingWidget_SuperDevType(const KRatingWidget* self) {
    return self->KRatingWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDevType(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_devtype_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_SetVisible(KRatingWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KRatingWidget_SuperSetVisible(KRatingWidget* self, bool visible) {
    self->KRatingWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnSetVisible(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_setvisible_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KRatingWidget_MinimumSizeHint(const KRatingWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KRatingWidget_SuperMinimumSizeHint(const KRatingWidget* self) {
    return new QSize(self->KRatingWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMinimumSizeHint(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_minimumsizehint_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KRatingWidget_HeightForWidth(const KRatingWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KRatingWidget_SuperHeightForWidth(const KRatingWidget* self, int param1) {
    return self->KRatingWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnHeightForWidth(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_heightforwidth_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KRatingWidget_HasHeightForWidth(const KRatingWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KRatingWidget_SuperHasHeightForWidth(const KRatingWidget* self) {
    return self->KRatingWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnHasHeightForWidth(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KRatingWidget_PaintEngine(const KRatingWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KRatingWidget_SuperPaintEngine(const KRatingWidget* self) {
    return self->KRatingWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnPaintEngine(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_paintengine_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_MouseReleaseEvent(KRatingWidget* self, QMouseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperMouseReleaseEvent(KRatingWidget* self, QMouseEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMouseReleaseEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_MouseDoubleClickEvent(KRatingWidget* self, QMouseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperMouseDoubleClickEvent(KRatingWidget* self, QMouseEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMouseDoubleClickEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_WheelEvent(KRatingWidget* self, QWheelEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperWheelEvent(KRatingWidget* self, QWheelEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnWheelEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_wheelevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_KeyPressEvent(KRatingWidget* self, QKeyEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperKeyPressEvent(KRatingWidget* self, QKeyEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnKeyPressEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_keypressevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_KeyReleaseEvent(KRatingWidget* self, QKeyEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperKeyReleaseEvent(KRatingWidget* self, QKeyEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnKeyReleaseEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_FocusInEvent(KRatingWidget* self, QFocusEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperFocusInEvent(KRatingWidget* self, QFocusEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnFocusInEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_focusinevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_FocusOutEvent(KRatingWidget* self, QFocusEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperFocusOutEvent(KRatingWidget* self, QFocusEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnFocusOutEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_focusoutevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_EnterEvent(KRatingWidget* self, QEnterEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperEnterEvent(KRatingWidget* self, QEnterEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnEnterEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_enterevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_MoveEvent(KRatingWidget* self, QMoveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperMoveEvent(KRatingWidget* self, QMoveEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMoveEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_moveevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_CloseEvent(KRatingWidget* self, QCloseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperCloseEvent(KRatingWidget* self, QCloseEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnCloseEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_closeevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_ContextMenuEvent(KRatingWidget* self, QContextMenuEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperContextMenuEvent(KRatingWidget* self, QContextMenuEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnContextMenuEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_contextmenuevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_TabletEvent(KRatingWidget* self, QTabletEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperTabletEvent(KRatingWidget* self, QTabletEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnTabletEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_tabletevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_ActionEvent(KRatingWidget* self, QActionEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperActionEvent(KRatingWidget* self, QActionEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnActionEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_actionevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_DragEnterEvent(KRatingWidget* self, QDragEnterEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperDragEnterEvent(KRatingWidget* self, QDragEnterEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDragEnterEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_dragenterevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_DragMoveEvent(KRatingWidget* self, QDragMoveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperDragMoveEvent(KRatingWidget* self, QDragMoveEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDragMoveEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_dragmoveevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_DragLeaveEvent(KRatingWidget* self, QDragLeaveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperDragLeaveEvent(KRatingWidget* self, QDragLeaveEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDragLeaveEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_dragleaveevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_DropEvent(KRatingWidget* self, QDropEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperDropEvent(KRatingWidget* self, QDropEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDropEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_dropevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_ShowEvent(KRatingWidget* self, QShowEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperShowEvent(KRatingWidget* self, QShowEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnShowEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_showevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_HideEvent(KRatingWidget* self, QHideEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperHideEvent(KRatingWidget* self, QHideEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnHideEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_hideevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRatingWidget_NativeEvent(KRatingWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        return vkratingwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRatingWidget_SuperNativeEvent(KRatingWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        return vkratingwidget->KRatingWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KRatingWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnNativeEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_nativeevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KRatingWidget_Metric(const KRatingWidget* self, int param1) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget) {
        return vkratingwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KRatingWidget_SuperMetric(const KRatingWidget* self, int param1) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        return vkratingwidget->KRatingWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KRatingWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMetric(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_metric_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_InitPainter(const KRatingWidget* self, QPainter* painter) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget) {
        vkratingwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperInitPainter(const KRatingWidget* self, QPainter* painter) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        vkratingwidget->KRatingWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnInitPainter(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_initpainter_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KRatingWidget_Redirected(const KRatingWidget* self, QPoint* offset) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget) {
        return vkratingwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KRatingWidget_SuperRedirected(const KRatingWidget* self, QPoint* offset) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        return vkratingwidget->KRatingWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnRedirected(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_redirected_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KRatingWidget_SharedPainter(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget) {
        return vkratingwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KRatingWidget_SuperSharedPainter(const KRatingWidget* self) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        return vkratingwidget->KRatingWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KRatingWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnSharedPainter(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_sharedpainter_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_InputMethodEvent(KRatingWidget* self, QInputMethodEvent* param1) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperInputMethodEvent(KRatingWidget* self, QInputMethodEvent* param1) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnInputMethodEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_inputmethodevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KRatingWidget_InputMethodQuery(const KRatingWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KRatingWidget_SuperInputMethodQuery(const KRatingWidget* self, int param1) {
    return new QVariant(self->KRatingWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnInputMethodQuery(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self)))
        vkratingwidget->kratingwidget_inputmethodquery_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KRatingWidget_FocusNextPrevChild(KRatingWidget* self, bool next) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        return vkratingwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRatingWidget_SuperFocusNextPrevChild(KRatingWidget* self, bool next) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        return vkratingwidget->KRatingWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnFocusNextPrevChild(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KRatingWidget_EventFilter(KRatingWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KRatingWidget_SuperEventFilter(KRatingWidget* self, QObject* watched, QEvent* event) {
    return self->KRatingWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnEventFilter(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_eventfilter_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_TimerEvent(KRatingWidget* self, QTimerEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperTimerEvent(KRatingWidget* self, QTimerEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnTimerEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_timerevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_ChildEvent(KRatingWidget* self, QChildEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperChildEvent(KRatingWidget* self, QChildEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnChildEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_childevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_CustomEvent(KRatingWidget* self, QEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperCustomEvent(KRatingWidget* self, QEvent* event) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnCustomEvent(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_customevent_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_ConnectNotify(KRatingWidget* self, const QMetaMethod* signal) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperConnectNotify(KRatingWidget* self, const QMetaMethod* signal) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnConnectNotify(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_connectnotify_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KRatingWidget_DisconnectNotify(KRatingWidget* self, const QMetaMethod* signal) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget) {
        vkratingwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRatingWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRatingWidget_SuperDisconnectNotify(KRatingWidget* self, const QMetaMethod* signal) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->KRatingWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRatingWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDisconnectNotify(KRatingWidget* self, intptr_t slot) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self))
        vkratingwidget->kratingwidget_disconnectnotify_callback = reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KRatingWidget_DrawFrame(KRatingWidget* self, QPainter* param1) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->VirtualKRatingWidget::drawFrame(param1);
    } else
        qFatal("Error: Protected method KRatingWidget::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KRatingWidget_UpdateMicroFocus(KRatingWidget* self) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->VirtualKRatingWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KRatingWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KRatingWidget_Create(KRatingWidget* self) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->VirtualKRatingWidget::create();
    } else
        qFatal("Error: Protected method KRatingWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KRatingWidget_Destroy(KRatingWidget* self) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        vkratingwidget->VirtualKRatingWidget::destroy();
    } else
        qFatal("Error: Protected method KRatingWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRatingWidget_FocusNextChild(KRatingWidget* self) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        return vkratingwidget->VirtualKRatingWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KRatingWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRatingWidget_FocusPreviousChild(KRatingWidget* self) {
    if (auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self)) {
        return vkratingwidget->VirtualKRatingWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KRatingWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KRatingWidget_Sender(const KRatingWidget* self) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        return vkratingwidget->VirtualKRatingWidget::sender();
    } else
        qFatal("Error: Protected method KRatingWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KRatingWidget_SenderSignalIndex(const KRatingWidget* self) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        return vkratingwidget->VirtualKRatingWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KRatingWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KRatingWidget_Receivers(const KRatingWidget* self, const char* signal) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        return vkratingwidget->VirtualKRatingWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KRatingWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRatingWidget_IsSignalConnected(const KRatingWidget* self, const QMetaMethod* signal) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        return vkratingwidget->VirtualKRatingWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KRatingWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KRatingWidget_GetDecodedMetricF(const KRatingWidget* self, int metricA, int metricB) {
    if (auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self))) {
        return vkratingwidget->VirtualKRatingWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KRatingWidget::getDecodedMetricF called without a directly constructed type");
}

void KRatingWidget_Delete(KRatingWidget* self) {
    delete self;
}
