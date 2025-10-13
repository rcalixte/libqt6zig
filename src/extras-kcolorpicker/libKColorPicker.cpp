#include <QAbstractButton>
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
#include <QByteArray>
#include <cstring>
#include <QStyleOptionToolButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolButton>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_kColorPicker__KColorPicker
#include <KColorPicker.h>
#include "libKColorPicker.h"
#include "libKColorPicker.hxx"

kColorPicker__KColorPicker* kColorPicker__KColorPicker_new() {
    return new VirtualkColorPickerKColorPicker();
}

kColorPicker__KColorPicker* kColorPicker__KColorPicker_new2(bool showAlphaChannel) {
    return new VirtualkColorPickerKColorPicker(showAlphaChannel);
}

kColorPicker__KColorPicker* kColorPicker__KColorPicker_new3(bool showAlphaChannel, QWidget* parent) {
    return new VirtualkColorPickerKColorPicker(showAlphaChannel, parent);
}

QMetaObject* kColorPicker__KColorPicker_MetaObject(const kColorPicker__KColorPicker* self) {
    return (QMetaObject*)self->metaObject();
}

void* kColorPicker__KColorPicker_Metacast(kColorPicker__KColorPicker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int kColorPicker__KColorPicker_Metacall(kColorPicker__KColorPicker* self, int param1, int param2, void** param3) {
    auto* vkcolorpicker__kcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpicker__kcolorpicker && vkcolorpicker__kcolorpicker->isVirtualkColorPickerKColorPicker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string kColorPicker__KColorPicker_Tr(const char* s) {
    QString _ret = kColorPicker::KColorPicker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void kColorPicker__KColorPicker_SetFixedSize(kColorPicker__KColorPicker* self, const QSize* size) {
    self->setFixedSize(*size);
}

void kColorPicker__KColorPicker_SetFixedSize2(kColorPicker__KColorPicker* self, int width, int height) {
    self->setFixedSize(static_cast<int>(width), static_cast<int>(height));
}

QColor* kColorPicker__KColorPicker_Color(const kColorPicker__KColorPicker* self) {
    return new QColor(self->color());
}

void kColorPicker__KColorPicker_ResetColors(kColorPicker__KColorPicker* self) {
    self->resetColors();
}

void kColorPicker__KColorPicker_SetColor(kColorPicker__KColorPicker* self, const QColor* color) {
    self->setColor(*color);
}

void kColorPicker__KColorPicker_ColorChanged(const kColorPicker__KColorPicker* self, const QColor* color) {
    self->colorChanged(*color);
}

void kColorPicker__KColorPicker_Connect_ColorChanged(kColorPicker__KColorPicker* self, intptr_t slot) {
    void (*slotFunc)(kColorPicker__KColorPicker*, QColor*) = reinterpret_cast<void (*)(kColorPicker__KColorPicker*, QColor*)>(slot);
    kColorPicker::KColorPicker::connect(self, &kColorPicker::KColorPicker::colorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string kColorPicker__KColorPicker_Tr2(const char* s, const char* c) {
    QString _ret = kColorPicker::KColorPicker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string kColorPicker__KColorPicker_Tr3(const char* s, const char* c, int n) {
    QString _ret = kColorPicker::KColorPicker::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void kColorPicker__KColorPicker_ResetColors1(kColorPicker__KColorPicker* self, bool showAlphaChannel) {
    self->resetColors(showAlphaChannel);
}

// Base class handler implementation
int kColorPicker__KColorPicker_QBaseMetacall(kColorPicker__KColorPicker* self, int param1, int param2, void** param3) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Metacall_IsBase(true);
        return vkcolorpickerkcolorpicker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->kColorPicker::KColorPicker::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnMetacall(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Metacall_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* kColorPicker__KColorPicker_SizeHint(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return new QSize(vkcolorpickerkcolorpicker->sizeHint());
    } else {
        return new QSize(((VirtualkColorPickerKColorPicker*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* kColorPicker__KColorPicker_QBaseSizeHint(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_SizeHint_IsBase(true);
        return new QSize(vkcolorpickerkcolorpicker->sizeHint());
    } else {
        return new QSize(((VirtualkColorPickerKColorPicker*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnSizeHint(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_SizeHint_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* kColorPicker__KColorPicker_MinimumSizeHint(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return new QSize(vkcolorpickerkcolorpicker->minimumSizeHint());
    } else {
        return new QSize(((VirtualkColorPickerKColorPicker*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* kColorPicker__KColorPicker_QBaseMinimumSizeHint(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MinimumSizeHint_IsBase(true);
        return new QSize(vkcolorpickerkcolorpicker->minimumSizeHint());
    } else {
        return new QSize(((VirtualkColorPickerKColorPicker*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnMinimumSizeHint(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MinimumSizeHint_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_Event(kColorPicker__KColorPicker* self, QEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->event(e);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->event(e);
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseEvent(kColorPicker__KColorPicker* self, QEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Event_IsBase(true);
        return vkcolorpickerkcolorpicker->event(e);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Event_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_MousePressEvent(kColorPicker__KColorPicker* self, QMouseEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->mousePressEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseMousePressEvent(kColorPicker__KColorPicker* self, QMouseEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MousePressEvent_IsBase(true);
        vkcolorpickerkcolorpicker->mousePressEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnMousePressEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MousePressEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_MouseReleaseEvent(kColorPicker__KColorPicker* self, QMouseEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->mouseReleaseEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseMouseReleaseEvent(kColorPicker__KColorPicker* self, QMouseEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MouseReleaseEvent_IsBase(true);
        vkcolorpickerkcolorpicker->mouseReleaseEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnMouseReleaseEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MouseReleaseEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_PaintEvent(kColorPicker__KColorPicker* self, QPaintEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->paintEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBasePaintEvent(kColorPicker__KColorPicker* self, QPaintEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_PaintEvent_IsBase(true);
        vkcolorpickerkcolorpicker->paintEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnPaintEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_PaintEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_ActionEvent(kColorPicker__KColorPicker* self, QActionEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->actionEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseActionEvent(kColorPicker__KColorPicker* self, QActionEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ActionEvent_IsBase(true);
        vkcolorpickerkcolorpicker->actionEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnActionEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ActionEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_EnterEvent(kColorPicker__KColorPicker* self, QEnterEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->enterEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->enterEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseEnterEvent(kColorPicker__KColorPicker* self, QEnterEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_EnterEvent_IsBase(true);
        vkcolorpickerkcolorpicker->enterEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->enterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnEnterEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_EnterEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_LeaveEvent(kColorPicker__KColorPicker* self, QEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->leaveEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseLeaveEvent(kColorPicker__KColorPicker* self, QEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_LeaveEvent_IsBase(true);
        vkcolorpickerkcolorpicker->leaveEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnLeaveEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_LeaveEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_TimerEvent(kColorPicker__KColorPicker* self, QTimerEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->timerEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseTimerEvent(kColorPicker__KColorPicker* self, QTimerEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_TimerEvent_IsBase(true);
        vkcolorpickerkcolorpicker->timerEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnTimerEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_TimerEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_ChangeEvent(kColorPicker__KColorPicker* self, QEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->changeEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseChangeEvent(kColorPicker__KColorPicker* self, QEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ChangeEvent_IsBase(true);
        vkcolorpickerkcolorpicker->changeEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnChangeEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ChangeEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_HitButton(const kColorPicker__KColorPicker* self, const QPoint* pos) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->hitButton(*pos);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseHitButton(const kColorPicker__KColorPicker* self, const QPoint* pos) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_HitButton_IsBase(true);
        return vkcolorpickerkcolorpicker->hitButton(*pos);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnHitButton(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_HitButton_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_CheckStateSet(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->checkStateSet();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->checkStateSet();
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseCheckStateSet(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_CheckStateSet_IsBase(true);
        vkcolorpickerkcolorpicker->checkStateSet();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnCheckStateSet(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_CheckStateSet_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_NextCheckState(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->nextCheckState();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->nextCheckState();
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseNextCheckState(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_NextCheckState_IsBase(true);
        vkcolorpickerkcolorpicker->nextCheckState();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnNextCheckState(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_NextCheckState_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_InitStyleOption(const kColorPicker__KColorPicker* self, QStyleOptionToolButton* option) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->initStyleOption(option);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseInitStyleOption(const kColorPicker__KColorPicker* self, QStyleOptionToolButton* option) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_InitStyleOption_IsBase(true);
        vkcolorpickerkcolorpicker->initStyleOption(option);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnInitStyleOption(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_InitStyleOption_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_KeyPressEvent(kColorPicker__KColorPicker* self, QKeyEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->keyPressEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseKeyPressEvent(kColorPicker__KColorPicker* self, QKeyEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_KeyPressEvent_IsBase(true);
        vkcolorpickerkcolorpicker->keyPressEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnKeyPressEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_KeyPressEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_KeyReleaseEvent(kColorPicker__KColorPicker* self, QKeyEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->keyReleaseEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseKeyReleaseEvent(kColorPicker__KColorPicker* self, QKeyEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_KeyReleaseEvent_IsBase(true);
        vkcolorpickerkcolorpicker->keyReleaseEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnKeyReleaseEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_KeyReleaseEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_MouseMoveEvent(kColorPicker__KColorPicker* self, QMouseEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->mouseMoveEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseMouseMoveEvent(kColorPicker__KColorPicker* self, QMouseEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MouseMoveEvent_IsBase(true);
        vkcolorpickerkcolorpicker->mouseMoveEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnMouseMoveEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MouseMoveEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_FocusInEvent(kColorPicker__KColorPicker* self, QFocusEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->focusInEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseFocusInEvent(kColorPicker__KColorPicker* self, QFocusEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusInEvent_IsBase(true);
        vkcolorpickerkcolorpicker->focusInEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnFocusInEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusInEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_FocusOutEvent(kColorPicker__KColorPicker* self, QFocusEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->focusOutEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseFocusOutEvent(kColorPicker__KColorPicker* self, QFocusEvent* e) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusOutEvent_IsBase(true);
        vkcolorpickerkcolorpicker->focusOutEvent(e);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnFocusOutEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusOutEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int kColorPicker__KColorPicker_DevType(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->devType();
    } else {
        return self->kColorPicker::KColorPicker::devType();
    }
}

// Base class handler implementation
int kColorPicker__KColorPicker_QBaseDevType(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DevType_IsBase(true);
        return vkcolorpickerkcolorpicker->devType();
    } else {
        return self->kColorPicker::KColorPicker::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnDevType(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DevType_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_SetVisible(kColorPicker__KColorPicker* self, bool visible) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setVisible(visible);
    } else {
        self->kColorPicker::KColorPicker::setVisible(visible);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseSetVisible(kColorPicker__KColorPicker* self, bool visible) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_SetVisible_IsBase(true);
        vkcolorpickerkcolorpicker->setVisible(visible);
    } else {
        self->kColorPicker::KColorPicker::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnSetVisible(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_SetVisible_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int kColorPicker__KColorPicker_HeightForWidth(const kColorPicker__KColorPicker* self, int param1) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->heightForWidth(static_cast<int>(param1));
    } else {
        return self->kColorPicker::KColorPicker::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int kColorPicker__KColorPicker_QBaseHeightForWidth(const kColorPicker__KColorPicker* self, int param1) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_HeightForWidth_IsBase(true);
        return vkcolorpickerkcolorpicker->heightForWidth(static_cast<int>(param1));
    } else {
        return self->kColorPicker::KColorPicker::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnHeightForWidth(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_HeightForWidth_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_HasHeightForWidth(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->hasHeightForWidth();
    } else {
        return self->kColorPicker::KColorPicker::hasHeightForWidth();
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseHasHeightForWidth(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_HasHeightForWidth_IsBase(true);
        return vkcolorpickerkcolorpicker->hasHeightForWidth();
    } else {
        return self->kColorPicker::KColorPicker::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnHasHeightForWidth(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_HasHeightForWidth_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* kColorPicker__KColorPicker_PaintEngine(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->paintEngine();
    } else {
        return self->kColorPicker::KColorPicker::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* kColorPicker__KColorPicker_QBasePaintEngine(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_PaintEngine_IsBase(true);
        return vkcolorpickerkcolorpicker->paintEngine();
    } else {
        return self->kColorPicker::KColorPicker::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnPaintEngine(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_PaintEngine_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_MouseDoubleClickEvent(kColorPicker__KColorPicker* self, QMouseEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->mouseDoubleClickEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseMouseDoubleClickEvent(kColorPicker__KColorPicker* self, QMouseEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MouseDoubleClickEvent_IsBase(true);
        vkcolorpickerkcolorpicker->mouseDoubleClickEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnMouseDoubleClickEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_WheelEvent(kColorPicker__KColorPicker* self, QWheelEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->wheelEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseWheelEvent(kColorPicker__KColorPicker* self, QWheelEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_WheelEvent_IsBase(true);
        vkcolorpickerkcolorpicker->wheelEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnWheelEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_WheelEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_MoveEvent(kColorPicker__KColorPicker* self, QMoveEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->moveEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseMoveEvent(kColorPicker__KColorPicker* self, QMoveEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MoveEvent_IsBase(true);
        vkcolorpickerkcolorpicker->moveEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnMoveEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_MoveEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_ResizeEvent(kColorPicker__KColorPicker* self, QResizeEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->resizeEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseResizeEvent(kColorPicker__KColorPicker* self, QResizeEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ResizeEvent_IsBase(true);
        vkcolorpickerkcolorpicker->resizeEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnResizeEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ResizeEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_CloseEvent(kColorPicker__KColorPicker* self, QCloseEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->closeEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseCloseEvent(kColorPicker__KColorPicker* self, QCloseEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_CloseEvent_IsBase(true);
        vkcolorpickerkcolorpicker->closeEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnCloseEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_CloseEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_ContextMenuEvent(kColorPicker__KColorPicker* self, QContextMenuEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->contextMenuEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseContextMenuEvent(kColorPicker__KColorPicker* self, QContextMenuEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ContextMenuEvent_IsBase(true);
        vkcolorpickerkcolorpicker->contextMenuEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnContextMenuEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ContextMenuEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_TabletEvent(kColorPicker__KColorPicker* self, QTabletEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->tabletEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseTabletEvent(kColorPicker__KColorPicker* self, QTabletEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_TabletEvent_IsBase(true);
        vkcolorpickerkcolorpicker->tabletEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnTabletEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_TabletEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_DragEnterEvent(kColorPicker__KColorPicker* self, QDragEnterEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->dragEnterEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseDragEnterEvent(kColorPicker__KColorPicker* self, QDragEnterEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DragEnterEvent_IsBase(true);
        vkcolorpickerkcolorpicker->dragEnterEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnDragEnterEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DragEnterEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_DragMoveEvent(kColorPicker__KColorPicker* self, QDragMoveEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->dragMoveEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseDragMoveEvent(kColorPicker__KColorPicker* self, QDragMoveEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DragMoveEvent_IsBase(true);
        vkcolorpickerkcolorpicker->dragMoveEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnDragMoveEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DragMoveEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_DragLeaveEvent(kColorPicker__KColorPicker* self, QDragLeaveEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->dragLeaveEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseDragLeaveEvent(kColorPicker__KColorPicker* self, QDragLeaveEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DragLeaveEvent_IsBase(true);
        vkcolorpickerkcolorpicker->dragLeaveEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnDragLeaveEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DragLeaveEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_DropEvent(kColorPicker__KColorPicker* self, QDropEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->dropEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseDropEvent(kColorPicker__KColorPicker* self, QDropEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DropEvent_IsBase(true);
        vkcolorpickerkcolorpicker->dropEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnDropEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DropEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_ShowEvent(kColorPicker__KColorPicker* self, QShowEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->showEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->showEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseShowEvent(kColorPicker__KColorPicker* self, QShowEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ShowEvent_IsBase(true);
        vkcolorpickerkcolorpicker->showEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnShowEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ShowEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_HideEvent(kColorPicker__KColorPicker* self, QHideEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->hideEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseHideEvent(kColorPicker__KColorPicker* self, QHideEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_HideEvent_IsBase(true);
        vkcolorpickerkcolorpicker->hideEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnHideEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_HideEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_NativeEvent(kColorPicker__KColorPicker* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseNativeEvent(kColorPicker__KColorPicker* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_NativeEvent_IsBase(true);
        return vkcolorpickerkcolorpicker->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnNativeEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_NativeEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int kColorPicker__KColorPicker_Metric(const kColorPicker__KColorPicker* self, int param1) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int kColorPicker__KColorPicker_QBaseMetric(const kColorPicker__KColorPicker* self, int param1) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Metric_IsBase(true);
        return vkcolorpickerkcolorpicker->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnMetric(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Metric_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_InitPainter(const kColorPicker__KColorPicker* self, QPainter* painter) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->initPainter(painter);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseInitPainter(const kColorPicker__KColorPicker* self, QPainter* painter) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_InitPainter_IsBase(true);
        vkcolorpickerkcolorpicker->initPainter(painter);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnInitPainter(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_InitPainter_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* kColorPicker__KColorPicker_Redirected(const kColorPicker__KColorPicker* self, QPoint* offset) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->redirected(offset);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* kColorPicker__KColorPicker_QBaseRedirected(const kColorPicker__KColorPicker* self, QPoint* offset) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Redirected_IsBase(true);
        return vkcolorpickerkcolorpicker->redirected(offset);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnRedirected(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Redirected_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* kColorPicker__KColorPicker_SharedPainter(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->sharedPainter();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* kColorPicker__KColorPicker_QBaseSharedPainter(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_SharedPainter_IsBase(true);
        return vkcolorpickerkcolorpicker->sharedPainter();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnSharedPainter(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_SharedPainter_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_InputMethodEvent(kColorPicker__KColorPicker* self, QInputMethodEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->inputMethodEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseInputMethodEvent(kColorPicker__KColorPicker* self, QInputMethodEvent* param1) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_InputMethodEvent_IsBase(true);
        vkcolorpickerkcolorpicker->inputMethodEvent(param1);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnInputMethodEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_InputMethodEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* kColorPicker__KColorPicker_InputMethodQuery(const kColorPicker__KColorPicker* self, int param1) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return new QVariant(vkcolorpickerkcolorpicker->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualkColorPickerKColorPicker*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* kColorPicker__KColorPicker_QBaseInputMethodQuery(const kColorPicker__KColorPicker* self, int param1) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_InputMethodQuery_IsBase(true);
        return new QVariant(vkcolorpickerkcolorpicker->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualkColorPickerKColorPicker*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnInputMethodQuery(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_InputMethodQuery_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_FocusNextPrevChild(kColorPicker__KColorPicker* self, bool next) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->focusNextPrevChild(next);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseFocusNextPrevChild(kColorPicker__KColorPicker* self, bool next) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusNextPrevChild_IsBase(true);
        return vkcolorpickerkcolorpicker->focusNextPrevChild(next);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnFocusNextPrevChild(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusNextPrevChild_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_EventFilter(kColorPicker__KColorPicker* self, QObject* watched, QEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->eventFilter(watched, event);
    } else {
        return self->kColorPicker::KColorPicker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseEventFilter(kColorPicker__KColorPicker* self, QObject* watched, QEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_EventFilter_IsBase(true);
        return vkcolorpickerkcolorpicker->eventFilter(watched, event);
    } else {
        return self->kColorPicker::KColorPicker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnEventFilter(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_EventFilter_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_ChildEvent(kColorPicker__KColorPicker* self, QChildEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->childEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseChildEvent(kColorPicker__KColorPicker* self, QChildEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ChildEvent_IsBase(true);
        vkcolorpickerkcolorpicker->childEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnChildEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ChildEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_CustomEvent(kColorPicker__KColorPicker* self, QEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->customEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseCustomEvent(kColorPicker__KColorPicker* self, QEvent* event) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_CustomEvent_IsBase(true);
        vkcolorpickerkcolorpicker->customEvent(event);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnCustomEvent(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_CustomEvent_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_ConnectNotify(kColorPicker__KColorPicker* self, const QMetaMethod* signal) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->connectNotify(*signal);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseConnectNotify(kColorPicker__KColorPicker* self, const QMetaMethod* signal) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ConnectNotify_IsBase(true);
        vkcolorpickerkcolorpicker->connectNotify(*signal);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnConnectNotify(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_ConnectNotify_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_DisconnectNotify(kColorPicker__KColorPicker* self, const QMetaMethod* signal) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->disconnectNotify(*signal);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseDisconnectNotify(kColorPicker__KColorPicker* self, const QMetaMethod* signal) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DisconnectNotify_IsBase(true);
        vkcolorpickerkcolorpicker->disconnectNotify(*signal);
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnDisconnectNotify(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_DisconnectNotify_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_UpdateMicroFocus(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->updateMicroFocus();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseUpdateMicroFocus(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_UpdateMicroFocus_IsBase(true);
        vkcolorpickerkcolorpicker->updateMicroFocus();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnUpdateMicroFocus(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_UpdateMicroFocus_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_Create(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->create();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->create();
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseCreate(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Create_IsBase(true);
        vkcolorpickerkcolorpicker->create();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnCreate(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Create_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void kColorPicker__KColorPicker_Destroy(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->destroy();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->destroy();
    }
}

// Base class handler implementation
void kColorPicker__KColorPicker_QBaseDestroy(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Destroy_IsBase(true);
        vkcolorpickerkcolorpicker->destroy();
    } else {
        ((VirtualkColorPickerKColorPicker*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnDestroy(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Destroy_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_FocusNextChild(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->focusNextChild();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseFocusNextChild(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusNextChild_IsBase(true);
        return vkcolorpickerkcolorpicker->focusNextChild();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnFocusNextChild(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusNextChild_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_FocusPreviousChild(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->focusPreviousChild();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseFocusPreviousChild(kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusPreviousChild_IsBase(true);
        return vkcolorpickerkcolorpicker->focusPreviousChild();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnFocusPreviousChild(kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = dynamic_cast<VirtualkColorPickerKColorPicker*>(self);
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_FocusPreviousChild_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* kColorPicker__KColorPicker_Sender(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->sender();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->sender();
    }
}

// Base class handler implementation
QObject* kColorPicker__KColorPicker_QBaseSender(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Sender_IsBase(true);
        return vkcolorpickerkcolorpicker->sender();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnSender(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Sender_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int kColorPicker__KColorPicker_SenderSignalIndex(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->senderSignalIndex();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int kColorPicker__KColorPicker_QBaseSenderSignalIndex(const kColorPicker__KColorPicker* self) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_SenderSignalIndex_IsBase(true);
        return vkcolorpickerkcolorpicker->senderSignalIndex();
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnSenderSignalIndex(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_SenderSignalIndex_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int kColorPicker__KColorPicker_Receivers(const kColorPicker__KColorPicker* self, const char* signal) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->receivers(signal);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int kColorPicker__KColorPicker_QBaseReceivers(const kColorPicker__KColorPicker* self, const char* signal) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Receivers_IsBase(true);
        return vkcolorpickerkcolorpicker->receivers(signal);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnReceivers(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_Receivers_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool kColorPicker__KColorPicker_IsSignalConnected(const kColorPicker__KColorPicker* self, const QMetaMethod* signal) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->isSignalConnected(*signal);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool kColorPicker__KColorPicker_QBaseIsSignalConnected(const kColorPicker__KColorPicker* self, const QMetaMethod* signal) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_IsSignalConnected_IsBase(true);
        return vkcolorpickerkcolorpicker->isSignalConnected(*signal);
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnIsSignalConnected(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_IsSignalConnected_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double kColorPicker__KColorPicker_GetDecodedMetricF(const kColorPicker__KColorPicker* self, int metricA, int metricB) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        return vkcolorpickerkcolorpicker->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double kColorPicker__KColorPicker_QBaseGetDecodedMetricF(const kColorPicker__KColorPicker* self, int metricA, int metricB) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_GetDecodedMetricF_IsBase(true);
        return vkcolorpickerkcolorpicker->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualkColorPickerKColorPicker*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void kColorPicker__KColorPicker_OnGetDecodedMetricF(const kColorPicker__KColorPicker* self, intptr_t slot) {
    auto* vkcolorpickerkcolorpicker = const_cast<VirtualkColorPickerKColorPicker*>(dynamic_cast<const VirtualkColorPickerKColorPicker*>(self));
    if (vkcolorpickerkcolorpicker && vkcolorpickerkcolorpicker->isVirtualkColorPickerKColorPicker) {
        vkcolorpickerkcolorpicker->setkColorPicker__KColorPicker_GetDecodedMetricF_Callback(reinterpret_cast<VirtualkColorPickerKColorPicker::kColorPicker__KColorPicker_GetDecodedMetricF_Callback>(slot));
    }
}

void kColorPicker__KColorPicker_Delete(kColorPicker__KColorPicker* self) {
    delete self;
}
