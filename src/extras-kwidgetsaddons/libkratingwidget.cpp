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
#include <QByteArray>
#include <cstring>
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
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRatingWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KRatingWidget_OnMetacall(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Metacall_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KRatingWidget_QBaseMetacall(KRatingWidget* self, int param1, int param2, void** param3) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Metacall_IsBase(true);
        return vkratingwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRatingWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KRatingWidget_Tr(const char* s) {
    QString _ret = KRatingWidget::tr(s);
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
    auto* vkratingwidget = dynamic_cast<const VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKRatingWidget*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KRatingWidget_OnSizeHint(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_SizeHint_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* KRatingWidget_QBaseSizeHint(const KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<const VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_SizeHint_IsBase(true);
        return new QSize(vkratingwidget->sizeHint());
    } else {
        return new QSize(((VirtualKRatingWidget*)self)->sizeHint());
    }
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
    KRatingWidget::connect(self, &KRatingWidget::ratingChanged, [self, slotFunc](int rating) {
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
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->mousePressEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KRatingWidget_OnMousePressEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MousePressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KRatingWidget_QBaseMousePressEvent(KRatingWidget* self, QMouseEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MousePressEvent_IsBase(true);
        vkratingwidget->mousePressEvent(e);
    }
}

void KRatingWidget_MouseMoveEvent(KRatingWidget* self, QMouseEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->mouseMoveEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KRatingWidget_OnMouseMoveEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KRatingWidget_QBaseMouseMoveEvent(KRatingWidget* self, QMouseEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MouseMoveEvent_IsBase(true);
        vkratingwidget->mouseMoveEvent(e);
    }
}

void KRatingWidget_LeaveEvent(KRatingWidget* self, QEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->leaveEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KRatingWidget_OnLeaveEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_LeaveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KRatingWidget_QBaseLeaveEvent(KRatingWidget* self, QEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_LeaveEvent_IsBase(true);
        vkratingwidget->leaveEvent(e);
    }
}

void KRatingWidget_PaintEvent(KRatingWidget* self, QPaintEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->paintEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KRatingWidget_OnPaintEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_PaintEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KRatingWidget_QBasePaintEvent(KRatingWidget* self, QPaintEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_PaintEvent_IsBase(true);
        vkratingwidget->paintEvent(e);
    }
}

void KRatingWidget_ResizeEvent(KRatingWidget* self, QResizeEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->resizeEvent(e);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KRatingWidget_OnResizeEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KRatingWidget_QBaseResizeEvent(KRatingWidget* self, QResizeEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ResizeEvent_IsBase(true);
        vkratingwidget->resizeEvent(e);
    }
}

libqt_string KRatingWidget_Tr2(const char* s, const char* c) {
    QString _ret = KRatingWidget::tr(s, c);
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
    QString _ret = KRatingWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool KRatingWidget_Event(KRatingWidget* self, QEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->event(e);
    } else {
        return ((VirtualKRatingWidget*)self)->event(e);
    }
}

// Base class handler implementation
bool KRatingWidget_QBaseEvent(KRatingWidget* self, QEvent* e) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Event_IsBase(true);
        return vkratingwidget->event(e);
    } else {
        return ((VirtualKRatingWidget*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Event_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_ChangeEvent(KRatingWidget* self, QEvent* param1) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->changeEvent(param1);
    } else {
        ((VirtualKRatingWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseChangeEvent(KRatingWidget* self, QEvent* param1) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ChangeEvent_IsBase(true);
        vkratingwidget->changeEvent(param1);
    } else {
        ((VirtualKRatingWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnChangeEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_InitStyleOption(const KRatingWidget* self, QStyleOptionFrame* option) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->initStyleOption(option);
    } else {
        ((VirtualKRatingWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseInitStyleOption(const KRatingWidget* self, QStyleOptionFrame* option) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_InitStyleOption_IsBase(true);
        vkratingwidget->initStyleOption(option);
    } else {
        ((VirtualKRatingWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnInitStyleOption(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_InitStyleOption_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KRatingWidget_DevType(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->devType();
    } else {
        return self->KRatingWidget::devType();
    }
}

// Base class handler implementation
int KRatingWidget_QBaseDevType(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DevType_IsBase(true);
        return vkratingwidget->devType();
    } else {
        return self->KRatingWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDevType(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DevType_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_SetVisible(KRatingWidget* self, bool visible) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setVisible(visible);
    } else {
        self->KRatingWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseSetVisible(KRatingWidget* self, bool visible) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_SetVisible_IsBase(true);
        vkratingwidget->setVisible(visible);
    } else {
        self->KRatingWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnSetVisible(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_SetVisible_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRatingWidget_MinimumSizeHint(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return new QSize(vkratingwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRatingWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KRatingWidget_QBaseMinimumSizeHint(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkratingwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRatingWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMinimumSizeHint(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KRatingWidget_HeightForWidth(const KRatingWidget* self, int param1) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRatingWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KRatingWidget_QBaseHeightForWidth(const KRatingWidget* self, int param1) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_HeightForWidth_IsBase(true);
        return vkratingwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRatingWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnHeightForWidth(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRatingWidget_HasHeightForWidth(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->hasHeightForWidth();
    } else {
        return self->KRatingWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KRatingWidget_QBaseHasHeightForWidth(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_HasHeightForWidth_IsBase(true);
        return vkratingwidget->hasHeightForWidth();
    } else {
        return self->KRatingWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnHasHeightForWidth(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KRatingWidget_PaintEngine(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->paintEngine();
    } else {
        return self->KRatingWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KRatingWidget_QBasePaintEngine(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_PaintEngine_IsBase(true);
        return vkratingwidget->paintEngine();
    } else {
        return self->KRatingWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnPaintEngine(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_PaintEngine_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_MouseReleaseEvent(KRatingWidget* self, QMouseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseMouseReleaseEvent(KRatingWidget* self, QMouseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MouseReleaseEvent_IsBase(true);
        vkratingwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMouseReleaseEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_MouseDoubleClickEvent(KRatingWidget* self, QMouseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseMouseDoubleClickEvent(KRatingWidget* self, QMouseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MouseDoubleClickEvent_IsBase(true);
        vkratingwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMouseDoubleClickEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_WheelEvent(KRatingWidget* self, QWheelEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->wheelEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseWheelEvent(KRatingWidget* self, QWheelEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_WheelEvent_IsBase(true);
        vkratingwidget->wheelEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnWheelEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_WheelEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_KeyPressEvent(KRatingWidget* self, QKeyEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->keyPressEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseKeyPressEvent(KRatingWidget* self, QKeyEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_KeyPressEvent_IsBase(true);
        vkratingwidget->keyPressEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnKeyPressEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_KeyReleaseEvent(KRatingWidget* self, QKeyEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseKeyReleaseEvent(KRatingWidget* self, QKeyEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_KeyReleaseEvent_IsBase(true);
        vkratingwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnKeyReleaseEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_FocusInEvent(KRatingWidget* self, QFocusEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->focusInEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseFocusInEvent(KRatingWidget* self, QFocusEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusInEvent_IsBase(true);
        vkratingwidget->focusInEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnFocusInEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_FocusOutEvent(KRatingWidget* self, QFocusEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->focusOutEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseFocusOutEvent(KRatingWidget* self, QFocusEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusOutEvent_IsBase(true);
        vkratingwidget->focusOutEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnFocusOutEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_EnterEvent(KRatingWidget* self, QEnterEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->enterEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseEnterEvent(KRatingWidget* self, QEnterEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_EnterEvent_IsBase(true);
        vkratingwidget->enterEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnEnterEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_EnterEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_MoveEvent(KRatingWidget* self, QMoveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->moveEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseMoveEvent(KRatingWidget* self, QMoveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MoveEvent_IsBase(true);
        vkratingwidget->moveEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMoveEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_MoveEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_CloseEvent(KRatingWidget* self, QCloseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->closeEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseCloseEvent(KRatingWidget* self, QCloseEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_CloseEvent_IsBase(true);
        vkratingwidget->closeEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnCloseEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_CloseEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_ContextMenuEvent(KRatingWidget* self, QContextMenuEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->contextMenuEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseContextMenuEvent(KRatingWidget* self, QContextMenuEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ContextMenuEvent_IsBase(true);
        vkratingwidget->contextMenuEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnContextMenuEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_TabletEvent(KRatingWidget* self, QTabletEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->tabletEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseTabletEvent(KRatingWidget* self, QTabletEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_TabletEvent_IsBase(true);
        vkratingwidget->tabletEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnTabletEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_TabletEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_ActionEvent(KRatingWidget* self, QActionEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->actionEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseActionEvent(KRatingWidget* self, QActionEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ActionEvent_IsBase(true);
        vkratingwidget->actionEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnActionEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ActionEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_DragEnterEvent(KRatingWidget* self, QDragEnterEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->dragEnterEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseDragEnterEvent(KRatingWidget* self, QDragEnterEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DragEnterEvent_IsBase(true);
        vkratingwidget->dragEnterEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDragEnterEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_DragMoveEvent(KRatingWidget* self, QDragMoveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->dragMoveEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseDragMoveEvent(KRatingWidget* self, QDragMoveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DragMoveEvent_IsBase(true);
        vkratingwidget->dragMoveEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDragMoveEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_DragLeaveEvent(KRatingWidget* self, QDragLeaveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseDragLeaveEvent(KRatingWidget* self, QDragLeaveEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DragLeaveEvent_IsBase(true);
        vkratingwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDragLeaveEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_DropEvent(KRatingWidget* self, QDropEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->dropEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseDropEvent(KRatingWidget* self, QDropEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DropEvent_IsBase(true);
        vkratingwidget->dropEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDropEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DropEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_ShowEvent(KRatingWidget* self, QShowEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->showEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseShowEvent(KRatingWidget* self, QShowEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ShowEvent_IsBase(true);
        vkratingwidget->showEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnShowEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ShowEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_HideEvent(KRatingWidget* self, QHideEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->hideEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseHideEvent(KRatingWidget* self, QHideEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_HideEvent_IsBase(true);
        vkratingwidget->hideEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnHideEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_HideEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRatingWidget_NativeEvent(KRatingWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRatingWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KRatingWidget_QBaseNativeEvent(KRatingWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_NativeEvent_IsBase(true);
        return vkratingwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRatingWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnNativeEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_NativeEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KRatingWidget_Metric(const KRatingWidget* self, int param1) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRatingWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KRatingWidget_QBaseMetric(const KRatingWidget* self, int param1) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Metric_IsBase(true);
        return vkratingwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRatingWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnMetric(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Metric_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_InitPainter(const KRatingWidget* self, QPainter* painter) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->initPainter(painter);
    } else {
        ((VirtualKRatingWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseInitPainter(const KRatingWidget* self, QPainter* painter) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_InitPainter_IsBase(true);
        vkratingwidget->initPainter(painter);
    } else {
        ((VirtualKRatingWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnInitPainter(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_InitPainter_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KRatingWidget_Redirected(const KRatingWidget* self, QPoint* offset) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->redirected(offset);
    } else {
        return ((VirtualKRatingWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KRatingWidget_QBaseRedirected(const KRatingWidget* self, QPoint* offset) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Redirected_IsBase(true);
        return vkratingwidget->redirected(offset);
    } else {
        return ((VirtualKRatingWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnRedirected(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Redirected_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KRatingWidget_SharedPainter(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->sharedPainter();
    } else {
        return ((VirtualKRatingWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KRatingWidget_QBaseSharedPainter(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_SharedPainter_IsBase(true);
        return vkratingwidget->sharedPainter();
    } else {
        return ((VirtualKRatingWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnSharedPainter(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_SharedPainter_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_InputMethodEvent(KRatingWidget* self, QInputMethodEvent* param1) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKRatingWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseInputMethodEvent(KRatingWidget* self, QInputMethodEvent* param1) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_InputMethodEvent_IsBase(true);
        vkratingwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKRatingWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnInputMethodEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KRatingWidget_InputMethodQuery(const KRatingWidget* self, int param1) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return new QVariant(vkratingwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKRatingWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KRatingWidget_QBaseInputMethodQuery(const KRatingWidget* self, int param1) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkratingwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKRatingWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnInputMethodQuery(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRatingWidget_FocusNextPrevChild(KRatingWidget* self, bool next) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKRatingWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KRatingWidget_QBaseFocusNextPrevChild(KRatingWidget* self, bool next) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusNextPrevChild_IsBase(true);
        return vkratingwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKRatingWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnFocusNextPrevChild(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRatingWidget_EventFilter(KRatingWidget* self, QObject* watched, QEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->eventFilter(watched, event);
    } else {
        return self->KRatingWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KRatingWidget_QBaseEventFilter(KRatingWidget* self, QObject* watched, QEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_EventFilter_IsBase(true);
        return vkratingwidget->eventFilter(watched, event);
    } else {
        return self->KRatingWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnEventFilter(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_EventFilter_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_TimerEvent(KRatingWidget* self, QTimerEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->timerEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseTimerEvent(KRatingWidget* self, QTimerEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_TimerEvent_IsBase(true);
        vkratingwidget->timerEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnTimerEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_TimerEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_ChildEvent(KRatingWidget* self, QChildEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->childEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseChildEvent(KRatingWidget* self, QChildEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ChildEvent_IsBase(true);
        vkratingwidget->childEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnChildEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ChildEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_CustomEvent(KRatingWidget* self, QEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->customEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseCustomEvent(KRatingWidget* self, QEvent* event) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_CustomEvent_IsBase(true);
        vkratingwidget->customEvent(event);
    } else {
        ((VirtualKRatingWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnCustomEvent(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_CustomEvent_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_ConnectNotify(KRatingWidget* self, const QMetaMethod* signal) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->connectNotify(*signal);
    } else {
        ((VirtualKRatingWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseConnectNotify(KRatingWidget* self, const QMetaMethod* signal) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ConnectNotify_IsBase(true);
        vkratingwidget->connectNotify(*signal);
    } else {
        ((VirtualKRatingWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnConnectNotify(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_DisconnectNotify(KRatingWidget* self, const QMetaMethod* signal) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKRatingWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseDisconnectNotify(KRatingWidget* self, const QMetaMethod* signal) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DisconnectNotify_IsBase(true);
        vkratingwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKRatingWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDisconnectNotify(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_DrawFrame(KRatingWidget* self, QPainter* param1) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->drawFrame(param1);
    } else {
        ((VirtualKRatingWidget*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KRatingWidget_QBaseDrawFrame(KRatingWidget* self, QPainter* param1) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DrawFrame_IsBase(true);
        vkratingwidget->drawFrame(param1);
    } else {
        ((VirtualKRatingWidget*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDrawFrame(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_DrawFrame_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_UpdateMicroFocus(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->updateMicroFocus();
    } else {
        ((VirtualKRatingWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KRatingWidget_QBaseUpdateMicroFocus(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_UpdateMicroFocus_IsBase(true);
        vkratingwidget->updateMicroFocus();
    } else {
        ((VirtualKRatingWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnUpdateMicroFocus(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_Create(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->create();
    } else {
        ((VirtualKRatingWidget*)self)->create();
    }
}

// Base class handler implementation
void KRatingWidget_QBaseCreate(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Create_IsBase(true);
        vkratingwidget->create();
    } else {
        ((VirtualKRatingWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnCreate(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Create_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KRatingWidget_Destroy(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->destroy();
    } else {
        ((VirtualKRatingWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KRatingWidget_QBaseDestroy(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Destroy_IsBase(true);
        vkratingwidget->destroy();
    } else {
        ((VirtualKRatingWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnDestroy(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Destroy_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRatingWidget_FocusNextChild(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->focusNextChild();
    } else {
        return ((VirtualKRatingWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KRatingWidget_QBaseFocusNextChild(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusNextChild_IsBase(true);
        return vkratingwidget->focusNextChild();
    } else {
        return ((VirtualKRatingWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnFocusNextChild(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRatingWidget_FocusPreviousChild(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->focusPreviousChild();
    } else {
        return ((VirtualKRatingWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KRatingWidget_QBaseFocusPreviousChild(KRatingWidget* self) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusPreviousChild_IsBase(true);
        return vkratingwidget->focusPreviousChild();
    } else {
        return ((VirtualKRatingWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnFocusPreviousChild(KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = dynamic_cast<VirtualKRatingWidget*>(self);
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KRatingWidget_Sender(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->sender();
    } else {
        return ((VirtualKRatingWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KRatingWidget_QBaseSender(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Sender_IsBase(true);
        return vkratingwidget->sender();
    } else {
        return ((VirtualKRatingWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnSender(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Sender_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KRatingWidget_SenderSignalIndex(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->senderSignalIndex();
    } else {
        return ((VirtualKRatingWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KRatingWidget_QBaseSenderSignalIndex(const KRatingWidget* self) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_SenderSignalIndex_IsBase(true);
        return vkratingwidget->senderSignalIndex();
    } else {
        return ((VirtualKRatingWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnSenderSignalIndex(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KRatingWidget_Receivers(const KRatingWidget* self, const char* signal) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->receivers(signal);
    } else {
        return ((VirtualKRatingWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KRatingWidget_QBaseReceivers(const KRatingWidget* self, const char* signal) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Receivers_IsBase(true);
        return vkratingwidget->receivers(signal);
    } else {
        return ((VirtualKRatingWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnReceivers(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_Receivers_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRatingWidget_IsSignalConnected(const KRatingWidget* self, const QMetaMethod* signal) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKRatingWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KRatingWidget_QBaseIsSignalConnected(const KRatingWidget* self, const QMetaMethod* signal) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_IsSignalConnected_IsBase(true);
        return vkratingwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKRatingWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnIsSignalConnected(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KRatingWidget_GetDecodedMetricF(const KRatingWidget* self, int metricA, int metricB) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        return vkratingwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRatingWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KRatingWidget_QBaseGetDecodedMetricF(const KRatingWidget* self, int metricA, int metricB) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_GetDecodedMetricF_IsBase(true);
        return vkratingwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRatingWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KRatingWidget_OnGetDecodedMetricF(const KRatingWidget* self, intptr_t slot) {
    auto* vkratingwidget = const_cast<VirtualKRatingWidget*>(dynamic_cast<const VirtualKRatingWidget*>(self));
    if (vkratingwidget && vkratingwidget->isVirtualKRatingWidget) {
        vkratingwidget->setKRatingWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKRatingWidget::KRatingWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KRatingWidget_Delete(KRatingWidget* self) {
    delete self;
}
